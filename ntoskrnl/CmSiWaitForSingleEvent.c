/*
 * XREFs of CmSiWaitForSingleEvent @ 0x1402FCC9C
 * Callers:
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall CmSiWaitForSingleEvent(__int64 a1)
{
  return KeWaitForSingleObject(*(PVOID *)(a1 + 8), Executive, 0, 0, 0LL);
}
