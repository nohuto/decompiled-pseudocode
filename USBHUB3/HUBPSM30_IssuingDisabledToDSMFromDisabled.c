/*
 * XREFs of HUBPSM30_IssuingDisabledToDSMFromDisabled @ 0x1C0013310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_IssuingDisabledToDSMFromDisabled(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4042LL);
  _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 1328) + 1636LL), 8u);
  return 3013LL;
}
