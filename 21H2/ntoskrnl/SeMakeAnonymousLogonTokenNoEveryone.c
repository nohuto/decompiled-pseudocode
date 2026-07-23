/*
 * XREFs of SeMakeAnonymousLogonTokenNoEveryone @ 0x140A494C0
 * Callers:
 *     SepInitializationPhase1 @ 0x14079D578 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SeSetMandatoryPolicyToken @ 0x140610854 (SeSetMandatoryPolicyToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14066A2E0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14066A340 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     SepCreateToken @ 0x14079DEB8 (SepCreateToken.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 SeMakeAnonymousLogonTokenNoEveryone()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // rbx
  unsigned int v5; // r14d
  ULONG v6; // edi
  ACL *PoolWithTag; // rax
  ACL *v8; // rsi
  PVOID v9; // rax
  void *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17[12]; // [rsp+8h] [rbp-120h] BYREF
  int v18; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-70h] BYREF
  int v21[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v22; // [rsp+C8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v25; // [rsp+F0h] [rbp-38h]
  __int64 v26; // [rsp+F8h] [rbp-30h]
  int v27; // [rsp+100h] [rbp-28h]
  int v28; // [rsp+104h] [rbp-24h]
  void *v29; // [rsp+108h] [rbp-20h]
  __int64 v30; // [rsp+110h] [rbp-18h]
  _SID_AND_ATTRIBUTES v31; // [rsp+118h] [rbp-10h] BYREF

  v0 = (char *)ExLeapSecondData;
  *(_QWORD *)v21 = 0LL;
  *(&v22.Attributes + 1) = 0;
  HIDWORD(v24) = 0;
  v18 = 1;
  v28 = 0;
  v20 = 0LL;
  v19 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v20);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v17, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v19) )
    goto LABEL_6;
  v2 = v19;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v14 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 >= 0 )
    {
      if ( v2 < v15 + 10000000 )
      {
        if ( v2 < v15 )
          goto LABEL_5;
        v2 = 2 * v2 - v15;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_17;
    }
    v16 = v15 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v16 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_17:
    ++v3;
    ++v14;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v16 )
LABEL_5:
    v20 = v2;
LABEL_6:
  v4 = SeAnonymousLogonSid;
  v31.Sid = SeUntrustedMandatorySid;
  v22.Sid = SeAnonymousLogonSid;
  v22.Attributes = 0;
  v31.Attributes = 96;
  v5 = ((4 * *((unsigned __int8 *)SeUntrustedMandatorySid + 1) + 11) & 0xFFFFFFFC) + 16;
  v6 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, 0xC8uLL, 0x63416553u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v6, 2u);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v9 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
    v10 = v9;
    if ( v9 )
    {
      RtlCreateSecurityDescriptor(v9, 1u);
      RtlSetDaclSecurityDescriptor(v10, 1u, v8, 0);
      RtlSetOwnerSecurityDescriptor(v10, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v10, SeWorldSid, 0);
      LODWORD(v24) = 48;
      v25 = 0LL;
      v27 = 0;
      v26 = 0LL;
      v29 = v10;
      v30 = 0LL;
      SepCreateToken(
        (HANDLE *)v21,
        v11,
        v12,
        &v24,
        v17[8],
        v17[10],
        (__int64)&SeAnonymousAuthenticationId,
        &v20,
        &v22,
        1u,
        &v31,
        v5,
        0,
        0LL,
        0LL,
        v4,
        v8);
      SeSetMandatoryPolicyToken(*(__int64 *)v21, &v18);
      ExFreePoolWithTag(v8, 0);
      ExFreePoolWithTag(v10, 0);
      return *(_QWORD *)v21;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return 0LL;
}
