/*
 * XREFs of HUBDSM_AckingPortEventInD3Cold @ 0x1C0023DF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteWaitWake @ 0x1C001C3F0 (HUBPDO_CompleteWaitWake.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_AckingPortEventInD3Cold(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x40u);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 16) + 32LL), 0x2000u);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3027LL);
  HUBPDO_CompleteWaitWake(v1);
  return 4077LL;
}
