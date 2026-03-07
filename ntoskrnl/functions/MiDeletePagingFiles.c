__int64 __fastcall MiDeletePagingFiles(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rbx
  __int64 v5; // rdi
  char **v7; // r14
  __int64 v8; // rbp
  char *v9; // rcx

  v3 = *(_DWORD *)(a1 + 17048);
  v4 = 0LL;
  v5 = 0LL;
  if ( v3 )
  {
    v7 = (char **)(a1 + 17056);
    v8 = v3;
    do
    {
      v9 = *v7;
      if ( *v7 )
      {
        if ( (v9[204] & 0x50) == 0 )
        {
          v5 += *(_QWORD *)v9;
          v4 += 2LL;
        }
        MiDeletePagefile(v9, 1);
      }
      ++v7;
      --v8;
    }
    while ( v8 );
    if ( v4 )
      MiReturnCommit(a1, v4, a3);
  }
  return v5;
}
