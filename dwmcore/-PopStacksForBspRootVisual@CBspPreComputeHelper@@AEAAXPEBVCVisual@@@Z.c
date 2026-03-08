/*
 * XREFs of ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1801D50B8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z @ 0x1800117C0 (-Pop@-$CWatermarkStack@M$0EA@$01$09@@QEAA_NPEAM@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVisibility@@@Z @ 0x1801AE27C (-Pop@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBackfaceVis.c)
 *     ?Pop@?$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z @ 0x1801D2DE0 (-Pop@-$CWatermarkStack@I$0EA@$01$09@@QEAA_NPEAI@Z.c)
 *     ?Pop@?$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z @ 0x1801D2DF8 (-Pop@-$CWatermarkStack@_N$0EA@$01$09@@QEAA_NPEA_N@Z.c)
 *     ??$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z @ 0x1801D4668 (--$ReleaseInterface@VCBspNode@@@@YAXAEAPEAVCBspNode@@@Z.c)
 *     ?Pop@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z @ 0x1801D4F88 (-Pop@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAA_NPEAPEAVCBspNode@@@Z.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x1801D4FB4 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1801D4FCC (-Pop@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmap.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMode@@@Z @ 0x1801D4FE4 (-Pop@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilCompositingMod.c)
 */

void __fastcall CBspPreComputeHelper::PopStacksForBspRootVisual(CBspPreComputeHelper *this, const struct CVisual *a2)
{
  __int64 v2; // r8
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  int *v8; // r8
  int v9; // eax
  int v10; // eax
  int v11; // eax
  const struct CVisual *v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = a2;
  CWatermarkStack<unsigned int,64,2,10>::Pop((int *)this + 80);
  CWatermarkStack<bool,64,2,10>::Pop((int *)(v2 + 288));
  CWatermarkStack<float,64,2,10>::Pop((_DWORD *)(v3 + 256));
  CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Pop((int *)(v4 + 224));
  CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((int *)(v5 + 192));
  CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Pop((int *)(v6 + 160));
  CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Pop((int *)(v7 + 128));
  v9 = v8[24];
  if ( v9 )
    v8[24] = v9 - 1;
  v10 = v8[16];
  if ( v10 )
    v8[16] = v10 - 1;
  v11 = v8[8];
  if ( v11 )
    v8[8] = v11 - 1;
  if ( CWatermarkStack<CBspNode *,64,2,10>::Pop(v8, &v12) )
    ReleaseInterface<CBspNode>((__int64 *)&v12);
}
