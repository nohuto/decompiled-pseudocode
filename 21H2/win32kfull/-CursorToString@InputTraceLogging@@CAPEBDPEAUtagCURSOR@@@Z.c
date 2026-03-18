/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CF744
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C00B2F40 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 *     LockQCursor @ 0x1C00F3040 (LockQCursor.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01CF714 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1)
{
  unsigned int v2; // ecx
  __int64 v4; // rdx
  struct tagCURSOR **i; // rax

  v2 = 0;
  if ( !a1 )
    return "Empty";
  v4 = 0LL;
  for ( i = (struct tagCURSOR **)&gasyscur[1]; *i != a1; i += 69 )
  {
    ++v2;
    if ( ++v4 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v2);
}
