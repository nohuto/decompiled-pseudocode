/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x14079F7A0
 * Callers:
 *     DifRtlUnicodeStringToCountedOemStringWrapper @ 0x1405E99C0 (DifRtlUnicodeStringToCountedOemStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140303E1C (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToOemN @ 0x14079F690 (RtlUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x14079FF20 (RtlpDidUnicodeToOemWork.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r13
  char **p_Buffer; // r14
  NTSTATUS result; // eax
  int v10; // esi
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString) - 1;
  BytesInOemString = v6;
  if ( v6 )
  {
    if ( v6 > 0xFFFF )
    {
      return -1073741584;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateCharStringBuffer(
                 AllocateDestinationString,
                 v6,
                 (__int64 *)&DestinationString->Buffer,
                 &DestinationString->MaximumLength);
      if ( result >= 0 )
      {
        v10 = RtlUnicodeToOemN(
                *p_Buffer,
                *p_MaximumLength,
                &BytesInOemString,
                SourceString->Buffer,
                SourceString->Length);
        if ( v10 >= 0 )
        {
          DestinationString->Length = BytesInOemString;
          if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
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
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
