/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification___&__0 @ 0x1803FA1B0
 * Callers:
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_0 @ 0x1803FAA34 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803FAA34.c)
 *     EventRegistrationHelpers::EventListener_IVirtualDesktopNotificationService_IVirtualDesktopNotification_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration___::Register_1 @ 0x1803FDB78 (EventRegistrationHelpers--EventListener_IVirtualDesktopNotificationService_IVirtual_ea_1803FDB78.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease @ 0x18028B5D4 (Microsoft--WRL--ComPtr__wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_Win.c)
 *     ??0?$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@EventRegistrationHelpers@@QEAA@XZ @ 0x18036A1FC (--0-$EventRegistration@UIVirtualDesktopNotificationService@@UIVirtualDesktopNotification@@@Event.c)
 *     Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef @ 0x180373408 (Microsoft--WRL--ComPtr__anonymous_namespace_--ObservableObjectArrayEventRegistration_--InternalA.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize_VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration__IVirtualDesktopNotification______0(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    EventRegistrationHelpers::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>::EventRegistration<IVirtualDesktopNotificationService,IVirtualDesktopNotification>((__int64)v5);
    v8 = v6;
    *v6 = off_180504FD0;
    v6[2] = *a2;
    Microsoft::WRL::ComPtr__anonymous_namespace_::ObservableObjectArrayEventRegistration_::InternalAddRef((__int64 *)&v8);
    *a1 = v6;
    Microsoft::WRL::ComPtr__wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_Windows::Devices::Lights::LampArray_______::_2_::CompletionDelegate_::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
