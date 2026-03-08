/*
 * XREFs of ?PushClipBoundsToScope@CScopedClipStack@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021CC0
 * Callers:
 *     ?PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021BF8 (-PushClipBounds@CDrawingContext@@AEAAJPEBVCVisual@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_.c)
 * Callees:
 *     ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18001C994 (-Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180021D18 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ @ 0x1800DF434 (-HasClipBoundsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

__int64 __fastcall CScopedClipStack::PushClipBoundsToScope(CScopedClipStack *a1)
{
  enum D2D1_ANTIALIAS_MODE v2; // r8d
  const struct MilRectF *v3; // r9
  CD2DClipStack *v4; // r10
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v9; // eax
  unsigned int v10; // ecx

  if ( CScopedClipStack::HasClipBoundsInScope(a1) )
  {
    v9 = CD2DClipStack::Push(v4, v3, v2);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D7u, 0LL);
      return v7;
    }
  }
  else
  {
    v5 = CD2DClipStack::PushExact(v4, v3, v2);
    v7 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1D3u, 0LL);
      return v7;
    }
  }
  ++*(_QWORD *)(*((_QWORD *)a1 + 1) - 168LL);
  return v7;
}
