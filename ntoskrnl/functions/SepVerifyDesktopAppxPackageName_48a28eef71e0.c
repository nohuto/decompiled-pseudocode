__int64 __fastcall SepVerifyDesktopAppxPackageName(__int64 a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  _BYTE *Pool2; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *SecurityAttributesList; // rax
  _DWORD *v12; // rsi
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v17; // r14
  unsigned int v19; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v20; // [rsp+64h] [rbp-9Ch] BYREF
  int v21; // [rsp+68h] [rbp-98h] BYREF
  int v22; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  v22 = 2;
  v20 = 0;
  v21 = 0;
  v19 = 0;
  *a3 = 0;
  SecurityAttributesToken = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent(a1, (__int64)&DestinationString) )
    return (unsigned int)SecurityAttributesToken;
  Pool2 = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&v19);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v10 = v19;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v19, 538994003LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)Pool2,
                                v10,
                                (__int64)&v19);
  }
  if ( SecurityAttributesToken < 0 )
  {
    if ( Pool2 )
      goto LABEL_26;
    return (unsigned int)SecurityAttributesToken;
  }
  if ( !Pool2 )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v9, v8);
  v12 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_26;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v22, (__int64)Pool2);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v13 = *(_WORD *)(a2 + 2);
    if ( (v13 & 4) == 0 )
    {
LABEL_13:
      v14 = 0LL;
      goto LABEL_18;
    }
    if ( v13 >= 0 )
    {
      v14 = *(_QWORD *)(a2 + 32);
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v15 )
        goto LABEL_13;
      v14 = a2 + v15;
    }
LABEL_18:
    AceByType = RtlFindAceByType(v14, 9, &v20);
    v17 = AceByType;
    if ( AceByType )
    {
      SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                  a1,
                                  v12,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  &AceByType[4 * AceByType[9] + 16],
                                  *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)AceByType[9] + 8) - 8,
                                  0,
                                  0,
                                  &v21);
      if ( SecurityAttributesToken < 0 )
        break;
      if ( v21 == 1 )
        goto LABEL_23;
    }
    ++v20;
  }
  while ( v17 );
  if ( v21 != 1 )
    goto LABEL_24;
LABEL_23:
  *a3 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12);
LABEL_26:
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SecurityAttributesToken;
}
