/*
 * XREFs of ??0?$EventRegistration@UIImmersiveMonitorNotificationService@@UIImmersiveMonitorNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18036A494
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x6db1ca68::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1803681BC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x6d.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1803FBBE0 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x1e.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@QEAA@XZ @ 0x1801CA0DC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@@WRL@M.c)
 */

__int64 __fastcall EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>(
        __int64 a1)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification>(a1);
  *(_QWORD *)a1 = &EventRegistrationHelpers::EventRegistration<IImmersiveMonitorNotificationService,IImmersiveMonitorNotification>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  return a1;
}
