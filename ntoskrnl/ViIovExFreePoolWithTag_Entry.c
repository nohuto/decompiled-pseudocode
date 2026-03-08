/*
 * XREFs of ViIovExFreePoolWithTag_Entry @ 0x1405CFA40
 * Callers:
 *     <none>
 * Callees:
 *     VfPoolCheckIncorrectFreeApi @ 0x140AD7100 (VfPoolCheckIncorrectFreeApi.c)
 */

__int64 __fastcall ViIovExFreePoolWithTag_Entry(__int64 a1)
{
  return VfPoolCheckIncorrectFreeApi(*(_QWORD *)(a1 + 16));
}
