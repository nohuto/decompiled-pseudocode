/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C01534F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( qword_1C02D6D30 && (int)qword_1C02D6D30() >= 0 )
  {
    if ( qword_1C02D6D38 )
      qword_1C02D6D38(a1);
  }
}
