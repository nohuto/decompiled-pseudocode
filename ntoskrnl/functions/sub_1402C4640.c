void __fastcall sub_1402C4640(__int64 a1, _BYTE *a2, char *a3, unsigned int a4, __int64 a5, unsigned int a6, _BYTE *a7)
{
  int v7; // r13d
  __int64 v10; // rbp
  int v11; // r15d
  unsigned int v12; // ebx
  unsigned int v13; // esi
  unsigned int v14; // ebp
  unsigned int v15; // ebx
  unsigned int v16; // esi
  unsigned int v17; // ebp
  __int64 v18; // rbx
  unsigned int v19; // esi
  unsigned int v20; // ebp
  int v21; // esi
  __int64 v22; // rax
  int *v23; // rax
  unsigned int v24; // r14d
  char *v25; // r12
  __int64 v26; // rbx
  unsigned int v27; // r15d
  unsigned int v28; // r13d
  unsigned int v29; // ebp
  unsigned int v30; // r14d
  unsigned int v31; // r15d
  unsigned int v32; // ebp
  __int64 v33; // r14
  __int64 v34; // r15
  unsigned int v35; // ebp
  unsigned int v36; // r13d
  int *v37; // rax
  bool v38; // zf
  int *Src; // [rsp+20h] [rbp-58h] BYREF
  __int64 v40; // [rsp+28h] [rbp-50h] BYREF
  __int64 v41; // [rsp+30h] [rbp-48h]
  char *v43; // [rsp+90h] [rbp+18h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  if ( a4 )
  {
    v43 = a3;
    v7 = a6;
    v10 = a1;
    v11 = ~a6;
    *a7 = a2[a4 - 1];
    Size = a4 & 7;
    if ( (a4 & 7) != 0 )
    {
      v12 = v11 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, a6);
      v13 = a6 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v12);
      v14 = v12 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v13);
      v15 = v13 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v14);
      v16 = v14 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v15);
      v17 = v15 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v16);
      v18 = v16 ^ (unsigned int)WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v17);
      v19 = v17 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v18);
      v20 = v18 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 1LL, a5, v19);
      v40 = 0LL;
      v41 = Size;
      LODWORD(v18) = v19 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 0LL, a5, v20);
      memmove(&v40, a2, Size);
      v21 = v40;
      LODWORD(Src) = v40 ^ v20;
      HIDWORD(Src) = v18 ^ HIDWORD(v40);
      memset((char *)&Src + Size, 0, 8 - Size);
      memmove(v43, &Src, Size);
      a3 = v43;
      v22 = v41;
      v7 = HIDWORD(Src);
      v11 = (int)Src;
      v10 = a1;
    }
    else
    {
      v21 = 0;
      v40 = 0LL;
      v22 = 0LL;
    }
    v23 = (int *)&a3[v22];
    v24 = a4 >> 3;
    Src = v23;
    if ( v24 )
    {
      v25 = (char *)(a2 - a3);
      v41 = v24;
      do
      {
        v26 = *(_QWORD *)((char *)v23 + (_QWORD)v25);
        v27 = v26 ^ v11;
        v28 = HIDWORD(v26) ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 0LL, a5, v27) ^ v7;
        v29 = v27 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(v10, 1LL, a5, v28);
        v30 = v28 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 2LL, a5, v29);
        v31 = v29 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 3LL, a5, v30);
        v32 = v30 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 4LL, a5, v31);
        v33 = v31 ^ (unsigned int)WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 5LL, a5, v32);
        v34 = v32 ^ (unsigned int)WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 6LL, a5, v33);
        v35 = v33 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 7LL, a5, v34);
        v36 = v34 ^ WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 8LL, a5, v35);
        LODWORD(v34) = WarbirdCrypto::CCipherFeistel64::CallRoundFunction(a1, 9LL, a5, v36);
        v37 = Src;
        v11 = v21 ^ v35 ^ v34;
        v21 = v26;
        v7 = HIDWORD(v40) ^ v36;
        v40 = v26;
        *Src = v11;
        v10 = a1;
        v37[1] = v7;
        v23 = v37 + 2;
        v38 = v41-- == 1;
        Src = v23;
      }
      while ( !v38 );
    }
  }
}
