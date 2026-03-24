/*
 * XREFs of SeMakeSystemToken @ 0x140A47F10
 * Callers:
 *     SepInitializationPhase0 @ 0x140A47920 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x1402B5A04 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1405DADB0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140660500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140660570 (RtlCreateAcl.c)
 *     SeSetMandatoryPolicyToken @ 0x140676460 (SeSetMandatoryPolicyToken.c)
 *     RtlAddAccessAllowedAce @ 0x140676BE0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140676C10 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140676C70 (RtlSetOwnerSecurityDescriptor.c)
 *     SepCreateToken @ 0x14079DCB8 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DD90 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 SeMakeSystemToken()
{
  char *v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rax
  unsigned int v3; // r8d
  PSID v4; // r12
  PSID v5; // rbx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // r13d
  ULONG v9; // edi
  ACL *PoolWithTag; // rax
  ACL *v11; // r14
  ULONG v12; // edi
  ACL *v13; // rax
  unsigned __int8 *v14; // rsi
  PVOID v15; // rax
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  ACL *v23; // rcx
  signed __int32 v24[12]; // [rsp+8h] [rbp-120h] BYREF
  int v25; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-68h] BYREF
  PSID v29; // [rsp+C8h] [rbp-60h] BYREF
  int v30; // [rsp+D0h] [rbp-58h]
  int v31; // [rsp+D4h] [rbp-54h]
  __m128i si128; // [rsp+D8h] [rbp-50h] BYREF
  _QWORD v33[3]; // [rsp+E8h] [rbp-40h] BYREF
  int v34; // [rsp+100h] [rbp-28h]
  int v35; // [rsp+104h] [rbp-24h]
  void *v36; // [rsp+108h] [rbp-20h]
  __int64 v37; // [rsp+110h] [rbp-18h]
  char *v38; // [rsp+118h] [rbp-10h] BYREF
  int v39; // [rsp+120h] [rbp-8h]
  LUID v40; // [rsp+124h] [rbp-4h]
  int v41; // [rsp+12Ch] [rbp+4h]
  __int64 v42; // [rsp+130h] [rbp+8h]
  int v43; // [rsp+138h] [rbp+10h]
  LUID v44; // [rsp+13Ch] [rbp+14h]
  int v45; // [rsp+144h] [rbp+1Ch]
  LUID v46; // [rsp+148h] [rbp+20h]
  int v47; // [rsp+150h] [rbp+28h]
  LUID v48; // [rsp+154h] [rbp+2Ch]
  int v49; // [rsp+15Ch] [rbp+34h]
  LUID v50; // [rsp+160h] [rbp+38h]
  int v51; // [rsp+168h] [rbp+40h]
  LUID v52; // [rsp+16Ch] [rbp+44h]
  int v53; // [rsp+174h] [rbp+4Ch]
  LUID v54; // [rsp+178h] [rbp+50h]
  int v55; // [rsp+180h] [rbp+58h]
  LUID v56; // [rsp+184h] [rbp+5Ch]
  int v57; // [rsp+18Ch] [rbp+64h]
  __int64 v58; // [rsp+190h] [rbp+68h]
  int v59; // [rsp+198h] [rbp+70h]
  LUID v60; // [rsp+19Ch] [rbp+74h]
  int v61; // [rsp+1A4h] [rbp+7Ch]
  LUID v62; // [rsp+1A8h] [rbp+80h]
  int v63; // [rsp+1B0h] [rbp+88h]
  __int64 v64; // [rsp+1B4h] [rbp+8Ch]
  int v65; // [rsp+1BCh] [rbp+94h]
  LUID v66; // [rsp+1C0h] [rbp+98h]
  int v67; // [rsp+1C8h] [rbp+A0h]
  LUID v68; // [rsp+1CCh] [rbp+A4h]
  int v69; // [rsp+1D4h] [rbp+ACh]
  LUID v70; // [rsp+1D8h] [rbp+B0h]
  int v71; // [rsp+1E0h] [rbp+B8h]
  LUID v72; // [rsp+1E4h] [rbp+BCh]
  int v73; // [rsp+1ECh] [rbp+C4h]
  LUID v74; // [rsp+1F0h] [rbp+C8h]
  int v75; // [rsp+1F8h] [rbp+D0h]
  LUID v76; // [rsp+1FCh] [rbp+D4h]
  int v77; // [rsp+204h] [rbp+DCh]
  __int64 v78; // [rsp+208h] [rbp+E0h]
  int v79; // [rsp+210h] [rbp+E8h]
  __int64 v80; // [rsp+214h] [rbp+ECh]
  int v81; // [rsp+21Ch] [rbp+F4h]
  __int64 v82; // [rsp+220h] [rbp+F8h]
  int v83; // [rsp+228h] [rbp+100h]
  LUID v84; // [rsp+22Ch] [rbp+104h]
  int v85; // [rsp+234h] [rbp+10Ch]
  __int64 v86; // [rsp+238h] [rbp+110h]
  int v87; // [rsp+240h] [rbp+118h]
  __int64 v88; // [rsp+244h] [rbp+11Ch]
  int v89; // [rsp+24Ch] [rbp+124h]
  __int64 v90; // [rsp+250h] [rbp+128h]
  int v91; // [rsp+258h] [rbp+130h]
  LUID v92; // [rsp+25Ch] [rbp+134h]
  int v93; // [rsp+264h] [rbp+13Ch]
  __int64 v94; // [rsp+268h] [rbp+140h]
  int v95; // [rsp+270h] [rbp+148h]
  LUID v96; // [rsp+274h] [rbp+14Ch]
  int v97; // [rsp+27Ch] [rbp+154h]
  __int64 v98; // [rsp+280h] [rbp+158h]
  int v99; // [rsp+288h] [rbp+160h]
  PSID v100; // [rsp+298h] [rbp+170h] BYREF
  int v101; // [rsp+2A0h] [rbp+178h]
  PSID v102; // [rsp+2A8h] [rbp+180h]
  int v103; // [rsp+2B0h] [rbp+188h]
  __int64 v104; // [rsp+2B8h] [rbp+190h]
  int v105; // [rsp+2C0h] [rbp+198h]
  __int64 v106; // [rsp+2C8h] [rbp+1A0h]
  int v107; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)ExLeapSecondData;
  v28 = 0LL;
  v31 = 0;
  HIDWORD(v33[0]) = 0;
  v25 = 1;
  v35 = 0;
  v27 = 0LL;
  v26 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v27);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v24, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v26) )
    goto LABEL_6;
  v2 = v26;
  v3 = 0;
  if ( !v1 )
    goto LABEL_5;
  v20 = (__int64 *)(v0 + 8);
  while ( 1 )
  {
    v21 = *v20;
    if ( *v20 >= 0 )
    {
      if ( v2 < v21 + 10000000 )
      {
        if ( v2 < v21 )
          goto LABEL_5;
        v2 = 2 * v2 - v21;
      }
      else
      {
        v2 += 10000000LL;
      }
      goto LABEL_18;
    }
    v22 = v21 & 0x7FFFFFFFFFFFFFFFLL;
    if ( v2 < v22 + 10000000 )
      break;
    v2 -= 10000000LL;
LABEL_18:
    ++v3;
    ++v20;
    if ( v3 >= v1 )
      goto LABEL_5;
  }
  if ( v2 < v22 )
LABEL_5:
    v27 = v2;
LABEL_6:
  v4 = SeAliasAdminsSid;
  v5 = SeLocalSystemSid;
  v103 = 7;
  v105 = 7;
  v102 = SeWorldSid;
  v29 = SeLocalSystemSid;
  v30 = 0;
  v100 = SeAliasAdminsSid;
  v104 = SeAuthenticatedUsersSid;
  v106 = SeSystemMandatorySid;
  v101 = 14;
  v107 = 96;
  v6 = ((4 * *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v7 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v39 = 3;
  v41 = 0;
  v43 = 0;
  v45 = 3;
  v38 = (char *)SeTcbPrivilege;
  v8 = v6 + ((4 * v7 + 11) & 0xFFFFFFFC) + 16;
  v40 = SeCreateTokenPrivilege;
  v42 = SeTakeOwnershipPrivilege;
  v44 = SeCreatePagefilePrivilege;
  v46 = SeLockMemoryPrivilege;
  v48 = SeAssignPrimaryTokenPrivilege;
  v50 = SeIncreaseQuotaPrivilege;
  v52 = SeIncreaseBasePriorityPrivilege;
  v54 = SeCreatePermanentPrivilege;
  v56 = SeDebugPrivilege;
  v58 = SeAuditPrivilege;
  v60 = SeSecurityPrivilege;
  v62 = SeSystemEnvironmentPrivilege;
  v64 = SeChangeNotifyPrivilege;
  v66 = SeBackupPrivilege;
  v68 = SeRestorePrivilege;
  v47 = 3;
  v49 = 0;
  v51 = 0;
  v53 = 3;
  v55 = 3;
  v57 = 3;
  v59 = 3;
  v61 = 0;
  v63 = 0;
  v65 = 3;
  v67 = 0;
  v70 = SeShutdownPrivilege;
  v72 = SeLoadDriverPrivilege;
  v74 = SeProfileSingleProcessPrivilege;
  v76 = SeSystemtimePrivilege;
  v78 = SeUndockPrivilege;
  v80 = SeManageVolumePrivilege;
  v82 = SeImpersonatePrivilege;
  v84 = SeCreateGlobalPrivilege;
  v86 = SeTrustedCredManAccessPrivilege;
  v88 = SeRelabelPrivilege;
  v90 = SeIncreaseWorkingSetPrivilege;
  v92 = SeTimeZonePrivilege;
  v94 = SeCreateSymbolicLinkPrivilege;
  v96 = SeSystemProfilePrivilege;
  v75 = 3;
  v83 = 3;
  v85 = 3;
  v91 = 3;
  v93 = 3;
  v95 = 3;
  v97 = 3;
  v99 = 3;
  v98 = SeDelegateSessionUserImpersonatePrivilege;
  v69 = 0;
  v71 = 0;
  v73 = 0;
  v77 = 0;
  v79 = 0;
  v81 = 0;
  v87 = 0;
  v89 = 0;
  v9 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 24;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x63416553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    v12 = 4 * *(unsigned __int8 *)(SeProcTrustWinTcbSid + 1) + 24;
    v13 = (ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x63416553u);
    v14 = (unsigned __int8 *)v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v14, 2u, 0, (unsigned __int8 *)SeProcTrustWinTcbSid, 20, 131096);
      v15 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
      v16 = v15;
      if ( v15 )
      {
        RtlCreateSecurityDescriptor(v15, 1u);
        RtlSetDaclSecurityDescriptor(v16, 1u, v11, 0);
        RtlSetSaclSecurityDescriptor((__int64)v16, 1, (__int64)v14, 0);
        RtlSetOwnerSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        LODWORD(v33[0]) = 48;
        v33[1] = 0LL;
        v34 = 0;
        v33[2] = 0LL;
        v37 = 0LL;
        v36 = v16;
        SepCreateToken(
          (HANDLE *)&v28,
          v17,
          v18,
          v33,
          v24[8],
          v24[10],
          (__int64)&SeSystemAuthenticationId,
          &v27,
          &v29,
          4,
          (__int64)&v100,
          v8,
          0x1Fu,
          &v38,
          v4,
          v5,
          SeSystemDefaultDacl);
        SeSetMandatoryPolicyToken(v28, &v25);
        ExFreePoolWithTag(v11, 0);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag(v16, 0);
        return v28;
      }
      ExFreePoolWithTag(v11, 0);
      v23 = (ACL *)v14;
    }
    else
    {
      v23 = v11;
    }
    ExFreePoolWithTag(v23, 0);
  }
  return 0LL;
}
