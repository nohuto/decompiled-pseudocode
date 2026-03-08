/*
 * XREFs of BiZwSetValueKey @ 0x14039038C
 * Callers:
 *     BiSetRegistryValue @ 0x14082D198 (BiSetRegistryValue.c)
 * Callees:
 *     ZwSetValueKey @ 0x140412F10 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall BiZwSetValueKey(void *a1, UNICODE_STRING *a2, __int64 a3, ULONG a4, PVOID Data, ULONG DataSize)
{
  return ZwSetValueKey(a1, a2, 0, a4, Data, DataSize);
}
