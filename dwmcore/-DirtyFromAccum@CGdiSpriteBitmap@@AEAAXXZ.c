void __fastcall CGdiSpriteBitmap::DirtyFromAccum(CGdiSpriteBitmap *this)
{
  HGDIOBJ ho; // [rsp+20h] [rbp-78h] BYREF
  int *v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+38h] [rbp-60h] BYREF

  ho = 0LL;
  if ( (int)CRedirectedGDISurface::GetDirtyRegionFromAccum(*((CRedirectedGDISurface **)this + 15), (HRGN *)&ho) >= 0 )
  {
    if ( !ho )
      return;
    v4 = 0;
    v3 = &v4;
    CRegion::SetHRGN((CRegion *)&v3, (HRGN)ho);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v3, *((_BYTE *)this + 144));
    *((_BYTE *)this + 144) = 0;
    FastRegion::CRegion::FreeMemory((void **)&v3);
  }
  if ( ho )
    DeleteObject(ho);
}
