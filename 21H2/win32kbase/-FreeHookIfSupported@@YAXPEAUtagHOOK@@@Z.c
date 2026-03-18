/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00A2780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( qword_1C029C4B8 && (int)qword_1C029C4B8() >= 0 )
  {
    if ( qword_1C029C4C0 )
      qword_1C029C4C0(a1);
  }
}
