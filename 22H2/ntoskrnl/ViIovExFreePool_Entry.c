/*
 * XREFs of ViIovExFreePool_Entry @ 0x1405D1F10
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140ADB100 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePool_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 8));
}
