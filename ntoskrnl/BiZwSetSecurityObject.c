/*
 * XREFs of BiZwSetSecurityObject @ 0x14039040C
 * Callers:
 *     BiCreateKey @ 0x14082D580 (BiCreateKey.c)
 *     BiOpenKey @ 0x14082E7AC (BiOpenKey.c)
 *     BiCloseKey @ 0x14082E938 (BiCloseKey.c)
 * Callees:
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 */

NTSTATUS __fastcall BiZwSetSecurityObject(void *a1, __int64 a2, void *a3)
{
  return ZwSetSecurityObject(a1, 4u, a3);
}
