/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C0019678
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00AE620 (VidSchiCheckNodeTimeout.c)
 *     VidSchCreateSystemDevices @ 0x1C00C1F44 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C010621C (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C0106348 (VidSchiResetEngines.c)
 *     VidSchiSubmitPagingCommand @ 0x1C01064F4 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C01069AC (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C0107B90 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C0108170 (VidSchReportDevice.c)
 *     VidSchSubmitPagingCommand @ 0x1C0108678 (VidSchSubmitPagingCommand.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C01093EC (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C01094F4 (VidSchiSubmitHwPagingCommand.c)
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
