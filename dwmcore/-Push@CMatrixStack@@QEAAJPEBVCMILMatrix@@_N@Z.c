/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800B22DC
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1800B2270 (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5988 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5BD8 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x180048808 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x1800B237C (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  const struct CMILMatrix *v6; // r11
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  _BYTE v13[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+70h] [rbp-68h]
  _BYTE v15[64]; // [rsp+80h] [rbp-58h] BYREF
  int v16; // [rsp+C0h] [rbp-18h]

  if ( *(_DWORD *)this && a3 )
  {
    v14 = 0;
    v16 = 0;
    v4 = CWatermarkStack<CMILMatrix,8,2,8>::Top(this, v13);
    v7 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Du, 0LL);
    }
    else
    {
      CMILMatrix::Multiply(v6, (const struct CMILMatrix *)v13, (struct CMILMatrix *)v15);
      v8 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)v15);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x45u, 0LL);
    }
  }
  else
  {
    v11 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)a2);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x36u, 0LL);
  }
  return v7;
}
