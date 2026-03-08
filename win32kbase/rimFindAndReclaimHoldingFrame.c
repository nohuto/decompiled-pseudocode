/*
 * XREFs of rimFindAndReclaimHoldingFrame @ 0x1C01CE060
 * Callers:
 *     RIMCompletePointerDeviceFrame @ 0x1C01CD424 (RIMCompletePointerDeviceFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C00F07AA (rimFindHoldingFrame.c)
 *     ?DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_RimCompletionReason@@@Z @ 0x1C01CC1E8 (-DropCompleteFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMHOLDINGFRAME@@_NW4InputTracing_R.c)
 *     rimReclaimHoldingFrame @ 0x1C01CF270 (rimReclaimHoldingFrame.c)
 */

_QWORD *__fastcall rimFindAndReclaimHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  __int64 v3; // r10
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  result = rimFindHoldingFrame(a1, a2);
  v4 = result;
  if ( result )
  {
    InputTraceLogging::RIM::DropCompleteFrame(v3, (__int64)result);
    return (_QWORD *)rimReclaimHoldingFrame(v6, v5, v4);
  }
  return result;
}
