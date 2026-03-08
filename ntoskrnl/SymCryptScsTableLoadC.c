/*
 * XREFs of SymCryptScsTableLoadC @ 0x1404092E0
 * Callers:
 *     SymCryptScsTableLoad @ 0x140409124 (SymCryptScsTableLoad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptScsTableLoadC(__int64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v4; // edi
  __int64 *v5; // rbx
  _QWORD *v6; // r9
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // r14d
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r10
  __int64 v14; // r8
  int v15; // ebp
  __int64 v16; // rcx
  __int64 result; // rax
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // rbx
  __int64 v22; // r11
  int v23; // r12d
  __int64 *v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rax

  v4 = *(_DWORD *)(a1 + 8);
  v5 = a3;
  v6 = *(_QWORD **)(a1 + 16);
  v7 = a2;
  v8 = -(a2 ^ 2LL);
  v9 = *(_DWORD *)(a1 + 12) >> 5;
  v10 = ~(-(__int64)a2 >> 32);
  v11 = -(a2 ^ 3LL) >> 32;
  v12 = ~(-(a2 ^ 1LL) >> 32);
  v13 = ~v11;
  v14 = ~(v8 >> 32);
  v15 = v9;
  do
  {
    *v5 = v10 & *v6 | v12 & v6[4] | v14 & v6[8] | v13 & v6[12];
    v5 += 4;
    *(v5 - 3) = v10 & v6[1] | v12 & v6[5] | v14 & v6[9] | v13 & v6[13];
    *(v5 - 2) = v10 & v6[2] | v12 & v6[6] | v14 & v6[10] | v13 & v6[14];
    v16 = v12 & v6[7] | v14 & v6[11] | v13 & v6[15];
    result = v10 & v6[3];
    v6 += 16;
    *(v5 - 1) = result | v16;
    --v15;
  }
  while ( v15 );
  if ( v4 >= 8 )
  {
    v18 = 6;
    do
    {
      v19 = ~(-(v7 ^ (v18 - 2)) >> 32);
      v20 = ~(-(v7 ^ (v18 - 1)) >> 32);
      v21 = ~(-(v7 ^ (v18 + 1)) >> 32);
      v22 = ~(-(v7 ^ v18) >> 32);
      v23 = v9;
      v24 = a3;
      do
      {
        *v24 |= v19 & *v6 | v20 & v6[4] | v22 & v6[8] | v21 & v6[12];
        v24 += 4;
        *(v24 - 3) |= v19 & v6[1] | v20 & v6[5] | v22 & v6[9] | v21 & v6[13];
        *(v24 - 2) |= v19 & v6[2] | v20 & v6[6] | v22 & v6[10] | v21 & v6[14];
        v25 = v20 & v6[7] | v22 & v6[11] | v21 & v6[15];
        v26 = v19 & v6[3];
        v6 += 16;
        *(v24 - 1) |= v26 | v25;
        --v23;
      }
      while ( v23 );
      v18 += 4;
      result = v18 + 2;
    }
    while ( (unsigned int)result <= v4 );
  }
  return result;
}
