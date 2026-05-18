/*
 * XREFs of sub_18003DEAC @ 0x18003DEAC
 * Callers:
 *     sub_18003D8B0 @ 0x18003D8B0 (sub_18003D8B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003DEAC(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rax
  __m128i si128; // xmm0
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int32 v12; // ecx
  __int64 v13; // rax
  int v14; // ecx
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int32 v19; // ecx
  int v20; // eax
  __int64 result; // rax
  __m128i v22; // [rsp+0h] [rbp-20h]
  int v23; // [rsp+10h] [rbp-10h]
  int v24; // [rsp+14h] [rbp-Ch]
  int v25; // [rsp+18h] [rbp-8h]

  v2 = 0LL;
  *(_OWORD *)a2 = 0LL;
  v4 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_OWORD *)(a2 + 32) = 0LL;
  v5 = 1;
  *(_DWORD *)(a2 + 48) = 0;
  do
    v22.m128i_i32[v2++] = v5++;
  while ( v2 < 8 );
  v6 = *(unsigned int *)(a1 + 68);
  *(_WORD *)(a2 + 16) = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013DCA0);
  *(_DWORD *)(a2 + 20) = 1;
  *(_DWORD *)(a2 + 8) = v22.m128i_i32[v6];
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 32) = 1;
  *(_DWORD *)(a2 + 36) = 1;
  *(_DWORD *)(a2 + 40) = 1;
  *(_DWORD *)(a2 + 44) = 1;
  *(_DWORD *)(a2 + 48) = 1;
  *(_DWORD *)a2 = *(unsigned __int8 *)(a1 + 61);
  v8 = *(_BYTE *)(a1 + 62) == 0;
  v22 = si128;
  v23 = 4;
  *(_DWORD *)(a2 + 4) = !v8;
  *(_DWORD *)(a2 + 12) = *(unsigned __int8 *)(a1 + 63);
  v9 = *(unsigned int *)(a1 + 28);
  v24 = 8;
  v25 = 5;
  *(_DWORD *)(a2 + 20) = v22.m128i_i32[v9];
  v10 = *(unsigned int *)(a1 + 32);
  v22 = si128;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *(_DWORD *)(a2 + 24) = v22.m128i_i32[v10];
  v11 = *(unsigned int *)(a1 + 36);
  v22 = si128;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  v12 = v22.m128i_i32[v11];
  v13 = 0LL;
  *(_DWORD *)(a2 + 28) = v12;
  v14 = 1;
  do
    v22.m128i_i32[v13++] = v14++;
  while ( v13 < 8 );
  v15 = _mm_load_si128((const __m128i *)&xmmword_18013DCA0);
  *(_DWORD *)(a2 + 32) = v22.m128i_i32[*(unsigned int *)(a1 + 40)];
  v16 = *(unsigned int *)(a1 + 44);
  v22 = v15;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *(_DWORD *)(a2 + 36) = v22.m128i_i32[v16];
  v17 = *(unsigned int *)(a1 + 48);
  v22 = v15;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  *(_DWORD *)(a2 + 40) = v22.m128i_i32[v17];
  v18 = *(unsigned int *)(a1 + 52);
  v22 = v15;
  v23 = 4;
  v24 = 8;
  v25 = 5;
  v19 = v22.m128i_i32[v18];
  v20 = 1;
  *(_DWORD *)(a2 + 44) = v19;
  do
    v22.m128i_i32[v4++] = v20++;
  while ( v4 < 8 );
  result = *(unsigned int *)(a1 + 56);
  *(_DWORD *)(a2 + 48) = v22.m128i_i32[result];
  return result;
}
