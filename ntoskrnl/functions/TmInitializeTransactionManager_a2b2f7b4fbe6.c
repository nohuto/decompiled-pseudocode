// attributes: thunk
NTSTATUS __stdcall TmInitializeTransactionManager(
        PRKTM TransactionManager,
        PCUNICODE_STRING LogFileName,
        PGUID TmId,
        ULONG CreateOptions)
{
  return __imp_TmInitializeTransactionManager(TransactionManager, LogFileName, TmId, CreateOptions);
}
