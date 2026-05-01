/*
 * XREFs of ?Release@CImmersiveWindowFactory@@UEAAKXZ @ 0x1800821A0
 * Callers:
 *     ?Release@CImmersiveWindowFactory@@W7EAAKXZ @ 0x180172270 (-Release@CImmersiveWindowFactory@@W7EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WDA@EAAKXZ @ 0x180172280 (-Release@CImmersiveWindowFactory@@WDA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WEI@EAAKXZ @ 0x180172290 (-Release@CImmersiveWindowFactory@@WEI@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WFA@EAAKXZ @ 0x1801722A0 (-Release@CImmersiveWindowFactory@@WFA@EAAKXZ.c)
 *     ?Release@CImmersiveWindowFactory@@WKI@EAAKXZ @ 0x1801722B0 (-Release@CImmersiveWindowFactory@@WKI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CImmersiveWindowFactory::Release(CImmersiveWindowFactory *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveWindowFactoryBase>::Release(this);
}
