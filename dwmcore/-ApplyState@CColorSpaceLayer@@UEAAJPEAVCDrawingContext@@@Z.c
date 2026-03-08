/*
 * XREFs of ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801F01B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorSpaceLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8171);
  *((_BYTE *)a2 + 8171) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
