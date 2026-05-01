/*
 * XREFs of ?get@Current@Window@Xaml@UI@Windows@@SAPE$AAV2345@XZ @ 0x18035EAC8
 * Callers:
 *     ?OnLaunched@?QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@ME$AAAXPE$AAVLaunchActivatedEventArgs@Activation@ApplicationModel@4@@Z @ 0x1803611A4 (-OnLaunched@-QIApplicationOverrides@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@Co_ea_1803611A4.c)
 *     _lambda_bf3c92b221d60276737ef151eb6f13fc_::operator() @ 0x180364D68 (_lambda_bf3c92b221d60276737ef151eb6f13fc_--operator().c)
 *     ?ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z @ 0x1803651DC (-ChangeVisibilityHelper@XamlExplorerHostWindow@@AEAAX_N@Z.c)
 *     Platform::Details::__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_::Invoke @ 0x180365360 (Platform--Details--__abi_FunctorCapture__lambda_1301d951c5e9082c4f199997fa5a5a32__void_--Invoke.c)
 *     ??R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ @ 0x18036D070 (--R_lambda_0b0ea29adb38baec39914485464e8775_@@QEBAXXZ.c)
 *     ??R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ @ 0x18036D27C (--R_lambda_5e3471c756f87189046196c55c94088a_@@QEBAXXZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::operator() @ 0x18036DA2C (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--operator().c)
 *     _lambda_fac65b3379140ccb2da51a4d302d8ccb_::operator() @ 0x180380234 (_lambda_fac65b3379140ccb2da51a4d302d8ccb_--operator().c)
 *     _lambda_237a64fcb5f24c6cb49474a7b0122401_::operator() @ 0x180384178 (_lambda_237a64fcb5f24c6cb49474a7b0122401_--operator().c)
 *     ?IsUIThread@@YA_NXZ @ 0x180390314 (-IsUIThread@@YA_NXZ.c)
 * Callees:
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x180094620 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18035BF80 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18035EA5C (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::UI::Xaml::Window::Current::get(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rdi
  _DWORD v9[4]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v10; // [rsp+40h] [rbp+10h] BYREF
  __int64 v11; // [rsp+48h] [rbp+18h]

  v9[0] = -1825405943;
  v9[1] = 1257918113;
  v9[2] = 1309465731;
  v9[3] = -1316231053;
  v10 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"Windows.UI.Xaml.Window",
                                (struct Platform::Guid *)v9,
                                (void **)&v10,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v5 = Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v10);
  v11 = v5;
  v6 = __abi_winrt_ptr_ctor(v5);
  v11 = v6;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v7 = __abi_winrt_ptr_ctor(v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v7;
}
