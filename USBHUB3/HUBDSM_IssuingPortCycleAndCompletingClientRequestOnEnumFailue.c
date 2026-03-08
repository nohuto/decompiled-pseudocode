/*
 * XREFs of HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue @ 0x1C001F980
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00158E0 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_IssuingPortCycleAndCompletingClientRequestOnEnumFailue(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBPDO_CompleteClientSerialRequestWithStatusFailed(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 8) + 1240LL))(*(_QWORD *)(v1 + 8), 3011LL);
  return 4077LL;
}
