/*
 * XREFs of KeGenericCallDpc @ 0x14035E460
 * Callers:
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     KeSwapDirectoryTableBase @ 0x14038D334 (KeSwapDirectoryTableBase.c)
 *     KeSetSystemTime @ 0x1403A7348 (KeSetSystemTime.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1403CB604 (MiInitializeWorkingSetManagerParameters.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD9E0 (MiFreeUnusedPfnPages.c)
 *     KeAbCrossThreadDelete @ 0x140520DB8 (KeAbCrossThreadDelete.c)
 *     MiJumpStack @ 0x140535F70 (MiJumpStack.c)
 *     MiDbgCopyMemory @ 0x1405457E4 (MiDbgCopyMemory.c)
 *     MiStartDpcGang @ 0x1405605EC (MiStartDpcGang.c)
 *     EtwpFreeLoggerContext @ 0x14069817C (EtwpFreeLoggerContext.c)
 *     ExGetPoolTagInfo @ 0x14070C78C (ExGetPoolTagInfo.c)
 *     EtwpUpdateFilterData @ 0x140716B70 (EtwpUpdateFilterData.c)
 *     KeConfigureHeteroProcessors @ 0x1408BA3A8 (KeConfigureHeteroProcessors.c)
 *     MmSetPermanentCacheAttribute @ 0x1408C8340 (MmSetPermanentCacheAttribute.c)
 *     MiApplyImageHotPatch @ 0x1408C95AC (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x1409AF460 (KiInitializeDynamicProcessor.c)
 *     ExpAeThresholdInitialization @ 0x140A66D28 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14035C6D8 (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcWorker,
           (__int64)v3,
           1);
}
