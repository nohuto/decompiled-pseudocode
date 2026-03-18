/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C016BDD2
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 *v4; // r14
  __int64 v6; // rbp
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  char v18; // [rsp+20h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a3 - (_QWORD)a2;
  v4 = a2;
  v6 = 3LL;
  do
  {
    v7 = *(unsigned __int64 *)((char *)v4 + v3);
    v8 = -(__int64)*v4;
    v9 = (__int64)(v7 ^ *v4) >> 63;
    if ( (*v4 & 0x8000000000000000uLL) == 0LL )
      v8 = *v4;
    v10 = -*(__int64 *)((char *)v4 + v3);
    if ( v7 >= 0 )
      v10 = *(unsigned __int64 *)((char *)v4 + v3);
    v11 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v8;
    v12 = HIDWORD(v10);
    v13 = HIDWORD(v11) + (unsigned int)v10 * HIDWORD(v8);
    v14 = v9 ^ ((unsigned int)(v13 + v8 * v12) | ((unsigned __int64)(unsigned int)((((unsigned int)v13
                                                                                   + (unsigned int)v8 * v12) >> 32)
                                                                                 + HIDWORD(v8) * v12
                                                                                 + HIDWORD(v13)) << 32));
    v15 = v14 - v9;
    if ( (_DWORD)v11 )
      v15 = v14;
    v16 = *(_QWORD *)a1 + v15;
    if ( a1 != &v18 )
      *(_QWORD *)a1 = v16;
    ++v4;
    --v6;
  }
  while ( v6 );
  return a1;
}
