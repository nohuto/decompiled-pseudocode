const struct DMMVIDPNSOURCEMODE *__fastcall DMMVIDPNSOURCEMODESET::FindBestMatch(
        DMMVIDPNSOURCEMODESET *this,
        int a2,
        int a3,
        enum _D3DDDIFORMAT a4,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a5)
{
  DMMVIDPNSOURCEMODESET *v6; // rbx
  struct DMMVIDPNSOURCEMODE *NextMode; // rbx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  UINT cy; // edx

  v6 = (DMMVIDPNSOURCEMODESET *)*((_QWORD *)this + 6);
  if ( v6 == (DMMVIDPNSOURCEMODESET *)((char *)this + 48) )
    return 0LL;
  NextMode = (DMMVIDPNSOURCEMODESET *)((char *)v6 - 8);
  if ( !NextMode )
    return 0LL;
  while ( 1 )
  {
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode);
    if ( *((_DWORD *)NextMode + 18) == a5 && GraphicsInfo->PrimSurfSize.cx == a2 )
    {
      cy = GraphicsInfo->PrimSurfSize.cy;
      if ( cy == a3
        && GraphicsInfo->PixelFormat == a4
        && GraphicsInfo->VisibleRegionSize.cx == GraphicsInfo->PrimSurfSize.cx
        && GraphicsInfo->VisibleRegionSize.cy == cy )
      {
        break;
      }
    }
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(this, NextMode);
    if ( !NextMode )
      return 0LL;
  }
  return NextMode;
}
