/*
 * XREFs of PopNotifyPolicyDevice @ 0x140858C40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopEnableHiberFile @ 0x140818E88 (PopEnableHiberFile.c)
 *     PopAcquireTransitionLock @ 0x14081CE58 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x14081CF98 (PopReleaseTransitionLock.c)
 *     PopConnectToPolicyDevice @ 0x140858D04 (PopConnectToPolicyDevice.c)
 *     PopChangeCapability @ 0x1409895EC (PopChangeCapability.c)
 *     PopReleasePolicyLock @ 0x140A47CF8 (PopReleasePolicyLock.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140A48330 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNotifyPolicyDevice(_QWORD *NotificationStructure, PVOID Context)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  bool v5; // bp
  char v6; // di
  int v7; // ecx
  bool v8; // r14
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  char v14; // bl
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+40h] [rbp+8h] BYREF

  v2 = (unsigned int)Context;
  v3 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
  if ( !v3 )
    v3 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
  v5 = v3 == 0;
  v6 = 1;
  v17 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_TREAT_TAD_AS_RTC, &v17);
  v8 = v17 == 2;
  if ( v2 == 8 )
  {
    PopAcquirePolicyLock(v7);
    if ( v8 || v5 )
      v6 = 0;
    LOBYTE(v10) = v6;
    PopChangeCapability(&byte_140C23413, v10);
    PopReleasePolicyLock(v12, v11);
  }
  else if ( v2 == 3 )
  {
    PopAcquireTransitionLock(4);
    PopAcquirePolicyLock(v13);
    v14 = PopHiberEnabled;
    PopEnableHiberFile(0);
    if ( v14 )
      PopEnableHiberFile(1);
    PopReleasePolicyLock(v16, v15);
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
