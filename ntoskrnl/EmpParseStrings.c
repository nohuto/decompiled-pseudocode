/*
 * XREFs of EmpParseStrings @ 0x140B4DEC4
 * Callers:
 *     EmpParseInfDatabase @ 0x140B4CEE0 (EmpParseInfDatabase.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x1403BD50C (RtlStringCchCopyA.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B4E09C (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140B4E640 (CmpGetSectionLineIndex.c)
 */

__int64 __fastcall EmpParseStrings(__int64 a1)
{
  NTSTATUS v2; // ebx
  unsigned int SectionLineCount; // eax
  unsigned int v4; // esi
  _BYTE *v5; // rdi
  unsigned int v6; // edi
  __int64 SectionLineIndex; // rax
  const char *v8; // r14
  __int64 v9; // rdx
  char *Pool2; // rax
  __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // r11
  _QWORD *v15; // rcx
  __int64 v16; // r8
  signed __int64 v17; // rdx

  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "Strings");
  v4 = SectionLineCount;
  if ( !SectionLineCount )
    return (unsigned int)v2;
  v5 = EmpStringTable;
  if ( !EmpStringTable )
  {
    EmpStringTable = (PVOID)ExAllocatePool2(256LL, 8LL * SectionLineCount, 0x74694D45u);
    if ( EmpStringTable )
      goto LABEL_4;
    return (unsigned int)-1073741670;
  }
  EmpStringTable = (PVOID)ExAllocatePool2(256LL, 8LL * (SectionLineCount + EmpNumberOfStrings), 0x74694D45u);
  v15 = EmpStringTable;
  if ( !EmpStringTable )
    return (unsigned int)-1073741670;
  if ( EmpNumberOfStrings )
  {
    v16 = (unsigned int)EmpNumberOfStrings;
    v17 = v5 - (_BYTE *)EmpStringTable;
    do
    {
      *v15 = *(_QWORD *)((char *)v15 + v17);
      ++v15;
      --v16;
    }
    while ( v16 );
  }
  ExFreePoolWithTag(v5, 0x74694D45u);
LABEL_4:
  v6 = 0;
  while ( v6 < v4 )
  {
    SectionLineIndex = CmpGetSectionLineIndex(a1, "Strings", v6, 0LL);
    v8 = (const char *)SectionLineIndex;
    if ( SectionLineIndex )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( *(_BYTE *)(SectionLineIndex + v9) );
      Pool2 = (char *)ExAllocatePool2(256LL, v9 + 1, 0x74694D45u);
      *((_QWORD *)EmpStringTable + (unsigned int)EmpNumberOfStrings) = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v11 = -1LL;
      do
        ++v11;
      while ( v8[v11] );
      v2 = RtlStringCchCopyA(Pool2, v11 + 1, v8);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v13 + 8 * v12), 0x74694D45u);
        v2 = 0;
      }
      else
      {
        ++EmpNumberOfStrings;
      }
      ++v6;
    }
  }
  return (unsigned int)v2;
}
