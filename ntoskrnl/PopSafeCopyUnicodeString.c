/*
 * XREFs of PopSafeCopyUnicodeString @ 0x1402BD794
 * Callers:
 *     PopCaptureReasonContext @ 0x1402BD4D4 (PopCaptureReasonContext.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x1402BD854 (RtlStringCbCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopSafeCopyUnicodeString(PCUNICODE_STRING SourceString, wchar_t **a2, __int64 a3, char a4)
{
  wchar_t *v4; // rsi
  __int64 Length; // rcx
  unsigned __int64 v8; // r8
  size_t v9; // rdx
  __int64 v10; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v13; // rcx

  v4 = *a2;
  Length = SourceString->Length;
  v8 = a3 - (_QWORD)*a2;
  v9 = Length + 2;
  if ( Length + 2 > v8 )
    return 3221225485LL;
  if ( a4 && (_WORD)Length )
  {
    Buffer = SourceString->Buffer;
    if ( ((unsigned __int8)Buffer & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v13 = (unsigned __int64)Buffer + Length;
    if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( RtlStringCbCopyUnicodeString(v4, v9, SourceString) < 0 )
    return 3221225485LL;
  v10 = -1LL;
  do
    ++v10;
  while ( v4[v10] );
  if ( SourceString->Length != 2 * v10 )
    return 3221225485LL;
  *a2 += v10 + 1;
  return 0LL;
}
