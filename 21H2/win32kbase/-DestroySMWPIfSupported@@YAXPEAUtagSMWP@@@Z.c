/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C00A86A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( qword_1C029C4A8 && (int)qword_1C029C4A8() >= 0 )
  {
    if ( qword_1C029C4B0 )
      qword_1C029C4B0(a1);
  }
}
