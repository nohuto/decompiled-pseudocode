/*
 * XREFs of RtlUnicodeStringToOemString @ 0x1408612C0
 * Callers:
 *     DifRtlUnicodeStringToOemStringWrapper @ 0x1405EBFA0 (DifRtlUnicodeStringToOemStringWrapper.c)
 *     ExpSystemErrorHandler2 @ 0x140AAB210 (ExpSystemErrorHandler2.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1402F768C (AllocateOrValidateCharStringBuffer.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407561F0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToOemN @ 0x1407D1280 (RtlUnicodeToOemN.c)
 *     ExFreePool @ 0x140AAFCC0 (ExFreePool.c)
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
