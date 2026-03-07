void __fastcall MiInitializeLargeMdlLeafPfns(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  int v4; // r8d
  int v6; // ebx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int64 LeafPfnBuddy; // r15
  unsigned int PfnPageSizeIndex; // eax
  __int64 v14; // r14
  __int64 v15; // r13
  _QWORD *v16; // rbp
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rsi
  int v22; // [rsp+38h] [rbp-A0h]
  _QWORD v23[12]; // [rsp+40h] [rbp-98h] BYREF

  v2 = *(_QWORD *)(a2 + 72);
  v3 = a2;
  v4 = *(_DWORD *)(a2 + 56);
  v22 = v2;
  if ( (v4 & 0x80000200) != 0 )
    v6 = 0;
  else
    v6 = MiSwizzleInvalidPte(128LL);
  v7 = (_QWORD *)*a1;
  if ( v4 < 0 )
  {
    if ( (v4 & 0x1000) != 0 )
    {
      v11 = 2;
    }
    else if ( (v4 & 0x1000000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      if ( (v4 & 0x2000000) == 0 )
        goto LABEL_4;
      v11 = 0;
    }
    memset(v23, 0, sizeof(v23));
    if ( v7 )
    {
      do
      {
        LeafPfnBuddy = MiGetLeafPfnBuddy(v7);
        PfnPageSizeIndex = MiGetPfnPageSizeIndex((__int64)v7);
        v14 = PfnPageSizeIndex;
        if ( PfnPageSizeIndex != v11 )
        {
          MiInitializeLargePfnList(v23);
          v15 = (unsigned int)v14;
          v16 = &v23[3 * v14];
          v17 = (_QWORD *)v16[1];
          if ( (_QWORD *)*v17 != v16 )
            __fastfail(3u);
          *v7 = v16;
          v7[1] = v17;
          *v17 = v7;
          v16[1] = v7;
          ++v23[3 * v14 + 2];
          while ( (unsigned int)v14 < v11 )
          {
            while ( (_QWORD *)*v16 != v16 )
              MiDemotePfnListChain(v23, v11);
            LODWORD(v14) = v14 + 1;
            v16 += 3;
          }
          v18 = &v7[6 * MiLargePageSizes[v15]];
          if ( v7 != v18 )
          {
            do
            {
              v19 = (unsigned __int64)&v7[6 * MiLargePageSizes[v11]];
              *v7 ^= (*v7 ^ (v19 >> 3)) & 0xFFFFFFFFFFELL;
              v7 = (_QWORD *)v19;
            }
            while ( (_QWORD *)v19 != v18 );
          }
          v20 = &v7[-6 * MiLargePageSizes[v11]];
          *v20 ^= (*v20 ^ (LeafPfnBuddy >> 3)) & 0xFFFFFFFFFFELL;
        }
        v7 = (_QWORD *)LeafPfnBuddy;
      }
      while ( LeafPfnBuddy );
      v3 = a2;
      LODWORD(v2) = v22;
    }
    v7 = (_QWORD *)*a1;
  }
LABEL_4:
  if ( v7 )
  {
    do
    {
      v8 = MiGetLeafPfnBuddy(v7);
      *a1 = v8;
      v9 = (_QWORD *)v8;
      v10 = MiGetPfnPageSizeIndex((__int64)v7);
      MiInitializeMdlLeafPfns((_DWORD)v7, MiLargePageSizes[v10], v2, v6, *(_DWORD *)(v3 + 56));
      v7 = v9;
    }
    while ( v9 && !KeShouldYieldProcessor() );
  }
}
