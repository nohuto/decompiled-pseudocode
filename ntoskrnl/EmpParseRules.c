/*
 * XREFs of EmpParseRules @ 0x140B4DBC0
 * Callers:
 *     EmpParseInfDatabase @ 0x140B4CEE0 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x1402D62C8 (EmpSearchRuleDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1403862FC (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strtoul @ 0x1403D32B8 (strtoul.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     EmpParseRuleExpression @ 0x140B4D6DC (EmpParseRuleExpression.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140B4DB74 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B4E09C (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140B4E640 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140B4E760 (CmpGetKeyName.c)
 *     EmpInfParseSearchDependencyList @ 0x140B4E994 (EmpInfParseSearchDependencyList.c)
 */

__int64 __fastcall EmpParseRules(__int64 a1)
{
  unsigned int v2; // ebp
  int GuidFromName; // edi
  unsigned int SectionLineCount; // r13d
  __int64 KeyName; // r12
  __int64 Pool2; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rax
  void *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v14; // esi
  bool v15; // zf
  unsigned int v16; // eax
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  __int64 i; // rdi
  void *v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rax
  __int128 v33; // [rsp+20h] [rbp-48h] BYREF

  v33 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "RuleDef");
  if ( SectionLineCount )
  {
    do
    {
      KeyName = CmpGetKeyName(a1, "RuleDef", v2);
      if ( !KeyName )
        return 0;
      Pool2 = ExAllocatePool2(256LL, 0x68uLL, 0x74694D45u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      *(_QWORD *)(Pool2 + 56) = 0LL;
      *(_QWORD *)(Pool2 + 64) = 0LL;
      v8 = Pool2;
      *(_QWORD *)(Pool2 + 72) = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      *(_DWORD *)(Pool2 + 16) = 1;
      *(_BYTE *)(Pool2 + 20) = 0;
      v9 = (_QWORD *)(Pool2 + 80);
      v9[1] = v9;
      *v9 = v9;
      *(_DWORD *)(v7 + 48) = 0;
      *(_DWORD *)(v7 + 40) = 0;
      GuidFromName = EmpInfParseGetGuidFromName(a1, "RuleNameGuidDef", KeyName, v8);
      v10 = (void *)v7;
      if ( GuidFromName < 0 || EmpSearchRuleDatabase((_QWORD *)v7) )
      {
        ExFreePoolWithTag(v10, 0x74694D45u);
      }
      else
      {
        SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v2, 0LL);
        if ( !SectionLineIndex )
          goto LABEL_27;
        *(_DWORD *)(v7 + 40) = strtoul(SectionLineIndex, 0LL, 10);
        v12 = (const char *)CmpGetSectionLineIndex(a1, "RuleDef", v2, 1LL);
        if ( !v12 )
          goto LABEL_27;
        *(_DWORD *)(v7 + 44) = strtoul(v12, 0LL, 10);
        SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, (__int64)"RuleDef", v2);
        v14 = SectionLineIndexValueCount;
        if ( SectionLineIndexValueCount < 2 )
          goto LABEL_27;
        v15 = SectionLineIndexValueCount == 2;
        v16 = SectionLineIndexValueCount - 2;
        *(_DWORD *)(v7 + 48) = v16;
        if ( !v15 )
        {
          v18 = ExAllocatePool2(256LL, 8LL * v16, 0x74694D45u);
          *(_QWORD *)(v7 + 56) = v18;
          if ( !v18 )
          {
            ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
            return (unsigned int)-1073741670;
          }
          v19 = 2;
          if ( v14 > 2 )
          {
            while ( 1 )
            {
              v20 = CmpGetSectionLineIndex(a1, "RuleDef", v2, v19);
              if ( (int)EmpInfParseGetGuidFromName(a1, "EntryTypeGuidDef", v20, &v33) < 0 )
                break;
              v21 = EmpSearchEntryDatabase(&v33);
              if ( !v21 )
                break;
              v22 = v21 + 9;
              *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8LL * (v19 - 2)) = v21;
              if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v21 + 9, v7) )
              {
                v23 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
                if ( !v23 )
                  break;
                *v23 = v7;
                v23[1] = *v22;
                *v22 = v23 + 1;
              }
              if ( ++v19 >= v14 )
                goto LABEL_10;
            }
            v26 = v19 - 2;
            if ( v19 != 2 )
            {
              v27 = 0LL;
              v28 = v26;
              do
              {
                v29 = *(_QWORD *)(v27 + *(_QWORD *)(v7 + 56));
                v30 = *(_QWORD **)(v29 + 72);
                if ( *(v30 - 1) == v7 )
                {
                  if ( v30 )
                    *(_QWORD *)(v29 + 72) = *v30;
                  ExFreePoolWithTag(v30 - 1, 0x74694D45u);
                }
                v27 += 8LL;
                --v28;
              }
              while ( v28 );
            }
            goto LABEL_25;
          }
        }
LABEL_10:
        GuidFromName = EmpParseRuleExpression(a1, KeyName, v7);
        if ( GuidFromName < 0 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v7 + 48); i = (unsigned int)(i + 1) )
          {
            v31 = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 8 * i);
            v32 = *(_QWORD **)(v31 + 72);
            if ( *(v32 - 1) == v7 )
            {
              if ( v32 )
                *(_QWORD *)(v31 + 72) = *v32;
              ExFreePoolWithTag(v32 - 1, 0x74694D45u);
            }
          }
LABEL_25:
          v25 = *(void **)(v7 + 56);
          if ( v25 )
            ExFreePoolWithTag(v25, 0x74694D45u);
LABEL_27:
          ExFreePoolWithTag((PVOID)v7, 0x74694D45u);
          GuidFromName = 0;
          goto LABEL_12;
        }
        ++EmpNumberOfRules;
        *(_QWORD *)(v7 + 24) = EmpRuleListHead;
        EmpRuleListHead = v7 + 24;
      }
LABEL_12:
      ++v2;
    }
    while ( v2 < SectionLineCount );
  }
  return (unsigned int)GuidFromName;
}
