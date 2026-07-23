/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1405F6630
 * Callers:
 *     ExpKdPullRemoteFileForUser @ 0x14095BB9C (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x1402301A0 (NLS_DOWNCASE.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  SIZE_T Length; // rax
  unsigned int v6; // ebx
  unsigned int v7; // r10d
  unsigned __int16 v8; // ax
  __int64 v9; // r9
  wchar_t *StringRoutine; // rax

  Length = SourceString->Length;
  v6 = 0;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = Length;
    StringRoutine = (wchar_t *)ExpAllocateStringRoutine(Length);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    LOWORD(Length) = SourceString->Length;
  }
  else if ( (unsigned __int16)Length > DestinationString->MaximumLength )
  {
    return -2147483643;
  }
  v7 = (unsigned __int16)Length >> 1;
  while ( v6 < v7 )
  {
    v8 = NLS_DOWNCASE(SourceString->Buffer[v6]);
    DestinationString->Buffer[v9] = v8;
    ++v6;
  }
  DestinationString->Length = SourceString->Length;
  return 0;
}
