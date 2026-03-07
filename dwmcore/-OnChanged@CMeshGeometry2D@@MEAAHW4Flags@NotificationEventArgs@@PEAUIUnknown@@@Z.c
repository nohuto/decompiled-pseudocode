__int64 __fastcall CMeshGeometry2D::OnChanged(__int64 a1)
{
  *(_DWORD *)(a1 + 160) |= 3u;
  CGeometry2D::FreeCaches((void **)a1);
  return 1LL;
}
