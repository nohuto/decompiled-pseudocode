__int64 __fastcall CConversionSwapChain::GetDirtyRects(__int64 a1, _QWORD *a2)
{
  return CRegion::GetRectangles((FastRegion::Internal::CRgnData **)(a1 + 672), a2);
}
