/*
 * XREFs of HUBPSM20_QueueingResumeToDSMFromSuspended @ 0x1C0012D70
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_ReEnableInterruptTransfer @ 0x1C0010D5C (HUBMUX_ReEnableInterruptTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPSM20_QueueingResumeToDSMFromSuspended(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v1 + 1328) + 1472LL))(*(_QWORD *)(v1 + 1328), 4066LL);
  HUBMUX_ReEnableInterruptTransfer((volatile signed __int32 *)v1);
  return 3013LL;
}
