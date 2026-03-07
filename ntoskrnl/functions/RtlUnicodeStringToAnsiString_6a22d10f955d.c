NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r14
  ULONG v7; // eax
  unsigned __int16 v8; // di
  ULONG MaximumLength; // ecx
  int v10; // edi
  unsigned __int16 v11; // dx
  char *StringRoutine; // rax
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v7 = RtlxUnicodeStringToOemSize(SourceString);
  v8 = v7;
  BytesInMultiByteString = v7;
  if ( v7 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    StringRoutine = (char *)ExpAllocateStringRoutine(v7);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    DestinationString->MaximumLength = v8;
    LOWORD(MaximumLength) = v8;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v7 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v6 = 1;
    }
  }
  v10 = RtlUnicodeToMultiByteN(
          DestinationString->Buffer,
          (unsigned __int16)MaximumLength - 1,
          &BytesInMultiByteString,
          SourceString->Buffer,
          SourceString->Length);
  if ( v10 < 0 )
  {
    if ( AllocateDestinationString )
    {
      ExFreePool(DestinationString->Buffer);
      DestinationString->Buffer = 0LL;
      DestinationString->MaximumLength = 0;
    }
  }
  else
  {
    v11 = BytesInMultiByteString;
    DestinationString->Buffer[BytesInMultiByteString] = 0;
    DestinationString->Length = v11;
  }
  if ( v6 )
    return -2147483643;
  return v10;
}
