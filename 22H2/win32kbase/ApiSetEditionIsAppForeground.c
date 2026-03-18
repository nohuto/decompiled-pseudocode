/*
 * XREFs of ApiSetEditionIsAppForeground @ 0x1C02068E8
 * Callers:
 *     ?ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ @ 0x1C01B59C8 (-ShouldSkipForegroundActivation@CInputDest@@QEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsAppForeground(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296570 && (int)qword_1C0296570() >= 0 && qword_1C0296578 )
    return (unsigned int)qword_1C0296578(a1);
  return v1;
}
