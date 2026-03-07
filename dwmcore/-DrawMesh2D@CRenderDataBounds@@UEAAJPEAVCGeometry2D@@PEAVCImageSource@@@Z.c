__int64 __fastcall CRenderDataBounds::DrawMesh2D(
        CRenderDataBounds *this,
        struct CGeometry2D *a2,
        struct CImageSource *a3)
{
  __int64 v4; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v4 = *(_QWORD *)a2;
    v6 = 0LL;
    (*(void (__fastcall **)(struct CGeometry2D *, __int128 *))(v4 + 200))(a2, &v6);
    CRenderDataBounds::AddBounds((__int64)this, (struct MilRectF *)&v6);
  }
  return 0LL;
}
