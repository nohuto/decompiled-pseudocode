/*
 * XREFs of sub_1800CEEF4 @ 0x1800CEEF4
 * Callers:
 *     sub_180127F2C @ 0x180127F2C (sub_180127F2C.c)
 * Callees:
 *     sub_18006CEA4 @ 0x18006CEA4 (sub_18006CEA4.c)
 */

__int64 __fastcall sub_1800CEEF4(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return sub_18006CEA4(*(__int64 **)(a1 + 8), *(_QWORD *)a1);
  return result;
}
