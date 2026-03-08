/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801D5988
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x180078A28 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800B22DC (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800E226C (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x1800EF7C8 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?Push@?$CWatermarkStack@I$0EA@$01$09@@QEAAJAEBI@Z @ 0x1801D2E68 (-Push@-$CWatermarkStack@I$0EA@$01$09@@QEAAJAEBI@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801D516C (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1801D52A8 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapBorderMode@@@Z @ 0x1801D53E4 (-Push@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapBorderM.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801D5520 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x1801D565C (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(
        CBspPreComputeHelper *this,
        CVisual **a2,
        struct CVisual *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-60h]
  _BYTE v11[64]; // [rsp+30h] [rbp-50h] BYREF
  int v12; // [rsp+70h] [rbp-10h]
  __int64 v13; // [rsp+A0h] [rbp+20h] BYREF
  struct CVisual *v14; // [rsp+B0h] [rbp+30h] BYREF

  v14 = a3;
  v12 = 0;
  CVisual::CalcTransform(a3, a2, 0LL, (bool *)&v13, (struct CMILMatrix *)v11, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v11, 0);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 106;
    goto LABEL_23;
  }
  v13 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v13);
  v6 = v4;
  if ( v4 < 0 )
  {
    v10 = 111;
    goto LABEL_23;
  }
  v7 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v14);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x72u, 0LL);
  }
  else
  {
    v4 = CMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 117;
      goto LABEL_23;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 120;
      goto LABEL_23;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 123;
      goto LABEL_23;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 126;
      goto LABEL_23;
    }
    LODWORD(v13) = 5;
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 129;
      goto LABEL_23;
    }
    LODWORD(v13) = (_DWORD)FLOAT_1_0;
    v4 = CWatermarkStack<float,64,2,10>::Push((unsigned int *)this + 64, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 132;
      goto LABEL_23;
    }
    LOBYTE(v13) = 0;
    v4 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v13);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 135;
      goto LABEL_23;
    }
    v4 = CWatermarkStack<unsigned int,64,2,10>::Push((unsigned int *)this + 80, (_DWORD *)this + 88);
    v6 = v4;
    if ( v4 < 0 )
    {
      v10 = 138;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v10, 0LL);
    }
  }
  return v6;
}
