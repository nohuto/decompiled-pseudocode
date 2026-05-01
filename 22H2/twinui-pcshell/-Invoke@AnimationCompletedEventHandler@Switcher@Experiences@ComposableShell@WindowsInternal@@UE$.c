/*
 * XREFs of ?Invoke@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXXZ @ 0x1803737D0
 * Callers:
 *     __lambda_0b0ea29adb38baec39914485464e8775_::operator()_::_1_::catch$7 @ 0x18036CF79 (__lambda_0b0ea29adb38baec39914485464e8775_--operator()_--_1_--catch$7.c)
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@AnimationCompletedEventHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJXZ @ 0x18037B750 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_AnimationCompletedEventHandler___abi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::AnimationCompletedEventHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (*)(void))(*a1)[3])();
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180373812LL);
  }
  return result;
}
