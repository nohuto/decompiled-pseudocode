/*
 * XREFs of ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x1801A9ED4
 * Callers:
 *     ?complete@?$tip_test@V?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAXXZ @ 0x1800ABB44 (-complete@-$tip_test@V-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip@@@tip@@QEAAX.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ @ 0x1800ABD1C (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAAXXZ.c)
 *     ?is_running@?$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800AD0E8 (-is_running@-$shared_data@$00$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AEBB0 (-start@-$shared_data@$00$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA?AU_GUID@@XZ @ 0x1800AED00 (-start@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA-AU_GUID@@XZ.c)
 *     ?complete_without_lock@?$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z @ 0x1800C0DBC (-complete_without_lock@-$shared_data@$00$0A@$0A@@details@tip@@AEAAXW4TestCompletionKind@@GPEBD@Z.c)
 *     ?is_running@?$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ @ 0x1800D4864 (-is_running@-$shared_data@$0A@$0A@$0A@@details@tip@@AEAA_NXZ.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x1801AAC8C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x1801ACC94 (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?Close@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025B2C0 (-Close@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18025B4E0 (-Dock@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?Float@RetailDemoExperienceManager@@UEAAJHHHH@Z @ 0x18025B5C0 (-Float@RetailDemoExperienceManager@@UEAAJHHHH@Z.c)
 *     ?GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z @ 0x18025B6B0 (-GetReservedSpace@RetailDemoExperienceManager@@UEAAJPEAHPEAJ11@Z.c)
 *     ?Hide@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025B7A0 (-Hide@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x18025B8E0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18025BDD0 (-OnClientWindowReadyForPresentationChanged@RetailDemoExperienceManager@@AEAAJPEAUIClientWindowSt.c)
 *     ?OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18025BF30 (-OnViewEvent@RetailDemoExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z @ 0x18025C6F0 (-SetTopmost@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z @ 0x18025C7A0 (-SetWindowBand@RetailDemoExperienceManager@@UEAAJH@Z.c)
 *     ?Show@RetailDemoExperienceManager@@UEAAJXZ @ 0x18025C850 (-Show@RetailDemoExperienceManager@@UEAAJXZ.c)
 *     ?SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x18025C8F0 (-SubscribeToServices@RetailDemoExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803C39F0 (-UnsubscribeFromServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1803CBFE8 (-EnsureInputAppIsReady@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1803CE3A8 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 *     ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1803CF43C (-OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ.c)
 *     ?UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1803E0930 (-UnsubscribeFromServices@AccessibilityExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BD9D8 (-AddDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z @ 0x1804BDE28 (-Animate@AssistantLightManager@Lighting@TwinUI@@AEAAXW4AssistantState@2Cortana@@@Z.c)
 *     ?RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z @ 0x1804BE8AC (-RemoveDevice@AssistantLightManager@Lighting@TwinUI@@AEAAJPEAUHSTRING__@@@Z.c)
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
