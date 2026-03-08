/*
 * XREFs of PopNotifyPolicyDevice @ 0x14084A7A0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x14082AD04 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14082AD60 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14082ADA4 (PopEnableHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x14084A820 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409915D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // al
  int v7; // ecx
  char v8; // bl
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopPolicyDeviceHandleWakeAlarmNotification();
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock(v7);
    v8 = PopHiberEnabled;
    PopEnableHiberFile(0);
    if ( v8 )
      PopEnableHiberFile(1);
    PopReleasePolicyLock(v10, v9, v11);
    PopReleaseTransitionLock(4);
  }
  else if ( !v5 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}
