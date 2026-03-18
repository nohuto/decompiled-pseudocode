/*
 * XREFs of BiZwQueryKey @ 0x140374498
 * Callers:
 *     BiEnumerateSubKeys @ 0x140806090 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140807D44 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x14041A960 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
