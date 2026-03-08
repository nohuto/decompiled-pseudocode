/*
 * XREFs of RtlUnicodeStringToOemString @ 0x14085D450
 * Callers:
 *     DifRtlUnicodeStringToOemStringWrapper @ 0x1405E9AF0 (DifRtlUnicodeStringToOemStringWrapper.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140303E1C (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToOemN @ 0x14079F690 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned __int16 v11; // dx
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  BytesInOemString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlUnicodeToOemN(*p_Buffer, *p_MaximumLength, &BytesInOemString, SourceString->Buffer, SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInOemString;
      (*p_Buffer)[BytesInOemString] = 0;
      DestinationString->Length = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
