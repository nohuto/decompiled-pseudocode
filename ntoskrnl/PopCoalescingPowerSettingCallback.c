/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x14085FBE0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x14073AF4C (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x1408197EC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopReleasePolicyLock @ 0x140A84A94 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A84AD4 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopCoalescingPowerSettingCallback(_QWORD *a1, int *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v10 = *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1 == *a1 )
    v10 = *(_QWORD *)GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4 - a1[1];
  if ( !v10 && a3 == 4 && a2 )
  {
    PopDppeCoalescingSpindownTimeout = *a2;
    v11 = PopDppeCoalescingSpindownTimeout;
    if ( !PopDppeCoalescingSpindownTimeout )
      v11 = -1;
    if ( v11 != PopDiskCoalescingTimeout )
    {
      PopDiskCoalescingTimeout = v11;
      PopUpdateDiskIdleTimeoutSetting();
    }
    PopCheckResiliencyScenarios();
    v6 = 0;
  }
  PopReleasePolicyLock(v8, v7, v9);
  return v6;
}
