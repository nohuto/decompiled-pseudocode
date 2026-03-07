void __fastcall CAtlasTexture::~CAtlasTexture(CAtlasTexture *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CAtlasTexture::`vftable';
  CAtlasTexture::DestroyResources(this);
  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    operator delete(v2);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease((char *)this + 8);
}
