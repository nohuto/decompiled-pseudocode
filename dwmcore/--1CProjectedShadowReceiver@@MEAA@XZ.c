/*
 * XREFs of ??1CProjectedShadowReceiver@@MEAA@XZ @ 0x180004234
 * Callers:
 *     ??_ECProjectedShadowReceiver@@MEAAPEAXI@Z @ 0x1800041F0 (--_ECProjectedShadowReceiver@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x180004334 (-SetReceivingVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800FE6F4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

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
