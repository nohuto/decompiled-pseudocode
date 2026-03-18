/*
 * XREFs of TmIsTransactionActive @ 0x1403D7F10
 * Callers:
 *     CmpTransIsTransActive @ 0x14061652C (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x140768EE0 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
