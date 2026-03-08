/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x1402EF79C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcGetPrivateVolumeCacheMap(__int64 a1)
{
  if ( CcEnablePerVolumeLazyWriter )
    return *(_QWORD *)(a1 + 600);
  else
    return 0LL;
}
