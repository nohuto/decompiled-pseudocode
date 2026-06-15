/*
 * XREFs of sub_18006CDB8 @ 0x18006CDB8
 * Callers:
 *     sub_18006CDA6 @ 0x18006CDA6 (sub_18006CDA6.c)
 * Callees:
 *     sub_1800BABF4 @ 0x1800BABF4 (sub_1800BABF4.c)
 */

__int64 __fastcall sub_18006CDB8(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_1800BABF4(*(_QWORD *)a1);
  }
  return result;
}
