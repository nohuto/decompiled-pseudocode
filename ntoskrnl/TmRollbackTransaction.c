/*
 * XREFs of TmRollbackTransaction @ 0x1403D2BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return __imp_TmRollbackTransaction(Transaction, Wait);
}
