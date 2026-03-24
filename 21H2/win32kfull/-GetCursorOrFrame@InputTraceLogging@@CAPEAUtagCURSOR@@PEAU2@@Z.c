/*
 * XREFs of ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01D3F58
 * Callers:
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1C012941C (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 * Callees:
 *     <none>
 */

struct tagCURSOR *__fastcall InputTraceLogging::GetCursorOrFrame(struct tagCURSOR *a1)
{
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
    return (struct tagCURSOR *)**((_QWORD **)a1 + 12);
  else
    return a1;
}
