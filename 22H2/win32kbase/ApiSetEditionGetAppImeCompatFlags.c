/*
 * XREFs of ApiSetEditionGetAppImeCompatFlags @ 0x1C020614C
 * Callers:
 *     NlsKbdSendIMEProc @ 0x1C01EC7A0 (NlsKbdSendIMEProc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetAppImeCompatFlags(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C0296700 && (int)qword_1C0296700() >= 0 && qword_1C0296708 )
    return (unsigned int)qword_1C0296708(a1);
  return v1;
}
