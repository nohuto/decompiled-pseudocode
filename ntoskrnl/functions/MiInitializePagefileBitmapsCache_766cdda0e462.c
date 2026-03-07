char __fastcall MiInitializePagefileBitmapsCache(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char result; // al

  v1 = 0;
  v2 = a1 + 144;
  *(_QWORD *)(a1 + 144) = 0LL;
  v3 = a1 + 160;
  *(_QWORD *)(a1 + 152) = 0LL;
  v4 = a1 + 176;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  v6 = *(_QWORD **)(a1 + 192);
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  v7 = v6 + 3577;
  memset(v6, 0, 0x7000uLL);
  while ( v6 < v7 )
  {
    v8 = *(_QWORD **)(v4 + 8);
    if ( *v8 != v4 )
      __fastfail(3u);
    *v6 = v4;
    v6[1] = v8;
    *v8 = v6;
    *(_QWORD *)(v4 + 8) = v6;
    v6 += 7;
  }
  *((_DWORD *)v6 + 13) = -1;
  *((_DWORD *)v6 + 12) = -1;
  v9 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v9 )
    v9 ^= v2;
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 8);
      if ( (*(_BYTE *)(v2 + 8) & 1) != 0 )
      {
        if ( !v11 )
          break;
        v11 ^= v9;
      }
      if ( !v11 )
        break;
      v9 = v11;
    }
    v10 = 1;
  }
  RtlRbInsertNodeEx((unsigned __int64 *)v2, v9, v10, (unsigned __int64)v6);
  v12 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 && v12 )
    v12 ^= v3;
  if ( v12 )
  {
    while ( 1 )
    {
      if ( *((_DWORD *)v6 + 12) >= *(_DWORD *)(v12 + 24) )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_25;
          v13 ^= v12;
        }
        if ( !v13 )
        {
LABEL_25:
          v1 = 1;
          break;
        }
      }
      else
      {
        v13 = *(_QWORD *)v12;
        if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
        {
          if ( !v13 )
            break;
          v13 ^= v12;
        }
        if ( !v13 )
          break;
      }
      v12 = v13;
    }
  }
  result = RtlRbInsertNodeEx((unsigned __int64 *)v3, v12, v1, (unsigned __int64)(v6 + 3));
  *(_DWORD *)(a1 + 140) = -1;
  return result;
}
