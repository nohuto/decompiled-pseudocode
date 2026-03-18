/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C016BB40
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01E6654 (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // rbx
  __int64 v6; // r14
  char *v7; // rax
  unsigned __int64 *v8; // rbp
  char *v9; // r14
  unsigned __int64 *v10; // r12
  unsigned __int64 *v11; // r13
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  bool v22; // zf
  __int64 v24; // [rsp+20h] [rbp-58h]
  char *v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-48h]
  char v27; // [rsp+38h] [rbp-40h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h]

  v3 = a3;
  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v24 = 3LL;
  v6 = a1 - (_QWORD)a2 - (_QWORD)v3;
  v26 = v6;
  do
  {
    v7 = (char *)a2 + v6;
    v30 = 3LL;
    v25 = (char *)a2 + v6;
    v8 = v3;
    do
    {
      v9 = (char *)v8 + (_QWORD)v7;
      v10 = a2;
      v11 = v8;
      v12 = 3LL;
      do
      {
        v13 = -(__int64)*v10;
        v14 = (__int64)(*v11 ^ *v10) >> 63;
        if ( (*v10 & 0x8000000000000000uLL) == 0LL )
          v13 = *v10;
        v15 = -(__int64)*v11;
        if ( (*v11 & 0x8000000000000000uLL) == 0LL )
          v15 = *v11;
        v16 = (unsigned int)v15 * (unsigned __int64)(unsigned int)v13;
        v17 = HIDWORD(v15);
        v18 = HIDWORD(v16) + (unsigned int)v15 * HIDWORD(v13);
        v19 = v14 ^ ((unsigned int)(v18 + v13 * v17) | ((unsigned __int64)(unsigned int)((((unsigned int)v18
                                                                                         + (unsigned int)v13 * v17) >> 32)
                                                                                       + HIDWORD(v13) * v17
                                                                                       + HIDWORD(v18)) << 32));
        v20 = v19 - v14;
        if ( (_DWORD)v16 )
          v20 = v19;
        v21 = *(_QWORD *)v9 + v20;
        if ( v9 != &v27 )
          *(_QWORD *)v9 = v21;
        ++v10;
        v11 += 3;
        --v12;
      }
      while ( v12 );
      v7 = v25;
      ++v8;
      --v30;
    }
    while ( v30 );
    v6 = v26;
    a2 += 3;
    v22 = v24-- == 1;
    v3 = a3;
  }
  while ( !v22 );
  return a1;
}
