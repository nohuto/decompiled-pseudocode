/*
 * XREFs of _setjmpex @ 0x140422540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall setjmpex(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int128 v10; // xmm6
  __int128 v11; // xmm7
  __int128 v12; // xmm8
  __int128 v13; // xmm9
  __int128 v14; // xmm10
  __int128 v15; // xmm11
  __int128 v16; // xmm12
  __int128 v17; // xmm13
  __int128 v18; // xmm14
  __int128 v19; // xmm15
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  char v22; // [rsp+8h] [rbp+8h] BYREF

  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_QWORD *)(a1 + 24) = v3;
  *(_QWORD *)(a1 + 32) = v5;
  *(_QWORD *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 64) = v8;
  *(_QWORD *)(a1 + 72) = v9;
  *(_QWORD *)(a1 + 16) = &v22;
  *(_QWORD *)(a1 + 80) = retaddr;
  *(_DWORD *)(a1 + 88) = _mm_getcsr();
  *(_OWORD *)(a1 + 96) = v10;
  *(_OWORD *)(a1 + 112) = v11;
  *(_OWORD *)(a1 + 128) = v12;
  *(_OWORD *)(a1 + 144) = v13;
  *(_OWORD *)(a1 + 160) = v14;
  *(_OWORD *)(a1 + 176) = v15;
  *(_OWORD *)(a1 + 192) = v16;
  *(_OWORD *)(a1 + 208) = v17;
  *(_OWORD *)(a1 + 224) = v18;
  *(_OWORD *)(a1 + 240) = v19;
  return 0LL;
}
