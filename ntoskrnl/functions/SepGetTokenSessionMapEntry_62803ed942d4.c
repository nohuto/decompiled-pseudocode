__int64 __fastcall SepGetTokenSessionMapEntry(int a1, char a2, __int64 *a3)
{
  __int64 **v4; // rax
  __int64 *i; // rcx
  __int64 v9; // rcx
  __int64 Pool2; // rax
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
        v9 = (__int64)(i + 3);
LABEL_17:
        *a3 = v9;
        return 0LL;
      }
    }
    if ( !a2 )
      return 3221226021LL;
    Pool2 = ExAllocatePool2(256LL, 64LL, 1934386515LL);
    if ( Pool2 )
    {
      v11 = g_SessionLowboxMap;
      v9 = Pool2 + 24;
      *(_QWORD *)(Pool2 + 24) = 0LL;
      *(_BYTE *)(Pool2 + 56) = 0;
      *(_DWORD *)(Pool2 + 16) = a1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Pool2 = v12;
      *(_QWORD *)(Pool2 + 8) = v11;
      *(_QWORD *)(v12 + 8) = Pool2;
      *(_QWORD *)v11 = Pool2;
      goto LABEL_17;
    }
    return 3221225626LL;
  }
  if ( !a2 )
    return 3221226021LL;
  v4 = (__int64 **)ExAllocatePool2(256LL, (unsigned int)(g_SessionLowboxMap + 16), 1934386515LL);
  g_SessionLowboxMap = (__int64)v4;
  if ( v4 )
  {
    v4[1] = (__int64 *)v4;
    *v4 = (__int64 *)v4;
    goto LABEL_5;
  }
  return 3221225626LL;
}
