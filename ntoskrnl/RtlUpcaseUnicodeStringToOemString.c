/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x1408716E0
 * Callers:
 *     DifRtlUpcaseUnicodeStringToOemStringWrapper @ 0x1405E9E80 (DifRtlUpcaseUnicodeStringToOemStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140303E1C (AllocateOrValidateCharStringBuffer.c)
 *     RtlpDidUnicodeToOemWork @ 0x14079FF20 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x14079FFE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r12
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

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
    v10 = RtlUpcaseUnicodeToOemN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInOemString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInOemString;
      DestinationString->Length = BytesInOemString;
      (*p_Buffer)[v11] = 0;
      if ( !RtlpDidUnicodeToOemWork(&DestinationString->Length, (__int64)SourceString) )
        v10 = -1073741470;
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
