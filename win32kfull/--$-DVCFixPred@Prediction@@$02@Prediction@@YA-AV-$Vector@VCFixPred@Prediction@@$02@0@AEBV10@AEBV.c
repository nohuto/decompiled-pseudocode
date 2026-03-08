/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01C2220
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C0145D2A (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // r15
  char *v7; // r14
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  char v19; // [rsp+50h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>(a1);
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = *(_QWORD *)&v7[v6];
    v10 = -v9;
    v11 = (__int64)(*a3 ^ v9) >> 63;
    if ( v9 >= 0 )
      v10 = *(_QWORD *)&v7[v6];
    v12 = -(__int64)*a3;
    if ( (*a3 & 0x8000000000000000uLL) == 0LL )
      v12 = *a3;
    v13 = (unsigned int)v12 * (unsigned __int64)(unsigned int)v10;
    v14 = HIDWORD(v12);
    v15 = HIDWORD(v13) + (unsigned int)v12 * HIDWORD(v10);
    v16 = v11 ^ ((unsigned int)(v15 + v10 * v14) | ((unsigned __int64)(unsigned int)((((unsigned int)v15
                                                                                     + (unsigned int)v10 * v14) >> 32)
                                                                                   + HIDWORD(v10) * v14
                                                                                   + HIDWORD(v15)) << 32));
    v17 = v16 - v11;
    if ( (_DWORD)v13 )
      v17 = v16;
    if ( v7 != &v19 )
      *(_QWORD *)v7 = v17;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  return a1;
}
