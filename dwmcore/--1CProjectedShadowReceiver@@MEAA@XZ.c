void __fastcall CProjectedShadowReceiver::~CProjectedShadowReceiver(struct CResource **this)
{
  struct CResource *v2; // rcx

  *this = (struct CResource *)&CProjectedShadowReceiver::`vftable';
  CProjectedShadowReceiver::SetReceivingVisual((CProjectedShadowReceiver *)this, 0LL);
  CResource::UnRegisterNotifierInternal((CResource *)this, this[13]);
  Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(this + 14);
  v2 = this[9];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (this[11] - v2) & 0xFFFFFFFFFFFFFFF8uLL);
    this[9] = 0LL;
    this[10] = 0LL;
    this[11] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
