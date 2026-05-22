/*
 * XREFs of ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001B304
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800164D0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180018460 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019070 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002807C (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ??0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18002F88C (--0InputDeliveryServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x180076310 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x180078910 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 *     _lambda_98d8c15e91123ccd84ca1af9146cf167_::_lambda_invoker_cdecl_ @ 0x1800B71E0 (_lambda_98d8c15e91123ccd84ca1af9146cf167_--_lambda_invoker_cdecl_.c)
 *     ?FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z @ 0x1800B7C2C (-FixViewIdForHitTestResult@MPCInputRouter@@AEAAXAEAUHitTestResult3D@@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800B7CA8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z @ 0x1800B8150 (-HitTest3D@MPCInputRouter@@UEAAXPEAULegacyInputInfo@@PEAUIMPCTarget@@PEAPEAU3@@Z.c)
 *     ?IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z @ 0x1800B8800 (-IsTargetHolographic@MPCInputRouter@@AEAA_NPEAUIInputTarget@@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800B91B0 (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800B9810 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800B99E8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 *     ?TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z @ 0x1801716BC (-TryActivate@ActivationProcessor@@QEAA_NPEAUInputInfo@@UActivationInformation@@UtagPOINT@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180175278 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     ??0ViewHierarchyWithWindowManager@@QEAA@XZ @ 0x180026158 (--0ViewHierarchyWithWindowManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct ViewHierarchyWithWindowManager *ISMStatics::GetViewHierarchy(void)
{
  struct ViewHierarchyWithWindowManager *result; // rax
  ViewHierarchyWithWindowManager *v1; // [rsp+30h] [rbp+8h]

  result = ISMStatics::s_viewHierarchy;
  if ( !ISMStatics::s_viewHierarchy )
  {
    v1 = (ViewHierarchyWithWindowManager *)operator new(0xB8uLL);
    result = ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager(v1);
    ISMStatics::s_viewHierarchy = result;
  }
  return result;
}
