/*
 * XREFs of SeValidSecurityDescriptor @ 0x1405F1FD0
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1402A6E80 (RtlNormalizeSecurityDescriptor.c)
 *     WmipSDRegistryQueryRoutine @ 0x1405F1F50 (WmipSDRegistryQueryRoutine.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x14063926C (EtwpGetGuidSecurityDescriptor.c)
 *     PiSwValidateCreateData @ 0x14074E604 (PiSwValidateCreateData.c)
 *     SepReadAndPopulateCapes @ 0x1407CDFCC (SepReadAndPopulateCapes.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     Feature_2546989371__private_IsEnabledDeviceUsage @ 0x1403F8FB0 (Feature_2546989371__private_IsEnabledDeviceUsage.c)
 *     RtlValidAcl @ 0x1406513E0 (RtlValidAcl.c)
 */

BOOLEAN __stdcall SeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  char *v4; // rsi
  char *v5; // r14
  char *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r9d
  ULONG pulResult; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( Length < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
    return 0;
  v7 = *((unsigned int *)SecurityDescriptor + 1);
  if ( !(_DWORD)v7 )
    return 0;
  v8 = (unsigned int)v7;
  if ( ((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
    return 0;
  if ( (unsigned int)v7 > Length )
    return 0;
  if ( Length - (unsigned int)v7 < 0xC )
    return 0;
  if ( *((_BYTE *)SecurityDescriptor + v7) != 1 )
    return 0;
  v9 = *((unsigned __int8 *)SecurityDescriptor + v7 + 1);
  if ( (unsigned __int8)v9 > 0xFu )
    return 0;
  if ( Length - (unsigned int)v7 < 4 * v9 + 8 )
    return 0;
  v10 = *((unsigned int *)SecurityDescriptor + 2);
  if ( (_DWORD)v10 )
  {
    if ( ((v10 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v10 )
      return 0;
    if ( (unsigned int)v10 > Length )
      return 0;
    if ( Length - (unsigned int)v10 < 0xC )
      return 0;
    v4 = (char *)SecurityDescriptor + v10;
    if ( *((_BYTE *)SecurityDescriptor + v10) != 1 )
      return 0;
    v11 = (unsigned __int8)v4[1];
    if ( (unsigned __int8)v11 > 0xFu || Length - (unsigned int)v10 < 4 * v11 + 8 )
      return 0;
  }
  if ( ((v12 = *((unsigned int *)SecurityDescriptor + 4), !(_DWORD)v12)
     || ((v12 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v12
     && (unsigned int)v12 <= Length
     && Length - (unsigned int)v12 >= 8
     && (v5 = (char *)SecurityDescriptor + v12,
         Length - (unsigned int)v12 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v12 + 2))
     && RtlValidAcl((PACL)((char *)SecurityDescriptor + v12)))
    && ((v13 = *((unsigned int *)SecurityDescriptor + 3), !(_DWORD)v13)
     || ((v13 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v13
     && (unsigned int)v13 <= Length
     && Length - (unsigned int)v13 >= 8
     && (v6 = (char *)SecurityDescriptor + v13,
         Length - (unsigned int)v13 >= *(unsigned __int16 *)((char *)SecurityDescriptor + v13 + 2))
     && RtlValidAcl((PACL)((char *)SecurityDescriptor + v13)))
    && (!(unsigned int)Feature_2546989371__private_IsEnabledDeviceUsage()
     || (v14 = *((unsigned __int8 *)SecurityDescriptor + v8 + 1),
         pulResult = 0,
         RtlULongAdd(0x14u, (4 * v14 + 11) & 0xFFFFFFFC, &pulResult) >= 0)
     && (!v4 || RtlULongAdd(pulResult, v15 & (4 * (unsigned __int8)v4[1] + 11), &pulResult) >= 0)
     && (!v5 || RtlULongAdd(pulResult, v15 & (*((unsigned __int16 *)v5 + 1) + 3), &pulResult) >= 0)
     && (!v6 || RtlULongAdd(pulResult, v15 & (*((unsigned __int16 *)v6 + 1) + 3), &pulResult) >= 0)
     && pulResult <= Length) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
