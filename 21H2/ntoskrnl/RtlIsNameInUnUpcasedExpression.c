/*
 * XREFs of RtlIsNameInUnUpcasedExpression @ 0x140219E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsNameInExpressionPrivate @ 0x140219EC0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x14021A3A0 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 */

__int64 __fastcall RtlIsNameInUnUpcasedExpression(
        UNICODE_STRING *a1,
        UNICODE_STRING *p_UnicodeString,
        char a3,
        __int64 a4)
{
  __int64 v4; // rbx
  int v6; // eax
  int v7; // eax
  unsigned __int8 IsNameInExpressionPrivate; // bl
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-18h] BYREF

  v4 = a4;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_QWORD *)&v11.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v11.Buffer = 0LL;
  if ( a3 && !a4 )
  {
    v6 = RtlpUpcaseUnicodeStringPrivate(&UnicodeString, p_UnicodeString);
    if ( v6 < 0 )
      RtlRaiseStatus((unsigned int)v6);
    v7 = RtlpUpcaseUnicodeStringPrivate(&v11, a1);
    if ( v7 < 0 )
      RtlRaiseStatus((unsigned int)v7);
    p_UnicodeString = &UnicodeString;
    a1 = &v11;
    a3 = 0;
  }
  LOBYTE(a4) = 1;
  IsNameInExpressionPrivate = RtlpIsNameInExpressionPrivate((_DWORD)a1, (_DWORD)p_UnicodeString, a3, a4, v4);
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v11.Buffer )
    RtlFreeUnicodeString(&v11);
  return IsNameInExpressionPrivate;
}
