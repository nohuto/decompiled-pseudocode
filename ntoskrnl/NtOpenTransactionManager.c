/*
 * XREFs of NtOpenTransactionManager @ 0x1403D2590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        LPGUID TmIdentity,
        ULONG OpenOptions)
{
  return __imp_NtOpenTransactionManager(TmHandle, DesiredAccess, ObjectAttributes, LogFileName, TmIdentity, OpenOptions);
}
