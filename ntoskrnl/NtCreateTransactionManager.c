/*
 * XREFs of NtCreateTransactionManager @ 0x1403D24B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtCreateTransactionManager(
        PHANDLE TmHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PUNICODE_STRING LogFileName,
        ULONG CreateOptions,
        ULONG CommitStrength)
{
  return __imp_NtCreateTransactionManager(
           TmHandle,
           DesiredAccess,
           ObjectAttributes,
           LogFileName,
           CreateOptions,
           CommitStrength);
}
