void __fastcall vFetchShiftNotAndCopy(__int64 a1)
{
  unsigned int *v1; // r10
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned int v4; // r11d
  __int64 v5; // rcx
  int *v6; // rax
  unsigned int *v7; // r8
  int v8; // r9d
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rax

  v1 = *(unsigned int **)a1;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 16);
  v4 = *(_DWORD *)(a1 + 20);
  v5 = *(unsigned int *)(a1 + 24);
  v6 = (int *)(v2 + v3);
  v7 = &v1[v5];
  if ( v4 == 8 )
  {
    v8 = *v6;
    v9 = (unsigned int)(v3 - 4);
    v10 = ~v8;
    if ( (unsigned int)(v3 + 4) < 8 )
      v9 = (unsigned int)(v3 + 4);
    CopyPattern(v1, v5, ~*(_DWORD *)(v9 + v2), v10);
  }
  else
  {
    while ( v1 < v7 )
    {
      *v1 = ~*v6;
      v11 = (_DWORD)v3 + 4 - v4;
      ++v1;
      if ( (int)v3 + 4 < v4 )
        v11 = (unsigned int)(v3 + 4);
      LODWORD(v3) = v11;
      v6 = (int *)(v2 + v11);
    }
  }
}
