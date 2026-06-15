/*
 * XREFs of sub_1800EA53C @ 0x1800EA53C
 * Callers:
 *     sub_180076E80 @ 0x180076E80 (sub_180076E80.c)
 * Callees:
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 __fastcall sub_1800EA53C(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return sub_1800D2EA8(*(__int64 **)a1, *(_QWORD *)(a1 + 8));
  return result;
}
