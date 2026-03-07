__int64 __fastcall CGeometry2DGroup::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 168) |= 0xFu;
  CGeometry2D::FreeCaches((void **)a1);
  return 1LL;
}
