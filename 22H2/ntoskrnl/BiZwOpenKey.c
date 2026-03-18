/*
 * XREFs of BiZwOpenKey @ 0x14037440C
 * Callers:
 *     BiCreateKey @ 0x140806388 (BiCreateKey.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x14041A8E0 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
