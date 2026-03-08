/*
 * XREFs of sub_1402C49C0 @ 0x1402C49C0
 * Callers:
 *     sub_14075435C @ 0x14075435C (sub_14075435C.c)
 * Callees:
 *     WarbirdCrypto::CCipherFeistel64::CallRoundFunction @ 0x1402C4D60 (WarbirdCrypto--CCipherFeistel64--CallRoundFunction.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall sub_1402C49C0(__int64 a1, char *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  unsigned int v7; // r13d
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  unsigned int v12; // ebp
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  unsigned int v16; // edi
  unsigned int v17; // r14d
  unsigned int v18; // ebp
  unsigned int v19; // edi
  unsigned int v20; // r14d
  int v21; // ebp
  char *v22; // rax
  int v23; // r14d
  char *v24; // r15
  int v25; // ebp
  __int64 v26; // r12
  unsigned int v27; // r14d
  unsigned int v28; // r15d
  unsigned int v29; // ebp
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  unsigned int v32; // ebp
  unsigned int v33; // r14d
  unsigned int v34; // r15d
  unsigned int v35; // ebp
  unsigned int v36; // eax
  int v37; // r15d
  int v38; // r14d
  char *v39; // rax
  bool v40; // zf
  __int64 Src; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+28h] [rbp-50h] BYREF
  char *v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  char *v45; // [rsp+88h] [rbp+10h]
  char *v46; // [rsp+90h] [rbp+18h]

  if ( a4 )
  {
    v46 = a3;
    v7 = a4;
    Src = 0LL;
    LODWORD(v10) = ~a6;
    v42 = a6;
    v11 = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v12 = v10 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v13 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v16);
      v18 = v16 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v17);
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v18);
      v20 = v18 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v19);
      v42 = 0LL;
      v21 = v19 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v20);
      memmove(&v42, a2, (unsigned int)v11);
      v10 = v42;
      LODWORD(Src) = v42 ^ v20;
      HIDWORD(Src) = v21 ^ HIDWORD(v42);
      memset((char *)&Src + v11, 0, (unsigned int)(8 - v11));
      memmove(v46, &Src, (unsigned int)v11);
      a3 = v46;
      v42 = HIDWORD(v10);
    }
    v22 = &a3[v11];
    v43 = &a3[v11];
    if ( v7 >> 3 )
    {
      v23 = HIDWORD(Src);
      v24 = (char *)(a2 - a3);
      v25 = Src;
      v45 = v24;
      v44 = v7 >> 3;
      do
      {
        v26 = *(_QWORD *)&v22[(_QWORD)v24];
        v27 = HIDWORD(v26) ^ v23;
        v28 = v25 ^ v26 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, v27);
        v29 = v27 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v28);
        v30 = v28 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v29);
        v31 = v29 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v30);
        v32 = v30 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v31);
        v33 = v31 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v32);
        v34 = v32 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v33);
        v35 = v33 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v34);
        v36 = v34 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v35);
        v37 = v10 ^ v36;
        LODWORD(Src) = v10 ^ v36;
        v38 = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v36);
        v39 = v43;
        v23 = v42 ^ v35 ^ v38;
        *(_DWORD *)v43 = v37;
        *((_DWORD *)v39 + 1) = v23;
        v22 = v39 + 8;
        LODWORD(v42) = HIDWORD(v26);
        v40 = v44-- == 1;
        v25 = v37;
        v24 = v45;
        LODWORD(v10) = v26;
        v43 = v22;
      }
      while ( !v40 );
      v7 = a4;
      a3 = v46;
    }
    *a7 = a3[v7 - 1];
  }
}
