[@bs.module "@githubprimer/octicons-react"]
external octicon : ReasonReact.reactClass = "default";

[@bs.module "@githubprimer/octicons-react"]
external syncIcon : ReasonReact.reactClass = "Sync";

type icon =
  | Sync;

let classOfIcon =
  fun
  | Sync => syncIcon;

type size =
  | Small
  | Medium
  | Large;

let stringOfSize =
  fun
  | Some(Small) => Some("small")
  | Some(Medium) => Some("medium")
  | Some(Large) => Some("large")
  | None => None;

type verticalAlign =
  | Middle
  | TextBottom
  | TextTop
  | Top;

let stringOfVerticalAlign =
  fun
  | Some(Middle) => Some("middle")
  | Some(TextBottom) => Some("text-bottom")
  | Some(TextTop) => Some("text-top")
  | Some(Top) => Some("top")
  | None => None;

[@bs.deriving abstract]
type jsProps = {
  icon: ReasonReact.reactClass,
  size: Js.Nullable.t(string),
  verticalAlign: Js.Nullable.t(string),
};

let make = (~icon, ~size=?, ~verticalAlign=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=octicon,
    ~props=
      jsProps(
        ~icon=classOfIcon(icon),
        ~verticalAlign=
          stringOfVerticalAlign(verticalAlign) |> Js.Nullable.fromOption,
        ~size=stringOfSize(size) |> Js.Nullable.fromOption,
      ),
    children,
  );
