__int64 __fastcall CColorSpaceLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  *((_BYTE *)this + 120) = *((_BYTE *)a2 + 8171);
  *((_BYTE *)a2 + 8171) = 0;
  return CExternalLayer::ApplyState(this, a2);
}
