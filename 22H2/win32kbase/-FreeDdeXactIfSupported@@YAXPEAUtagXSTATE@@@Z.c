/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C0113B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  int v2; // eax

  if ( qword_1C0256798 )
    v2 = qword_1C0256798();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    if ( qword_1C02567A0 )
      qword_1C02567A0(a1);
  }
}
