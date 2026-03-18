/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01E712C
 * Callers:
 *     DoPrediction @ 0x1C01E8CB0 (DoPrediction.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01E6A88 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01E8BCC (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int64 v9; // rax
  __int128 v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-10h] BYREF
  __int64 v20; // [rsp+90h] [rbp+48h] BYREF
  struct tagPOINT v21; // [rsp+98h] [rbp+50h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+60h] BYREF

  v22 = (__int64)a3;
  v21 = a2;
  memset(a4, 0, 0x1B0uLL);
  memset((char *)a4 + 864, 0, 0x1B0uLL);
  memset((char *)a4 + 432, 0, 0x1B0uLL);
  memset((char *)a4 + 1296, 0, 0x1B0uLL);
  v20 = gPredictorRLSLambdaLearningRate;
  v23 = gPredictorRLSLambdaMax;
  v18 = gPredictorRLSLambdaMin;
  v19[0] = gPredictorRLSDelta;
  Prediction::tagRlsFilter::vInit(a4, v19, &v18, &v23, &v20);
  v9 = gPredictorRLSExpoSmoothAlpha;
  v10 = 0LL;
  *((_OWORD *)a4 + 108) = 0LL;
  *((_OWORD *)a4 + 109) = 0LL;
  *((_OWORD *)a4 + 116) = 0LL;
  if ( (__int64 *)((char *)a4 + 1856) != &v20 )
    *((_QWORD *)a4 + 232) = v9;
  v11 = (__int64)a3.x << 32;
  *((_QWORD *)a4 + 268) = v11;
  *((_QWORD *)a4 + 272) = v11;
  v20 = gPredictorRLSLambdaLearningRate;
  v23 = gPredictorRLSLambdaMax;
  v19[0] = gPredictorRLSLambdaMin;
  v18 = gPredictorRLSDelta;
  *((_QWORD *)a4 + 276) = 0LL;
  *(double *)&v10 = Prediction::tagRlsFilter::vInit((char *)a4 + 864, &v18, v19, &v23, &v20);
  v12 = gPredictorRLSExpoSmoothAlpha;
  *((_OWORD *)a4 + 112) = v10;
  *((_OWORD *)a4 + 113) = v10;
  *((_OWORD *)a4 + 118) = 0LL;
  if ( (__int64 *)((char *)a4 + 1888) != &v20 )
    *((_QWORD *)a4 + 236) = v12;
  v13 = (__int64)a2.x << 32;
  *((_QWORD *)a4 + 270) = v13;
  *((_QWORD *)a4 + 274) = v13;
  v20 = gPredictorRLSLambdaLearningRate;
  v23 = gPredictorRLSLambdaMax;
  v19[0] = gPredictorRLSLambdaMin;
  v18 = gPredictorRLSDelta;
  *((_QWORD *)a4 + 278) = 0LL;
  *(double *)&v10 = Prediction::tagRlsFilter::vInit((char *)a4 + 432, &v18, v19, &v23, &v20);
  v14 = gPredictorRLSExpoSmoothAlpha;
  *((_OWORD *)a4 + 110) = v10;
  *((_OWORD *)a4 + 111) = v10;
  *((_OWORD *)a4 + 117) = 0LL;
  if ( (__int64 *)((char *)a4 + 1872) != &v20 )
    *((_QWORD *)a4 + 234) = v14;
  v15 = (__int64)SHIDWORD(v22) << 32;
  *((_QWORD *)a4 + 269) = v15;
  *((_QWORD *)a4 + 273) = v15;
  v22 = gPredictorRLSLambdaLearningRate;
  v20 = gPredictorRLSLambdaMax;
  v23 = gPredictorRLSLambdaMin;
  v19[0] = gPredictorRLSDelta;
  *((_QWORD *)a4 + 277) = 0LL;
  *(double *)&v10 = Prediction::tagRlsFilter::vInit((char *)a4 + 1296, v19, &v23, &v20, &v22);
  v16 = gPredictorRLSExpoSmoothAlpha;
  *((_OWORD *)a4 + 114) = v10;
  *((_OWORD *)a4 + 115) = v10;
  *((_OWORD *)a4 + 119) = 0LL;
  if ( (__int64 *)((char *)a4 + 1904) != &v22 )
    *((_QWORD *)a4 + 238) = v16;
  v17 = (__int64)v21.y << 32;
  *((_QWORD *)a4 + 271) = v17;
  *((_QWORD *)a4 + 275) = v17;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset((char *)a4 + 1924, 0, 0x54uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset((char *)a4 + 2012, 0, 0x54uLL);
  *((_DWORD *)a4 + 502) = 3;
  LODWORD(v22) = 0;
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter(a4, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v23, (__int64)&v20, (__int64)&v21, &v22);
  v21 = 0LL;
  v20 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v23, (__int64)&v20, (__int64)&v21, &v22);
  *a5 = a2;
  *a6 = a3;
}
