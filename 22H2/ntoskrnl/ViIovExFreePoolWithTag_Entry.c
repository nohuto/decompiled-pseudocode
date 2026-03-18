/*
 * XREFs of ViIovExFreePoolWithTag_Entry @ 0x1405D1EF0
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140ADB100 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePoolWithTag_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 16));
}
