__int64 __fastcall CGdiSpriteBitmap::CreateBitmap(CRedirectedGDISurface **this, enum DXGI_FORMAT a2)
{
  unsigned int v3; // ebx
  int v4; // esi
  enum DXGI_FORMAT v5; // edx
  int v6; // esi
  int DeviceBitmap; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int SectionBitmap; // eax
  unsigned int v15; // ecx
  unsigned int v16; // [rsp+50h] [rbp-28h] BYREF
  struct _LUID v17; // [rsp+58h] [rbp-20h] BYREF
  void *v18; // [rsp+60h] [rbp-18h] BYREF
  void *v19; // [rsp+68h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+28h] BYREF
  enum DXGI_FORMAT v21; // [rsp+A8h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+B0h] [rbp+38h] BYREF
  int v23; // [rsp+B8h] [rbp+40h] BYREF

  v21 = a2;
  v3 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)this);
  if ( (int)CRedirectedGDISurface::GetSurfaceData(
              this[15],
              (enum _RedirectGDISurfaceRedirStyle *)&v23,
              &v22,
              &v20,
              &v16,
              &v19,
              &v17,
              &v18,
              &v21) < 0 )
    goto LABEL_10;
  v4 = v23;
  if ( !v23 )
    goto LABEL_10;
  v5 = v21;
  *((_DWORD *)this + 108) = v16;
  CGdiSpriteBitmap::UpdatePixelFormat((CGdiSpriteBitmap *)this, v5);
  v6 = v4 - 1;
  if ( !v6 )
  {
    CGdiSpriteBitmap::UnRegisterWithSurfaceManager((CGdiSpriteBitmap *)this);
    SectionBitmap = CGdiSpriteBitmap::CreateSectionBitmap((CGdiSpriteBitmap *)this, v19, v22, v20);
    v3 = SectionBitmap;
    if ( SectionBitmap < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, SectionBitmap, 0xDFu, 0LL);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
  if ( v6 != 1 )
  {
LABEL_8:
    if ( this[55] )
    {
      v11 = CGdiSpriteBitmap::RegisterForSignaling((CGdiSpriteBitmap *)this);
      v3 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x101u, 0LL);
    }
    goto LABEL_10;
  }
  DeviceBitmap = CGdiSpriteBitmap::CreateDeviceBitmap((CGdiSpriteBitmap *)this, v18, v17, v22, v20);
  v3 = DeviceBitmap;
  if ( DeviceBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DeviceBitmap, 0xEBu, 0LL);
    goto LABEL_10;
  }
  if ( this[55] )
  {
    v9 = CGdiSpriteBitmap::RegisterWithSurfaceManager((CGdiSpriteBitmap *)this);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xF4u, 0LL);
      goto LABEL_10;
    }
    goto LABEL_8;
  }
LABEL_10:
  CGdiSpriteBitmap::OnMarginsChanged((CGdiSpriteBitmap *)this);
  return v3;
}
