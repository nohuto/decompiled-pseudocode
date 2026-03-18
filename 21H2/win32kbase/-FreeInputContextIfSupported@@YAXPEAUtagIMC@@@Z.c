/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C009AE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( qword_1C029C508 && (int)qword_1C029C508() >= 0 )
  {
    if ( qword_1C029C510 )
      qword_1C029C510(a1);
  }
}
