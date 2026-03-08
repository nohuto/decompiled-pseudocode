/*
 * XREFs of NtOpenTransaction @ 0x1403D2570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtOpenTransaction(
        PHANDLE TransactionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        LPGUID Uow,
        HANDLE TmHandle)
{
  return __imp_NtOpenTransaction(TransactionHandle, DesiredAccess, ObjectAttributes, Uow, TmHandle);
}
