/*
 * XREFs of ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021D18
 * Callers:
 *     ?DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z @ 0x1800219A0 (-DuplicateScopeToClipStack@CScopedClipStack@@QEBAXPEAV1@AEBVCMILMatrix@@@Z.c)
 *     ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021CC0 (-PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18005CF00 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRect.c)
 * Callees:
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180021D80 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180074368 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DClipStack::PushExact(
        CD2DClipStack *this,
        const struct MilRectF *a2,
        enum D2D1_ANTIALIAS_MODE a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
    RoundWithHalvesDown(a2, &v5);
  else
    v5 = *(_OWORD *)a2;
  return CBaseClipStack::PushExact(this, (const struct MilRectF *)&v5);
}
