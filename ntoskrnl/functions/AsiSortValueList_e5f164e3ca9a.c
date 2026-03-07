int __fastcall AsiSortValueList(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned int v5; // ebx
  __int128 *v6; // rdi
  __int64 v7; // r14
  char v8; // r15
  __int128 *v9; // rsi
  int v10; // ecx
  __int128 v11; // xmm1
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  v2 = &retaddr;
  v5 = *(_DWORD *)(a2 + 20) - 1;
  if ( *(_DWORD *)(a2 + 20) != 1 )
  {
    do
    {
      v6 = (__int128 *)(a1 + *(unsigned int *)(a2 + 16));
      v7 = v5;
      v8 = 0;
      v9 = (__int128 *)((char *)v6 + 20);
      do
      {
        LODWORD(v2) = RtlCompareUnicodeStrings(
                        (PCWCH)(a1 + *((unsigned int *)v6 + 1)),
                        *((_DWORD *)v6 + 2) >> 1,
                        (PCWCH)(a1 + *((unsigned int *)v9 + 1)),
                        *((_DWORD *)v9 + 2) >> 1,
                        1u);
        if ( (_DWORD)v2 )
        {
          v10 = *((_DWORD *)v9 + 4);
          v8 = 1;
          v11 = *v9;
          *v9 = *v6;
          LODWORD(v2) = *((_DWORD *)v6 + 4);
          *((_DWORD *)v9 + 4) = (_DWORD)v2;
          *v6 = v11;
          *((_DWORD *)v6 + 4) = v10;
        }
        v6 = (__int128 *)((char *)v6 + 20);
        v9 = (__int128 *)((char *)v9 + 20);
        --v7;
      }
      while ( v7 );
      if ( !v8 )
        break;
      --v5;
    }
    while ( v5 );
  }
  return (int)v2;
}
