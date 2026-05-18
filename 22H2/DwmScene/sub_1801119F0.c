/*
 * XREFs of sub_1801119F0 @ 0x1801119F0
 * Callers:
 *     <none>
 * Callees:
 *     __std_type_info_compare @ 0x18011E0B8 (__std_type_info_compare.c)
 */

__int64 __fastcall sub_1801119F0(__int64 a1, __int64 a2)
{
  if ( (unsigned int)_std_type_info_compare(a2 + 8, &qword_180217708) )
    return 0LL;
  else
    return a1 + 16;
}
