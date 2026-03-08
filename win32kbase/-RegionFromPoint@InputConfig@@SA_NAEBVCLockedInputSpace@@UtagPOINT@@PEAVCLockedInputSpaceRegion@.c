/*
 * XREFs of ?RegionFromPoint@InputConfig@@SA_NAEBVCLockedInputSpace@@UtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C0013AA8
 * Callers:
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00159F0 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     NtInputSpaceRegionFromPoint @ 0x1C0169950 (NtInputSpaceRegionFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 */

char __fastcall InputConfig::RegionFromPoint(
        const struct CLockedInputSpace *a1,
        struct tagPOINT a2,
        struct CLockedInputSpaceRegion *a3)
{
  _QWORD *v5; // rsi
  char v6; // di
  _QWORD *i; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // r9

  *(_QWORD *)a3 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a1 + 1456LL);
  KeEnterCriticalRegion();
  v6 = 1;
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  for ( i = (_QWORD *)*v5; ; i = (_QWORD *)*v10 )
  {
    v8 = 0LL;
    if ( i != v5 )
      v8 = i + 2;
    if ( !v8 )
      break;
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v8, a2) )
    {
      *(_QWORD *)a3 = v9;
      goto LABEL_7;
    }
  }
  v6 = 0;
LABEL_7:
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  return v6;
}
