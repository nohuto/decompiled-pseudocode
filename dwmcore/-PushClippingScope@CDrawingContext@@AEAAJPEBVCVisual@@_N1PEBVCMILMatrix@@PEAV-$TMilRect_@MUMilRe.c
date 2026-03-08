/*
 * XREFs of ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D31F4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 * Callees:
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x1800216AC (-GetTopGpuClipInScope@CScopedClipStack@@QEBAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAX_NAEBVCMILMatrix@@PEBV2@@Z @ 0x180021DC0 (-EnterClippingScope@CScopedClipStack@@QEAAX_NAEBVCMILMatrix@@PEBV2@@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B424 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ @ 0x180076110 (-FlushAllDeferredClipping@CDrawingContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

__int64 __fastcall CDrawingContext::PushClippingScope(__int64 a1, __int64 a2, char a3, char a4, struct CMILMatrix *a5)
{
  unsigned int v5; // ebx
  char v6; // si
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0;
  v6 = 0;
  if ( !a4 )
  {
    v11 = CDrawingContext::FlushAllDeferredClipping((CDrawingContext *)a1);
    v5 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xBFFu, 0LL);
      return v5;
    }
  }
  CScopedClipStack::GetTopGpuClipInScope((CScopedClipStack *)(a1 + 896), 0LL, a4 ^ 1);
  if ( a2 )
  {
    LODWORD(v16) = 4;
    *((_QWORD *)&v16 + 1) = a2;
    v13 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)(a1 + 368), &v16);
    v5 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0Du, 0LL);
      return v5;
    }
    v6 = 1;
  }
  CScopedClipStack::EnterClippingScope((CScopedClipStack *)(a1 + 896), a3, (const struct CMILMatrix *)(a1 + 96), a5);
  if ( a4 )
    *(_BYTE *)(a1 + 8170) = 0;
  if ( (v5 & 0x80000000) != 0 && v6 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)(a1 + 368), 0LL);
  return v5;
}
