/*
 * XREFs of sub_180126830 @ 0x180126830
 * Callers:
 *     sub_180072190 @ 0x180072190 (sub_180072190.c)
 *     sub_1801268C0 @ 0x1801268C0 (sub_1801268C0.c)
 * Callees:
 *     sub_1801269B0 @ 0x1801269B0 (sub_1801269B0.c)
 */

__int64 (__fastcall **__fastcall sub_180126830(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_1801481A0;
  *a1 = off_1801481A0;
  if ( a1[1] )
  {
    result = (__int64 (__fastcall **)())sub_1801269B0();
    a1[1] = 0LL;
  }
  return result;
}
