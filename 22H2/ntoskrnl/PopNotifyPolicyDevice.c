/*
 * XREFs of PopNotifyPolicyDevice @ 0x1407C4AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x14078D978 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14078D9D4 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 *     PopChangeCapability @ 0x14079C6F4 (PopChangeCapability.c)
 *     PopConnectToPolicyDevice @ 0x1407C4B28 (PopConnectToPolicyDevice.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  bool v5; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ecx
  char v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  if ( (_DWORD)Context == 8 )
  {
    PopAcquirePolicyLock((_DWORD)NotificationStructure);
    PopChangeCapability(&byte_140C233F3, !v5);
    PopReleasePolicyLock(v8, v7);
  }
  else if ( (_DWORD)Context == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock(v9);
    v10 = PopHiberEnabled;
    PopEnableHiberFile(0, 0);
    if ( v10 )
      PopEnableHiberFile(1, 0);
    PopReleasePolicyLock(v12, v11);
    PopReleaseTransitionLock(4);
  }
  else if ( v3 )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&PopPolicyDeviceLock);
    PopConnectToPolicyDevice(v2, NotificationStructure[5]);
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  return 0LL;
}
