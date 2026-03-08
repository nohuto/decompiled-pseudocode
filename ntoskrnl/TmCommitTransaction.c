/*
 * XREFs of TmCommitTransaction @ 0x1403D28B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmCommitTransaction(PKTRANSACTION Transaction, BOOLEAN Wait)
{
  return __imp_TmCommitTransaction(Transaction, Wait);
}
