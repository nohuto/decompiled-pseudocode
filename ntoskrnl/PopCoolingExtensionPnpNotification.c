/*
 * XREFs of PopCoolingExtensionPnpNotification @ 0x14097FDF0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x140584860 (PopPropogateCoolingChange.c)
 *     PopAcquireCoolingInterface @ 0x14084BC94 (PopAcquireCoolingInterface.c)
 *     PopDiagTraceCoolingExtension @ 0x14085D84C (PopDiagTraceCoolingExtension.c)
 *     PopDisableCoolingExtension @ 0x1409800A8 (PopDisableCoolingExtension.c)
 *     PopOrphanCoolingExtension @ 0x140980178 (PopOrphanCoolingExtension.c)
 */

__int64 __fastcall PopCoolingExtensionPnpNotification(char *NotificationStructure, _BYTE *Context)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v6; // rax

  v3 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v3 )
  {
    PopDisableCoolingExtension(Context);
    return 0LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
    PopDisableCoolingExtension(Context);
LABEL_9:
    PopOrphanCoolingExtension(Context);
    return 0LL;
  }
  v6 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4;
  if ( !v6 )
  {
    if ( (int)PopAcquireCoolingInterface((__int64)Context) < 0 )
      goto LABEL_9;
    PopAcquireRwLockExclusive((ULONG_PTR)(Context + 32));
    Context[64] = 1;
    PopDiagTraceCoolingExtension((__int64)Context, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_ADD);
    if ( *((_BYTE **)Context + 2) != Context + 16 )
      PopPropogateCoolingChange((__int64)Context);
    PopReleaseRwLock((ULONG_PTR)(Context + 32));
  }
  return 0LL;
}
