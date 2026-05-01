/*
 * XREFs of ?_PrepareAppForActivation@CSwitchController@@AEAAJPEBG00W4ACTIVATEOPTIONSINTERNAL@@AEAUActivationData@1@@Z @ 0x18043B764
 * Callers:
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x18043AC90 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18043AE48 (-_GetAppForSwitch@CSwitchController@@AEAAJPEBGW4GET_VIEW_FOR_SWITCH_TYPE@@PEAUIImmersiveMonitor@.c)
 *     ?_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@_NPEAPEAUIDelayedAppActivation@@@Z @ 0x18043B54C (-_PackageActivationArguments@CSwitchController@@AEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 */

__int64 __fastcall CSwitchController::_PrepareAppForActivation(
        __int64 a1,
        WCHAR *a2,
        __int64 a3,
        const WCHAR *a4,
        int a5,
        __int64 *a6)
{
  __int64 v10; // rbx
  __int64 v11; // rbx

  v10 = a6[4];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a6 + 3);
  CSwitchController::_GetAppForSwitch(a1, (__int64)a2, v10 != 0, a6[2], a6 + 3);
  v11 = a6[3];
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a6 + 4);
  return CSwitchController::_PackageActivationArguments(a6[7], a2, a3, a4, a6[7], a5, v11 == 0, a6 + 4);
}
