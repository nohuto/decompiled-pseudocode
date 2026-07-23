/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1403FDF20
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x140291750 (SmKmStoreHelperCommandProcess.c)
 *     CmSiUnlockViewOfSection @ 0x1402F7AE0 (CmSiUnlockViewOfSection.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140599FF4 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x1405A2A00 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
