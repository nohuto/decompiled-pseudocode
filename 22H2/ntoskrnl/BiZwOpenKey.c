/*
 * XREFs of BiZwOpenKey @ 0x14039AE84
 * Callers:
 *     BiCreateKey @ 0x140783B10 (BiCreateKey.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
