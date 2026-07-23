/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1800627D0
 * Callers:
 *     LdrpGetModuleName @ 0x1800010E8 (LdrpGetModuleName.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToMultiByteSize @ 0x1800628B0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1800628F0 (RtlUnicodeToMultiByteN.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // esi
  ULONG v7; // eax
  unsigned __int16 v8; // cx
  unsigned __int16 MaximumLength; // ax
  int v10; // edi
  bool v11; // sf
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp+10h] BYREF
  BOOLEAN v15; // [rsp+80h] [rbp+18h]

  v15 = AllocateDestinationString;
  v6 = 0;
  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, SourceString->Buffer, SourceString->Length);
  v7 = BytesInMultiByteString + 1;
  if ( BytesInMultiByteString + 1 > 0xFFFF )
    return -1073741584;
  v8 = BytesInMultiByteString;
  DestinationString->Length = BytesInMultiByteString;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v7;
    StringRoutine = (char *)NtdllpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v8 >= MaximumLength )
    {
      if ( !MaximumLength )
        return -2147483643;
      v6 = -2147483643;
      DestinationString->Length = MaximumLength - 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          DestinationString->Length,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 >= 0 )
    DestinationString->Buffer[BytesInMultiByteString] = 0;
  v11 = v10 < 0;
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      NtdllpFreeStringRoutine(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
    }
    v11 = v10 < 0;
  }
  if ( !v11 )
    return v6;
  return v10;
}
