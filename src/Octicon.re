[@bs.module "@githubprimer/octicons-react"]
external octicon : ReasonReact.reactClass = "default";

[@bs.module]
external octicons : Js.Dict.t(ReasonReact.reactClass) =
  "@githubprimer/octicons-react";

type icon =
  | Alert
  | ArrowDown
  | ArrowLeft
  | ArrowRight
  | ArrowSmallDown
  | ArrowSmallLeft
  | ArrowSmallRight
  | ArrowSmallUp
  | ArrowUp
  | Beaker
  | Bell
  | Bold
  | Book
  | Bookmark
  | Briefcase
  | Broadcast
  | Browser
  | Bug
  | Calendar
  | Check
  | Checklist
  | ChevronDown
  | ChevronLeft
  | ChevronRight
  | ChevronUp
  | CircleSlash
  | CircuitBoard
  | Clippy
  | Clock
  | CloudDownload
  | CloudUpload
  | Code
  | Comment
  | CommentDiscussion
  | CreditCard
  | Dash
  | Dashboard
  | Database
  | DesktopDownload
  | DeviceCamera
  | DeviceCameraVideo
  | DeviceDesktop
  | DeviceMobile
  | Diff
  | DiffAdded
  | DiffIgnored
  | DiffModified
  | DiffRemoved
  | DiffRenamed
  | Ellipsis
  | Eye
  | File
  | FileBinary
  | FileCode
  | FileDirectory
  | FileMedia
  | FilePdf
  | FileSubmodule
  | FileSymlinkDirectory
  | FileSymlinkFile
  | FileZip
  | Flame
  | Fold
  | Gear
  | Gift
  | Gist
  | GistSecret
  | GitBranch
  | GitCommit
  | GitCompare
  | GitMerge
  | GitPullRequest
  | Globe
  | Grabber
  | Graph
  | Heart
  | History
  | Home
  | HorizontalRule
  | Hubot
  | Inbox
  | Info
  | IssueClosed
  | IssueOpened
  | IssueReopened
  | Italic
  | Jersey
  | KebabHorizontal
  | KebabVertical
  | Key
  | Keyboard
  | Law
  | LightBulb
  | Link
  | LinkExternal
  | ListOrdered
  | ListUnordered
  | Location
  | Lock
  | LogoGist
  | LogoGithub
  | Mail
  | MailRead
  | MarkGithub
  | Markdown
  | Megaphone
  | Mention
  | Milestone
  | Mirror
  | MortarBoard
  | Mute
  | NoNewline
  | Note
  | Octoface
  | Organization
  | Package
  | Paintcan
  | Pencil
  | Person
  | Pin
  | Plug
  | Plus
  | PlusSmall
  | PrimitiveDot
  | PrimitiveSquare
  | Project
  | Pulse
  | Question
  | Quote
  | RadioTower
  | Reply
  | Repo
  | RepoClone
  | RepoForcePush
  | RepoForked
  | RepoPull
  | RepoPush
  | Report
  | Rocket
  | Rss
  | Ruby
  | ScreenFull
  | ScreenNormal
  | Search
  | Server
  | Settings
  | Shield
  | SignIn
  | SignOut
  | Smiley
  | Squirrel
  | Star
  | Stop
  | Sync
  | Tag
  | Tasklist
  | Telescope
  | Terminal
  | TextSize
  | ThreeBars
  | Thumbsdown
  | Thumbsup
  | Tools
  | Trashcan
  | TriangleDown
  | TriangleLeft
  | TriangleRight
  | TriangleUp
  | Unfold
  | Unmute
  | Unverified
  | Verified
  | Versions
  | Watch
  | X
  | Zap;

let classOfIcon =
  fun
  | Alert => Js.Dict.get(octicons, "Alert")
  | ArrowDown => Js.Dict.get(octicons, "ArrowDown")
  | ArrowLeft => Js.Dict.get(octicons, "ArrowLeft")
  | ArrowRight => Js.Dict.get(octicons, "ArrowRight")
  | ArrowSmallDown => Js.Dict.get(octicons, "ArrowSmallDown")
  | ArrowSmallLeft => Js.Dict.get(octicons, "ArrowSmallLeft")
  | ArrowSmallRight => Js.Dict.get(octicons, "ArrowSmallRight")
  | ArrowSmallUp => Js.Dict.get(octicons, "ArrowSmallUp")
  | ArrowUp => Js.Dict.get(octicons, "ArrowUp")
  | Beaker => Js.Dict.get(octicons, "Beaker")
  | Bell => Js.Dict.get(octicons, "Bell")
  | Bold => Js.Dict.get(octicons, "Bold")
  | Book => Js.Dict.get(octicons, "Book")
  | Bookmark => Js.Dict.get(octicons, "Bookmark")
  | Briefcase => Js.Dict.get(octicons, "Briefcase")
  | Broadcast => Js.Dict.get(octicons, "Broadcast")
  | Browser => Js.Dict.get(octicons, "Browser")
  | Bug => Js.Dict.get(octicons, "Bug")
  | Calendar => Js.Dict.get(octicons, "Calendar")
  | Check => Js.Dict.get(octicons, "Check")
  | Checklist => Js.Dict.get(octicons, "Checklist")
  | ChevronDown => Js.Dict.get(octicons, "ChevronDown")
  | ChevronLeft => Js.Dict.get(octicons, "ChevronLeft")
  | ChevronRight => Js.Dict.get(octicons, "ChevronRight")
  | ChevronUp => Js.Dict.get(octicons, "ChevronUp")
  | CircleSlash => Js.Dict.get(octicons, "CircleSlash")
  | CircuitBoard => Js.Dict.get(octicons, "CircuitBoard")
  | Clippy => Js.Dict.get(octicons, "Clippy")
  | Clock => Js.Dict.get(octicons, "Clock")
  | CloudDownload => Js.Dict.get(octicons, "CloudDownload")
  | CloudUpload => Js.Dict.get(octicons, "CloudUpload")
  | Code => Js.Dict.get(octicons, "Code")
  | Comment => Js.Dict.get(octicons, "Comment")
  | CommentDiscussion => Js.Dict.get(octicons, "CommentDiscussion")
  | CreditCard => Js.Dict.get(octicons, "CreditCard")
  | Dash => Js.Dict.get(octicons, "Dash")
  | Dashboard => Js.Dict.get(octicons, "Dashboard")
  | Database => Js.Dict.get(octicons, "Database")
  | DesktopDownload => Js.Dict.get(octicons, "DesktopDownload")
  | DeviceCamera => Js.Dict.get(octicons, "DeviceCamera")
  | DeviceCameraVideo => Js.Dict.get(octicons, "DeviceCameraVideo")
  | DeviceDesktop => Js.Dict.get(octicons, "DeviceDesktop")
  | DeviceMobile => Js.Dict.get(octicons, "DeviceMobile")
  | Diff => Js.Dict.get(octicons, "Diff")
  | DiffAdded => Js.Dict.get(octicons, "DiffAdded")
  | DiffIgnored => Js.Dict.get(octicons, "DiffIgnored")
  | DiffModified => Js.Dict.get(octicons, "DiffModified")
  | DiffRemoved => Js.Dict.get(octicons, "DiffRemoved")
  | DiffRenamed => Js.Dict.get(octicons, "DiffRenamed")
  | Ellipsis => Js.Dict.get(octicons, "Ellipsis")
  | Eye => Js.Dict.get(octicons, "Eye")
  | File => Js.Dict.get(octicons, "File")
  | FileBinary => Js.Dict.get(octicons, "FileBinary")
  | FileCode => Js.Dict.get(octicons, "FileCode")
  | FileDirectory => Js.Dict.get(octicons, "FileDirectory")
  | FileMedia => Js.Dict.get(octicons, "FileMedia")
  | FilePdf => Js.Dict.get(octicons, "FilePdf")
  | FileSubmodule => Js.Dict.get(octicons, "FileSubmodule")
  | FileSymlinkDirectory => Js.Dict.get(octicons, "FileSymlinkDirectory")
  | FileSymlinkFile => Js.Dict.get(octicons, "FileSymlinkFile")
  | FileZip => Js.Dict.get(octicons, "FileZip")
  | Flame => Js.Dict.get(octicons, "Flame")
  | Fold => Js.Dict.get(octicons, "Fold")
  | Gear => Js.Dict.get(octicons, "Gear")
  | Gift => Js.Dict.get(octicons, "Gift")
  | Gist => Js.Dict.get(octicons, "Gist")
  | GistSecret => Js.Dict.get(octicons, "GistSecret")
  | GitBranch => Js.Dict.get(octicons, "GitBranch")
  | GitCommit => Js.Dict.get(octicons, "GitCommit")
  | GitCompare => Js.Dict.get(octicons, "GitCompare")
  | GitMerge => Js.Dict.get(octicons, "GitMerge")
  | GitPullRequest => Js.Dict.get(octicons, "GitPullRequest")
  | Globe => Js.Dict.get(octicons, "Globe")
  | Grabber => Js.Dict.get(octicons, "Grabber")
  | Graph => Js.Dict.get(octicons, "Graph")
  | Heart => Js.Dict.get(octicons, "Heart")
  | History => Js.Dict.get(octicons, "History")
  | Home => Js.Dict.get(octicons, "Home")
  | HorizontalRule => Js.Dict.get(octicons, "HorizontalRule")
  | Hubot => Js.Dict.get(octicons, "Hubot")
  | Inbox => Js.Dict.get(octicons, "Inbox")
  | Info => Js.Dict.get(octicons, "Info")
  | IssueClosed => Js.Dict.get(octicons, "IssueClosed")
  | IssueOpened => Js.Dict.get(octicons, "IssueOpened")
  | IssueReopened => Js.Dict.get(octicons, "IssueReopened")
  | Italic => Js.Dict.get(octicons, "Italic")
  | Jersey => Js.Dict.get(octicons, "Jersey")
  | KebabHorizontal => Js.Dict.get(octicons, "KebabHorizontal")
  | KebabVertical => Js.Dict.get(octicons, "KebabVertical")
  | Key => Js.Dict.get(octicons, "Key")
  | Keyboard => Js.Dict.get(octicons, "Keyboard")
  | Law => Js.Dict.get(octicons, "Law")
  | LightBulb => Js.Dict.get(octicons, "LightBulb")
  | Link => Js.Dict.get(octicons, "Link")
  | LinkExternal => Js.Dict.get(octicons, "LinkExternal")
  | ListOrdered => Js.Dict.get(octicons, "ListOrdered")
  | ListUnordered => Js.Dict.get(octicons, "ListUnordered")
  | Location => Js.Dict.get(octicons, "Location")
  | Lock => Js.Dict.get(octicons, "Lock")
  | LogoGist => Js.Dict.get(octicons, "LogoGist")
  | LogoGithub => Js.Dict.get(octicons, "LogoGithub")
  | Mail => Js.Dict.get(octicons, "Mail")
  | MailRead => Js.Dict.get(octicons, "MailRead")
  | MarkGithub => Js.Dict.get(octicons, "MarkGithub")
  | Markdown => Js.Dict.get(octicons, "Markdown")
  | Megaphone => Js.Dict.get(octicons, "Megaphone")
  | Mention => Js.Dict.get(octicons, "Mention")
  | Milestone => Js.Dict.get(octicons, "Milestone")
  | Mirror => Js.Dict.get(octicons, "Mirror")
  | MortarBoard => Js.Dict.get(octicons, "MortarBoard")
  | Mute => Js.Dict.get(octicons, "Mute")
  | NoNewline => Js.Dict.get(octicons, "NoNewline")
  | Note => Js.Dict.get(octicons, "Note")
  | Octoface => Js.Dict.get(octicons, "Octoface")
  | Organization => Js.Dict.get(octicons, "Organization")
  | Package => Js.Dict.get(octicons, "Package")
  | Paintcan => Js.Dict.get(octicons, "Paintcan")
  | Pencil => Js.Dict.get(octicons, "Pencil")
  | Person => Js.Dict.get(octicons, "Person")
  | Pin => Js.Dict.get(octicons, "Pin")
  | Plug => Js.Dict.get(octicons, "Plug")
  | Plus => Js.Dict.get(octicons, "Plus")
  | PlusSmall => Js.Dict.get(octicons, "PlusSmall")
  | PrimitiveDot => Js.Dict.get(octicons, "PrimitiveDot")
  | PrimitiveSquare => Js.Dict.get(octicons, "PrimitiveSquare")
  | Project => Js.Dict.get(octicons, "Project")
  | Pulse => Js.Dict.get(octicons, "Pulse")
  | Question => Js.Dict.get(octicons, "Question")
  | Quote => Js.Dict.get(octicons, "Quote")
  | RadioTower => Js.Dict.get(octicons, "RadioTower")
  | Reply => Js.Dict.get(octicons, "Reply")
  | Repo => Js.Dict.get(octicons, "Repo")
  | RepoClone => Js.Dict.get(octicons, "RepoClone")
  | RepoForcePush => Js.Dict.get(octicons, "RepoForcePush")
  | RepoForked => Js.Dict.get(octicons, "RepoForked")
  | RepoPull => Js.Dict.get(octicons, "RepoPull")
  | RepoPush => Js.Dict.get(octicons, "RepoPush")
  | Report => Js.Dict.get(octicons, "Report")
  | Rocket => Js.Dict.get(octicons, "Rocket")
  | Rss => Js.Dict.get(octicons, "Rss")
  | Ruby => Js.Dict.get(octicons, "Ruby")
  | ScreenFull => Js.Dict.get(octicons, "ScreenFull")
  | ScreenNormal => Js.Dict.get(octicons, "ScreenNormal")
  | Search => Js.Dict.get(octicons, "Search")
  | Server => Js.Dict.get(octicons, "Server")
  | Settings => Js.Dict.get(octicons, "Settings")
  | Shield => Js.Dict.get(octicons, "Shield")
  | SignIn => Js.Dict.get(octicons, "SignIn")
  | SignOut => Js.Dict.get(octicons, "SignOut")
  | Smiley => Js.Dict.get(octicons, "Smiley")
  | Squirrel => Js.Dict.get(octicons, "Squirrel")
  | Star => Js.Dict.get(octicons, "Star")
  | Stop => Js.Dict.get(octicons, "Stop")
  | Sync => Js.Dict.get(octicons, "Sync")
  | Tag => Js.Dict.get(octicons, "Tag")
  | Tasklist => Js.Dict.get(octicons, "Tasklist")
  | Telescope => Js.Dict.get(octicons, "Telescope")
  | Terminal => Js.Dict.get(octicons, "Terminal")
  | TextSize => Js.Dict.get(octicons, "TextSize")
  | ThreeBars => Js.Dict.get(octicons, "ThreeBars")
  | Thumbsdown => Js.Dict.get(octicons, "Thumbsdown")
  | Thumbsup => Js.Dict.get(octicons, "Thumbsup")
  | Tools => Js.Dict.get(octicons, "Tools")
  | Trashcan => Js.Dict.get(octicons, "Trashcan")
  | TriangleDown => Js.Dict.get(octicons, "TriangleDown")
  | TriangleLeft => Js.Dict.get(octicons, "TriangleLeft")
  | TriangleRight => Js.Dict.get(octicons, "TriangleRight")
  | TriangleUp => Js.Dict.get(octicons, "TriangleUp")
  | Unfold => Js.Dict.get(octicons, "Unfold")
  | Unmute => Js.Dict.get(octicons, "Unmute")
  | Unverified => Js.Dict.get(octicons, "Unverified")
  | Verified => Js.Dict.get(octicons, "Verified")
  | Versions => Js.Dict.get(octicons, "Versions")
  | Watch => Js.Dict.get(octicons, "Watch")
  | X => Js.Dict.get(octicons, "X")
  | Zap => Js.Dict.get(octicons, "Zap");

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
  icon: Js.Nullable.t(ReasonReact.reactClass),
  size: Js.Nullable.t(string),
  verticalAlign: Js.Nullable.t(string),
};

let make = (~icon, ~size=?, ~verticalAlign=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=octicon,
    ~props=
      jsProps(
        ~icon=Js.Nullable.fromOption(classOfIcon(icon)),
        ~verticalAlign=
          stringOfVerticalAlign(verticalAlign) |> Js.Nullable.fromOption,
        ~size=stringOfSize(size) |> Js.Nullable.fromOption,
      ),
    children,
  );
