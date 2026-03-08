/*
 * XREFs of CmpTransIsTransActive @ 0x14061407C
 * Callers:
 *     CmpReportNotifyHelper @ 0x1407AF050 (CmpReportNotifyHelper.c)
 * Callees:
 *     TmIsTransactionActive @ 0x1403D29F0 (TmIsTransactionActive.c)
 *     CmpTransGetTransPtr @ 0x140A19620 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
