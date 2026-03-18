/*
 * XREFs of ?IsCoalescedMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C01CCA38
 * Callers:
 *     ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0089C90 (-UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::IsCoalescedMsgData(CTouchProcessor *this, __int64 a2)
{
  struct CPointerMsgData *NonConstMsgData; // rdi

  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(this, a2);
  if ( *((struct _KTHREAD **)this + 5) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12613);
  return (unsigned int)-__CFSHR__(*((_DWORD *)NonConstMsgData + 9), 6);
}
