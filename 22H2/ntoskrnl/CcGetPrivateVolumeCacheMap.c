/*
 * XREFs of CcGetPrivateVolumeCacheMap @ 0x14035BB1C
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
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
