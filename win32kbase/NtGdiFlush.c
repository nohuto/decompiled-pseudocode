/*
 * XREFs of NtGdiFlush @ 0x1C00ABB60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  if ( qword_1C02D5EB8 && (int)qword_1C02D5EB8() >= 0 && qword_1C02D5EC0 )
    qword_1C02D5EC0();
  return 0LL;
}
