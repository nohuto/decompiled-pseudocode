/*
 * XREFs of TmInitializeTransactionManager @ 0x1403D29B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmInitializeTransactionManager(
        PRKTM TransactionManager,
        PCUNICODE_STRING LogFileName,
        PGUID TmId,
        ULONG CreateOptions)
{
  return __imp_TmInitializeTransactionManager(TransactionManager, LogFileName, TmId, CreateOptions);
}
