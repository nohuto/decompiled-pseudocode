/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18007C6E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     NLS_DOWNCASE @ 0x18007C780 (NLS_DOWNCASE.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int Length; // eax
  unsigned int v6; // ebx
  wchar_t *StringRoutine; // rax
  unsigned int v8; // r10d
  wchar_t v9; // ax
  __int64 v10; // r9

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(Length) = SourceString->Length;
  }
  else if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v8 = (unsigned __int16)Length >> 1;
  while ( v6 < v8 )
  {
    v9 = NLS_DOWNCASE(SourceString->Buffer[v6]);
    DestinationString->Buffer[v10] = v9;
    ++v6;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
