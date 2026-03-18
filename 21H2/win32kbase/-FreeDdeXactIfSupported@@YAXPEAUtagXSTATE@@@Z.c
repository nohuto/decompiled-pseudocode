/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C01412B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( qword_1C029C4E8 && (int)qword_1C029C4E8() >= 0 )
  {
    if ( qword_1C029C4F0 )
      qword_1C029C4F0(a1);
  }
}
