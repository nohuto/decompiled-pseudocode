/*
 * XREFs of HUBMUX_QueueResetToAllPSMs @ 0x1C0010CF0
 * Callers:
 *     HUBHSM_NotifyingHubResetToPortsOnResetOnResume @ 0x1C0008A80 (HUBHSM_NotifyingHubResetToPortsOnResetOnResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_QueueResetToAllPSMs(__int64 a1)
{
  __int64 v1; // rdi
  __int64 result; // rax
  __int64 v3; // rbx

  _InterlockedOr((volatile signed __int32 *)(a1 + 2352), 0x10u);
  v1 = a1 + 2360;
  *(_DWORD *)(a1 + 2336) = *(_DWORD *)(a1 + 2356);
  for ( result = *(_QWORD *)(a1 + 2360); ; result = *(_QWORD *)(v3 + 248) )
  {
    v3 = result - 248;
    if ( v1 == result )
      break;
    _InterlockedOr((volatile signed __int32 *)(v3 + 264), 0x10u);
    (*(void (__fastcall **)(__int64, __int64))(v3 + 1240))(v3, 3010LL);
  }
  return result;
}
