/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x1403F8C74
 * Callers:
 *     SepFinalizeTokenAcls @ 0x1405D00A0 (SepFinalizeTokenAcls.c)
 * Callees:
 *     RtlEqualSid @ 0x14026A980 (RtlEqualSid.c)
 *     RtlGetAce @ 0x14026C9B0 (RtlGetAce.c)
 *     RtlFindAceByType @ 0x14035CF60 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ObGetObjectSecurity @ 0x14061F620 (ObGetObjectSecurity.c)
 *     RtlAddAce @ 0x140653F50 (RtlAddAce.c)
 *     ObReleaseObjectSecurity @ 0x140654230 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1406548C0 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x140655280 (ObSetSecurityObjectByPointer.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CA530 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DF90 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *a1)
{
  PVOID v2; // r14
  NTSTATUS Acl; // ebx
  unsigned __int8 *v4; // r15
  NTSTATUS ObjectSecurity; // eax
  _WORD *v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rax
  ACL *v9; // rsi
  char *AceByType; // rax
  char *v11; // rbx
  int v12; // r12d
  ULONG v13; // ebx
  ACL *Pool2; // rax
  ACL *v15; // rsi
  BOOLEAN MemoryAllocated[4]; // [rsp+38h] [rbp-39h] BYREF
  ULONG AclRevision; // [rsp+3Ch] [rbp-35h]
  ULONG v19; // [rsp+40h] [rbp-31h] BYREF
  int v20; // [rsp+44h] [rbp-2Dh]
  ULONG Index; // [rsp+48h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v24[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v25; // [rsp+80h] [rbp+Fh]
  __int64 AclInformation; // [rsp+88h] [rbp+17h] BYREF
  int v27; // [rsp+90h] [rbp+1Fh]

  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  AclInformation = 0LL;
  v2 = 0LL;
  v27 = 0;
  v19 = 0;
  Ace = 0LL;
  Index = 0;
  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = (unsigned __int8 *)a1[138];
  v20 = 8;
  AclRevision = 2;
  ObjectSecurity = ObGetObjectSecurity(a1, &SecurityDescriptor, MemoryAllocated);
  v6 = SecurityDescriptor;
  Acl = ObjectSecurity;
  if ( ObjectSecurity < 0 )
    goto LABEL_33;
  if ( !SecurityDescriptor )
    return (unsigned int)Acl;
  v7 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v7 & 0x10) == 0 )
    goto LABEL_21;
  if ( v7 < 0 )
  {
    v8 = *((unsigned int *)SecurityDescriptor + 3);
    if ( (_DWORD)v8 )
    {
      v9 = (ACL *)((char *)SecurityDescriptor + v8);
      goto LABEL_10;
    }
LABEL_21:
    v12 = HIDWORD(AclInformation);
LABEL_22:
    if ( v4 )
    {
      v13 = v20 + 16 + 4 * v4[1];
      Pool2 = (ACL *)ExAllocatePool2(256LL, v13, 1665230163LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        Acl = RtlCreateAcl(Pool2, v13, AclRevision);
        if ( Acl >= 0 )
        {
          if ( !v2 || (Acl = RtlAddAce(v15, AclRevision, 0, v2, v12 - 8), Acl >= 0) )
          {
            Acl = RtlAddProcessTrustLabelAce(v15, 2u, 0, v4, 0x14u, 0x2001Eu);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v24, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetSaclSecurityDescriptor(v24, 1u, v15, 0);
                if ( Acl >= 0 )
                {
                  WORD1(v24[0]) |= v6[1] & 0x2830;
                  Acl = ObSetSecurityObjectByPointer(a1, 504LL, v24);
                }
              }
            }
          }
        }
        ExFreePoolWithTag(v15, 0);
      }
      else
      {
        Acl = -1073741670;
      }
      goto LABEL_33;
    }
    goto LABEL_20;
  }
  v9 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
LABEL_10:
  if ( !v9 )
    goto LABEL_21;
  AceByType = (char *)RtlFindAceByType(v9, 0x14u, &Index);
  v11 = AceByType;
  if ( !v4 )
  {
    if ( AceByType )
      goto LABEL_13;
LABEL_20:
    Acl = 0;
    goto LABEL_33;
  }
  if ( AceByType && RtlEqualSid(AceByType + 8, v4) )
  {
    *((_DWORD *)v11 + 1) &= 0x2001Eu;
    goto LABEL_20;
  }
LABEL_13:
  Acl = RtlQueryInformationAcl(v9, &AclInformation, 0xCu, AclSizeInformation);
  if ( Acl >= 0 )
  {
    v12 = HIDWORD(AclInformation);
    v20 = HIDWORD(AclInformation);
    Acl = RtlQueryInformationAcl(v9, &v19, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      AclRevision = v19;
      Acl = RtlGetAce(v9, 0, &Ace);
      if ( Acl >= 0 )
      {
        v2 = Ace;
        goto LABEL_22;
      }
    }
  }
LABEL_33:
  if ( v6 )
    ObReleaseObjectSecurity(v6, MemoryAllocated[0]);
  return (unsigned int)Acl;
}
