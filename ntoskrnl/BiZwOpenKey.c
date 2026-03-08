/*
 * XREFs of BiZwOpenKey @ 0x1403903E4
 * Callers:
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 * Callees:
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 */

NTSTATUS __fastcall BiZwOpenKey(HANDLE *a1, ACCESS_MASK a2, OBJECT_ATTRIBUTES *a3)
{
  return ZwOpenKey(a1, a2, a3);
}
