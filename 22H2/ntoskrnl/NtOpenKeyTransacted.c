/*
 * XREFs of NtOpenKeyTransacted @ 0x1408685B0
 * Callers:
 *     <none>
 * Callees:
 *     NtOpenKeyTransactedEx @ 0x14066DC10 (NtOpenKeyTransactedEx.c)
 */

NTSTATUS __cdecl NtOpenKeyTransacted(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE TransactionHandle)
{
  return NtOpenKeyTransactedEx(KeyHandle, DesiredAccess, ObjectAttributes, 0, TransactionHandle);
}
