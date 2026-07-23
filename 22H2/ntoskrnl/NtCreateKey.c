/*
 * XREFs of NtCreateKey @ 0x1406E8440
 * Callers:
 *     <none>
 * Callees:
 *     CmCreateKey @ 0x1406E8480 (CmCreateKey.c)
 */

NTSTATUS __cdecl NtCreateKey(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG TitleIndex,
        PUNICODE_STRING Class,
        ULONG CreateOptions,
        PULONG Disposition)
{
  return CmCreateKey(KeyHandle, DesiredAccess, ObjectAttributes, TitleIndex, Class, CreateOptions, Disposition, 0LL);
}
