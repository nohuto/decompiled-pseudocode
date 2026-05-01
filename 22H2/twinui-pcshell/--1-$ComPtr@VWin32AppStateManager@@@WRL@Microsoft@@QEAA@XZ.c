/*
 * XREFs of ??1?$ComPtr@VWin32AppStateManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1804C876C
 * Callers:
 *     _Microsoft::WRL::Details::Make_UwpAppStateManager__::_1_::dtor$0 @ 0x1804C7667 (_Microsoft--WRL--Details--Make_UwpAppStateManager__--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_UwpAppStateManager__::_1_::dtor$0 @ 0x1804C7706 (_wil--MakeOrThrow_UwpAppStateManager__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_Win32AppStateManager__::_1_::dtor$0 @ 0x1804CA30A (_Microsoft--WRL--Details--Make_Win32AppStateManager__--_1_--dtor$0.c)
 *     _wil::MakeOrThrow_Win32AppStateManager__::_1_::dtor$0 @ 0x1804CA3A6 (_wil--MakeOrThrow_Win32AppStateManager__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802FFD20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppStateManager.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32AppStateManager>::~ComPtr<Win32AppStateManager>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::FamilySafety::AppLimits::IAppStateManager,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
