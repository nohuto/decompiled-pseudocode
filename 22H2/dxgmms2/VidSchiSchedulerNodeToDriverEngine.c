/*
 * XREFs of VidSchiSchedulerNodeToDriverEngine @ 0x1C00018E8
 * Callers:
 *     VidSchSubmitPagingCommand @ 0x1C006E44C (VidSchSubmitPagingCommand.c)
 *     VidSchiCheckNodeTimeout @ 0x1C007F1B0 (VidSchiCheckNodeTimeout.c)
 *     VidSchiSubmitPagingCommand @ 0x1C0085280 (VidSchiSubmitPagingCommand.c)
 *     VidSchCreateSystemDevices @ 0x1C0096A64 (VidSchCreateSystemDevices.c)
 *     VidSchiPrepareToResetEngine @ 0x1C00CEBBC (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1C00CED04 (VidSchiResetEngines.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00CF04C (VidSchiSubmitRenderCommand.c)
 *     VidSchReportAdapter @ 0x1C00D08E0 (VidSchReportAdapter.c)
 *     VidSchReportDevice @ 0x1C00D0E80 (VidSchReportDevice.c)
 *     VidSchiSerializeSchedulingLog @ 0x1C00D23C0 (VidSchiSerializeSchedulingLog.c)
 *     VidSchiSubmitHwPagingCommand @ 0x1C00D24C8 (VidSchiSubmitHwPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiSchedulerNodeToDriverEngine(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 624);
  if ( a2 < *(_DWORD *)(a1 + 696) )
    v2 += 8LL * a2;
  return *(unsigned __int16 *)(*(_QWORD *)v2 + 6LL);
}
