/*
 * XREFs of BiZwQueryKey @ 0x140390458
 * Callers:
 *     BiEnumerateSubKeys @ 0x14082D288 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x14082EEA0 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
