/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$SquareMatrix@VCFixPred@Prediction@@$02@0@AEBV10@0@Z @ 0x1C014573C
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145CCE (--0-$SquareMatrix@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

__int64 __fastcall Prediction::operator*<Prediction::CFixPred,3>(__int64 a1, unsigned __int64 *a2, __int64 *a3)
{
  __int64 *v5; // r15
  __int64 v6; // rsi
  __int64 *v7; // rbp
  unsigned __int64 *v8; // r12
  __int64 *v9; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // r10d
  unsigned __int64 v18; // r8
  __int64 v19; // rdx
  char *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  char v27; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+20h]

  Prediction::SquareMatrix<Prediction::CFixPred,3>::SquareMatrix<Prediction::CFixPred,3>();
  v5 = a3;
  v6 = a1 - (_QWORD)a2 - (_QWORD)a3;
  v26 = 3LL;
  do
  {
    v7 = v5;
    v25 = 3LL;
    do
    {
      v8 = a2;
      v30 = 3LL;
      v9 = v7;
      do
      {
        v10 = *v8;
        v11 = *v9;
        v12 = (__int64)(*v9 ^ *v8) >> 63;
        if ( (*v8 & 0x8000000000000000uLL) != 0LL )
          v10 = -(__int64)v10;
        v13 = -v11;
        if ( v11 >= 0 )
          v13 = *v9;
        v14 = (unsigned int)v13 * (unsigned __int64)(unsigned int)v10;
        v15 = HIDWORD(v13);
        v16 = HIDWORD(v14) + (unsigned int)v13 * HIDWORD(v10);
        v17 = HIDWORD(v10) * v15;
        v18 = (unsigned int)v16 + (unsigned int)v10 * v15;
        v19 = (unsigned int)(HIDWORD(v18) + v17 + HIDWORD(v16));
        v20 = (char *)v7 + (_QWORD)a2 + v6;
        v21 = v12 ^ ((unsigned int)v18 | (unsigned __int64)(v19 << 32));
        v22 = v21 - v12;
        if ( (_DWORD)v14 )
          v22 = v21;
        v23 = *(_QWORD *)v20 + v22;
        if ( v20 != &v27 )
          *(_QWORD *)v20 = v23;
        ++v8;
        v9 += 3;
        --v30;
      }
      while ( v30 );
      ++v7;
      --v25;
    }
    while ( v25 );
    v5 = a3;
    a2 += 3;
    --v26;
  }
  while ( v26 );
  return a1;
}
