/*
 * XREFs of ApiSetEditionMessageBeep @ 0x1C0206DA0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C006BCF0 (xxxInternalToUnicode.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionMessageBeep()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( qword_1C02967D0 && (int)qword_1C02967D0() >= 0 && qword_1C02967D8 )
    return (unsigned int)qword_1C02967D8(0LL);
  return v0;
}
