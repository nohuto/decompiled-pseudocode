/*
 * XREFs of HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C00124D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReleaseInterruptReference @ 0x1C0010DF8 (HUBMUX_ReleaseInterruptReference.c)
 *     HUBMISC_StopPortTimer @ 0x1C0032620 (HUBMISC_StopPortTimer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi

  v1 = *(_QWORD *)(a1 + 960);
  v2 = HUBMISC_StopPortTimer(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4046LL);
  HUBMUX_ReleaseInterruptReference((volatile signed __int32 *)v1);
  return v2;
}
