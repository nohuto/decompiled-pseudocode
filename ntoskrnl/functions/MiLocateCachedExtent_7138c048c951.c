__int64 __fastcall MiLocateCachedExtent(__int64 *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  _DWORD *v5; // r11
  unsigned __int64 v6; // rdi
  int v7; // r10d
  int v8; // edx
  int v9; // r8d
  __int64 v10; // r9
  unsigned int v11; // ecx

  v4 = MiStartingOffset(a1, a1[1], 0xFFFFFFFF);
  v5 = (_DWORD *)a1[14];
  v6 = (a2 - v4) >> 12;
  v7 = 0;
  if ( !v5 )
    return 0LL;
  v8 = *v5 - 1;
  if ( v8 < 0 )
    return 0LL;
  while ( 1 )
  {
    v9 = (v7 + v8) >> 1;
    v10 = (__int64)&v5[12 * v9 + 2];
    v11 = *(_DWORD *)(v10 + 24);
    if ( (unsigned int)v6 < v11 )
    {
      if ( !v9 )
        return 0LL;
      v8 = v9 - 1;
      goto LABEL_8;
    }
    if ( (unsigned int)v6 < *(_DWORD *)(v10 + 40) + v11 )
      break;
    v7 = v9 + 1;
LABEL_8:
    if ( v8 < v7 )
      return 0LL;
  }
  if ( v8 < v7 )
    return 0LL;
  return v10;
}
