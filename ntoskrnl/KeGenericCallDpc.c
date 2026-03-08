/*
 * XREFs of KeGenericCallDpc @ 0x1403008E0
 * Callers:
 *     MiDbgCopyMemory @ 0x140347088 (MiDbgCopyMemory.c)
 *     KeSwapDirectoryTableBase @ 0x1403D20B4 (KeSwapDirectoryTableBase.c)
 *     EtwpUpdateGuidFilterData @ 0x14068FCB8 (EtwpUpdateGuidFilterData.c)
 *     EtwpFreeLoggerContext @ 0x1406F29FC (EtwpFreeLoggerContext.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     KiInitializeDynamicProcessor @ 0x140A9C1F8 (KiInitializeDynamicProcessor.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x1402A9E48 (KeGenericProcessorCallback.c)
 */

char __fastcall KeGenericCallDpc(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return KeGenericProcessorCallback(
           0LL,
           (void (__fastcall *)(struct _KPRCB *, __int64))KiGenericCallDpcInitiatorWorker,
           (__int64)v3,
           1);
}
