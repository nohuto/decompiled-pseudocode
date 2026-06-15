/*
 * XREFs of sub_1800EA4FC @ 0x1800EA4FC
 * Callers:
 *     sub_1800EABB9 @ 0x1800EABB9 (sub_1800EABB9.c)
 * Callees:
 *     sub_1800EA620 @ 0x1800EA620 (sub_1800EA620.c)
 */

__int64 __fastcall sub_1800EA4FC(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return sub_1800EA620();
  }
  return result;
}
