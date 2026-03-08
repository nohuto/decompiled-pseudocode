/*
 * XREFs of EmpParseRuleExpression @ 0x140B4D6DC
 * Callers:
 *     EmpParseRules @ 0x140B4DBC0 (EmpParseRules.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     EmpParseRuleTerm @ 0x140B4D578 (EmpParseRuleTerm.c)
 *     CmpGetSectionLineIndex @ 0x140B4E640 (CmpGetSectionLineIndex.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140B4E6B8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpRuleParserStackPop @ 0x140B4E8C4 (EmpRuleParserStackPop.c)
 *     EmpRuleParserStackPush @ 0x140B4E91C (EmpRuleParserStackPush.c)
 *     EmpInfParseSearchDependencyList @ 0x140B4E994 (EmpInfParseSearchDependencyList.c)
 */

__int64 __fastcall EmpParseRuleExpression(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // r15
  void *v6; // r13
  _BYTE *ValueFromSectionAndKeyName; // r14
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  char v10; // al
  _DWORD *v11; // r14
  unsigned int v12; // r8d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  int v20; // edx
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r9
  __int64 v27; // r10
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  ULONG v35; // edx
  void *i; // rcx
  _QWORD *v37; // rdi
  __int64 v38; // rdx
  _QWORD *v39; // rax
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  _QWORD *v42; // rax
  unsigned int v43; // [rsp+30h] [rbp-20h] BYREF
  int v44; // [rsp+34h] [rbp-1Ch]
  unsigned int v45; // [rsp+38h] [rbp-18h] BYREF
  __int64 v46; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v47; // [rsp+48h] [rbp-8h] BYREF
  char v49; // [rsp+A8h] [rbp+58h] BYREF

  v45 = 0;
  v47 = 0LL;
  v46 = 0LL;
  v43 = 0;
  v4 = 0;
  v44 = 0;
  v5 = 0LL;
  v6 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, "Rule", a2);
  if ( !ValueFromSectionAndKeyName )
  {
    v4 = -1073741275;
    goto LABEL_56;
  }
  Pool2 = ExAllocatePool2(256LL, 0x10uLL, 0x74734D45u);
  v9 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)Pool2 = 0;
    *(_QWORD *)(Pool2 + 8) = 0LL;
  }
  do
  {
    if ( *ValueFromSectionAndKeyName != 37 )
    {
      if ( *ValueFromSectionAndKeyName == 38 )
        goto LABEL_47;
      if ( *ValueFromSectionAndKeyName != 63 )
      {
        if ( *ValueFromSectionAndKeyName != 124 )
          goto LABEL_62;
LABEL_47:
        if ( *(_DWORD *)v9 < 2u )
          goto LABEL_62;
        v5 = ExAllocatePool2(256LL, 0x38uLL, 0x74734D45u);
        if ( !v5
          || (*(_QWORD *)(v5 + 8) = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v29 = ExAllocatePool2(256LL, 0x20uLL, 0x74734D45u),
              v30 = *(_QWORD *)(v5 + 8),
              *(_QWORD *)(v5 + 32) = v29,
              !v30)
          || !v29 )
        {
LABEL_61:
          v4 = -1073741670;
          goto LABEL_29;
        }
        *(_BYTE *)v5 = *ValueFromSectionAndKeyName;
        *(_DWORD *)(v30 + 16) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v5 + 32) + 16LL) = 0;
        *(_QWORD *)(*(_QWORD *)(v5 + 32) + 24LL) = 0LL;
        if ( !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 *(_QWORD *)(v5 + 32),
                                 (unsigned int)*(_QWORD *)(v5 + 32) + 8,
                                 (int)v5 + 48,
                                 v5 + 40)
          || !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 *(_QWORD *)(v5 + 8),
                                 (unsigned int)*(_QWORD *)(v5 + 8) + 8,
                                 (int)v5 + 24,
                                 v5 + 16) )
        {
          goto LABEL_60;
        }
        EmpRuleParserStackPush((_DWORD)v9, 2, v5, 0, 0);
        goto LABEL_25;
      }
    }
    v4 = EmpParseRuleTerm(a1, (__int64)ValueFromSectionAndKeyName, &v47, &v46, &v43);
    if ( v4 < 0 )
      goto LABEL_29;
    v10 = *ValueFromSectionAndKeyName;
    v11 = v47;
    v49 = v10;
    if ( v10 == 63 )
    {
      v12 = v47[14];
      v13 = v47[15];
    }
    else
    {
      v12 = v47[10];
      v13 = v47[11];
    }
    v14 = v13 + v12;
    if ( (unsigned int)v14 > v43 )
      goto LABEL_62;
    v15 = 0LL;
    if ( v12 )
    {
      while ( *(_DWORD *)(v46 + 4 * v15) < *(_DWORD *)(a3 + 40) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v12 )
          goto LABEL_14;
      }
      goto LABEL_62;
    }
LABEL_14:
    v16 = v12;
    if ( v12 < (unsigned int)v14 )
    {
      while ( *(_DWORD *)(v46 + 4LL * v16) < *(_DWORD *)(a3 + 44) )
      {
        if ( ++v16 >= (unsigned int)v14 )
          goto LABEL_17;
      }
      goto LABEL_62;
    }
LABEL_17:
    while ( (unsigned int)v14 < v43 )
    {
      v25 = *(unsigned int *)(v46 + 4 * v14);
      if ( (unsigned int)v25 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_62;
      v26 = (_DWORD)v14 - v13 - v12;
      v27 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8 * v25);
      if ( !(v49 == 63 ? v27 == *(_QWORD *)&v47[2 * v26 + 18] : v27 == *(_QWORD *)(*((_QWORD *)v47 + 7) + 8 * v26)) )
        goto LABEL_62;
      v14 = (unsigned int)(v14 + 1);
    }
    if ( v49 == 63 )
    {
      v22 = (_QWORD *)ExAllocatePool2(256LL, 0x10uLL, 0x74694D45u);
      if ( !v22 )
        goto LABEL_61;
      *v22 = v11;
      v23 = v11 + 12;
      v22[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v22 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 12, a3) )
      {
        v24 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v24 )
          goto LABEL_61;
        *v24 = a3;
        v24[1] = *v23;
        *v23 = v24 + 1;
      }
      v20 = 0;
    }
    else
    {
      v17 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
      if ( !v17 )
        goto LABEL_61;
      *v17 = v11;
      v18 = v11 + 8;
      v17[1] = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 72) = v17 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 8, a3) )
      {
        v19 = (_QWORD *)ExAllocatePool2(256LL, 0x18uLL, 0x74694D45u);
        if ( !v19 )
          goto LABEL_61;
        *v19 = a3;
        v19[1] = *v18;
        *v18 = v19 + 1;
      }
      v20 = 1;
    }
    EmpRuleParserStackPush((_DWORD)v9, v20, (_DWORD)v11, v46, v43);
LABEL_25:
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v45, (unsigned int)++v44);
  }
  while ( ValueFromSectionAndKeyName );
  if ( *(_DWORD *)v9 == 1 )
  {
    v6 = (void *)ExAllocatePool2(256LL, 0x20uLL, 0x74694D45u);
    if ( (unsigned __int8)EmpRuleParserStackPop((_DWORD)v9, (_DWORD)v6, (int)v6 + 8, (int)v6 + 24, (__int64)v6 + 16) )
    {
      *(_QWORD *)(a3 + 96) = v6;
      goto LABEL_29;
    }
LABEL_60:
    v4 = -1073741275;
    goto LABEL_29;
  }
LABEL_62:
  v4 = -1073741811;
LABEL_29:
  if ( v9 )
  {
    while ( v9[1] )
      EmpRuleParserStackPop((_DWORD)v9, (unsigned int)&v45, (unsigned int)&v46, (unsigned int)&v47, (__int64)&v49);
    ExFreePoolWithTag(v9, 0x74734D45u);
  }
  if ( v4 < 0 )
  {
    if ( !v5 )
      goto LABEL_56;
    v33 = *(void **)(v5 + 8);
    if ( v33 )
      ExFreePoolWithTag(v33, 0x74734D45u);
    v34 = *(void **)(v5 + 32);
    if ( v34 )
      ExFreePoolWithTag(v34, 0x74734D45u);
    v35 = 1953713477;
    for ( i = (void *)v5; ; i = v37 )
    {
      ExFreePoolWithTag(i, v35);
LABEL_56:
      v31 = *(_QWORD **)(a3 + 72);
      if ( !v31 )
        break;
      v37 = v31 - 1;
      *(_QWORD *)(a3 + 72) = *v31;
      v38 = *(v31 - 1);
      v39 = *(_QWORD **)(v38 + 32);
      if ( *(v39 - 1) == a3 )
      {
        if ( v39 )
          *(_QWORD *)(v38 + 32) = *v39;
        ExFreePoolWithTag(v39 - 1, 0x74694D45u);
      }
      v35 = 1953058117;
    }
    while ( 1 )
    {
      v32 = *(_QWORD **)(a3 + 64);
      if ( !v32 )
        break;
      v40 = v32 - 1;
      *(_QWORD *)(a3 + 64) = *v32;
      v41 = *(v32 - 1);
      v42 = *(_QWORD **)(v41 + 48);
      if ( *(v42 - 1) == a3 )
      {
        if ( v42 )
          *(_QWORD *)(v41 + 48) = *v42;
        ExFreePoolWithTag(v42 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v40, 0x74694D45u);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x74694D45u);
  }
  return (unsigned int)v4;
}
