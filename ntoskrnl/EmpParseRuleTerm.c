/*
 * XREFs of EmpParseRuleTerm @ 0x140B4D578
 * Callers:
 *     EmpParseRuleExpression @ 0x140B4D6DC (EmpParseRuleExpression.c)
 * Callees:
 *     EmpSearchRuleDatabase @ 0x1402D62C8 (EmpSearchRuleDatabase.c)
 *     EmpSearchCallbackDatabase @ 0x1403862C4 (EmpSearchCallbackDatabase.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strchr @ 0x1403D5520 (strchr.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     EmpInfParseGetGuidFromName @ 0x140B4DFF0 (EmpInfParseGetGuidFromName.c)
 *     EmpParseRuleTermArgMapping @ 0x140B4E9B8 (EmpParseRuleTermArgMapping.c)
 */

__int64 __fastcall EmpParseRuleTerm(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4, unsigned int *a5)
{
  __int64 v5; // rbx
  void *Pool2; // rsi
  char *v11; // rax
  char *v12; // r12
  int GuidFromName; // ebx
  _DWORD *v14; // rax
  int v15; // r14d
  int v16; // ebp
  int v17; // r15d
  unsigned int v18; // edi
  _DWORD *v20; // rax
  __int128 v21; // [rsp+38h] [rbp-60h] BYREF

  v5 = a2 + 1;
  Pool2 = 0LL;
  v21 = 0LL;
  v11 = strchr((const char *)(a2 + 1), 40);
  v12 = v11;
  if ( !v11 )
    return (unsigned int)-1073741811;
  *v11 = 0;
  if ( *(_BYTE *)a2 == 63 )
  {
    GuidFromName = EmpInfParseGetGuidFromName(a1, "CallbackGuidDef", v5, &v21);
    if ( GuidFromName < 0 )
      return (unsigned int)GuidFromName;
    v20 = EmpSearchCallbackDatabase(&v21);
    if ( v20 )
    {
      *a3 = v20;
      v15 = v20[14];
      v16 = v20[15];
      v17 = v20[16];
      goto LABEL_6;
    }
    return (unsigned int)-1073741275;
  }
  GuidFromName = EmpInfParseGetGuidFromName(a1, "RuleNameGuidDef", v5, &v21);
  if ( GuidFromName < 0 )
    return (unsigned int)GuidFromName;
  v14 = EmpSearchRuleDatabase(&v21);
  if ( !v14 )
    return (unsigned int)-1073741275;
  *a3 = v14;
  v15 = v14[10];
  v16 = v14[11];
  v17 = v14[12];
LABEL_6:
  *v12 = 40;
  v18 = v17 + v15 + v16;
  if ( v18 )
  {
    Pool2 = (void *)ExAllocatePool2(256LL, 4LL * v18, 0x74734D45u);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( !(unsigned __int8)EmpParseRuleTermArgMapping(v12, v17) )
    {
      GuidFromName = -1073741811;
      ExFreePoolWithTag(Pool2, 0x74734D45u);
      return (unsigned int)GuidFromName;
    }
  }
  *a4 = Pool2;
  *a5 = v18;
  return (unsigned int)GuidFromName;
}
