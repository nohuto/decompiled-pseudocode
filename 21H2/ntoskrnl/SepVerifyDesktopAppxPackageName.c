/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1403763A8
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1403761D8 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140389ED0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x140671A80 (SeQuerySecurityAttributesToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  __int64 v7; // r8
  _BYTE *Pool2; // rdi
  __int64 SecurityAttributesList; // rax
  _DWORD *v10; // rsi
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v15; // r14
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v19; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  v21 = 2;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  *a3 = 0;
  SecurityAttributesToken = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent((__int64)a1, (__int64)&DestinationString, v7) )
    return (unsigned int)SecurityAttributesToken;
  Pool2 = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              (_DWORD)a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&v18);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v17 = v18;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v18, 538994003LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                (_DWORD)a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)Pool2,
                                v17,
                                (__int64)&v18);
  }
  if ( SecurityAttributesToken < 0 )
  {
    if ( Pool2 )
      goto LABEL_20;
    return (unsigned int)SecurityAttributesToken;
  }
  if ( !Pool2 )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
  v10 = (_DWORD *)SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_20;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken(SecurityAttributesList, &v21, (__int64)Pool2);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_16;
  do
  {
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 4) == 0 )
      goto LABEL_28;
    if ( v11 < 0 )
    {
      v12 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v12 )
      {
        v13 = a2 + v12;
        goto LABEL_11;
      }
LABEL_28:
      v13 = 0LL;
      goto LABEL_11;
    }
    v13 = *(_QWORD *)(a2 + 32);
LABEL_11:
    AceByType = RtlFindAceByType(v13, 9, &v19);
    v15 = AceByType;
    if ( AceByType )
    {
      SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                  a1,
                                  v10,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  &AceByType[4 * AceByType[9] + 16],
                                  *((unsigned __int16 *)AceByType + 1) - (4 * (unsigned int)AceByType[9] + 8) - 8,
                                  0,
                                  0,
                                  &v20);
      if ( SecurityAttributesToken < 0 )
        break;
      if ( v20 == 1 )
        goto LABEL_18;
    }
    ++v19;
  }
  while ( v15 );
  if ( v20 != 1 )
    goto LABEL_16;
LABEL_18:
  *a3 = 1;
LABEL_16:
  AuthzBasepFreeSecurityAttributesList(v10);
LABEL_20:
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SecurityAttributesToken;
}
