/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C0141350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( qword_1C029C518 && (int)qword_1C029C518() >= 0 )
  {
    if ( qword_1C029C520 )
      qword_1C029C520(a1);
  }
}
