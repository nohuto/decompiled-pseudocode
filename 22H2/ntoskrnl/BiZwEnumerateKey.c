/*
 * XREFs of BiZwEnumerateKey @ 0x14039AE28
 * Callers:
 *     BiEnumerateSubKeys @ 0x140783428 (BiEnumerateSubKeys.c)
 * Callees:
 *     ZwEnumerateKey @ 0x1403FA060 (ZwEnumerateKey.c)
 */

NTSTATUS __fastcall BiZwEnumerateKey(void *a1, ULONG a2, __int64 a3, void *a4, ULONG Length, PULONG ResultLength)
{
  return ZwEnumerateKey(a1, a2, KeyBasicInformation, a4, Length, ResultLength);
}
