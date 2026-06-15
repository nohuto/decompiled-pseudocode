/*
 * XREFs of sub_180072084 @ 0x180072084
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18007BF95 @ 0x18007BF95 (sub_18007BF95.c)
 * Callees:
 *     sub_1800720A4 @ 0x1800720A4 (sub_1800720A4.c)
 */

__int64 __fastcall sub_180072084(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 32) )
  {
    *(_BYTE *)(a1 + 32) = 0;
    return sub_1800720A4();
  }
  return result;
}
