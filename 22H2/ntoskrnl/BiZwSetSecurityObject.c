/*
 * XREFs of BiZwSetSecurityObject @ 0x14039AEAC
 * Callers:
 *     BiCreateKey @ 0x140783B10 (BiCreateKey.c)
 *     BiOpenKey @ 0x140784304 (BiOpenKey.c)
 *     BiCloseKey @ 0x14078448C (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1403FCF40 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
