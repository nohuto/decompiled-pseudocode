/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AV?$Vector@VCFixPred@Prediction@@$02@0@AEBV10@AEBVCFixPred@0@@Z @ 0x1C01EB808
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01EC2B4 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     ??0?$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ @ 0x1C01EBDE8 (--0-$Vector@VCFixPred@Prediction@@$02@Prediction@@QEAA@XZ.c)
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r14
  char *v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  char v15; // [rsp+50h] [rbp+8h] BYREF

  Prediction::Vector<Prediction::CFixPred,3>::Vector<Prediction::CFixPred,3>();
  v6 = a2 - (_QWORD)a1;
  v7 = a1;
  v8 = 3LL;
  do
  {
    v9 = *(_QWORD *)&v7[v6];
    v10 = *a3;
    v11 = (*a3 ^ v9) >> 63;
    if ( v9 < 0 )
      v9 = -v9;
    if ( v10 < 0 )
      v10 = -v10;
    v12 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v9;
    v13 = (v11 ^ ((unsigned int)(HIDWORD(v12) + v10 * HIDWORD(v9) + v9 * HIDWORD(v10)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v12) + v10 * HIDWORD(v9)) + (unsigned int)v9 * HIDWORD(v10)) >> 32) + HIDWORD(v9) * HIDWORD(v10) + ((HIDWORD(v12) + (unsigned int)v10 * HIDWORD(v9)) >> 32)) << 32)))
        - v11;
    if ( (_DWORD)v12 )
      v13 = v11 ^ ((unsigned int)(HIDWORD(v12) + v10 * HIDWORD(v9) + v9 * HIDWORD(v10)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v12) + v10 * HIDWORD(v9)) + (unsigned int)v9 * HIDWORD(v10)) >> 32) + HIDWORD(v9) * HIDWORD(v10) + ((HIDWORD(v12) + (unsigned int)v10 * HIDWORD(v9)) >> 32)) << 32));
    if ( v7 != &v15 )
      *(_QWORD *)v7 = v13;
    v7 += 8;
    --v8;
  }
  while ( v8 );
  return a1;
}
