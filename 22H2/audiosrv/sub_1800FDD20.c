/*
 * XREFs of sub_1800FDD20 @ 0x1800FDD20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800FE540 @ 0x1800FE540 (sub_1800FE540.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800FDD20(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_WORK Work)
{
  sub_1800FE540(Context);
  if ( Context )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Context + 16LL))(Context);
}
