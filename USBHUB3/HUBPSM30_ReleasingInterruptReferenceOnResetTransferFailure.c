/*
 * XREFs of HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C00135E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C0010DF8 (HUBMUX_ReleaseInterruptReference.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  return 3013LL;
}
