/*
 * XREFs of ?Release@CSplashScreen@@UEAAKXZ @ 0x1801EFF30
 * Callers:
 *     ?Release@CSplashScreen@@W7EAAKXZ @ 0x180163000 (-Release@CSplashScreen@@W7EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBA@EAAKXZ @ 0x180163010 (-Release@CSplashScreen@@WBA@EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBI@EAAKXZ @ 0x180163020 (-Release@CSplashScreen@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(this);
}
