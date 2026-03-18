/*
 * XREFs of ?Smooth@tagExpoSmoother@Prediction@@QEAA?AVCFixPred@2@V32@@Z @ 0x1C01E7A30
 * Callers:
 *     ?UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01E7BC0 (-UpdateContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_I.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall Prediction::tagExpoSmoother::Smooth(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // r14
  char *v4; // r12
  __int64 v5; // rbp
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r10
  __int64 v22; // r9
  unsigned __int64 v23; // rdi
  unsigned int v24; // kr00_4
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 *result; // rax
  char v29; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = (char *)(a1 + 1);
  v5 = a1[1];
  v8 = 0x100000000LL - *a1;
  v9 = -v5;
  v10 = (v8 ^ v5) >> 63;
  if ( v5 >= 0 )
    v9 = a1[1];
  v11 = v3 - 0x100000000LL;
  if ( v8 >= 0 )
    v11 = v8;
  v12 = (unsigned int)v11 * (unsigned __int64)(unsigned int)v9;
  v13 = HIDWORD(v11);
  v14 = HIDWORD(v12) + (unsigned int)v11 * HIDWORD(v9);
  v15 = *a3;
  v16 = v10 ^ ((unsigned int)(v14 + v9 * v13) | ((unsigned __int64)(unsigned int)((((unsigned int)v14
                                                                                  + (unsigned int)v9 * v13) >> 32)
                                                                                + HIDWORD(v9) * v13
                                                                                + HIDWORD(v14)) << 32));
  v17 = v16 - v10;
  if ( (_DWORD)v12 )
    v17 = v16;
  v18 = -v15;
  v19 = (v3 ^ *a3) >> 63;
  if ( v15 >= 0 )
    v18 = *a3;
  v20 = -v3;
  v21 = v18;
  v22 = (unsigned int)v18;
  if ( v3 >= 0 )
    v20 = v3;
  v24 = v18;
  v23 = (unsigned int)v20 * (unsigned __int64)(unsigned int)v18;
  v25 = v19 ^ ((unsigned int)(((v18 * (unsigned int)v20) >> 32) + v18 * HIDWORD(v20)) | ((unsigned __int64)(unsigned int)(((((v18 * (unsigned int)v20) >> 32) + (unsigned int)v18 * HIDWORD(v20)) >> 32) + HIDWORD(v18) * HIDWORD(v20) + ((HIDWORD(v23) + (unsigned int)v20 * HIDWORD(v18)) >> 32)) << 32));
  if ( v4 != &v29 )
  {
    v26 = v25 - v19;
    if ( (_DWORD)v23 )
      v26 = v19 ^ ((unsigned int)(((__PAIR64__(HIDWORD(v21), v24) * (unsigned int)v20) >> 32) + v22 * HIDWORD(v20)) | ((unsigned __int64)(unsigned int)(((((__PAIR64__(HIDWORD(v21), v24) * (unsigned int)v20) >> 32) + v22 * HIDWORD(v20)) >> 32) + HIDWORD(v21) * HIDWORD(v20) + ((HIDWORD(v23) + (unsigned int)v20 * HIDWORD(v21)) >> 32)) << 32));
    v27 = v17 + v26;
    *(_QWORD *)v4 = v27;
    v5 = v27;
  }
  result = a2;
  *a2 = v5;
  return result;
}
