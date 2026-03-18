/*
 * XREFs of SepVariableInitialization @ 0x140B1F3C0
 * Callers:
 *     SepInitializationPhase0 @ 0x140B1E170 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlLengthRequiredSid @ 0x14066A560 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     SepInitializeSharedSidMap @ 0x140848B8C (SepInitializeSharedSidMap.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140B2114C (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // edi
  _DWORD *Pool2; // rbx
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  ULONG v10; // ebx
  ULONG v11; // edi
  ULONG v12; // ebx
  _DWORD *v13; // r12
  _DWORD *v14; // r13
  _DWORD *v15; // r15
  _DWORD *v16; // r14
  _DWORD *v17; // rdi
  _DWORD *v18; // rbx
  PSID v19; // rsi
  _DWORD *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  _OWORD *v24; // rdx
  _DWORD *v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _DWORD *v34; // rax
  _OWORD *v35; // r8
  _OWORD *v36; // rdx
  __int64 v37; // rdx
  char *v38; // rcx
  _DWORD *v40; // [rsp+20h] [rbp-E0h]
  _DWORD *v41; // [rsp+20h] [rbp-E0h]
  __int64 v42; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  __int64 IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  PSID Sid; // [rsp+50h] [rbp-B0h]
  PSID v48; // [rsp+58h] [rbp-A8h]
  PSID v49; // [rsp+60h] [rbp-A0h]
  PSID v50; // [rsp+68h] [rbp-98h]
  PSID v51; // [rsp+70h] [rbp-90h]
  PSID v52; // [rsp+78h] [rbp-88h]
  PSID v53; // [rsp+80h] [rbp-80h]
  PSID v54; // [rsp+88h] [rbp-78h]
  PSID v55; // [rsp+90h] [rbp-70h]
  PSID v56; // [rsp+98h] [rbp-68h]
  PSID v57; // [rsp+A0h] [rbp-60h]
  PSID v58; // [rsp+A8h] [rbp-58h]
  PSID v59; // [rsp+B0h] [rbp-50h]
  PSID v60; // [rsp+B8h] [rbp-48h]
  PSID v61; // [rsp+C0h] [rbp-40h]
  PSID v62; // [rsp+C8h] [rbp-38h]
  PSID v63; // [rsp+D0h] [rbp-30h]
  PSID v64; // [rsp+D8h] [rbp-28h]
  PSID v65; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v66; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v67; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v68; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING SourceString; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v70; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v71; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING v72; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v73; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v74; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v75; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v76; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v77; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v78; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v79; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v80; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v81; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v82; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v83; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v84; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v85; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v86; // [rsp+228h] [rbp+128h] BYREF
  PSID v87; // [rsp+238h] [rbp+138h]
  PSID v88; // [rsp+240h] [rbp+140h]
  PSID v89; // [rsp+248h] [rbp+148h]
  PSID v90; // [rsp+250h] [rbp+150h]
  PSID v91; // [rsp+258h] [rbp+158h]
  PSID v92; // [rsp+260h] [rbp+160h]
  PSID v93; // [rsp+268h] [rbp+168h]
  PSID v94; // [rsp+270h] [rbp+170h]
  PSID v95; // [rsp+278h] [rbp+178h]
  PSID v96; // [rsp+280h] [rbp+180h]
  ULONG Size; // [rsp+2E0h] [rbp+1E0h]
  __int64 v98; // [rsp+2E8h] [rbp+1E8h] BYREF
  __int64 v99; // [rsp+2F0h] [rbp+1F0h] BYREF
  __int64 v100; // [rsp+2F8h] [rbp+1F8h] BYREF

  *(_QWORD *)&SourceString.Length = 2359330LL;
  SourceString.Buffer = L"lpacAppExperience";
  v70.Buffer = L"lpacCom";
  v71.Buffer = L"lpacCryptoServices";
  v72.Buffer = L"lpacIdentityServices";
  v73.Buffer = L"lpacInstrumentation";
  v74.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v75.Buffer = L"lpacMedia";
  v76.Buffer = L"lpacPnpNotifications";
  v77.Buffer = L"registryRead";
  v78.Buffer = L"lpacServicesManagement";
  v79.Buffer = L"lpacSessionManagement";
  v80.Buffer = L"lpacPrinting";
  v81.Buffer = L"lpacWebPlatform";
  v82.Buffer = L"lpacPayments";
  v83.Buffer = L"lpacClipboard";
  v84.Buffer = L"lpacIME";
  v85.Buffer = L"lpacPackageManagerOperation";
  v86.Buffer = L"lpacDeviceAccess";
  v66.Buffer = L"permissiveLearningMode";
  v68.Buffer = L"sessionImpersonation";
  v67.Buffer = L"constrainedImpersonation";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v45) = 0;
  WORD2(v45) = 256;
  LODWORD(v46) = 0;
  WORD2(v46) = 512;
  LODWORD(v100) = 0;
  WORD2(v100) = 768;
  LODWORD(v98) = 0;
  *(_QWORD *)&v70.Length = 1048590LL;
  *(_QWORD *)&v71.Length = 2490404LL;
  *(_QWORD *)&v72.Length = 2752552LL;
  *(_QWORD *)&v73.Length = 2621478LL;
  *(_QWORD *)&v74.Length = 5242958LL;
  *(_QWORD *)&v75.Length = 1310738LL;
  *(_QWORD *)&v76.Length = 2752552LL;
  *(_QWORD *)&v77.Length = 1703960LL;
  *(_QWORD *)&v78.Length = 3014700LL;
  *(_QWORD *)&v79.Length = 2883626LL;
  *(_QWORD *)&v80.Length = 1703960LL;
  *(_QWORD *)&v81.Length = 2097182LL;
  *(_QWORD *)&v82.Length = 1703960LL;
  *(_QWORD *)&v83.Length = 1835034LL;
  *(_QWORD *)&v84.Length = 1048590LL;
  *(_QWORD *)&v85.Length = 3670070LL;
  *(_QWORD *)&v86.Length = 2228256LL;
  *(_QWORD *)&v66.Length = 3014700LL;
  *(_QWORD *)&v68.Length = 2752552LL;
  *(_QWORD *)&v67.Length = 3276848LL;
  WORD2(v98) = 1280;
  LODWORD(v42) = 0;
  WORD2(v42) = 4096;
  LODWORD(v43) = 0;
  WORD2(v43) = 3840;
  LODWORD(v99) = 0;
  WORD2(v99) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x83400u;
  SepTokenSidSharingEnabled = v1;
  SepTokenCapabilitySidSharingEnabled = v1;
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  Size = RtlLengthRequiredSid(6u);
  SeNullSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeCreatorOwnerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorGroupSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorOwnerServerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorGroupServerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeWorldSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeLocalSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  Pool2 = (_DWORD *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeOwnerRightsSid = Pool2;
  v40 = SeNullSid;
  if ( !SeNullSid )
    return 0;
  Sid = SeWorldSid;
  if ( !SeWorldSid )
    return 0;
  v4 = SeLocalSid;
  if ( !SeLocalSid )
    return 0;
  v5 = SeCreatorOwnerSid;
  if ( !SeCreatorOwnerSid )
    return 0;
  v6 = SeCreatorGroupSid;
  if ( !SeCreatorGroupSid )
    return 0;
  v7 = SeCreatorOwnerServerSid;
  if ( !SeCreatorOwnerServerSid )
    return 0;
  if ( !Pool2 )
    return 0;
  v8 = SeCreatorGroupServerSid;
  if ( !SeCreatorGroupServerSid )
    return 0;
  RtlInitializeSid(SeNullSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v45, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&v100, 1u);
  v40[2] = 0;
  *((_DWORD *)Sid + 2) = 0;
  v4[2] = 0;
  v5[2] = 0;
  v6[2] = 1;
  v7[2] = 2;
  v8[2] = 3;
  Pool2[2] = 4;
  v9 = RtlLengthRequiredSid(0);
  SeNtAuthoritySid = (PSID)ExAllocatePool2(288LL, v9, 0x69536553u);
  SeDialupSid = ExAllocatePool2(288LL, v2, 0x69536553u);
  SeNetworkSid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeBatchSid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeInteractiveSid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SePrincipalSelfSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeServiceSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeLocalSystemSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeAuthenticatedUsersSid = ExAllocatePool2(288LL, v2, 0x69536553u);
  SeRestrictedSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeAnonymousLogonSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeLocalServiceSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeNetworkServiceSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeIUserSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  v10 = RtlLengthRequiredSid(2u);
  SeAliasAdminsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasUsersSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasGuestsSid = ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasPowerUsersSid = ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasAccountOpsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasSystemOpsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasPrintOpsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeAliasBackupOpsSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeUntrustedMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeLowMandatorySid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeMediumMandatorySid = (void *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeHighMandatorySid = (void *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeSystemMandatorySid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SePackagePrefixSid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCapabilityPrefixSid = ExAllocatePool2(96LL, v2, 0x69536553u);
  SeAllAppPackagesSid = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  SeAllRestrictedAppPackagesSid = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  v11 = RtlLengthRequiredSid(0xAu);
  SeLpacAppExperienceCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacComCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacCryptoServicesCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacIdentityServicesCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacInstrumentationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacEnterprisePolicyChangeNotificationsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacMediaCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPnpNotificationsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeRegistryReadCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacServicesManagementCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacSessionManagementCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPrintingCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacWebPlatformCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPaymentsCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacClipboardCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacImeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacPackageManagerOperationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeLpacDeviceAccessCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeUserModeDriversSid = (PSID)ExAllocatePool2(96LL, Size, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePool2(96LL, Size, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustAuthenticodeSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAntimalwareSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAppSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeDefaultAccountAliasSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v12 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v12, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v12, 0x69536553u);
  SeSessionImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  if ( !SeNtAuthoritySid )
    return 0;
  v100 = SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  Sid = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v59 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v58 = (PSID)SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v57 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v56 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v55 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v54 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v53 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v52 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v51 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v50 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v49 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v48 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v46 = (__int64)SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v45 = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  IdentifierAuthority = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  v13 = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v14 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v15 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v16 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v60 = SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v61 = SeLowMandatorySid;
  if ( !SeLowMandatorySid )
    return 0;
  v62 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v63 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v64 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v65 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v41 = (_DWORD *)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v17 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v18 = SeAllRestrictedAppPackagesSid;
  if ( !SeAllRestrictedAppPackagesSid )
    return 0;
  if ( !SeLpacAppExperienceCapabilitySid )
    return 0;
  if ( !SeLpacComCapabilitySid )
    return 0;
  if ( !SeLpacCryptoServicesCapabilitySid )
    return 0;
  if ( !SeLpacIdentityServicesCapabilitySid )
    return 0;
  if ( !SeLpacInstrumentationCapabilitySid )
    return 0;
  if ( !SeLpacEnterprisePolicyChangeNotificationsCapabilitySid )
    return 0;
  if ( !SeLpacMediaCapabilitySid )
    return 0;
  if ( !SeLpacPnpNotificationsCapabilitySid )
    return 0;
  if ( !SeRegistryReadCapabilitySid )
    return 0;
  if ( !SeLpacServicesManagementCapabilitySid )
    return 0;
  if ( !SeLpacSessionManagementCapabilitySid )
    return 0;
  if ( !SeLpacPrintingCapabilitySid )
    return 0;
  if ( !SeLpacWebPlatformCapabilitySid )
    return 0;
  if ( !SeLpacPaymentsCapabilitySid )
    return 0;
  if ( !SeLpacClipboardCapabilitySid )
    return 0;
  if ( !SeLpacImeCapabilitySid )
    return 0;
  if ( !SeLpacPackageManagerOperationCapabilitySid )
    return 0;
  if ( !SeLpacDeviceAccessCapabilitySid )
    return 0;
  v19 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v89 = (PSID)SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v90 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v91 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v92 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v93 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v94 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v95 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v88 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v87 = (PSID)SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SePermissiveLearningModeCapabilitySid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  v96 = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v98, 0);
  RtlInitializeSid((PSID)v100, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v98, 1u);
  RtlInitializeSid(v48, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)v45, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v13, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v14, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  RtlInitializeSid(v87, (PSID_IDENTIFIER_AUTHORITY)&v98, 6u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v42, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v41, (PSID_IDENTIFIER_AUTHORITY)&v43, 1u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v43, 2u);
  memset(v19, 0, Size);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v98, 6u);
  RtlInitializeSid(v88, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v89, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v90, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v91, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v92, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v93, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v94, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  RtlInitializeSid(v95, (PSID_IDENTIFIER_AUTHORITY)&v99, 2u);
  v20 = v48;
  v21 = v46;
  v22 = v45;
  *(_DWORD *)(v100 + 8) = 1;
  *((_DWORD *)Sid + 2) = 2;
  *((_DWORD *)v59 + 2) = 3;
  *((_DWORD *)v58 + 2) = 4;
  *((_DWORD *)v57 + 2) = 6;
  *((_DWORD *)v56 + 2) = 10;
  *((_DWORD *)v55 + 2) = 18;
  *((_DWORD *)v54 + 2) = 11;
  *((_DWORD *)v53 + 2) = 12;
  *((_DWORD *)v52 + 2) = 7;
  *((_DWORD *)v51 + 2) = 19;
  *((_DWORD *)v50 + 2) = 20;
  *((_DWORD *)v49 + 2) = 17;
  v23 = IdentifierAuthority;
  v20[2] = 32;
  *(_DWORD *)(v21 + 8) = 32;
  *(_DWORD *)(v22 + 8) = 32;
  *(_DWORD *)(v23 + 8) = 32;
  v13[2] = 32;
  v14[2] = 32;
  v15[2] = 32;
  v16[2] = 32;
  v20[3] = 544;
  *(_DWORD *)(v21 + 12) = 545;
  v24 = v96;
  *(_DWORD *)(v22 + 12) = 546;
  *(_DWORD *)(v23 + 12) = 547;
  v25 = v60;
  v13[3] = 548;
  v14[3] = 549;
  v15[3] = 550;
  v16[3] = 551;
  v25[2] = 0;
  *((_DWORD *)v61 + 2) = 4096;
  *((_DWORD *)v62 + 2) = 0x2000;
  *((_DWORD *)v63 + 2) = 12288;
  *((_DWORD *)v64 + 2) = 0x4000;
  *((_DWORD *)v65 + 2) = 2;
  v41[2] = 3;
  v17[2] = 2;
  v17[3] = 1;
  v18[2] = 2;
  v18[3] = 2;
  if ( RtlDeriveCapabilitySidsFromName(&SourceString, v24, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v70, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v72,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v73,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v74,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v75, SeConstrainedImpersonationCapabilityGroupSid, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v77, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v79,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v80, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v81,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v82, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v83, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v84, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v85,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v86,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  v26 = SeDefaultAccountAliasSid;
  *((_DWORD *)SeUserModeDriversSid + 2) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v27 = SeProcTrustWinTcbSid;
  *(_DWORD *)(SeProcTrustWinTcbSid + 8) = 1024;
  *(_DWORD *)(v27 + 12) = 0x2000;
  v28 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v28 + 12) = 4096;
  v29 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 1024;
  v30 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v30 + 12) = 1536;
  v31 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v31 + 12) = 0x2000;
  v32 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 4096;
  v33 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 2048;
  v34 = (_DWORD *)SeTrustedInstallerSid;
  *(_DWORD *)(SeTrustedInstallerSid + 8) = 80;
  v34[3] = 956008885;
  v34[4] = -876444647;
  v34[5] = 1831038044;
  v34[6] = 1853292631;
  v34[7] = -2023488832;
  RtlInitializeSid(v26, (PSID_IDENTIFIER_AUTHORITY)&v98, 2u);
  v35 = SePermissiveLearningModeCapabilitySid;
  v36 = SeConstrainedImpersonationCapabilityGroupSid;
  v26[2] = 32;
  v26[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v66, v36, v35) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v67,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeConstrainedImpersonationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
    return 0;
  SepInitSystemDacls();
  v98 = 3LL;
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v99 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v100 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v46 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v45 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v43 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v42 = 10LL;
  SeLoadDriverPrivilege = (LUID)10LL;
  v48 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v49 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v50 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v51 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v52 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v53 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v54 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v55 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v56 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v57 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v58 = (PSID)21;
  v59 = (PSID)22;
  Sid = (PSID)23;
  SeAuditPrivilege = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140D3D078 = (__int64)SeNullSid;
  qword_140D3D080 = (__int64)SeWorldSid;
  qword_140D3D088 = (__int64)SeLocalSid;
  qword_140D3D090 = (__int64)SeCreatorOwnerSid;
  qword_140D3D098 = (__int64)SeCreatorGroupSid;
  qword_140D3D1C0 = (__int64)SeOwnerRightsSid;
  qword_140D3D0A0 = (__int64)SeNtAuthoritySid;
  qword_140D3D0A8 = SeDialupSid;
  qword_140D3D0B0 = SeNetworkSid;
  qword_140D3D0B8 = SeBatchSid;
  qword_140D3D0C0 = SeInteractiveSid;
  qword_140D3D0C8 = (__int64)SeLocalSystemSid;
  qword_140D3D110 = SeAuthenticatedUsersSid;
  qword_140D3D118 = (__int64)SeRestrictedSid;
  qword_140D3D120 = (__int64)SeAnonymousLogonSid;
  qword_140D3D140 = (__int64)SeLocalServiceSid;
  qword_140D3D148 = (__int64)SeNetworkServiceSid;
  qword_140D3D190 = (__int64)SeIUserSid;
  qword_140D3D0D0 = (__int64)SeAliasAdminsSid;
  qword_140D3D0D8 = (__int64)SeAliasUsersSid;
  qword_140D3D0E0 = SeAliasGuestsSid;
  qword_140D3D0E8 = SeAliasPowerUsersSid;
  qword_140D3D0F0 = (__int64)SeAliasAccountOpsSid;
  qword_140D3D0F8 = (__int64)SeAliasSystemOpsSid;
  qword_140D3D100 = (__int64)SeAliasPrintOpsSid;
  qword_140D3D108 = (__int64)SeAliasBackupOpsSid;
  qword_140D3D198 = (__int64)SeUntrustedMandatorySid;
  qword_140D3D1A0 = (__int64)SeLowMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140D3D1A8 = (__int64)SeMediumMandatorySid;
  qword_140D3D1B0 = (__int64)SeHighMandatorySid;
  qword_140D3D1B8 = SeSystemMandatorySid;
  qword_140D3D1C8 = (__int64)SeAllAppPackagesSid;
  qword_140D3D1D0 = (__int64)SeUserModeDriversSid;
  qword_140D3D1D8 = SeProcTrustWinTcbSid;
  qword_140D3D1E0 = SeTrustedInstallerSid;
  SepExports = 2LL;
  qword_140D3CFC8 = 3LL;
  qword_140D3CFD0 = 4LL;
  qword_140D3CFD8 = 5LL;
  qword_140D3CFE0 = 6LL;
  qword_140D3CFE8 = 7LL;
  qword_140D3CFF0 = 8LL;
  qword_140D3CFF8 = 9LL;
  qword_140D3D000 = 10LL;
  qword_140D3D008 = 15LL;
  qword_140D3D010 = 14LL;
  qword_140D3D018 = 11LL;
  qword_140D3D020 = 12LL;
  qword_140D3D028 = 13LL;
  qword_140D3D030 = 16LL;
  qword_140D3D038 = 17LL;
  qword_140D3D040 = 18LL;
  qword_140D3D048 = 19LL;
  qword_140D3D050 = 20LL;
  qword_140D3D058 = 21LL;
  qword_140D3D060 = 22LL;
  qword_140D3D1E8 = 36LL;
  qword_140D3D158 = 29LL;
  qword_140D3D180 = 34LL;
  v37 = 5LL;
  qword_140D3D188 = 35LL;
  v38 = (char *)&unk_140C25358;
  qword_140D3D068 = 23LL;
  qword_140D3D070 = 24LL;
  qword_140D3D128 = 25LL;
  qword_140D3D130 = 26LL;
  qword_140D3D138 = 27LL;
  qword_140D3D150 = 28LL;
  qword_140D3D160 = 30LL;
  qword_140D3D168 = 31LL;
  qword_140D3D170 = 32LL;
  qword_140D3D178 = 33LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  do
  {
    v38[8] = 0;
    *(_QWORD *)v38 = 0LL;
    *((_QWORD *)v38 - 3) = 0LL;
    v38 += 40;
    --v37;
  }
  while ( v37 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
