/*
 * XREFs of SepGetTokenSessionMapEntry @ 0x140597DC8
 * Callers:
 *     SepSetTokenLowboxNumber @ 0x1406C65AC (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406FF29C (SepDereferenceLowBoxNumberEntry.c)
 *     SepIsParentOfChildAppContainer @ 0x1409257DC (SepIsParentOfChildAppContainer.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, _QWORD *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  char *v9; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // r8

  *a3 = 0LL;
  v4 = (__int64 **)g_SessionLowboxMap;
  if ( g_SessionLowboxMap )
  {
LABEL_5:
    for ( i = *v4; i != (__int64 *)v4; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 4) == a1 )
      {
        v9 = (char *)(i + 3);
LABEL_17:
        *a3 = v9;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x734C6553u);
    if ( PoolWithTag )
    {
      v11 = g_SessionLowboxMap;
      v9 = (char *)(PoolWithTag + 3);
      PoolWithTag[3] = 0LL;
      *((_BYTE *)PoolWithTag + 56) = 0;
      *((_DWORD *)PoolWithTag + 4) = a1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *PoolWithTag = v12;
      PoolWithTag[1] = v11;
      *(_QWORD *)(v12 + 8) = PoolWithTag;
      *(_QWORD *)v11 = PoolWithTag;
      goto LABEL_17;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  v4 = (__int64 **)ExAllocatePoolWithTag(
                     (POOL_TYPE)(g_SessionLowboxMap + 1),
                     (unsigned int)(g_SessionLowboxMap + 16),
                     0x734C6553u);
  g_SessionLowboxMap = (__int64)v4;
  if ( v4 )
  {
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    goto LABEL_5;
  }
  return 3221225626LL;
}
