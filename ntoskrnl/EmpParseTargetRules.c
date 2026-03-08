/*
 * XREFs of EmpParseTargetRules @ 0x140B4E0F0
 * Callers:
 *     EmpParseInfDatabase @ 0x140B4CEE0 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchTargetRuleList @ 0x1402D62A0 (EmpSearchTargetRuleList.c)
 *     EmpSearchRuleDatabase @ 0x1402D62C8 (EmpSearchRuleDatabase.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140B4DB74 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140B4E09C (EmpInfParseGetSectionLineCount.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140B4E30C (EmpParseTargetRuleStringIndexList.c)
 *     CmpGetSectionLineIndex @ 0x140B4E640 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140B4E760 (CmpGetKeyName.c)
 */

__int64 __fastcall EmpParseTargetRules(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  __int64 KeyName; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // ebp
  void *v9; // r14
  _QWORD *v10; // r13
  int v11; // r8d
  unsigned int v12; // r12d
  unsigned int v13; // r13d
  unsigned int v14; // ebx
  int SectionLineIndex; // eax
  __int64 v16; // rax
  void *Pool2; // rax
  void *v19; // rcx
  int v20; // [rsp+40h] [rbp-58h] BYREF
  unsigned int SectionLineIndexValueCount; // [rsp+44h] [rbp-54h]
  unsigned int v22; // [rsp+48h] [rbp-50h]
  int GuidFromName; // [rsp+4Ch] [rbp-4Ch]
  unsigned int SectionLineCount; // [rsp+50h] [rbp-48h]
  GUID v25; // [rsp+58h] [rbp-40h] BYREF

  v25 = 0LL;
  v2 = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, (__int64)"TargetRuleDef");
  if ( SectionLineCount )
  {
    v3 = 0;
    while ( 1 )
    {
      v2 = 0;
      KeyName = CmpGetKeyName(a1, "TargetRuleDef", v3);
      if ( !KeyName )
        goto LABEL_16;
      GuidFromName = EmpInfParseGetGuidFromName(a1, (__int64)"RuleNameGuidDef", KeyName, &v25);
      v2 = GuidFromName;
      if ( GuidFromName < 0 )
        goto LABEL_16;
      v5 = EmpSearchRuleDatabase(&v25);
      v6 = (__int64)v5;
      if ( !v5 )
        goto LABEL_16;
      v7 = *((_DWORD *)v5 + 10);
      v8 = 0;
      v9 = 0LL;
      v20 = 0;
      if ( !(*((_DWORD *)v5 + 11) + v7) )
        goto LABEL_15;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, (__int64)"TargetRuleDef", v3);
      if ( SectionLineIndexValueCount )
        break;
LABEL_16:
      if ( ++v3 >= SectionLineCount )
        return v2;
    }
    v10 = EmpSearchTargetRuleList(v6);
    v12 = v11 * (*(_DWORD *)(v6 + 40) + *(_DWORD *)(v6 + 44));
    if ( v10 )
    {
      v12 += *((_DWORD *)v10 + 6);
      Pool2 = (void *)ExAllocatePool2(256LL, 4LL * v12, 0x74694D45u);
      v9 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      memmove(Pool2, (const void *)v10[2], 4LL * *((unsigned int *)v10 + 6));
      v8 = *((_DWORD *)v10 + 6);
      v19 = (void *)v10[2];
      v20 = v8;
      ExFreePoolWithTag(v19, 0x74694D45u);
    }
    else
    {
      v9 = (void *)ExAllocatePool2(256LL, 4LL * v12, 0x74694D45u);
      if ( !v9 )
        return (unsigned int)-1073741670;
    }
    v22 = 0;
    v13 = SectionLineIndexValueCount;
    if ( SectionLineIndexValueCount )
    {
      v14 = v22;
      do
      {
        SectionLineIndex = CmpGetSectionLineIndex(a1, "TargetRuleDef", v3, v14);
        EmpParseTargetRuleStringIndexList(
          a1,
          SectionLineIndex,
          *(_DWORD *)(v6 + 40),
          *(_DWORD *)(v6 + 44),
          (__int64)v9,
          v12,
          (__int64)&v20);
        ++v14;
      }
      while ( v14 < v13 );
      v2 = GuidFromName;
      v8 = v20;
    }
    if ( !v8 )
    {
      ExFreePoolWithTag(v9, 0x74694D45u);
      goto LABEL_16;
    }
LABEL_15:
    v16 = ExAllocatePool2(256LL, 0x28uLL, 0x74694D45u);
    *(_DWORD *)v16 = 0;
    ++EmpNumberOfTargetRules;
    *(_QWORD *)(v16 + 8) = v6;
    *(_QWORD *)(v16 + 16) = v9;
    *(_DWORD *)(v16 + 24) = v8;
    *(_QWORD *)(v16 + 32) = EmpTargetRuleListHead;
    EmpTargetRuleListHead = v16 + 32;
    goto LABEL_16;
  }
  return v2;
}
