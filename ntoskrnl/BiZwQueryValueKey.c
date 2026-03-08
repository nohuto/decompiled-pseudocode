/*
 * XREFs of BiZwQueryValueKey @ 0x140390428
 * Callers:
 *     BiGetRegistryValue @ 0x14082EB20 (BiGetRegistryValue.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1404125F0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall BiZwQueryValueKey(
        void *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        void *a4,
        ULONG Length,
        PULONG ResultLength)
{
  return ZwQueryValueKey(a1, a2, KeyValuePartialInformation, a4, Length, ResultLength);
}
