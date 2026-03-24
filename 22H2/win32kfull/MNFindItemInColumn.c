/*
 * XREFs of MNFindItemInColumn @ 0x1C0250148
 * Callers:
 *     xxxMNKeyDown @ 0x1C02384D8 (xxxMNKeyDown.c)
 * Callees:
 *     MNFindNextValidItem @ 0x1C0250258 (MNFindNextValidItem.c)
 */

__int64 __fastcall MNFindItemInColumn(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned int v7; // r14d
  unsigned int v8; // edi
  int ValidItem; // r13d
  int v10; // ebp
  int v11; // r15d
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  signed int v16; // r8d
  signed int v17; // eax
  int v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  int v20; // [rsp+70h] [rbp+8h]

  v4 = a2;
  v5 = a3;
  v7 = -1;
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
  ValidItem = MNFindNextValidItem(a1, 0xFFFFFFFFLL, a3, 0LL);
  if ( ValidItem != -1 )
  {
    v10 = 20000;
    v11 = 20000;
    if ( (unsigned int)v4 >= v8 )
      return 0xFFFFFFFFLL;
    v19 = *(_QWORD *)(a1 + 88);
    v13 = *(_QWORD *)(96 * v4 + v19);
    v18 = *(_DWORD *)(v13 + 68);
    v20 = *(_DWORD *)(v13 + 64);
    while ( v8 )
    {
      --v8;
      v14 = MNFindNextValidItem(a1, (unsigned int)v4, v5, 0LL);
      LODWORD(v4) = v14;
      if ( v14 == ValidItem || v14 == -1 )
        break;
      v15 = *(_QWORD *)(96LL * v14 + v19);
      v16 = abs32(v20 - *(_DWORD *)(v15 + 64));
      v17 = abs32(v18 - *(_DWORD *)(v15 + 68));
      if ( v17 < v10 && (a4 || v16) && v16 <= v11 )
      {
        v11 = v16;
        v10 = v17;
        v7 = v4;
      }
    }
  }
  return v7;
}
