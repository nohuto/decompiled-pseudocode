/*
 * XREFs of ??1?$ComPtr@VAppViewIconFactory@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AAB14
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___&_IApplicationViewIconLoader___&__::_1_::dtor$0 @ 0x1803A93A5 (_wil--MakeAndInitializeOrThrow_AppViewIconFactory_IApplicationView___-_IApplicationViewIconLoade.c)
 *     _AppViewIconFactory::CreateInstance_::_1_::dtor$0 @ 0x1803AC139 (_AppViewIconFactory--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconFactory>::~ComPtr<AppViewIconFactory>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconFactory>::InternalRelease(a1);
}
