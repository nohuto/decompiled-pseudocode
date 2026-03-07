__int64 *__fastcall I_MinCryptFindRootByName(const void **a1, __int64 a2)
{
  int v2; // ebx
  const void **v3; // rsi
  const void **v4; // r14
  unsigned int v5; // edi
  SIZE_T v7; // rax
  __int64 v8; // rcx
  const void **i; // rdi
  SIZE_T v10; // rax

  v2 = 0;
  v3 = (const void **)&off_140A78B48;
  v4 = a1;
  v5 = 0;
  LODWORD(a1) = *(_DWORD *)a1;
  do
  {
    if ( (_DWORD)a1 == *((_DWORD *)v3 - 2) )
    {
      v7 = RtlCompareMemory(v4[1], *v3, (unsigned int)a1);
      a1 = (const void **)*(unsigned int *)v4;
      if ( (const void **)v7 == a1 )
        return &RootTable[5 * v5];
    }
    ++v5;
    v3 += 5;
  }
  while ( v5 < 0x13 );
  if ( !a2 || (*(_DWORD *)(a2 + 4) & 0x80u) == 0 )
    return 0LL;
  LODWORD(v8) = *(_DWORD *)v4;
  for ( i = (const void **)&off_140A764C8; ; i += 5 )
  {
    if ( (_DWORD)v8 == *((_DWORD *)i - 2) )
    {
      v10 = RtlCompareMemory(v4[1], *i, (unsigned int)v8);
      v8 = *(unsigned int *)v4;
      if ( v10 == v8 )
        break;
    }
    if ( (unsigned int)++v2 >= 2 )
      return 0LL;
  }
  return (__int64 *)&AltRootTable[20 * v2];
}
