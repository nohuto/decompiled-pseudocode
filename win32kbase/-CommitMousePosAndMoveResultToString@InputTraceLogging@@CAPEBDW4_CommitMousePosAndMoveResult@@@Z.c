const char *__fastcall InputTraceLogging::CommitMousePosAndMoveResultToString(int a1)
{
  switch ( a1 )
  {
    case 0:
      return "InputEaten";
    case 1:
      return "PosUpdated";
    case 2:
      return "CursorClippedSystem";
    case 4:
      return "CursorClippedApp";
    case 8:
      return "RawInputHandled";
    case 16:
      return "CursorMoved";
    case 17:
      return "PosUpdated+CursorMoved";
  }
  if ( (a1 & 0x11) != 0 )
    return (const char *)InputTraceLogging::CommitMousePosAndMoveResultToString(a1 & 0xFFFFFFEE);
  return "UNKNOWN";
}
