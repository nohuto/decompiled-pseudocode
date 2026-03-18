/*
 * XREFs of CcIsDirtyCachemapListEmptyForVolume @ 0x14036260C
 * Callers:
 *     CcLazyWriteScanVolume @ 0x14029A4E0 (CcLazyWriteScanVolume.c)
 *     CcReapPrivateVolumeCachemap @ 0x1403C1654 (CcReapPrivateVolumeCachemap.c)
 * Callees:
 *     <none>
 */

bool __fastcall CcIsDirtyCachemapListEmptyForVolume(__int64 a1)
{
  return *(_QWORD *)(a1 + 640) == a1 + 664 && *(_QWORD *)(a1 + 648) == a1 + 664;
}
