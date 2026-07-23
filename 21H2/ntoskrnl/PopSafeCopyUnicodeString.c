/*
 * XREFs of PopSafeCopyUnicodeString @ 0x140271DC8
 * Callers:
 *     PopCaptureReasonContext @ 0x140271AF0 (PopCaptureReasonContext.c)
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x140271E8C (RtlStringCbCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopSafeCopyUnicodeString(PCUNICODE_STRING SourceString, wchar_t **a2, __int64 a3, char a4)
{
  wchar_t *v4; // rsi
  __int64 Length; // rcx
  unsigned __int64 v8; // r8
  size_t v9; // rdx
  wchar_t *Buffer; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

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
    v11 = (unsigned __int64)Buffer + Length;
    if ( v11 > 0x7FFFFFFF0000LL || v11 < (unsigned __int64)Buffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( RtlStringCbCopyUnicodeString(v4, v9, SourceString) < 0 )
    return 3221225485LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v4[v12] );
  if ( SourceString->Length != 2 * v12 )
    return 3221225485LL;
  *a2 += v12 + 1;
  return 0LL;
}
