/*
 * XREFs of sub_14021BA50 @ 0x14021BA50
 * Callers:
 *     sub_1405E6660 @ 0x1405E6660 (sub_1405E6660.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x14021BDB0 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 */

void __fastcall sub_14021BA50(__int64 a1, void *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v7; // r13d
  char *v8; // r12
  __int64 v9; // r14
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  unsigned int v14; // esi
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  unsigned int v17; // esi
  unsigned int v18; // r14d
  int v19; // ebx
  __int64 v20; // rsi
  __int64 v21; // r15
  int *v22; // rcx
  unsigned int v23; // eax
  int v24; // r15d
  void *v25; // rdx
  int v26; // r12d
  int v27; // r13d
  size_t v28; // rbx
  unsigned int v29; // r15d
  unsigned int v30; // r12d
  unsigned int v31; // r14d
  unsigned int v32; // r15d
  unsigned int v33; // esi
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  unsigned int v36; // r12d
  unsigned int v37; // r15d
  unsigned int v38; // r12d
  int v39; // eax
  int *v40; // rcx
  bool v41; // zf
  size_t v42; // [rsp+20h] [rbp-38h] BYREF
  size_t Size; // [rsp+28h] [rbp-30h]
  __int64 v44; // [rsp+30h] [rbp-28h] BYREF
  int *v45; // [rsp+38h] [rbp-20h]
  __int64 v46; // [rsp+40h] [rbp-18h]
  void *Src; // [rsp+A8h] [rbp+50h]
  void *Srca; // [rsp+A8h] [rbp+50h]

  if ( a4 )
  {
    Src = a2;
    v44 = 0LL;
    LODWORD(v42) = ~a6;
    v7 = a4;
    LODWORD(Size) = a4 & 7;
    v8 = a3;
    v9 = a1;
    if ( (a4 & 7) != 0 )
    {
      v10 = ~a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v11 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v9, 8LL, a5, v10);
      v12 = v10 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v9, 7LL, a5, v11);
      v13 = v11 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v16);
      v18 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v17) ^ v16;
      v42 = 0LL;
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v18);
      v20 = (unsigned int)Size;
      v21 = (unsigned int)Size;
      memmove(&v42, Src, (unsigned int)Size);
      LODWORD(v44) = v42 ^ v18;
      Size = v42;
      HIDWORD(v44) = v19 ^ HIDWORD(v42);
      memset((char *)&v44 + v20, 0, (unsigned int)(8 - v20));
      memmove(v8, &v44, (unsigned int)v20);
      v9 = a1;
      a2 = Src;
      a6 = HIDWORD(Size);
      LODWORD(v42) = Size;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = (int *)&v8[v21];
    v23 = v7 >> 3;
    v45 = (int *)&v8[v21];
    if ( v7 >> 3 )
    {
      v24 = HIDWORD(v44);
      v25 = (void *)((_BYTE *)a2 - v8);
      v26 = v44;
      v27 = v42;
      Srca = v25;
      v46 = v23;
      while ( 1 )
      {
        v28 = *(_QWORD *)((char *)v22 + (_QWORD)v25);
        v29 = HIDWORD(v28) ^ v24;
        v30 = v28 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v9, 9LL, a5, v29) ^ v26;
        v31 = v29 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v9, 8LL, a5, v30);
        v32 = v30 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v31);
        v33 = v31 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v32);
        v9 = a1;
        v34 = v32 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v33);
        v35 = v33 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v34);
        v36 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v35) ^ v34;
        v37 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v36) ^ v35;
        v38 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v37) ^ v36;
        v39 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v38);
        v40 = v45;
        v24 = a6 ^ v39 ^ v37;
        v26 = v27 ^ v38;
        Size = v28;
        *v45 = v26;
        v40[1] = v24;
        v22 = v40 + 2;
        v41 = v46-- == 1;
        v45 = v22;
        if ( v41 )
          break;
        v27 = v28;
        v25 = Srca;
        a6 = HIDWORD(Size);
      }
      v7 = a4;
      v8 = a3;
    }
    *a7 = v8[v7 - 1];
  }
}
