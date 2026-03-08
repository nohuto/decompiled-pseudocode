/*
 * XREFs of PspSendNoWakeChargeLimitNotification @ 0x1409AF954
 * Callers:
 *     PspEnforceLimitsJobPostCallback @ 0x1406FBA00 (PspEnforceLimitsJobPostCallback.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSendNoWakeChargeLimitNotification(_QWORD *a1)
{
  __int64 result; // rax
  int v2; // [rsp+50h] [rbp+8h] BYREF
  int v3; // [rsp+54h] [rbp+Ch]
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF

  if ( !a1 )
  {
    v2 = -1;
    v3 = 0;
    return ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)&v2);
  }
  if ( !PspNoWakeChargeReferencedProcess )
  {
    v4 = 0LL;
    result = PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, (int)PspGetProcessInJobHierarchyCallback, (__int64)&v4, 0);
    if ( v4 )
    {
      v2 = 1;
      v3 = *(_DWORD *)(v4 + 1088);
      PspNoWakeChargeReferencedProcess = (PVOID)v4;
      return ZwUpdateWnfStateData((__int64)&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, (__int64)&v2);
    }
  }
  return result;
}
