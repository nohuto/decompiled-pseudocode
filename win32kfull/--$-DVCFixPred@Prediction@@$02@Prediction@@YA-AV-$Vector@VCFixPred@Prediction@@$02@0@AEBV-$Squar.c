char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  char *v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  char v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h]

  v4 = a1;
  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(a1);
  v5 = 3LL;
  v6 = a2 - (_QWORD)a3;
  do
  {
    v7 = *(_QWORD *)v4;
    v8 = a3;
    v23 = 3LL;
    do
    {
      v9 = *(__int64 *)((char *)v8 + v6);
      v10 = *v8;
      v11 = (*v8 ^ v9) >> 63;
      if ( v9 < 0 )
        v9 = -v9;
      v12 = -v10;
      if ( v10 >= 0 )
        v12 = *v8;
      v13 = (unsigned int)v12 * (unsigned __int64)(unsigned int)v9;
      v14 = HIDWORD(v12);
      v15 = HIDWORD(v13) + (unsigned int)v12 * HIDWORD(v9);
      v16 = v11 ^ ((unsigned int)(v15 + v9 * v14) | ((unsigned __int64)(unsigned int)((((unsigned int)v15
                                                                                      + (unsigned int)v9 * v14) >> 32)
                                                                                    + HIDWORD(v9) * v14
                                                                                    + HIDWORD(v15)) << 32));
      v17 = v16 - v11;
      if ( (_DWORD)v13 )
        v17 = v16;
      v18 = v7 + v17;
      if ( v4 != &v20 )
      {
        *(_QWORD *)v4 = v18;
        v7 = v18;
      }
      ++v8;
      --v23;
    }
    while ( v23 );
    v4 += 8;
    v6 += 24LL;
    --v5;
  }
  while ( v5 );
  return a1;
}
