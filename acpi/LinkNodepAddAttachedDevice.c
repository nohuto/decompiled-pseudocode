/*
 * XREFs of LinkNodepAddAttachedDevice @ 0x1C009967C
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C005CE9C (LinkNodeCrackPrt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LinkNodepAddAttachedDevice(__int64 a1, __int64 **a2)
{
  __int64 *v3; // rdx
  __int64 *i; // rcx
  __int64 *v5; // r8
  __int64 *v6; // r8
  __int64 **v7; // rcx
  __int64 *v8; // rdx
  __int64 *v9; // rdx
  int v10; // edx
  int v11; // edx

  v3 = (__int64 *)(a1 + 72);
  for ( i = *(__int64 **)(a1 + 72); ; i = (__int64 *)*i )
  {
    if ( v3 == i )
    {
      v7 = (__int64 **)v3[1];
      if ( *v7 != v3 )
        __fastfail(3u);
      *a2 = v3;
      a2[1] = (__int64 *)v7;
      *v7 = (__int64 *)a2;
      v3[1] = (__int64)a2;
      return 0LL;
    }
    v5 = (__int64 *)i[6];
    if ( v5 )
    {
      if ( v5 == a2[6] )
        break;
    }
    v6 = (__int64 *)i[2];
    if ( v6 )
    {
      if ( v6 == a2[2] )
        break;
    }
  }
  v8 = a2[6];
  if ( v8 )
    i[6] = (__int64)v8;
  v9 = a2[2];
  if ( v9 )
    i[2] = (__int64)v9;
  v10 = *((_DWORD *)a2 + 9);
  if ( v10 )
    *((_DWORD *)i + 9) = v10;
  v11 = *((_DWORD *)a2 + 10);
  if ( v11 )
    *((_DWORD *)i + 10) = v11;
  ExFreePoolWithTag(a2, 0);
  return 0LL;
}
