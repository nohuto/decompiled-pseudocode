/*
 * XREFs of CmpRemoveFromHiveFileList @ 0x14087349C
 * Callers:
 *     CmpCompleteUnloadKey @ 0x14071BF04 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ZwDeleteValueKey @ 0x1403FB500 (ZwDeleteValueKey.c)
 */

NTSTATUS __fastcall CmpRemoveFromHiveFileList(__int64 a1)
{
  return ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1848));
}
