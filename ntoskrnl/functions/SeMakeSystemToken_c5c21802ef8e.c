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
  ACL *Pool2; // rax
  ACL *v11; // r14
  ULONG v12; // edi
  ACL *v13; // rax
  unsigned __int8 *v14; // rsi
  void *v15; // rax
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
  _QWORD v32[3]; // [rsp+D8h] [rbp-50h] BYREF
  int v33; // [rsp+F0h] [rbp-38h]
  int v34; // [rsp+F4h] [rbp-34h]
  void *v35; // [rsp+F8h] [rbp-30h]
  __int64 v36; // [rsp+100h] [rbp-28h]
  __m128i si128; // [rsp+108h] [rbp-20h] BYREF
  struct _ERESOURCE v38; // [rsp+118h] [rbp-10h] BYREF
  int v39; // [rsp+180h] [rbp+58h]
  LUID v40; // [rsp+184h] [rbp+5Ch]
  int v41; // [rsp+18Ch] [rbp+64h]
  __int64 v42; // [rsp+190h] [rbp+68h]
  int v43; // [rsp+198h] [rbp+70h]
  LUID v44; // [rsp+19Ch] [rbp+74h]
  int v45; // [rsp+1A4h] [rbp+7Ch]
  LUID v46; // [rsp+1A8h] [rbp+80h]
  int v47; // [rsp+1B0h] [rbp+88h]
  __int64 v48; // [rsp+1B4h] [rbp+8Ch]
  int v49; // [rsp+1BCh] [rbp+94h]
  LUID v50; // [rsp+1C0h] [rbp+98h]
  int v51; // [rsp+1C8h] [rbp+A0h]
  LUID v52; // [rsp+1CCh] [rbp+A4h]
  int v53; // [rsp+1D4h] [rbp+ACh]
  LUID v54; // [rsp+1D8h] [rbp+B0h]
  int v55; // [rsp+1E0h] [rbp+B8h]
  LUID v56; // [rsp+1E4h] [rbp+BCh]
  int v57; // [rsp+1ECh] [rbp+C4h]
  LUID v58; // [rsp+1F0h] [rbp+C8h]
  int v59; // [rsp+1F8h] [rbp+D0h]
  LUID v60; // [rsp+1FCh] [rbp+D4h]
  int v61; // [rsp+204h] [rbp+DCh]
  __int64 v62; // [rsp+208h] [rbp+E0h]
  int v63; // [rsp+210h] [rbp+E8h]
  __int64 v64; // [rsp+214h] [rbp+ECh]
  int v65; // [rsp+21Ch] [rbp+F4h]
  __int64 v66; // [rsp+220h] [rbp+F8h]
  int v67; // [rsp+228h] [rbp+100h]
  LUID v68; // [rsp+22Ch] [rbp+104h]
  int v69; // [rsp+234h] [rbp+10Ch]
  __int64 v70; // [rsp+238h] [rbp+110h]
  int v71; // [rsp+240h] [rbp+118h]
  __int64 v72; // [rsp+244h] [rbp+11Ch]
  int v73; // [rsp+24Ch] [rbp+124h]
  __int64 v74; // [rsp+250h] [rbp+128h]
  int v75; // [rsp+258h] [rbp+130h]
  LUID v76; // [rsp+25Ch] [rbp+134h]
  int v77; // [rsp+264h] [rbp+13Ch]
  __int64 v78; // [rsp+268h] [rbp+140h]
  int v79; // [rsp+270h] [rbp+148h]
  LUID v80; // [rsp+274h] [rbp+14Ch]
  int v81; // [rsp+27Ch] [rbp+154h]
  __int64 v82; // [rsp+280h] [rbp+158h]
  int v83; // [rsp+288h] [rbp+160h]
  PSID v84; // [rsp+298h] [rbp+170h] BYREF
  int v85; // [rsp+2A0h] [rbp+178h]
  PSID v86; // [rsp+2A8h] [rbp+180h]
  int v87; // [rsp+2B0h] [rbp+188h]
  __int64 v88; // [rsp+2B8h] [rbp+190h]
  int v89; // [rsp+2C0h] [rbp+198h]
  __int64 v90; // [rsp+2C8h] [rbp+1A0h]
  int v91; // [rsp+2D0h] [rbp+1A8h]

  v0 = (char *)ExLeapSecondData;
  v28 = 0LL;
  v31 = 0;
  HIDWORD(v32[0]) = 0;
  v34 = 0;
  v27 = 0LL;
  v25 = 1;
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
  v87 = 7;
  v89 = 7;
  v86 = SeWorldSid;
  v29 = SeLocalSystemSid;
  v30 = 0;
  v84 = SeAliasAdminsSid;
  v88 = SeAuthenticatedUsersSid;
  v90 = SeSystemMandatorySid;
  v85 = 14;
  v91 = 96;
  v6 = ((4 * *(unsigned __int8 *)(SeAuthenticatedUsersSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeWorldSid + 1) + 11) & 0xFFFFFFFC)
     + ((4 * *((unsigned __int8 *)SeAliasAdminsSid + 1) + 11) & 0xFFFFFFFC);
  v7 = *(unsigned __int8 *)(SeSystemMandatorySid + 1);
  LODWORD(v38.SystemResourcesList.Blink) = 3;
  HIDWORD(v38.OwnerTable) = 0;
  LODWORD(v38.SharedWaiters) = 0;
  HIDWORD(v38.ExclusiveWaiters) = 3;
  v38.SystemResourcesList.Flink = (struct _LIST_ENTRY *)SeTcbPrivilege;
  v8 = v6 + ((4 * v7 + 11) & 0xFFFFFFFC) + 16;
  *(LUID *)((char *)&v38.SystemResourcesList.Blink + 4) = SeCreateTokenPrivilege;
  *(_QWORD *)&v38.ActiveCount = SeTakeOwnershipPrivilege;
  *(LUID *)((char *)&v38.SharedWaiters + 4) = SeCreatePagefilePrivilege;
  v38.OwnerEntry.OwnerThread = (ERESOURCE_THREAD)SeLockMemoryPrivilege;
  *(LUID *)(&v38.OwnerEntry.8 + 1) = SeAssignPrimaryTokenPrivilege;
  *(LUID *)&v38.NumberOfSharedWaiters = SeIncreaseQuotaPrivilege;
  *(LUID *)((char *)&v38.Reserved2 + 4) = SeIncreaseBasePriorityPrivilege;
  v38.SpinLock = (KSPIN_LOCK)SeCreatePermanentPrivilege;
  v40 = SeDebugPrivilege;
  v42 = SeAuditPrivilege;
  v44 = SeSecurityPrivilege;
  v46 = SeSystemEnvironmentPrivilege;
  v48 = SeChangeNotifyPrivilege;
  v50 = SeBackupPrivilege;
  v52 = SeRestorePrivilege;
  v38.OwnerEntry.TableSize = 3;
  v38.ContentionCount = 0;
  LODWORD(v38.Reserved2) = 0;
  HIDWORD(v38.CreatorBackTraceIndex) = 3;
  v39 = 3;
  v41 = 3;
  v43 = 3;
  v45 = 0;
  v47 = 0;
  v49 = 3;
  v51 = 0;
  v54 = SeShutdownPrivilege;
  v56 = SeLoadDriverPrivilege;
  v58 = SeProfileSingleProcessPrivilege;
  v60 = SeSystemtimePrivilege;
  v62 = SeUndockPrivilege;
  v64 = SeManageVolumePrivilege;
  v66 = SeImpersonatePrivilege;
  v68 = SeCreateGlobalPrivilege;
  v70 = SeTrustedCredManAccessPrivilege;
  v72 = SeRelabelPrivilege;
  v74 = SeIncreaseWorkingSetPrivilege;
  v76 = SeTimeZonePrivilege;
  v78 = SeCreateSymbolicLinkPrivilege;
  v80 = SeSystemProfilePrivilege;
  v59 = 3;
  v67 = 3;
  v69 = 3;
  v75 = 3;
  v77 = 3;
  v79 = 3;
  v81 = 3;
  v83 = 3;
  v82 = SeDelegateSessionUserImpersonatePrivilege;
  v53 = 0;
  v55 = 0;
  v57 = 0;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v71 = 0;
  v73 = 0;
  v9 = 4 * *((unsigned __int8 *)SeLocalSystemSid + 1) + 24;
  Pool2 = (ACL *)ExAllocatePool2(256LL, v9, 0x63416553u);
  v11 = Pool2;
  if ( Pool2 )
  {
    RtlCreateAcl(Pool2, v9, 2u);
    v12 = 4 * *(unsigned __int8 *)(SeProcTrustWinTcbSid + 1) + 24;
    v13 = (ACL *)ExAllocatePool2(256LL, v12, 0x63416553u);
    v14 = (unsigned __int8 *)v13;
    if ( v13 )
    {
      RtlCreateAcl(v13, v12, 2u);
      RtlAddAccessAllowedAce(v11, 2u, 0xF01FFu, SeLocalSystemSid);
      RtlAddProcessTrustLabelAce(v14, 2u, 0, (unsigned __int8 *)SeProcTrustWinTcbSid, 20, 131096);
      v15 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x64536553u);
      v16 = v15;
      if ( v15 )
      {
        RtlCreateSecurityDescriptor(v15, 1u);
        RtlSetDaclSecurityDescriptor(v16, 1u, v11, 0);
        RtlSetSaclSecurityDescriptor((__int64)v16, 1, (__int64)v14, 0);
        RtlSetOwnerSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        RtlSetGroupSecurityDescriptor(v16, SeAliasAdminsSid, 0);
        LODWORD(v32[0]) = 48;
        v32[1] = 0LL;
        v33 = 0;
        v32[2] = 0LL;
        v36 = 0LL;
        v35 = v16;
        SepCreateToken(
          (HANDLE *)&v28,
          v17,
          v18,
          v32,
          v24[8],
          v24[10],
          (__int64)&SeSystemAuthenticationId,
          &v27,
          &v29,
          4u,
          (__int64)&v84,
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
