/*
 * XREFs of Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x1803736D8
 * Callers:
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&_ @ 0x180368128 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x6db1ca68::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1803681BC (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x6d.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register @ 0x180375610 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_180375610.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register @ 0x1803756EC (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803756EC.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x1803FA480 (Microsoft--WRL--Details--MakeAndInitialize_VirtualDesktopNotificationForwarderHelpe_ea_1803FA480.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x1803FAD04 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803FAD04.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::MonitorEventRegistration_A0x1e4dc85f::MonitorEventRegistration_IImmersiveMonitorNotification___&_ @ 0x1803FBBE0 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--MonitorEventRegistration_A0x1e.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_0 @ 0x1803FC3A8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1803FC3A8.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x1803FDE48 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803FDE48.c)
 *     EventRegistrationHelpers::EventListener_IImmersiveMonitorNotificationService_IImmersiveMonitorNotification__anonymous_namespace_::MonitorEventRegistration_::Register_1 @ 0x1803FF3D8 (EventRegistrationHelpers--EventListener_IImmersiveMonitorNotificationService_IImmer_ea_1803FF3D8.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_A0xbba38151::ObservableObjectArrayBeginEndEventRegistration_IObservableObjectArrayChangedBeginEnd___&_ @ 0x180402C90 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--ObservableObjectArrayBeginEndE.c)
 *     Microsoft::WRL::Details::MakeAndInitialize__anonymous_namespace_::ObservableObjectArrayEventRegistration_A0x86bda3c3::ObservableObjectArrayEventRegistration_IObservableObjectArrayChanged___&_ @ 0x180402D24 (Microsoft--WRL--Details--MakeAndInitialize__anonymous_namespace_--ObservableObjectArrayEventRegi.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register @ 0x18040391C (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArrayChanged__an.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChangedBeginEnd__anonymous_namespace_::ObservableObjectArrayBeginEndEventRegistration_::Register @ 0x1804039EC (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_1804039EC.c)
 *     EventRegistrationHelpers::EventListener_IObservableObjectArray_IObservableObjectArrayChanged__anonymous_namespace_::ObservableObjectArrayEventRegistration_::Register_0 @ 0x180430498 (EventRegistrationHelpers--EventListener_IObservableObjectArray_IObservableObjectArr_ea_180430498.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
