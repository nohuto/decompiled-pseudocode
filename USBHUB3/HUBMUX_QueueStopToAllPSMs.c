/*
 * XREFs of HUBMUX_QueueStopToAllPSMs @ 0x1C0010AA4
 * Callers:
 *     HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0008C10 (HUBHSM_NotifyingHubStopToPortsOnReset.c)
 *     HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume @ 0x1C0008C40 (HUBHSM_WaitingForPortsToReleaseReferenceOnResetOnResume.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_QueueStopToAllPSMs(__int64 a1)
{
  int v2; // ebp
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdi

  if ( !*(_DWORD *)(a1 + 2356) )
    return HUBSM_AddEvent(a1 + 1264, 2058);
  v2 = *(_DWORD *)(a1 + 2344);
  v3 = a1 + 2360;
  *(_DWORD *)(a1 + 2332) = v2;
  for ( result = *(_QWORD *)(a1 + 2360); ; result = *(_QWORD *)(v5 + 248) )
  {
    v5 = result - 248;
    if ( v3 == result )
      break;
    if ( (*(_DWORD *)(v5 + 264) & 8) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v5 + 264), 4u);
    (*(void (__fastcall **)(__int64, __int64))(v5 + 1240))(v5, 3034LL);
  }
  if ( !v2 )
    return HUBSM_AddEvent(a1 + 1264, 2058);
  return result;
}
