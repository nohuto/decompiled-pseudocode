/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x1402F76B8
 * Callers:
 *     CcLazyWriteScanVolume @ 0x140218810 (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403BBD24 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
