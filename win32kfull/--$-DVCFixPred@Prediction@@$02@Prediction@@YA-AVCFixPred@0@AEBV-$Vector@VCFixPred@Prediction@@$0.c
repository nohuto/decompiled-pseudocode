/*
 * XREFs of ??$?DVCFixPred@Prediction@@$02@Prediction@@YA?AVCFixPred@0@AEBV?$Vector@VCFixPred@Prediction@@$02@0@0@Z @ 0x1C01459BC
 * Callers:
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 * Callees:
 *     <none>
 */

char *__fastcall Prediction::operator*<Prediction::CFixPred,3>(char *a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 v3; // r15
  unsigned __int64 *v4; // r14
  __int64 v5; // r12
  __int64 v7; // rbp
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  char v19; // [rsp+28h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  v3 = a3 - (_QWORD)a2;
  v4 = a2;
  v5 = 0LL;
  v7 = 3LL;
  do
  {
    v8 = *(unsigned __int64 *)((char *)v4 + v3);
    v9 = -(__int64)*v4;
    v10 = (__int64)(v8 ^ *v4) >> 63;
    if ( (*v4 & 0x8000000000000000uLL) == 0LL )
      v9 = *v4;
    v11 = -*(__int64 *)((char *)v4 + v3);
    if ( v8 >= 0 )
      v11 = *(unsigned __int64 *)((char *)v4 + v3);
    v12 = (unsigned int)v11 * (unsigned __int64)(unsigned int)v9;
    v13 = HIDWORD(v11);
    v14 = HIDWORD(v12) + (unsigned int)v11 * HIDWORD(v9);
    v15 = v10 ^ ((unsigned int)(v14 + v9 * v13) | ((unsigned __int64)(unsigned int)((((unsigned int)v14
                                                                                    + (unsigned int)v9 * v13) >> 32)
                                                                                  + HIDWORD(v9) * v13
                                                                                  + HIDWORD(v14)) << 32));
    v16 = v15 - v10;
    if ( (_DWORD)v12 )
      v16 = v15;
    v17 = v5 + v16;
    if ( a1 != &v19 )
    {
      *(_QWORD *)a1 = v17;
      v5 = v17;
    }
    ++v4;
    --v7;
  }
  while ( v7 );
  return a1;
}
