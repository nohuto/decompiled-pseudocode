/*
 * XREFs of PopBcdOpen @ 0x1408F58B4
 * Callers:
 *     PopAllocateHiberContext @ 0x140777B44 (PopAllocateHiberContext.c)
 *     PoInitHiberServices @ 0x14079AED8 (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x140782D48 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(UNICODE_STRING *BcdStoreHandle)
{
  return BcdOpenStore(BcdStoreHandle, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, (PHANDLE)BcdStoreHandle);
}
