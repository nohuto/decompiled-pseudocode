/*
 * XREFs of HvpMapEntryGetBlockAddress @ 0x1406E02E4
 * Callers:
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvpCopyModifiedData @ 0x1407FED30 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x140AF6210 (HvpMapEntryGetBinAddress.c)
 */

__int64 __fastcall HvpMapEntryGetBlockAddress(__int64 a1, _QWORD *a2, __int64 a3)
{
  return *a2 + HvpMapEntryGetBinAddress(a1, a2, a3);
}
