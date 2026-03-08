/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C00196B8
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00A5B80 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C00C2444 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010667C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C01067A8 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0106954 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C0106E0C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C0107F20 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C0108500 (VidSchReportDevice.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108A08 (VidSchSubmitPagingCommand.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C010977C (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C0109884 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 632);
  if ( a2 < *(_DWORD *)(a1 + 704) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
