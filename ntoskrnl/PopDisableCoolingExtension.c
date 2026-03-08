/*
 * XREFs of PopDisableCoolingExtension @ 0x1409800A8
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14097FDF0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 *     PopDiagTraceCoolingExtension @ 0x14085D84C (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDisableCoolingExtension(__int64 a1)
{
  ULONG_PTR v1; // rsi
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64); // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1 + 32;
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive(a1 + 32);
  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    PopDiagTraceCoolingExtension(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a1 + 80) = &Event;
    PopPropogateCoolingChange(a1);
    PopReleaseRwLock(v1);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive(v1);
    *(_QWORD *)(a1 + 80) = 0LL;
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(void (__fastcall **)(__int64))(a1 + 112);
    PopReleaseRwLock(v1);
    v4(v3);
  }
  else
  {
    PopReleaseRwLock(v1);
  }
}
