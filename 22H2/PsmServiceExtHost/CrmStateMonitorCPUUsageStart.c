/*
 * XREFs of CrmStateMonitorCPUUsageStart @ 0x1800438FC
 * Callers:
 *     CrmStateMonitorStart @ 0x18002B290 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmRegisterToStateMonitor @ 0x18002AFC8 (CrmRegisterToStateMonitor.c)
 *     CrmStateMonitorStateSizeGet @ 0x18002BE6C (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180047B22 (memcpy_0.c)
 */

NTSTATUS __fastcall CrmStateMonitorCPUUsageStart(__int64 a1)
{
  _DWORD *v2; // rdx
  int v3; // ecx
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  NTSTATUS result; // eax
  _BYTE SystemInformation[64]; // [rsp+20h] [rbp-58h] BYREF

  v2 = (_DWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v3 = *(_DWORD *)a1;
  *v2 = 100;
  v4 = CrmStateMonitorStateSizeGet(v3);
  memcpy_0(v6, v5, v4);
  result = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  if ( result >= 0 )
  {
    *(_BYTE *)(a1 + 96) = SystemInformation[56];
    result = TpAllocTimer(a1 + 88, CrmStateMonitorCPUUsageTimerCallback, a1, 0LL);
    if ( result >= 0 )
      return CrmRegisterToStateMonitor(a1 + 64, 8);
  }
  return result;
}
