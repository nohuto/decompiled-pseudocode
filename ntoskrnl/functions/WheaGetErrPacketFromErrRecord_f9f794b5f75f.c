PWHEA_ERROR_PACKET __stdcall WheaGetErrPacketFromErrRecord(PWHEA_ERROR_RECORD Record)
{
  struct _WHEA_ERROR_PACKET_V2 *v1; // rdi
  int SectionCount; // ecx
  _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor; // rsi
  int v5; // ebp
  __int64 SectionOffset; // rax
  struct _WHEA_ERROR_PACKET_V2 *v7; // rcx

  v1 = 0LL;
  if ( Record->Header.Signature == 1380274243 )
  {
    SectionCount = Record->Header.SectionCount;
    if ( Record->Header.Length >= 72 * SectionCount + 128 )
    {
      SectionDescriptor = Record->SectionDescriptor;
      v5 = 0;
      if ( SectionCount )
      {
        while ( RtlCompareMemory(&SectionDescriptor->SectionType, &WHEA_ERROR_PACKET_SECTION_GUID, 0x10uLL) != 16 )
        {
          ++SectionDescriptor;
          if ( ++v5 >= (unsigned int)Record->Header.SectionCount )
            return v1;
        }
        SectionOffset = SectionDescriptor->SectionOffset;
        if ( Record->Header.Length >= (unsigned int)(SectionOffset + SectionDescriptor->SectionLength) )
        {
          v7 = (struct _WHEA_ERROR_PACKET_V2 *)((char *)Record + SectionOffset);
          if ( *(unsigned int *)((char *)&Record->Header.Signature + SectionOffset) != 1095059543 )
            return 0LL;
          return v7;
        }
      }
    }
  }
  return v1;
}
