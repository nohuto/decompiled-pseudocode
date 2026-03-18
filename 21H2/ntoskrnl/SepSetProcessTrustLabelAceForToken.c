/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x14041A13C
 * Callers:
 *     SepFinalizeTokenAcls @ 0x140659D50 (SepFinalizeTokenAcls.c)
 * Callees:
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     RtlEqualSid @ 0x1402A6DB0 (RtlEqualSid.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1406E14B0 (ObReleaseObjectSecurity.c)
 *     ObGetObjectSecurity @ 0x1406E5110 (ObGetObjectSecurity.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlQueryInformationAcl @ 0x140724B00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     ObSetSecurityObjectByPointer @ 0x140724D30 (ObSetSecurityObjectByPointer.c)
 *     RtlAddProcessTrustLabelAce @ 0x140848A40 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  unsigned __int8 *AceByType; // rax
  unsigned __int8 *v11; // rbx
  int v12; // r12d
  ULONG v13; // ebx
  ACL *Pool2; // rax
  ACL *v15; // rsi
  __int64 v16; // rdx
  ULONG AceListLength; // [rsp+28h] [rbp-49h]
  __int64 MemoryAllocated; // [rsp+38h] [rbp-39h] BYREF
  int v20; // [rsp+40h] [rbp-31h] BYREF
  int v21; // [rsp+44h] [rbp-2Dh]
  unsigned int v22; // [rsp+48h] [rbp-29h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp-21h] BYREF
  PVOID Ace; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v25[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v26; // [rsp+80h] [rbp+Fh]
  __int64 v27; // [rsp+88h] [rbp+17h] BYREF
  int v28; // [rsp+90h] [rbp+1Fh]

  SecurityDescriptor = 0LL;
  LOBYTE(MemoryAllocated) = 0;
  v27 = 0LL;
  v2 = 0LL;
  v28 = 0;
  v20 = 0;
  Ace = 0LL;
  v22 = 0;
  v26 = 0LL;
  memset(v25, 0, sizeof(v25));
  if ( !a1 )
    return (unsigned int)-1073741811;
  v4 = (unsigned __int8 *)a1[138];
  v21 = 8;
  HIDWORD(MemoryAllocated) = 2;
  ObjectSecurity = ObGetObjectSecurity(a1, &SecurityDescriptor, (PBOOLEAN)&MemoryAllocated);
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
    v12 = HIDWORD(v27);
LABEL_22:
    if ( v4 )
    {
      v13 = v21 + 16 + 4 * v4[1];
      Pool2 = (ACL *)ExAllocatePool2(256LL, v13, 1665230163LL);
      v15 = Pool2;
      if ( Pool2 )
      {
        Acl = RtlCreateAcl(Pool2, v13, HIDWORD(MemoryAllocated));
        if ( Acl >= 0 )
        {
          if ( !v2 || (Acl = RtlAddAce(v15, HIDWORD(MemoryAllocated), 0, v2, v12 - 8), Acl >= 0) )
          {
            LOBYTE(AceListLength) = 20;
            Acl = RtlAddProcessTrustLabelAce(v15, 2LL, 0LL, v4, AceListLength, 131102, MemoryAllocated);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v25, 1u);
              if ( Acl >= 0 )
              {
                LOBYTE(v16) = 1;
                Acl = RtlSetSaclSecurityDescriptor(v25, v16, v15, 0LL);
                if ( Acl >= 0 )
                {
                  WORD1(v25[0]) |= v6[1] & 0x2830;
                  Acl = ObSetSecurityObjectByPointer(a1, 504LL, v25);
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
  AceByType = RtlFindAceByType((__int64)v9, 20, &v22);
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
  Acl = RtlQueryInformationAcl(v9, &v27, 12LL, 2LL);
  if ( Acl >= 0 )
  {
    v12 = HIDWORD(v27);
    v21 = HIDWORD(v27);
    Acl = RtlQueryInformationAcl(v9, &v20, 4LL, 1LL);
    if ( Acl >= 0 )
    {
      HIDWORD(MemoryAllocated) = v20;
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
    ObReleaseObjectSecurity(v6, MemoryAllocated);
  return (unsigned int)Acl;
}
