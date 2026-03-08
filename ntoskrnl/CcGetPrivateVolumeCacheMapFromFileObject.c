/*
 * XREFs of CcGetPrivateVolumeCacheMapFromFileObject @ 0x140290B30
 * Callers:
 *     CcCopyWriteWontFlush @ 0x140290880 (CcCopyWriteWontFlush.c)
 *     CcForceWriteThrough @ 0x1402FD990 (CcForceWriteThrough.c)
 *     CcDeferWrite @ 0x140535060 (CcDeferWrite.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CcGetPrivateVolumeCacheMapFromFileObject(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 *v9; // rax

  if ( !CcEnablePerVolumeLazyWriter )
    return 0LL;
  v2 = a1[5];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 8);
    if ( v3 )
      return *(__int64 **)(v3 + 600);
  }
  v5 = a1[2];
  v6 = v5 ? *(_QWORD *)(v5 + 8) : a1[1];
  v7 = (__int64 *)CcVolumeCacheMapList;
  if ( (__int64 *)CcVolumeCacheMapList == &CcVolumeCacheMapList )
    return 0LL;
  while ( *(v7 - 1) != v6 )
  {
    v7 = (__int64 *)*v7;
    if ( v7 == &CcVolumeCacheMapList )
      return 0LL;
  }
  v8 = v7 + 24;
  v9 = (__int64 *)v7[24];
  if ( v9 == v8 )
    return 0LL;
  while ( *(v9 - 70) != a2 )
  {
    v9 = (__int64 *)*v9;
    if ( v9 == v8 )
      return 0LL;
  }
  return v9 - 74;
}
