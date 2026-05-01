/*
 * XREFs of ?get@InvokeAnimationCoordinator@__ISwitcherControlBasePublicNonVirtuals@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationCoordinator@3456@XZ @ 0x18035E720
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x180360ED4 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_180360ED4.c)
 *     ??R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ @ 0x18036CFAC (--R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x18036D75C (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x18037FF64 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BCB0 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::__ISwitcherControlBasePublicNonVirtuals::InvokeAnimationCoordinator::get(
        __int64 a1)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v1 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, &v4);
  if ( v1 < 0 )
  {
    __abi_WinRTraiseException(v1);
    __debugbreak();
  }
  v2 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}
