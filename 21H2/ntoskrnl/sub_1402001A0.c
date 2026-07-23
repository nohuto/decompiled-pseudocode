/*
 * XREFs of sub_1402001A0 @ 0x1402001A0
 * Callers:
 *     sub_1405E6660 @ 0x1405E6660 (sub_1405E6660.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x14021BDB0 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall sub_1402001A0(__int64 a1, _BYTE *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  int v7; // r12d
  __int64 v10; // r14
  int v11; // ebp
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  unsigned int v15; // r14d
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // ebp
  unsigned int v19; // esi
  unsigned int v20; // ebp
  int v21; // ebx
  int v22; // esi
  __int64 v23; // rbx
  unsigned int v24; // r15d
  int *v25; // rax
  char *v26; // r13
  __int64 v27; // rbx
  unsigned int v28; // ebp
  unsigned int v29; // r12d
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  __int64 v32; // rbp
  unsigned int v33; // r12d
  unsigned int v34; // r14d
  unsigned int v35; // r12d
  unsigned int v36; // r14d
  unsigned int v37; // r12d
  int v38; // eax
  int *v39; // rax
  bool v40; // zf
  int *Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  __int64 v43; // [rsp+30h] [rbp-48h]
  char *v45; // [rsp+90h] [rbp+18h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v45 = a3;
    v7 = a6;
    v10 = a1;
    v11 = ~a6;
    *a7 = a2[a4 - 1];
    Size = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v12 = v11 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v13 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 8LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 7LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 6LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v16);
      v10 = a1;
      v18 = v16 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v17);
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v18);
      v20 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v19) ^ v18;
      v42 = 0LL;
      v21 = v19 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v20);
      memmove(&v42, a2, Size);
      v22 = v42;
      LODWORD(Src) = v42 ^ v20;
      HIDWORD(Src) = v21 ^ HIDWORD(v42);
      v23 = Size;
      memset((char *)&Src + Size, 0, 8 - Size);
      memmove(v45, &Src, Size);
      a3 = v45;
      v7 = HIDWORD(Src);
      v11 = (int)Src;
    }
    else
    {
      v22 = 0;
      v42 = 0LL;
      v23 = 0LL;
    }
    v24 = a4 >> 3;
    v25 = (int *)&a3[v23];
    Src = (int *)&a3[v23];
    if ( v24 )
    {
      v26 = (char *)(a2 - a3);
      v43 = v24;
      do
      {
        v27 = *(_QWORD *)&v26[(_QWORD)v25];
        v28 = v27 ^ v11;
        v29 = HIDWORD(v27) ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 0LL, a5, v28) ^ v7;
        v30 = v28 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 1LL, a5, v29);
        v31 = v29 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v30);
        v32 = v30 ^ (unsigned int)WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v31);
        v33 = v31 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v32);
        v34 = v32 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v33);
        v35 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v34) ^ v33;
        v36 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v35) ^ v34;
        v37 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v36) ^ v35;
        v38 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, v37);
        v7 = HIDWORD(v42) ^ v37;
        LODWORD(v32) = v38;
        v39 = Src;
        v11 = v22 ^ v36 ^ v32;
        v42 = v27;
        v22 = v27;
        *Src = v11;
        v39[1] = v7;
        v25 = v39 + 2;
        Src = v25;
        v40 = v43-- == 1;
        v10 = a1;
      }
      while ( !v40 );
    }
  }
}
