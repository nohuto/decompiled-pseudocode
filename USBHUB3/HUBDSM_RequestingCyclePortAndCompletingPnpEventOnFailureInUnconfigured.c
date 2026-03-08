/*
 * XREFs of HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured @ 0x1C001F9C0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_SignalPnpPowerEvent @ 0x1C0019884 (HUBPDO_SignalPnpPowerEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_RequestingCyclePortAndCompletingPnpEventOnFailureInUnconfigured(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  HUBPDO_SignalPnpPowerEvent(v1);
  return 4077LL;
}
