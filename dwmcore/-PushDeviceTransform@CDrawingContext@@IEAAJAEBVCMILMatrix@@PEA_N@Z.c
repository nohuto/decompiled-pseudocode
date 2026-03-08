/*
 * XREFs of ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180019620
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180019550 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x180019744 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800B2368 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

__int64 __fastcall CDrawingContext::PushDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  unsigned int v9; // ecx
  bool *v10; // r8
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  _OWORD v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v16; // [rsp+70h] [rbp-68h]
  _BYTE v17[64]; // [rsp+80h] [rbp-58h] BYREF
  int v18; // [rsp+C0h] [rbp-18h]

  v3 = *(_OWORD *)a2;
  v18 = 0;
  v5 = *((_OWORD *)a2 + 1);
  v15[0] = v3;
  v7 = *((_OWORD *)a2 + 2);
  v15[1] = v5;
  v8 = *((_OWORD *)a2 + 3);
  v15[2] = v7;
  v15[3] = v8;
  v16 = *((_DWORD *)a2 + 16);
  if ( CMILMatrix::Invert((CMILMatrix *)v15) )
  {
    CDrawingContext::UpdateDeviceTransform(this, a2, v10);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v17);
    CMILMatrix::Multiply((CMILMatrix *)v17, a2);
    v11 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v17, 0, 0);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x12F2u, 0LL);
  }
  else
  {
    v13 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003304441, 0x12E5u, 0LL);
  }
  return v13;
}
