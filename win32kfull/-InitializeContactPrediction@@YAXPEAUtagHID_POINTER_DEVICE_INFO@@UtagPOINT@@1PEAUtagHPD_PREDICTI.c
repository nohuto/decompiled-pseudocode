/*
 * XREFs of ?InitializeContactPrediction@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PEAUtagHPD_PREDICTION_INFO@@PEAU2@3@Z @ 0x1C01C2BA0
 * Callers:
 *     DoPrediction @ 0x1C0146050 (DoPrediction.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z @ 0x1C01C2508 (-Filter@tagRlsFilter@Prediction@@QEAA-AVCFixPred@2@V32@0PEAH@Z.c)
 *     ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z @ 0x1C01C40C0 (-vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z.c)
 */

void __fastcall InitializeContactPrediction(
        struct tagHID_POINTER_DEVICE_INFO *a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagHPD_PREDICTION_INFO *a4,
        struct tagPOINT *a5,
        struct tagPOINT *a6)
{
  __int128 v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v15[2]; // [rsp+38h] [rbp-10h] BYREF
  struct tagHID_POINTER_DEVICE_INFO *v16; // [rsp+90h] [rbp+48h] BYREF
  struct tagPOINT v17; // [rsp+98h] [rbp+50h] BYREF
  __int64 v18; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v19; // [rsp+A8h] [rbp+60h] BYREF

  v18 = (__int64)a3;
  v17 = a2;
  v16 = a1;
  memset_0(a4, 0, 0x1B0uLL);
  memset_0((char *)a4 + 864, 0, 0x1B0uLL);
  memset_0((char *)a4 + 432, 0, 0x1B0uLL);
  memset_0((char *)a4 + 1296, 0, 0x1B0uLL);
  v16 = (struct tagHID_POINTER_DEVICE_INFO *)gPredictorRLSLambdaLearningRate;
  v19 = gPredictorRLSLambdaMax;
  v14 = gPredictorRLSLambdaMin;
  v15[0] = gPredictorRLSDelta;
  Prediction::tagRlsFilter::vInit(a4, v15, &v14, &v19, &v16);
  v9 = 0LL;
  *((_OWORD *)a4 + 108) = 0LL;
  *((_OWORD *)a4 + 109) = 0LL;
  *((_OWORD *)a4 + 116) = 0LL;
  if ( (struct tagHID_POINTER_DEVICE_INFO **)((char *)a4 + 1856) != &v16 )
    *((_QWORD *)a4 + 232) = gPredictorRLSExpoSmoothAlpha;
  v10 = (__int64)a3.x << 32;
  *((_QWORD *)a4 + 268) = v10;
  *((_QWORD *)a4 + 272) = v10;
  v16 = (struct tagHID_POINTER_DEVICE_INFO *)gPredictorRLSLambdaLearningRate;
  v19 = gPredictorRLSLambdaMax;
  v15[0] = gPredictorRLSLambdaMin;
  v14 = gPredictorRLSDelta;
  *((_QWORD *)a4 + 276) = 0LL;
  *(double *)&v9 = Prediction::tagRlsFilter::vInit((char *)a4 + 864, &v14, v15, &v19, &v16);
  *((_OWORD *)a4 + 112) = v9;
  *((_OWORD *)a4 + 113) = v9;
  *((_OWORD *)a4 + 118) = 0LL;
  if ( (struct tagHID_POINTER_DEVICE_INFO **)((char *)a4 + 1888) != &v16 )
    *((_QWORD *)a4 + 236) = gPredictorRLSExpoSmoothAlpha;
  v11 = (__int64)a2.x << 32;
  *((_QWORD *)a4 + 270) = v11;
  *((_QWORD *)a4 + 274) = v11;
  v16 = (struct tagHID_POINTER_DEVICE_INFO *)gPredictorRLSLambdaLearningRate;
  v19 = gPredictorRLSLambdaMax;
  v15[0] = gPredictorRLSLambdaMin;
  v14 = gPredictorRLSDelta;
  *((_QWORD *)a4 + 278) = 0LL;
  *(double *)&v9 = Prediction::tagRlsFilter::vInit((char *)a4 + 432, &v14, v15, &v19, &v16);
  *((_OWORD *)a4 + 110) = v9;
  *((_OWORD *)a4 + 111) = v9;
  *((_OWORD *)a4 + 117) = 0LL;
  if ( (struct tagHID_POINTER_DEVICE_INFO **)((char *)a4 + 1872) != &v16 )
    *((_QWORD *)a4 + 234) = gPredictorRLSExpoSmoothAlpha;
  v12 = (__int64)SHIDWORD(v18) << 32;
  *((_QWORD *)a4 + 269) = v12;
  *((_QWORD *)a4 + 273) = v12;
  v18 = gPredictorRLSLambdaLearningRate;
  v16 = (struct tagHID_POINTER_DEVICE_INFO *)gPredictorRLSLambdaMax;
  v19 = gPredictorRLSLambdaMin;
  v15[0] = gPredictorRLSDelta;
  *((_QWORD *)a4 + 277) = 0LL;
  *(double *)&v9 = Prediction::tagRlsFilter::vInit((char *)a4 + 1296, v15, &v19, &v16, &v18);
  *((_OWORD *)a4 + 114) = v9;
  *((_OWORD *)a4 + 115) = v9;
  *((_OWORD *)a4 + 119) = 0LL;
  if ( (__int64 *)((char *)a4 + 1904) != &v18 )
    *((_QWORD *)a4 + 238) = gPredictorRLSExpoSmoothAlpha;
  v13 = (__int64)v17.y << 32;
  *((_QWORD *)a4 + 271) = v13;
  *((_QWORD *)a4 + 275) = v13;
  *((_QWORD *)a4 + 279) = 0LL;
  *((_QWORD *)a4 + 262) = 0LL;
  *((_QWORD *)a4 + 263) = 0LL;
  *((_QWORD *)a4 + 264) = 0LL;
  *((_QWORD *)a4 + 265) = 0LL;
  memset_0((char *)a4 + 1924, 0, 0x54uLL);
  *((_DWORD *)a4 + 480) = 3;
  memset_0((char *)a4 + 2012, 0, 0x54uLL);
  *((_DWORD *)a4 + 502) = 3;
  LODWORD(v18) = 0;
  v17 = 0LL;
  v16 = 0LL;
  Prediction::tagRlsFilter::Filter(a4, &v19, (__int64)&v16, (__int64)&v17, &v18);
  v17 = 0LL;
  v16 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 54, &v19, (__int64)&v16, (__int64)&v17, &v18);
  v17 = 0LL;
  v16 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 108, &v19, (__int64)&v16, (__int64)&v17, &v18);
  v17 = 0LL;
  v16 = 0LL;
  Prediction::tagRlsFilter::Filter((_QWORD *)a4 + 162, &v19, (__int64)&v16, (__int64)&v17, &v18);
  *a5 = a2;
  *a6 = a3;
}
