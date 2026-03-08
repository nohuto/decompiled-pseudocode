/*
 * XREFs of HalBugCheckSystem @ 0x1404FFD10
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void __stdcall __noreturn HalBugCheckSystem(PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource, PWHEA_ERROR_RECORD ErrorRecord)
{
  ULONG_PTR v2; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR Type; // rbx
  _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor; // r8
  int v7; // ebp
  _GUID *p_SectionType; // r10
  __int64 v9; // rax
  __int64 SectionOffset; // rcx
  ULONG_PTR v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9

  v2 = 0LL;
  BugCheckParameter4 = 0LL;
  Type = 255LL;
  if ( !ErrorRecord )
    goto LABEL_15;
  SectionDescriptor = ErrorRecord->SectionDescriptor;
  v7 = 0;
  if ( !ErrorRecord->Header.SectionCount )
    goto LABEL_15;
  p_SectionType = &ErrorRecord->SectionDescriptor[0].SectionType;
  while ( 1 )
  {
    v9 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&NMI_SECTION_GUID.Data1;
    if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&NMI_SECTION_GUID.Data1 )
      v9 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)NMI_SECTION_GUID.Data4;
    if ( v9 )
    {
      v12 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
      if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1 )
        v12 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
      if ( !v12 )
      {
        v13 = *(_QWORD *)&ErrorRecord->Header.PlatformId.Data4[SectionDescriptor->SectionOffset];
        BugCheckParameter4 = (unsigned int)v13;
        v2 = HIDWORD(v13);
LABEL_15:
        if ( ErrorSource )
          Type = ErrorSource->Type;
        KeBugCheckEx(0x124u, Type, (ULONG_PTR)ErrorRecord, v2, BugCheckParameter4);
      }
    }
    else
    {
      SectionOffset = SectionDescriptor->SectionOffset;
      if ( (*((_BYTE *)&ErrorRecord->Header.SignatureEnd + SectionOffset + 2) & 1) == 0 )
      {
        v11 = *((unsigned __int8 *)&ErrorRecord->Header.Signature + SectionOffset);
        HalpDoingCrashDump = 1;
        HalpBugcheckInProgress = 1;
        KeBugCheckEx(0x80u, 0x4F4454uLL, v11, 0LL, 0LL);
      }
    }
    ++SectionDescriptor;
    p_SectionType = (_GUID *)((char *)p_SectionType + 72);
    if ( ++v7 >= (unsigned int)ErrorRecord->Header.SectionCount )
      goto LABEL_15;
  }
}
