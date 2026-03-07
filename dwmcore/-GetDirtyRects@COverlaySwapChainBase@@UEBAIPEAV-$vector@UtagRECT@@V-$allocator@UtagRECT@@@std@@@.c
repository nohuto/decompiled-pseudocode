__int64 __fastcall COverlaySwapChainBase::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::Internal::CRgnData **)(a1 + 136), a2);
}
