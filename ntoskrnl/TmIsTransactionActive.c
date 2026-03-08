/*
 * XREFs of TmIsTransactionActive @ 0x1403D29F0
 * Callers:
 *     CmpTransIsTransActive @ 0x14061407C (CmpTransIsTransActive.c)
 *     CmpTransReferenceTransaction @ 0x1406B5C38 (CmpTransReferenceTransaction.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall TmIsTransactionActive(PKTRANSACTION Transaction)
{
  return __imp_TmIsTransactionActive(Transaction);
}
