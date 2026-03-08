/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01C2F7C
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C3108 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r12
  char *v4; // r14
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  __int64 *result; // rax
  char v23; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v5 = a1[1];
  v6 = 0x100000000LL - *a1;
  v7 = (v6 ^ v5) >> 63;
  v9 = v5;
  if ( v5 < 0 )
    v5 = -v5;
  v10 = v3 - 0x100000000LL;
  if ( v6 >= 0 )
    v10 = v6;
  v11 = (unsigned int)v10 * (unsigned __int64)(unsigned int)v5;
  v12 = *a3;
  v13 = (v7 ^ ((unsigned int)(HIDWORD(v11) + v10 * HIDWORD(v5) + v5 * HIDWORD(v10)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v11) + v10 * HIDWORD(v5)) + (unsigned int)v5 * HIDWORD(v10)) >> 32) + HIDWORD(v5) * HIDWORD(v10) + ((HIDWORD(v11) + (unsigned int)v10 * HIDWORD(v5)) >> 32)) << 32)))
      - v7;
  if ( (_DWORD)v11 )
    v13 = v7 ^ ((unsigned int)(HIDWORD(v11) + v10 * HIDWORD(v5) + v5 * HIDWORD(v10)) | ((unsigned __int64)(unsigned int)((((unsigned int)(HIDWORD(v11) + v10 * HIDWORD(v5)) + (unsigned int)v5 * HIDWORD(v10)) >> 32) + HIDWORD(v5) * HIDWORD(v10) + ((HIDWORD(v11) + (unsigned int)v10 * HIDWORD(v5)) >> 32)) << 32));
  v14 = -v12;
  v15 = (v3 ^ *a3) >> 63;
  if ( v12 >= 0 )
    v14 = *a3;
  v16 = -v3;
  if ( v3 >= 0 )
    v16 = v3;
  v17 = (unsigned int)v16 * (unsigned __int64)(unsigned int)v14;
  v18 = HIDWORD(v16);
  v19 = HIDWORD(v17) + (unsigned int)v16 * HIDWORD(v14);
  v20 = v15 ^ ((unsigned int)(v19 + v14 * v18) | ((unsigned __int64)(unsigned int)((((unsigned int)v19
                                                                                   + (unsigned int)v14 * v18) >> 32)
                                                                                 + HIDWORD(v14) * v18
                                                                                 + HIDWORD(v19)) << 32));
  if ( v4 != &v23 )
  {
    v21 = v20 - v15;
    if ( (_DWORD)v17 )
      v21 = v20;
    v9 = v13 + v21;
    *(_QWORD *)v4 = v9;
  }
  result = a2;
  *a2 = v9;
  return result;
}
