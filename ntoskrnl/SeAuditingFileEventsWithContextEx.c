/*
 * XREFs of SeAuditingFileEventsWithContextEx @ 0x1405B6960
 * Callers:
 *     SeAuditingFileEventsWithContext @ 0x1409CA700 (SeAuditingFileEventsWithContext.c)
 * Callees:
 *     SepAdtAuditThisEventWithContext @ 0x140699810 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140699890 (SepAdtAuditThisEventByCategoryWithContext.c)
 */

char __fastcall SeAuditingFileEventsWithContextEx(char a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v5; // rbp
  char v7; // bl
  unsigned int v8; // edi
  __int64 v9; // r9

  v5 = a3;
  v7 = 0;
  v8 = a1 != 0 ? 0xFFFFFFD3 : 0;
  if ( a4 )
  {
    LOBYTE(a2) = a1;
    v9 = a3;
    LOBYTE(a3) = a1 == 0;
    *a4 = SepAdtAuditThisEventWithContext(129LL, a2, a3, v9);
  }
  LOBYTE(a2) = a1;
  LOBYTE(a3) = a1 == 0;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(116LL, a2, a3, v5)
    || (unsigned __int8)SepAdtAuditThisEventByCategoryWithContext(3LL, v8 + 48, v5) )
  {
    return 1;
  }
  return v7;
}
