/*
 * XREFs of ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180029CD0
 * Callers:
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX0H@Z @ 0x180010580 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_tagActivationObjectNotification@@@@CAJPEAX.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z @ 0x180011210 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_FOCUS_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800189A0 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUIInputBuf.c)
 *     std::_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_IDENTIFICATION_MESSAGE_const___::_Do_call @ 0x180029C80 (std--_Func_impl_no_alloc__lambda_058d11e6f27672706f8c366ba991dba7__void__MIT_DEVICE_ea_180029C80.c)
 *     std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call @ 0x180029D00 (std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DE_ea_180029D00.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800380E0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_DEVICE_IDENTIFICATION_MESSAGE@@@@CAJPE.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800392C0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@CAJ.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800398C0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INPUT_CONFIG_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@@Z @ 0x180049454 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     _HitTestHelper::HitTestRequestWithRetry_::_1_::dtor$0 @ 0x1800497E8 (_HitTestHelper--HitTestRequestWithRetry_--_1_--dtor$0.c)
 *     _KernelInputConnection__MIT_INPUT_CONFIG_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18004E77F (_KernelInputConnection__MIT_INPUT_CONFIG_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$0 @ 0x1800506B0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnFocusRequest_::_1_::dtor$5 @ 0x1800506F0 (_ContextualProcessorManager--OnFocusRequest_--_1_--dtor$5.c)
 *     _std::_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFICATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x180050FBC (_std--_Func_impl_no_alloc__lambda_bd472a9a8f72191484719e318aced7b7__void__MIT_PNP_DEVICE_NOTIFIC.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x18008EF50 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@CAJPEAX0H@.c)
 *     _KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18008EFF7 (_KernelInputConnection__MIT_HOTKEY_REGISTRATION_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x1800B1DB8 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$0 @ 0x1800B1E6A (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::ProcessInteropCallback_::_1_::dtor$1 @ 0x1800B1E76 (_Win32kInterop--ProcessInteropCallback_--_1_--dtor$1.c)
 *     std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call @ 0x1800B3100 (std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOA_ea_1800B3100.c)
 *     _std::_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B3167 (_std--_Func_impl_no_alloc__lambda_1c1f2f8860f74a19e5041fe32d0346cc__void__MIT_KEYBOARD_OVERRIDER.c)
 *     std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800B31D0 (std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_ea_1800B31D0.c)
 *     _std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B322C (_std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATIO.c)
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call @ 0x1800B32C0 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_1800B32C0.c)
 *     _std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B3327 (_std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MES.c)
 *     std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call @ 0x1800B33A0 (std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE__ea_1800B33A0.c)
 *     _std::_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAGE_const___::_Do_call_::_1_::dtor$0 @ 0x1800B3407 (_std--_Func_impl_no_alloc__lambda_8dc586343b12ac0222b36aa6f7619d0d__void__MIT_MOUSE_INPUT_MESSAG.c)
 *     std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call @ 0x1800B3490 (std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESS_ea_1800B3490.c)
 *     _std::_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIMER_const___::_Do_call_::_1_::dtor$0 @ 0x1800B34F7 (_std--_Func_impl_no_alloc__lambda_fb274c64398fc7d60a78c3f578b56e26__void__MIT_ACCESSIBILITY_TIME.c)
 *     ?s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1800B44A0 (-s_DeviceNotificationsCallback@Win32kInterop@@SAHPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$0 @ 0x1800B4545 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$0.c)
 *     _Win32kInterop::s_DeviceNotificationsCallback_::_1_::dtor$1 @ 0x1800B4551 (_Win32kInterop--s_DeviceNotificationsCallback_--_1_--dtor$1.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z @ 0x1800B4570 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_ACCESSIBILITY_TIMER_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B4617 (_KernelInputConnection__MIT_ACCESSIBILITY_TIMER_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B4630 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B46DA (_KernelInputConnection__MIT_MOUSE_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B46F0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_KEYBOARD_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B479A (_KernelInputConnection__MIT_KEYBOARD_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1800B47B0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@CA.c)
 *     _KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800B485A (_KernelInputConnection__MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE_--s_OnKernelInputEventStatic_--_1_-.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0H@Z @ 0x1800F5580 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_BASE_INPUT_OBSERVER_PACKET@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x1800F5627 (_KernelInputConnection__MIT_BASE_INPUT_OBSERVER_PACKET_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z @ 0x1801031E0 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_PEN_EVENT_MESSAGE@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection__MIT_PEN_EVENT_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180103287 (_KernelInputConnection__MIT_PEN_EVENT_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z @ 0x180103B80 (-s_OnKernelInputEventStatic@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@CAJPEAX0H@Z.c)
 *     _KernelInputConnection_tagQMSGINPUTREPORT_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x180103C27 (_KernelInputConnection_tagQMSGINPUTREPORT_--s_OnKernelInputEventStatic_--_1_--dtor$0.c)
 *     ?s_OnKernelInputEventStatic@?$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0H@Z @ 0x18013A090 (-s_OnKernelInputEventStatic@-$KernelInputConnection@U_MIT_POINTER_INPUT_DOWN_MESSAGE@@@@CAJPEAX0.c)
 *     _KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_::s_OnKernelInputEventStatic_::_1_::dtor$0 @ 0x18013A137 (_KernelInputConnection__MIT_POINTER_INPUT_DOWN_MESSAGE_--s_OnKernelInputEventStatic_--_1_--dtor$.c)
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@PEAW4ContextualProcessorState@@@Z @ 0x1801497A4 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputBuffer@.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$0 @ 0x180149B32 (_ContextualProcessorManager--OnHitTest_--_1_--dtor$0.c)
 *     _ContextualProcessorManager::OnHitTest_::_1_::dtor$7 @ 0x180149B6E (_ContextualProcessorManager--OnHitTest_--_1_--dtor$7.c)
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18014B670 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 *     _ContextualProcessorBuffer::DeliverInput_::_1_::dtor$0 @ 0x18014BBD3 (_ContextualProcessorBuffer--DeliverInput_--_1_--dtor$0.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180018CC0 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x180034FA8 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

void __fastcall InputTraceLogging::PerfRegion::~PerfRegion(InputTraceLogging::PerfRegion *this)
{
  LPVOID v2; // rax
  int v3; // r10d
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)this,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v2 + 1) > 6u && tlgKeywordOn(*((_QWORD *)v2 + 1), 1LL) )
  {
    v4 = *(_QWORD *)this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      v3,
      (__int64)&v4);
  }
}
