__int64 __fastcall CRenderDataBounds::DrawGeometry(
        CRenderDataBounds *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v5 = 0LL;
    CGeometry::GetBoundsSafe(a3, 0LL, &v5);
    CRenderDataBounds::AddBounds(this, &v5);
  }
  return 0LL;
}
