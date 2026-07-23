/*
 * XREFs of NtQueryInformationByName @ 0x140894850
 * Callers:
 *     <none>
 * Callees:
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 */

NTSTATUS __cdecl NtQueryInformationByName(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  return IoQueryInformationByName(
           (__int64)ObjectAttributes,
           (__int64)IoStatusBlock,
           FileInformation,
           Length,
           FileInformationClass,
           0,
           0LL);
}
