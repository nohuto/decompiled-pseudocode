/*
 * XREFs of SeMakeSystemToken @ 0x140A48F10
 * Callers:
 *     SepInitializationPhase0 @ 0x140A48920 (SepInitializationPhase0.c)
 * Callees:
 *     RtlpTimeFieldsToTimeNoLeapSeconds @ 0x140233BE4 (RtlpTimeFieldsToTimeNoLeapSeconds.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     SeSetMandatoryPolicyToken @ 0x140610854 (SeSetMandatoryPolicyToken.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140655320 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140655390 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14066A2B0 (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14066A2E0 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14066A340 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1406CA530 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1406F2C90 (RtlCreateSecurityDescriptor.c)
 *     SepCreateToken @ 0x14079DEB8 (SepCreateToken.c)
 *     RtlAddProcessTrustLabelAce @ 0x14079DF90 (RtlAddProcessTrustLabelAce.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  ACL *v14; // rsi
  PVOID v15; // rax
  void *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  ACL *v23; // rcx
  signed __int32 v24[8]; // [rsp+8h] [rbp-120h] BYREF
  UCHAR AceType[4]; // [rsp+28h] [rbp-100h]
  ACCESS_MASK AccessMask[2]; // [rsp+30h] [rbp-F8h]
  int v27; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-70h] BYREF
  int v30[2]; // [rsp+C0h] [rbp-68h] BYREF
  _SID_AND_ATTRIBUTES v31; // [rsp+C8h] [rbp-60h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v33; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v34; // [rsp+F0h] [rbp-38h]
  __int64 v35; // [rsp+F8h] [rbp-30h]
  int v36; // [rsp+100h] [rbp-28h]
  int v37; // [rsp+104h] [rbp-24h]
  void *v38; // [rsp+108h] [rbp-20h]
  __int64 v39; // [rsp+110h] [rbp-18h]
  __int64 v40; // [rsp+118h] [rbp-10h] BYREF
  int v41; // [rsp+120h] [rbp-8h]
  LUID v42; // [rsp+124h] [rbp-4h]
  int v43; // [rsp+12Ch] [rbp+4h]
  __int64 v44; // [rsp+130h] [rbp+8h]
  int v45; // [rsp+138h] [rbp+10h]
  LUID v46; // [rsp+13Ch] [rbp+14h]
  int v47; // [rsp+144h] [rbp+1Ch]
  LUID v48; // [rsp+148h] [rbp+20h]
  int v49; // [rsp+150h] [rbp+28h]
  LUID v50; // [rsp+154h] [rbp+2Ch]
  int v51; // [rsp+15Ch] [rbp+34h]
  LUID v52; // [rsp+160h] [rbp+38h]
  int v53; // [rsp+168h] [rbp+40h]
  LUID v54; // [rsp+16Ch] [rbp+44h]
  int v55; // [rsp+174h] [rbp+4Ch]
  LUID v56; // [rsp+178h] [rbp+50h]
  int v57; // [rsp+180h] [rbp+58h]
  LUID v58; // [rsp+184h] [rbp+5Ch]
  int v59; // [rsp+18Ch] [rbp+64h]
  __int64 v60; // [rsp+190h] [rbp+68h]
  int v61; // [rsp+198h] [rbp+70h]
  LUID v62; // [rsp+19Ch] [rbp+74h]
  int v63; // [rsp+1A4h] [rbp+7Ch]
  LUID v64; // [rsp+1A8h] [rbp+80h]
  int v65; // [rsp+1B0h] [rbp+88h]
  __int64 v66; // [rsp+1B4h] [rbp+8Ch]
  int v67; // [rsp+1BCh] [rbp+94h]
  LUID v68; // [rsp+1C0h] [rbp+98h]
  int v69; // [rsp+1C8h] [rbp+A0h]
  LUID v70; // [rsp+1CCh] [rbp+A4h]
  int v71; // [rsp+1D4h] [rbp+ACh]
  LUID v72; // [rsp+1D8h] [rbp+B0h]
  int v73; // [rsp+1E0h] [rbp+B8h]
  LUID v74; // [rsp+1E4h] [rbp+BCh]
  int v75; // [rsp+1ECh] [rbp+C4h]
  LUID v76; // [rsp+1F0h] [rbp+C8h]
  int v77; // [rsp+1F8h] [rbp+D0h]
  LUID v78; // [rsp+1FCh] [rbp+D4h]
  int v79; // [rsp+204h] [rbp+DCh]
  __int64 v80; // [rsp+208h] [rbp+E0h]
  int v81; // [rsp+210h] [rbp+E8h]
  __int64 v82; // [rsp+214h] [rbp+ECh]
  int v83; // [rsp+21Ch] [rbp+F4h]
  __int64 v84; // [rsp+220h] [rbp+F8h]
  int v85; // [rsp+228h] [rbp+100h]
  LUID v86; // [rsp+22Ch] [rbp+104h]
  int v87; // [rsp+234h] [rbp+10Ch]
  __int64 v88; // [rsp+238h] [rbp+110h]
  int v89; // [rsp+240h] [rbp+118h]
  __int64 v90; // [rsp+244h] [rbp+11Ch]
  int v91; // [rsp+24Ch] [rbp+124h]
  __int64 v92; // [rsp+250h] [rbp+128h]
  int v93; // [rsp+258h] [rbp+130h]
  LUID v94; // [rsp+25Ch] [rbp+134h]
  int v95; // [rsp+264h] [rbp+13Ch]
  __int64 v96; // [rsp+268h] [rbp+140h]
  int v97; // [rsp+270h] [rbp+148h]
  LUID v98; // [rsp+274h] [rbp+14Ch]
  int v99; // [rsp+27Ch] [rbp+154h]
  __int64 v100; // [rsp+280h] [rbp+158h]
  int v101; // [rsp+288h] [rbp+160h]
  _SID_AND_ATTRIBUTES v102; // [rsp+298h] [rbp+170h] BYREF
  PSID v103; // [rsp+2A8h] [rbp+180h]
  int v104; // [rsp+2B0h] [rbp+188h]
  __int64 v105; // [rsp+2B8h] [rbp+190h]
  int v106; // [rsp+2C0h] [rbp+198h]
  __int64 v107; // [rsp+2C8h] [rbp+1A0h]
  int v108; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)ExLeapSecondData;
  *(_QWORD *)v30 = 0LL;
  *(&v31.Attributes + 1) = 0;
  HIDWORD(v33) = 0;
  v27 = 1;
  v37 = 0;
  v29 = 0LL;
  v28 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  if ( !ExLeapSecondData || !*(_BYTE *)ExLeapSecondData )
  {
    RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v29);
    goto LABEL_6;
  }
  v1 = *((_DWORD *)ExLeapSecondData + 1);
  _InterlockedOr(v24, 0);
  if ( !RtlpTimeFieldsToTimeNoLeapSeconds(si128.m128i_i16, &v28) )
    goto LABEL_6;
  v2 = v28;
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
    v29 = v2;
LABEL_6:
  v4 = SeAliasAdminsSid;
  v5 = SeLocalSystemSid;
  v104 = 7;
  v106 = 7;
  v103 = SeWorldSid;
  v31.Sid = SeLocalSystemSid;
  v31.Attributes = 0;
  v102.Sid = SeAliasAdminsSid;
  v105 = SeAuthenticatedUsersSid;
  v107 = SeSystemMandatorySid;
  v102.Attributes = 14;
  v108 = 96;
  v6 = ((4 * *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v7 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  v41 = 3;
  v43 = 0;
  v45 = 0;
  v47 = 3;
  v40 = (__int64)SeTcbPrivilege;
  v8 = v6 + ((4 * v7 + 11) & 0xFFFFFFFC) + 16;
  v42 = SeCreateTokenPrivilege;
  v44 = SeTakeOwnershipPrivilege;
  v46 = SeCreatePagefilePrivilege;
  v48 = SeLockMemoryPrivilege;
  v50 = SeAssignPrimaryTokenPrivilege;
  v52 = SeIncreaseQuotaPrivilege;
  v54 = SeIncreaseBasePriorityPrivilege;
  v56 = SeCreatePermanentPrivilege;
  v58 = SeDebugPrivilege;
  v60 = SeAuditPrivilege;
  v62 = SeSecurityPrivilege;
  v64 = SeSystemEnvironmentPrivilege;
  v66 = SeChangeNotifyPrivilege;
  v68 = SeBackupPrivilege;
  v70 = SeRestorePrivilege;
  v49 = 3;
  v51 = 0;
  v53 = 0;
  v55 = 3;
  v57 = 3;
  v59 = 3;
  v61 = 3;
  v63 = 0;
  v65 = 0;
  v67 = 3;
  v69 = 0;
  v72 = SeShutdownPrivilege;
  v74 = SeLoadDriverPrivilege;
  v76 = SeProfileSingleProcessPrivilege;
  v78 = SeSystemtimePrivilege;
  v80 = SeUndockPrivilege;
  v82 = SeManageVolumePrivilege;
  v84 = SeImpersonatePrivilege;
  v86 = SeCreateGlobalPrivilege;
  v88 = SeTrustedCredManAccessPrivilege;
  v90 = SeRelabelPrivilege;
  v92 = SeIncreaseWorkingSetPrivilege;
  v94 = SeTimeZonePrivilege;
  v96 = SeCreateSymbolicLinkPrivilege;
  v98 = SeSystemProfilePrivilege;
  v77 = 3;
  v85 = 3;
  v87 = 3;
  v93 = 3;
  v95 = 3;
  v97 = 3;
  v99 = 3;
  v101 = 3;
  v100 = SeDelegateSessionUserImpersonatePrivilege;
  v71 = 0;
  v73 = 0;
  v75 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v91 = 0;
  v9 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 24;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x63416553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    v12 = 4 * *((unsigned __int8 *)SeProcTrustWinTcbSid + 1) + 24;
    v13 = (ACL *)ExAllocatePoolWithTag(PagedPool, v12, 0x63416553u);
    v14 = v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v14, 2u, 0, SeProcTrustWinTcbSid, 0x14u, 0x20018u);
      v15 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x64536553u);
      v16 = v15;
      if ( v15 )
      {
        RtlCreateSecurityDescriptor(v15, 1u);
        RtlSetDaclSecurityDescriptor(v16, 1u, v11, 0);
        RtlSetSaclSecurityDescriptor(v16, 1u, v14, 0);
        RtlSetOwnerSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        LODWORD(v33) = 48;
        v34 = 0LL;
        v36 = 0;
        v35 = 0LL;
        v39 = 0LL;
        v38 = v16;
        SepCreateToken(
          (HANDLE *)v30,
          v17,
          v18,
          &v33,
          *(int *)AceType,
          AccessMask[0],
          (__int64)&SeSystemAuthenticationId,
          &v29,
          &v31,
          4u,
          &v102,
          v8,
          0x1Fu,
          (char **)&v40,
          v4,
          v5,
          SeSystemDefaultDacl);
        SeSetMandatoryPolicyToken(*(__int64 *)v30, &v27);
        ExFreePoolWithTag(v11, 0);
        ExFreePoolWithTag(v14, 0);
        ExFreePoolWithTag(v16, 0);
        return *(_QWORD *)v30;
      }
      ExFreePoolWithTag(v11, 0);
      v23 = v14;
    }
    else
    {
      v23 = v11;
    }
    ExFreePoolWithTag(v23, 0);
  }
  return 0LL;
}
