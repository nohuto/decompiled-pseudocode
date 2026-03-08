/*
 * XREFs of ZwUnlockVirtualMemory @ 0x140415E70
 * Callers:
 *     CmSiUnlockViewOfSection @ 0x1402B3864 (CmSiUnlockViewOfSection.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405BFCAC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1405C93E8 (SmKmStoreHelperCommandProcess.c)
 *     VmColdPagesHint @ 0x1405F6510 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnlockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
