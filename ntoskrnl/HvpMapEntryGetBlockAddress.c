/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1407B46A4
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x1407A4B70 (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x1407FA0A0 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140AF2654 (HvpMapEntryGetBinAddress.c)
 */

__int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, _QWORD *a2, __int64 a3)
{
  return *a2 + HvpMapEntryGetBinAddress(a1, a2, a3);
}
