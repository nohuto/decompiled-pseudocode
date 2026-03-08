/*
 * XREFs of SeMakeAnonymousLogonToken @ 0x140B489A0
 * Callers:
 *     SepInitializationPhase1 @ 0x140810320 (SepInitializationPhase1.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1402D11E0 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14068E3D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406D26A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406DB5A0 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1406DB640 (RtlCreateAcl.c)
 *     SeSetMandatoryPolicyToken @ 0x140742AD4 (SeSetMandatoryPolicyToken.c)
 *     RtlAddAccessAllowedAce @ 0x140744250 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140744590 (RtlSetGroupSecurityDescriptor.c)
 *     SepCreateToken @ 0x1408106D4 (SepCreateToken.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 SeMakeAnonymousLogonToken()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // rbx
  unsigned int v5; // r15d
  ULONG v6; // edi
  ACL *Pool2; // rax
  ACL *v8; // rsi
  void *v9; // rax
  void *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  signed __int32 v17[12]; // [rsp+8h] [rbp-120h] BYREF
  int v18; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v21; // [rsp+C0h] [rbp-68h] BYREF
  PSID v22; // [rsp+C8h] [rbp-60h] BYREF
  int v23; // [rsp+D0h] [rbp-58h]
  int v24; // [rsp+D4h] [rbp-54h]
  _QWORD v25[3]; // [rsp+D8h] [rbp-50h] BYREF
  int v26; // [rsp+F0h] [rbp-38h]
  int v27; // [rsp+F4h] [rbp-34h]
  void *v28; // [rsp+F8h] [rbp-30h]
  __int64 v29; // [rsp+100h] [rbp-28h]
  __m128i si128; // [rsp+108h] [rbp-20h] BYREF
  PSID v31; // [rsp+118h] [rbp-10h] BYREF
  int v32; // [rsp+120h] [rbp-8h]
  PSID v33; // [rsp+128h] [rbp+0h]
  int v34; // [rsp+130h] [rbp+8h]

  v0 = (char *)ExLeapSecondData;
  v21 = 0LL;
  v24 = 0;
  HIDWORD(v25[0]) = 0;
  v27 = 0;
  v20 = 0LL;
  v18 = 1;
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
  v31 = SeWorldSid;
  v33 = SeLowMandatorySid;
  v22 = SeAnonymousLogonSid;
  v23 = 0;
  v32 = 7;
  v34 = 96;
  v5 = ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + 16
     + ((4 * *((unsigned __int8 *)SeLowMandatorySid + 1) + 11) & 0xFFFFFFFC);
  v6 = 4 * (*((unsigned __int8 *)SeAnonymousLogonSid + 1) + *((unsigned __int8 *)SeWorldSid + 1)) + 48;
  Pool2 = (ACL *)ExAllocatePool2(256LL, 0xC8uLL, 0x63416553u);
  v8 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v6, 2u);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, SeWorldSid);
    RtlAddAccessAllowedAce(v8, 2u, 0xF01FFu, SeAnonymousLogonSid);
    v9 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
    v10 = v9;
    if ( v9 )
    {
      RtlCreateSecurityDescriptor(v9, 1u);
      RtlSetDaclSecurityDescriptor(v10, 1u, v8, 0);
      RtlSetOwnerSecurityDescriptor(v10, SeWorldSid, 0);
      RtlSetGroupSecurityDescriptor(v10, SeWorldSid, 0);
      LODWORD(v25[0]) = 48;
      v25[1] = 0LL;
      v26 = 0;
      v25[2] = 0LL;
      v28 = v10;
      v29 = 0LL;
      SepCreateToken(
        (HANDLE *)&v21,
        v11,
        v12,
        v25,
        v17[8],
        v17[10],
        (__int64)&SeAnonymousAuthenticationId,
        &v20,
        &v22,
        2u,
        (__int64)&v31,
        v5,
        0,
        0LL,
        0LL,
        v4,
        v8);
      SeSetMandatoryPolicyToken(v21, &v18);
      ExFreePoolWithTag(v8, 0);
      ExFreePoolWithTag(v10, 0);
      return v21;
    }
    ExFreePoolWithTag(v8, 0);
  }
  return 0LL;
}
