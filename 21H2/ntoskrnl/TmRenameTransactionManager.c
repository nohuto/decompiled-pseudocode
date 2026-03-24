/*
 * XREFs of TmRenameTransactionManager @ 0x1403D0E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_TmRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
