/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C010A02C
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0047458 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C01070F0 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1C01087F0 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C0109E40 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C0109E6C (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C0109F60 (VidSchQueryDmaHeader.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL), 0LL);
  KeFlushQueuedDpcs();
}
