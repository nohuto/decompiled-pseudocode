/*
 * XREFs of VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::CurrentVirtualDesktopChanged @ 0x180370960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktopNotificationForwarderHelper__anonymous_namespace_::VirtualDesktopNotificationRegistration_::CurrentVirtualDesktopChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return anonymous_namespace_::VirtualDesktopNotificationRegistration::_ForwardVirtualDesktopNotification_IVirtualDesktop___IVirtualDesktop___(
           a1,
           (void (__fastcall *)(__int64, __int64, __int64)) Windows::Internal::Shell::Experience::ITitleBarFactoryWatcher::`vcall'{64,{flat}},
           a2,
           a3);
}
