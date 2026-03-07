__int64 __fastcall EmpParseCallbacks(__int64 a1)
{
  unsigned int v2; // esi
  int GuidFromName; // ebx
  unsigned int SectionLineCount; // r12d
  __int64 KeyName; // rbx
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v7; // r15d
  __int64 Pool2; // rax
  __int64 v9; // rdi
  void *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int v13; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF

  v18 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "CallbackDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      KeyName = CmpGetKeyName(a1, "CallbackDef", v2);
      if ( !KeyName )
        return 0;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "CallbackDef", v2);
      v7 = SectionLineIndexValueCount;
      if ( SectionLineIndexValueCount < 2 )
        goto LABEL_19;
      Pool2 = ExAllocatePool2(256LL, (int)(8 * SectionLineIndexValueCount + 56), 0x74694D45u);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      GuidFromName = EmpInfParseGetGuidFromName(a1, "CallbackGuidDef", KeyName, Pool2, v18, *((_QWORD *)&v18 + 1));
      v10 = (void *)v9;
      if ( GuidFromName < 0 || EmpSearchCallbackDatabase((_QWORD *)v9) )
        goto LABEL_18;
      *(_DWORD *)(v9 + 64) = v7 - 2;
      SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 0LL);
      if ( !SectionLineIndex )
        goto LABEL_17;
      *(_DWORD *)(v9 + 56) = strtoul(SectionLineIndex, 0LL, 10);
      v12 = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 1LL);
      if ( !v12 )
        goto LABEL_17;
      v13 = 2;
      *(_DWORD *)(v9 + 60) = strtoul(v12, 0LL, 10);
      if ( v7 > 2 )
        break;
LABEL_10:
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_QWORD *)(v9 + 16) = 0LL;
      *(_DWORD *)(v9 + 24) = 0;
      *(_QWORD *)(v9 + 32) = 0LL;
      ++EmpNumberOfCallbacks;
      *(_QWORD *)(v9 + 40) = EmpCallbackListHead;
      EmpCallbackListHead = v9 + 40;
LABEL_11:
      if ( ++v2 >= SectionLineCount )
        return (unsigned int)GuidFromName;
    }
    while ( 1 )
    {
      v15 = CmpGetSectionLineIndex(a1, "CallbackDef", v2, v13);
      GuidFromName = ((__int64 (__fastcall *)(__int64, const char *, __int64, __int128 *))EmpInfParseGetGuidFromName)(
                       a1,
                       "EntryTypeGuidDef",
                       v15,
                       &v18);
      if ( GuidFromName < 0 )
        break;
      v16 = EmpSearchEntryDatabase(&v18);
      if ( !v16 )
        break;
      v17 = v13 - 2;
      ++v13;
      *(_QWORD *)(v9 + 8 * v17 + 72) = v16;
      if ( v13 >= v7 )
        goto LABEL_10;
    }
LABEL_17:
    v10 = (void *)v9;
LABEL_18:
    ExFreePoolWithTag(v10, 0x74694D45u);
LABEL_19:
    GuidFromName = 0;
    goto LABEL_11;
  }
  return (unsigned int)GuidFromName;
}
