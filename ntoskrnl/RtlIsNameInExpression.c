/*
 * XREFs of RtlIsNameInExpression @ 0x140365B20
 * Callers:
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1403657AC (AuthzBasepCompareUnicodeStringOperands.c)
 *     AuthzBasepCompareFQBNOperands @ 0x14066CC80 (AuthzBasepCompareFQBNOperands.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140365BA0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140365D60 (RtlpIsNameInExpressionPrivate.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
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
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
