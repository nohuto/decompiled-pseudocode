/*
 * XREFs of ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801AA084
 * Callers:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABB64 (-complete@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAX.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800ABD3C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD108 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBD0 (-start@-$shared_data@$00$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AED20 (-start@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z @ 0x1800C0DDC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800D4884 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1801AAE3C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1801ACE44 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?Close@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025B470 (-Close@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18025B690 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18025B770 (-Float@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z @ 0x18025B860 (-GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z.c)
 *     ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025B950 (-Hide@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18025BA90 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18025BF80 (-OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18025C0E0 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x18025C8A0 (-SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z @ 0x18025C950 (-SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?Show@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025CA00 (-Show@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025CAA0 (-SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C3CC0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CC2B8 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803CE678 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CF70C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E0C00 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BDD68 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x1804BE1B8 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BEC3C (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::EnterCriticalSection(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  EnterCriticalSection(a2);
  *a1 = a2;
  return a1;
}
