/*
 * XREFs of ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C022B418
 * Callers:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C022B418 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 *     ?CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z @ 0x1C022B4A4 (-CommitPosition@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@W4_CommitMousePosAndMoveResult@@@Z.c)
 * Callees:
 *     ?CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z @ 0x1C022B418 (-CommitMousePosAndMoveResultToString@InputTraceLogging@@CAPEBDW4_CommitMousePosAndMoveResult@@@Z.c)
 */

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
