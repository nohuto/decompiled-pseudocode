/*
 * XREFs of ?GetActivationId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEA_K@Z @ 0x18007F5F4
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x180021C00 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1803147EC (-QueuePendingActivation@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@PEAUIPropertySet@Col.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002A860 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002AEEC (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??_9ISwitchItemController@@$BHA@AA @ 0x180162440 (--_9ISwitchItemController@@$BHA@AA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::Desktop::ViewManagerInterop::GetActivationId(
        Windows::Internal::Shell::Desktop::ViewManagerInterop *this,
        struct Windows::Internal::ShellHelpers::PropertySetHelper *a2,
        unsigned __int64 *a3)
{
  HSTRING v5; // rbx
  int PropVal; // ebx
  int v7; // eax
  struct Windows::Foundation::IPropertyValue *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING_HEADER v10; // [rsp+28h] [rbp-30h] BYREF
  HSTRING v11; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v11 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&v10, L"AAMShim.ActivationId", 0x15u, 0x14u);
  v5 = v11;
  *(_QWORD *)a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, v5, &v9);
  if ( PropVal >= 0 )
  {
    v7 =  ISwitchItemController::`vcall'{112,{flat}}(v9, a2);
    PropVal = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v7);
    else
      PropVal = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v9);
  if ( PropVal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\inc\\viewmanagerinteroppropertysethelpers.h",
    (const char *)(unsigned int)PropVal);
  return (unsigned int)PropVal;
}
