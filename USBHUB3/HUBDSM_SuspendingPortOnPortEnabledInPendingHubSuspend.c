/*
 * XREFs of HUBDSM_SuspendingPortOnPortEnabledInPendingHubSuspend @ 0x1C001F570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_SuspendingPortOnPortEnabledInPendingHubSuspend(__int64 a1)
{
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL) + 1240LL))(
    *(_QWORD *)(*(_QWORD *)(a1 + 960) + 8LL),
    3031LL);
  return 1000LL;
}
