/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C03A2624
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C013B610 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C013B610 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
