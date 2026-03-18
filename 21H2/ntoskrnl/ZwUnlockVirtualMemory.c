/*
 * XREFs of ZwUnlockVirtualMemory @ 0x14041F240
 * Callers:
 *     CmSiUnlockViewOfSection @ 0x14020B600 (CmSiUnlockViewOfSection.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037DAEC (SmKmStoreHelperCommandProcess.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1405F7B94 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x140628D00 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUnlockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
