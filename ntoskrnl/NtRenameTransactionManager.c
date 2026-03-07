// attributes: thunk
NTSTATUS __stdcall NtRenameTransactionManager(PUNICODE_STRING LogFileName, LPGUID ExistingTransactionManagerGuid)
{
  return __imp_NtRenameTransactionManager(LogFileName, ExistingTransactionManagerGuid);
}
