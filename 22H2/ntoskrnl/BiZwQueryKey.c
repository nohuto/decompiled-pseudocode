/*
 * XREFs of BiZwQueryKey @ 0x14039AEC8
 * Callers:
 *     BiEnumerateSubKeys @ 0x140783428 (BiEnumerateSubKeys.c)
 *     BiGetKeyName @ 0x140784700 (BiGetKeyName.c)
 * Callees:
 *     ZwQueryKey @ 0x1403F9CE0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall BiZwQueryKey(void *a1, KEY_INFORMATION_CLASS a2, void *a3, ULONG a4, PULONG ResultLength)
{
  return ZwQueryKey(a1, a2, a3, a4, ResultLength);
}
