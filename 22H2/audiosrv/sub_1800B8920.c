/*
 * XREFs of sub_1800B8920 @ 0x1800B8920
 * Callers:
 *     sub_1800C1C58 @ 0x1800C1C58 (sub_1800C1C58.c)
 * Callees:
 *     _o_log10 @ 0x18006AB50 (_o_log10.c)
 *     _o_pow @ 0x18006AB5C (_o_pow.c)
 */

double __fastcall sub_1800B8920(__int64 a1, double a2)
{
  if ( o_pow() <= a2 )
    return o_log10() * 20.0;
  else
    return -192.0;
}
