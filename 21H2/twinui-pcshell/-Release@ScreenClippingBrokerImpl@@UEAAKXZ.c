/*
 * XREFs of ?Release@ScreenClippingBrokerImpl@@UEAAKXZ @ 0x18020A1B0
 * Callers:
 *     ?Release@ScreenClippingBrokerImpl@@W7EAAKXZ @ 0x1801638B0 (-Release@ScreenClippingBrokerImpl@@W7EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ @ 0x1801638C0 (-Release@ScreenClippingBrokerImpl@@WCI@EAAKXZ.c)
 *     ?Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ @ 0x1801638D0 (-Release@ScreenClippingBrokerImpl@@WDA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ScreenClippingBrokerImpl::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(this);
}
