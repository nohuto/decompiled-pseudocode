/*
 * XREFs of RtlIsNameInExpression @ 0x1800FB430
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB5BC (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800FBB34 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

BOOLEAN __cdecl RtlIsNameInExpression(
        PUNICODE_STRING Expression,
        PUNICODE_STRING Name,
        BOOLEAN IgnoreCase,
        PWCH UpcaseTable)
{
  int v5; // esi
  NTSTATUS v6; // eax
  wchar_t *Buffer; // rbx
  BOOLEAN IsNameInExpressionPrivate; // di
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-18h] BYREF

  v5 = (int)Expression;
  if ( !IgnoreCase || UpcaseTable )
  {
    Buffer = 0LL;
    UnicodeString.Buffer = 0LL;
  }
  else
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, Name);
    if ( v6 < 0 )
      RtlRaiseStatus(v6);
    Name = &UnicodeString;
    IgnoreCase = 0;
    Buffer = UnicodeString.Buffer;
  }
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate(v5, (_DWORD)Name, IgnoreCase, 0, (__int64)UpcaseTable);
  if ( Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return IsNameInExpressionPrivate;
}
