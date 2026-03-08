/*
 * XREFs of ?PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021BF8
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021CC0 (-PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x18005B424 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushClipBounds(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CShape *a3,
        const struct CMILMatrix *a4,
        enum D2D1_ANTIALIAS_MODE a5)
{
  char *v5; // rdi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  unsigned int v16; // ecx
  __int64 v18; // r8
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF

  v5 = (char *)this + 368;
  *((_QWORD *)&v19 + 1) = a2;
  LODWORD(v19) = 3;
  v9 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((char *)this + 368, &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC92u, 0LL);
    return v11;
  }
  v12 = *(_QWORD *)a3;
  v19 = 0LL;
  v13 = (*(__int64 (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v12 + 48))(
          a3,
          &v19,
          a4);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC98u, 0LL);
    goto LABEL_7;
  }
  v15 = CScopedClipStack::PushClipBoundsToScope((char *)this + 896, &v19, (unsigned int)a5);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC9Au, 0LL);
LABEL_7:
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop(v5, 0LL, v18);
  }
  return v11;
}
