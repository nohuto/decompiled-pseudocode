/*
 * XREFs of RtlIsNameInExpression @ 0x140219D90
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140218F84 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14064A96C (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x140219EC0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14021A3A0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

BOOLEAN __stdcall RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // edi
  int v6; // eax
  BOOLEAN IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  UnicodeString = 0LL;
  if ( IgnoreCase && !UpcaseTable )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
