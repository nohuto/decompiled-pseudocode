__int64 __fastcall MNFindItemInColumn(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r13d
  unsigned int v7; // r14d
  unsigned int v8; // edi
  int v9; // esi
  int v10; // r15d
  __int64 v12; // r12
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // [rsp+20h] [rbp-48h]
  int v20; // [rsp+24h] [rbp-44h]
  int ValidItem; // [rsp+70h] [rbp+8h]

  v4 = a2;
  v5 = a3;
  v7 = -1;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  ValidItem = MNFindNextValidItem(a1, 0xFFFFFFFFLL, a3, 0LL);
  if ( ValidItem != -1 )
  {
    v9 = 20000;
    v10 = 20000;
    if ( (unsigned int)v4 >= v8 )
      return 0xFFFFFFFFLL;
    v12 = *(_QWORD *)(a1 + 88);
    v13 = *(_QWORD *)(96 * v4 + v12);
    v20 = *(_DWORD *)(v13 + 68);
    v19 = *(_DWORD *)(v13 + 64);
    while ( v8 )
    {
      --v8;
      v14 = MNFindNextValidItem(a1, (unsigned int)v4, v5, 0LL);
      LODWORD(v4) = v14;
      if ( v14 == ValidItem || v14 == -1 )
        break;
      v15 = *(_QWORD *)(96LL * v14 + v12);
      v16 = v19 - *(_DWORD *)(v15 + 64);
      v17 = v20 - *(_DWORD *)(v15 + 68);
      if ( v16 < 0 )
        v16 = *(_DWORD *)(v15 + 64) - v19;
      v18 = *(_DWORD *)(v15 + 68) - v20;
      if ( v17 >= 0 )
        v18 = v17;
      if ( v18 < v9 && (a4 || v16) && v16 <= v10 )
      {
        v10 = v16;
        v9 = v18;
        v7 = v4;
      }
    }
  }
  return v7;
}
