/*
 * XREFs of ??$GetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAU_GUID@@@Z1@Z @ 0x1801D5D84
 * Callers:
 *     ?GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropertySetHelper@ShellHelpers@45@PEAU_GUID@@@Z @ 0x1801D9F7C (-GetActivationVirtualDesktopId@ViewManagerInterop@Desktop@Shell@Internal@Windows@@YAJAEAVPropert.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x1802E1458 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 *     _lambda_221251db4cf3622556bc46ff7d89c93b_::operator() @ 0x1802F19CC (_lambda_221251db4cf3622556bc46ff7d89c93b_--operator().c)
 *     _lambda_5a6182bde26e8031307d41b57868a012_::operator() @ 0x1802F1B3C (_lambda_5a6182bde26e8031307d41b57868a012_--operator().c)
 *     ?GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAPEAUIApplicationViewTabInsertionContext@ViewManagement@Internal@UI@5@@Z @ 0x1802F34E0 (-GetInsertionContextForActivation@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@.c)
 *     ?IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802F38B0 (-IsActivatingIntoExistingGroup@TabAppPolicySettings@@UEAAJPEAUIActivatedEventArgs@Activation@App.c)
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802F3A30 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180329E6C (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 * Callees:
 *     ?GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18002AEEC (-GetPropVal@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@PEAPEAUIPropert.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C104 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKA@AA @ 0x180162590 (--_9ITabDataModelWatcher@Tabs@ComposableShell@Internal@Windows@@$BKA@AA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<_GUID>(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2,
        __int64 a3,
        _OWORD *a4)
{
  int PropVal; // ebx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct Windows::Foundation::IPropertyValue *v10; // [rsp+40h] [rbp+18h] BYREF

  *a4 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  PropVal = Windows::Internal::ShellHelpers::PropertySetHelper::GetPropVal(this, a2, &v10);
  if ( PropVal >= 0 )
  {
    v7 =  Windows::Internal::ComposableShell::Tabs::ITabDataModelWatcher::`vcall'{160,{flat}}((__int64)v10);
    PropVal = v7;
    if ( v7 >= 0 )
      PropVal = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecore\\internal\\shell\\inc\\PropertySetHelpers.h",
        (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v10);
  return (unsigned int)PropVal;
}
