/*
 * XREFs of SepVariableInitialization @ 0x140B4A3A0
 * Callers:
 *     SepInitializationPhase0 @ 0x140B48678 (SepInitializationPhase0.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140204A10 (RtlDeriveCapabilitySidsFromName.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     SepInitializeSharedSidMap @ 0x140810CFC (SepInitializeSharedSidMap.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     SepInitSystemDacls @ 0x140B4C2CC (SepInitSystemDacls.c)
 */

bool SepVariableInitialization()
{
  int v0; // eax
  bool v1; // cl
  ULONG v2; // ebx
  _DWORD *Pool2; // rdi
  _DWORD *v4; // r12
  _DWORD *v5; // r13
  _DWORD *v6; // r15
  _DWORD *v7; // r14
  _DWORD *v8; // rsi
  ULONG v9; // eax
  ULONG v10; // esi
  ULONG v11; // edi
  ULONG v12; // ebx
  ULONG v13; // ebx
  void *v14; // rdx
  _DWORD *v15; // r12
  _DWORD *v16; // r13
  _DWORD *v17; // r15
  _DWORD *v18; // rsi
  _DWORD *v19; // rdi
  PSID v20; // r14
  _DWORD *v21; // rbx
  _DWORD *v22; // r8
  _DWORD *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _DWORD *v36; // rax
  _OWORD *v37; // r8
  _OWORD *v38; // rdx
  __int64 v39; // rdx
  char *v40; // rcx
  _DWORD *v42; // [rsp+20h] [rbp-E0h]
  _DWORD *v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h] BYREF
  __int64 IdentifierAuthority; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  PSID Sid; // [rsp+48h] [rbp-B8h]
  PSID v49; // [rsp+50h] [rbp-B0h]
  PSID v50; // [rsp+58h] [rbp-A8h]
  PSID v51; // [rsp+60h] [rbp-A0h]
  PSID v52; // [rsp+68h] [rbp-98h]
  PSID v53; // [rsp+70h] [rbp-90h]
  PSID v54; // [rsp+78h] [rbp-88h]
  PSID v55; // [rsp+80h] [rbp-80h]
  PSID v56; // [rsp+88h] [rbp-78h]
  PSID v57; // [rsp+90h] [rbp-70h]
  PSID v58; // [rsp+98h] [rbp-68h]
  PSID v59; // [rsp+A0h] [rbp-60h]
  PSID v60; // [rsp+A8h] [rbp-58h]
  PSID v61; // [rsp+B0h] [rbp-50h]
  PSID v62; // [rsp+B8h] [rbp-48h]
  PSID v63; // [rsp+C0h] [rbp-40h]
  PSID v64; // [rsp+C8h] [rbp-38h]
  PSID v65; // [rsp+D0h] [rbp-30h]
  PSID v66; // [rsp+D8h] [rbp-28h]
  PSID v67; // [rsp+E0h] [rbp-20h]
  UNICODE_STRING v68; // [rsp+E8h] [rbp-18h] BYREF
  UNICODE_STRING v69; // [rsp+F8h] [rbp-8h] BYREF
  UNICODE_STRING v70; // [rsp+108h] [rbp+8h] BYREF
  UNICODE_STRING v71; // [rsp+118h] [rbp+18h] BYREF
  UNICODE_STRING v72; // [rsp+128h] [rbp+28h] BYREF
  UNICODE_STRING v73; // [rsp+138h] [rbp+38h] BYREF
  UNICODE_STRING String2; // [rsp+148h] [rbp+48h] BYREF
  UNICODE_STRING v75; // [rsp+158h] [rbp+58h] BYREF
  UNICODE_STRING v76; // [rsp+168h] [rbp+68h] BYREF
  UNICODE_STRING v77; // [rsp+178h] [rbp+78h] BYREF
  UNICODE_STRING v78; // [rsp+188h] [rbp+88h] BYREF
  UNICODE_STRING v79; // [rsp+198h] [rbp+98h] BYREF
  UNICODE_STRING v80; // [rsp+1A8h] [rbp+A8h] BYREF
  UNICODE_STRING v81; // [rsp+1B8h] [rbp+B8h] BYREF
  UNICODE_STRING v82; // [rsp+1C8h] [rbp+C8h] BYREF
  UNICODE_STRING v83; // [rsp+1D8h] [rbp+D8h] BYREF
  UNICODE_STRING v84; // [rsp+1E8h] [rbp+E8h] BYREF
  UNICODE_STRING v85; // [rsp+1F8h] [rbp+F8h] BYREF
  UNICODE_STRING v86; // [rsp+208h] [rbp+108h] BYREF
  UNICODE_STRING v87; // [rsp+218h] [rbp+118h] BYREF
  UNICODE_STRING v88; // [rsp+228h] [rbp+128h] BYREF
  UNICODE_STRING v89; // [rsp+238h] [rbp+138h] BYREF
  UNICODE_STRING v90; // [rsp+248h] [rbp+148h] BYREF
  UNICODE_STRING v91; // [rsp+258h] [rbp+158h] BYREF
  PSID v92; // [rsp+268h] [rbp+168h]
  size_t Size; // [rsp+270h] [rbp+170h]
  PSID v94; // [rsp+278h] [rbp+178h]
  PSID v95; // [rsp+280h] [rbp+180h]
  PSID v96; // [rsp+288h] [rbp+188h]
  PSID v97; // [rsp+290h] [rbp+190h]
  PSID v98; // [rsp+298h] [rbp+198h]
  PSID v99; // [rsp+2A0h] [rbp+1A0h]
  PSID v100; // [rsp+2A8h] [rbp+1A8h]
  PSID v101; // [rsp+2B0h] [rbp+1B0h]
  PSID v102; // [rsp+2B8h] [rbp+1B8h]
  __int64 v103; // [rsp+310h] [rbp+210h] BYREF
  __int64 v104; // [rsp+318h] [rbp+218h] BYREF
  __int64 v105; // [rsp+320h] [rbp+220h] BYREF
  __int64 v106; // [rsp+328h] [rbp+228h] BYREF

  *(_QWORD *)&String2.Length = 2359330LL;
  String2.Buffer = L"lpacAppExperience";
  *(_QWORD *)&v73.Length = 1048590LL;
  v73.Buffer = L"lpacCom";
  v75.Buffer = L"lpacCryptoServices";
  v76.Buffer = L"lpacIdentityServices";
  v77.Buffer = L"lpacInstrumentation";
  v78.Buffer = L"lpacEnterprisePolicyChangeNotifications";
  v79.Buffer = L"lpacMedia";
  v80.Buffer = L"lpacPnpNotifications";
  v81.Buffer = L"registryRead";
  v82.Buffer = L"lpacServicesManagement";
  v83.Buffer = L"lpacSessionManagement";
  v84.Buffer = L"lpacPrinting";
  v85.Buffer = L"lpacWebPlatform";
  v86.Buffer = L"lpacPayments";
  v87.Buffer = L"lpacClipboard";
  v88.Buffer = L"lpacIME";
  v89.Buffer = L"lpacPackageManagerOperation";
  v90.Buffer = L"lpacDeviceAccess";
  v69.Buffer = L"learningModeLogging";
  v70.Buffer = L"permissiveLearningMode";
  v72.Buffer = L"sessionImpersonation";
  v71.Buffer = L"constrainedImpersonation";
  v91.Buffer = L"isolatedWin32-volumeRootMinimal";
  v68.Buffer = L"isolatedWin32-profilesRootMinimal";
  LODWORD(IdentifierAuthority) = 0;
  WORD2(IdentifierAuthority) = 0;
  LODWORD(v46) = 0;
  WORD2(v46) = 256;
  *(_QWORD *)&v75.Length = 2490404LL;
  *(_QWORD *)&v76.Length = 2752552LL;
  *(_QWORD *)&v77.Length = 2621478LL;
  *(_QWORD *)&v78.Length = 5242958LL;
  *(_QWORD *)&v79.Length = 1310738LL;
  *(_QWORD *)&v80.Length = 2752552LL;
  *(_QWORD *)&v81.Length = 1703960LL;
  *(_QWORD *)&v82.Length = 3014700LL;
  *(_QWORD *)&v83.Length = 2883626LL;
  *(_QWORD *)&v84.Length = 1703960LL;
  *(_QWORD *)&v85.Length = 2097182LL;
  *(_QWORD *)&v86.Length = 1703960LL;
  *(_QWORD *)&v87.Length = 1835034LL;
  *(_QWORD *)&v88.Length = 1048590LL;
  *(_QWORD *)&v89.Length = 3670070LL;
  *(_QWORD *)&v90.Length = 2228256LL;
  *(_QWORD *)&v69.Length = 2621478LL;
  *(_QWORD *)&v70.Length = 3014700LL;
  *(_QWORD *)&v72.Length = 2752552LL;
  *(_QWORD *)&v71.Length = 3276848LL;
  *(_QWORD *)&v91.Length = 4194366LL;
  *(_QWORD *)&v68.Length = 4456514LL;
  LODWORD(v47) = 0;
  WORD2(v47) = 512;
  LODWORD(v105) = 0;
  WORD2(v105) = 768;
  LODWORD(v103) = 0;
  WORD2(v103) = 1280;
  LODWORD(v106) = 0;
  WORD2(v106) = 4096;
  LODWORD(v44) = 0;
  WORD2(v44) = 3840;
  LODWORD(v104) = 0;
  WORD2(v104) = 4864;
  v0 = *(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 132LL);
  v1 = (v0 & 0x40) == 0 && MEMORY[0xFFFFF78000000264] == 1 && MEMORY[0xFFFFF780000002E8] <= 0x83400u;
  SepTokenSidSharingEnabled = v1;
  SepTokenCapabilitySidSharingEnabled = v1;
  SepOsLoaderTpmDriverLoaded = (v0 & 0x80) != 0;
  v2 = RtlLengthRequiredSid(1u);
  SeNullSid = (PSID)ExAllocatePool2(288LL, v2, 0x69536553u);
  SeCreatorOwnerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorGroupSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorOwnerServerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeCreatorGroupServerSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeWorldSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeLocalSid = (PSID)ExAllocatePool2(96LL, v2, 0x69536553u);
  Pool2 = (_DWORD *)ExAllocatePool2(96LL, v2, 0x69536553u);
  SeOwnerRightsSid = Pool2;
  v42 = SeNullSid;
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
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v46, 1u);
  RtlInitializeSid(v4, (PSID_IDENTIFIER_AUTHORITY)&v47, 1u);
  RtlInitializeSid(v5, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v6, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v7, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(v8, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  RtlInitializeSid(Pool2, (PSID_IDENTIFIER_AUTHORITY)&v105, 1u);
  v42[2] = 0;
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
  SeAliasAccountOpsSid = ExAllocatePool2(288LL, v10, 0x69536553u);
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
  v12 = RtlLengthRequiredSid(6u);
  Size = v12;
  SeUserModeDriversSid = (PSID)ExAllocatePool2(96LL, v12, 0x69536553u);
  SeTrustedInstallerSid = ExAllocatePool2(96LL, v12, 0x69536553u);
  SeProcTrustWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustAuthenticodeSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAntimalwareSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinTcbSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteWinSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustLiteAppSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeProcTrustNoneSid = ExAllocatePool2(96LL, v10, 0x69536553u);
  SeDefaultAccountAliasSid = (PSID)ExAllocatePool2(288LL, v10, 0x69536553u);
  SeLearningModeLoggingCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SePermissiveLearningModeCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v13 = RtlLengthRequiredSid(9u);
  SeConstrainedImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v13, 0x69536553u);
  SeConstrainedImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeSessionImpersonationCapabilityGroupSid = (PSID)ExAllocatePool2(288LL, v13, 0x69536553u);
  SeSessionImpersonationCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeAppSiloSid = (PSID)ExAllocatePool2(96LL, v10, 0x69536553u);
  SeAppSiloVolumeRootMinimalCapabilitySid = (PSID)ExAllocatePool2(288LL, v11, 0x69536553u);
  v14 = (void *)ExAllocatePool2(288LL, v11, 0x69536553u);
  SeAppSiloProfilesRootMinimalCapabilitySid = v14;
  if ( !SeNtAuthoritySid )
    return 0;
  v105 = SeDialupSid;
  if ( !SeDialupSid )
    return 0;
  Sid = (PSID)SeNetworkSid;
  if ( !SeNetworkSid )
    return 0;
  v61 = (PSID)SeBatchSid;
  if ( !SeBatchSid )
    return 0;
  v60 = (PSID)SeInteractiveSid;
  if ( !SeInteractiveSid )
    return 0;
  v59 = SeServiceSid;
  if ( !SeServiceSid )
    return 0;
  v58 = SePrincipalSelfSid;
  if ( !SePrincipalSelfSid )
    return 0;
  v57 = SeLocalSystemSid;
  if ( !SeLocalSystemSid )
    return 0;
  v56 = (PSID)SeAuthenticatedUsersSid;
  if ( !SeAuthenticatedUsersSid )
    return 0;
  v55 = SeRestrictedSid;
  if ( !SeRestrictedSid )
    return 0;
  v54 = SeAnonymousLogonSid;
  if ( !SeAnonymousLogonSid )
    return 0;
  v53 = SeLocalServiceSid;
  if ( !SeLocalServiceSid )
    return 0;
  v52 = SeNetworkServiceSid;
  if ( !SeNetworkServiceSid )
    return 0;
  v51 = SeIUserSid;
  if ( !SeIUserSid )
    return 0;
  v50 = SeAliasAdminsSid;
  if ( !SeAliasAdminsSid )
    return 0;
  v49 = SeAliasUsersSid;
  if ( !SeAliasUsersSid )
    return 0;
  v47 = SeAliasGuestsSid;
  if ( !SeAliasGuestsSid )
    return 0;
  v46 = SeAliasPowerUsersSid;
  if ( !SeAliasPowerUsersSid )
    return 0;
  IdentifierAuthority = SeAliasAccountOpsSid;
  if ( !SeAliasAccountOpsSid )
    return 0;
  v15 = SeAliasSystemOpsSid;
  if ( !SeAliasSystemOpsSid )
    return 0;
  v16 = SeAliasPrintOpsSid;
  if ( !SeAliasPrintOpsSid )
    return 0;
  v17 = SeAliasBackupOpsSid;
  if ( !SeAliasBackupOpsSid )
    return 0;
  v62 = SeUntrustedMandatorySid;
  if ( !SeUntrustedMandatorySid )
    return 0;
  v63 = SeLowMandatorySid;
  if ( !SeLowMandatorySid )
    return 0;
  v64 = SeMediumMandatorySid;
  if ( !SeMediumMandatorySid )
    return 0;
  v65 = SeHighMandatorySid;
  if ( !SeHighMandatorySid )
    return 0;
  v66 = (PSID)SeSystemMandatorySid;
  if ( !SeSystemMandatorySid )
    return 0;
  v67 = (PSID)SePackagePrefixSid;
  if ( !SePackagePrefixSid )
    return 0;
  v43 = (_DWORD *)SeCapabilityPrefixSid;
  if ( !SeCapabilityPrefixSid )
    return 0;
  v18 = SeAllAppPackagesSid;
  if ( !SeAllAppPackagesSid )
    return 0;
  v19 = SeAllRestrictedAppPackagesSid;
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
  v20 = SeUserModeDriversSid;
  if ( !SeUserModeDriversSid )
    return 0;
  v95 = (PSID)SeProcTrustWinTcbSid;
  if ( !SeProcTrustWinTcbSid )
    return 0;
  v96 = (PSID)SeProcTrustWinSid;
  if ( !SeProcTrustWinSid )
    return 0;
  v98 = (PSID)SeProcTrustAuthenticodeSid;
  if ( !SeProcTrustAuthenticodeSid )
    return 0;
  v97 = (PSID)SeProcTrustLiteAntimalwareSid;
  if ( !SeProcTrustLiteAntimalwareSid )
    return 0;
  v99 = (PSID)SeProcTrustLiteWinTcbSid;
  if ( !SeProcTrustLiteWinTcbSid )
    return 0;
  v100 = (PSID)SeProcTrustLiteWinSid;
  if ( !SeProcTrustLiteWinSid )
    return 0;
  v101 = (PSID)SeProcTrustLiteAppSid;
  if ( !SeProcTrustLiteAppSid )
    return 0;
  v94 = (PSID)SeProcTrustNoneSid;
  if ( !SeProcTrustNoneSid )
    return 0;
  v92 = (PSID)SeTrustedInstallerSid;
  if ( !SeTrustedInstallerSid )
    return 0;
  if ( !SeDefaultAccountAliasSid )
    return 0;
  if ( !SeLearningModeLoggingCapabilitySid )
    return 0;
  if ( !SePermissiveLearningModeCapabilitySid )
    return 0;
  if ( !SeConstrainedImpersonationCapabilitySid )
    return 0;
  v102 = SeConstrainedImpersonationCapabilityGroupSid;
  if ( !SeConstrainedImpersonationCapabilityGroupSid )
    return 0;
  if ( !SeSessionImpersonationCapabilitySid )
    return 0;
  if ( !SeSessionImpersonationCapabilityGroupSid )
    return 0;
  v21 = SeAppSiloSid;
  if ( !SeAppSiloSid )
    return 0;
  if ( !v14 )
    return 0;
  if ( !SeAppSiloVolumeRootMinimalCapabilitySid )
    return 0;
  RtlInitializeSid(SeNtAuthoritySid, (PSID_IDENTIFIER_AUTHORITY)&v103, 0);
  RtlInitializeSid((PSID)v105, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(Sid, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v61, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v60, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v59, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v58, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v57, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v56, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v55, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v54, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v53, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v52, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v51, (PSID_IDENTIFIER_AUTHORITY)&v103, 1u);
  RtlInitializeSid(v50, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid(v49, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid((PSID)v47, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid((PSID)v46, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid((PSID)IdentifierAuthority, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid(v15, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid(v16, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid(v17, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  RtlInitializeSid(v92, (PSID_IDENTIFIER_AUTHORITY)&v103, 6u);
  RtlInitializeSid(v62, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v63, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v64, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v65, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v66, (PSID_IDENTIFIER_AUTHORITY)&v106, 1u);
  RtlInitializeSid(v67, (PSID_IDENTIFIER_AUTHORITY)&v44, 1u);
  RtlInitializeSid(v43, (PSID_IDENTIFIER_AUTHORITY)&v44, 1u);
  RtlInitializeSid(v18, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  RtlInitializeSid(v19, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  memset(v20, 0, Size);
  RtlInitializeSid(v20, (PSID_IDENTIFIER_AUTHORITY)&v103, 6u);
  RtlInitializeSid(v94, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v95, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v96, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v98, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v97, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v99, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v100, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v101, (PSID_IDENTIFIER_AUTHORITY)&v104, 2u);
  RtlInitializeSid(v21, (PSID_IDENTIFIER_AUTHORITY)&v44, 2u);
  v22 = v49;
  v23 = v50;
  v24 = v47;
  *(_DWORD *)(v105 + 8) = 1;
  v25 = v46;
  *((_DWORD *)Sid + 2) = 2;
  *((_DWORD *)v61 + 2) = 3;
  *((_DWORD *)v60 + 2) = 4;
  *((_DWORD *)v59 + 2) = 6;
  *((_DWORD *)v58 + 2) = 10;
  *((_DWORD *)v57 + 2) = 18;
  *((_DWORD *)v56 + 2) = 11;
  *((_DWORD *)v55 + 2) = 12;
  *((_DWORD *)v54 + 2) = 7;
  *((_DWORD *)v53 + 2) = 19;
  *((_DWORD *)v52 + 2) = 20;
  *((_DWORD *)v51 + 2) = 17;
  v26 = IdentifierAuthority;
  v23[2] = 32;
  v22[2] = 32;
  *(_DWORD *)(v24 + 8) = 32;
  *(_DWORD *)(v25 + 8) = 32;
  *(_DWORD *)(v26 + 8) = 32;
  v15[2] = 32;
  v16[2] = 32;
  v17[2] = 32;
  v23[3] = 544;
  v22[3] = 545;
  *(_DWORD *)(v24 + 12) = 546;
  *(_DWORD *)(v25 + 12) = 547;
  *(_DWORD *)(v26 + 12) = 548;
  v27 = v62;
  v15[3] = 549;
  v16[3] = 550;
  v17[3] = 551;
  v27[2] = 0;
  *((_DWORD *)v63 + 2) = 4096;
  *((_DWORD *)v64 + 2) = 0x2000;
  *((_DWORD *)v65 + 2) = 12288;
  *((_DWORD *)v66 + 2) = 0x4000;
  *((_DWORD *)v67 + 2) = 2;
  v43[2] = 3;
  v18[2] = 2;
  v18[3] = 1;
  v19[2] = 2;
  v19[3] = 2;
  v21[2] = 3;
  v21[3] = 0x10000;
  if ( RtlDeriveCapabilitySidsFromName(&String2, v102, SeLpacAppExperienceCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v73, SeConstrainedImpersonationCapabilityGroupSid, SeLpacComCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v75,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacCryptoServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v76,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacIdentityServicesCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v77,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacInstrumentationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v78,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacEnterprisePolicyChangeNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v79, SeConstrainedImpersonationCapabilityGroupSid, SeLpacMediaCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v80,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPnpNotificationsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v81, SeConstrainedImpersonationCapabilityGroupSid, SeRegistryReadCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v82,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacServicesManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v83,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacSessionManagementCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v84, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPrintingCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v85,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacWebPlatformCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v86, SeConstrainedImpersonationCapabilityGroupSid, SeLpacPaymentsCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v87, SeConstrainedImpersonationCapabilityGroupSid, SeLpacClipboardCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(&v88, SeConstrainedImpersonationCapabilityGroupSid, SeLpacImeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v89,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacPackageManagerOperationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v90,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeLpacDeviceAccessCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v91,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloVolumeRootMinimalCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v68,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeAppSiloProfilesRootMinimalCapabilitySid) < 0 )
    return 0;
  v28 = SeDefaultAccountAliasSid;
  *((_DWORD *)SeUserModeDriversSid + 2) = 84;
  *(_QWORD *)(SeProcTrustNoneSid + 8) = 0LL;
  v29 = SeProcTrustWinTcbSid;
  *(_DWORD *)(SeProcTrustWinTcbSid + 8) = 1024;
  *(_DWORD *)(v29 + 12) = 0x2000;
  v30 = SeProcTrustWinSid;
  *(_DWORD *)(SeProcTrustWinSid + 8) = 1024;
  *(_DWORD *)(v30 + 12) = 4096;
  v31 = SeProcTrustAuthenticodeSid;
  *(_DWORD *)(SeProcTrustAuthenticodeSid + 8) = 1024;
  *(_DWORD *)(v31 + 12) = 1024;
  v32 = SeProcTrustLiteAntimalwareSid;
  *(_DWORD *)(SeProcTrustLiteAntimalwareSid + 8) = 512;
  *(_DWORD *)(v32 + 12) = 1536;
  v33 = SeProcTrustLiteWinTcbSid;
  *(_DWORD *)(SeProcTrustLiteWinTcbSid + 8) = 512;
  *(_DWORD *)(v33 + 12) = 0x2000;
  v34 = SeProcTrustLiteWinSid;
  *(_DWORD *)(SeProcTrustLiteWinSid + 8) = 512;
  *(_DWORD *)(v34 + 12) = 4096;
  v35 = SeProcTrustLiteAppSid;
  *(_DWORD *)(SeProcTrustLiteAppSid + 8) = 512;
  *(_DWORD *)(v35 + 12) = 2048;
  v36 = (_DWORD *)SeTrustedInstallerSid;
  *(_DWORD *)(SeTrustedInstallerSid + 8) = 80;
  v36[3] = 956008885;
  v36[4] = -876444647;
  v36[5] = 1831038044;
  v36[6] = 1853292631;
  v36[7] = -2023488832;
  RtlInitializeSid(v28, (PSID_IDENTIFIER_AUTHORITY)&v103, 2u);
  v37 = SeLearningModeLoggingCapabilitySid;
  v38 = SeConstrainedImpersonationCapabilityGroupSid;
  v28[2] = 32;
  v28[3] = 581;
  if ( RtlDeriveCapabilitySidsFromName(&v69, v38, v37) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v70,
         SeConstrainedImpersonationCapabilityGroupSid,
         SePermissiveLearningModeCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v71,
         SeConstrainedImpersonationCapabilityGroupSid,
         SeConstrainedImpersonationCapabilitySid) < 0 )
    return 0;
  if ( RtlDeriveCapabilitySidsFromName(
         &v72,
         SeSessionImpersonationCapabilityGroupSid,
         SeSessionImpersonationCapabilitySid) < 0 )
    return 0;
  SepInitSystemDacls();
  v104 = 3LL;
  SeCreateTokenPrivilege = (LUID)2LL;
  SeAssignPrimaryTokenPrivilege = (LUID)3LL;
  v105 = 4LL;
  SeLockMemoryPrivilege = (LUID)4LL;
  v106 = 5LL;
  SeIncreaseQuotaPrivilege = (LUID)5LL;
  v47 = 6LL;
  SeUnsolicitedInputPrivilege = 6LL;
  v46 = 7LL;
  SeTcbPrivilege = (LUID)7LL;
  IdentifierAuthority = 8LL;
  SeSecurityPrivilege = (LUID)8LL;
  v44 = 9LL;
  SeTakeOwnershipPrivilege = 9LL;
  v49 = (PSID)10;
  SeLoadDriverPrivilege = (LUID)10LL;
  v50 = (PSID)15;
  SeCreatePagefilePrivilege = (LUID)15LL;
  v51 = (PSID)14;
  SeIncreaseBasePriorityPrivilege = (LUID)14LL;
  v52 = (PSID)11;
  SeSystemProfilePrivilege = (LUID)11LL;
  v53 = (PSID)12;
  SeSystemtimePrivilege = (LUID)12LL;
  v54 = (PSID)13;
  SeProfileSingleProcessPrivilege = (LUID)13LL;
  v55 = (PSID)16;
  SeCreatePermanentPrivilege = (LUID)16LL;
  v56 = (PSID)17;
  SeBackupPrivilege = (LUID)17LL;
  v57 = (PSID)18;
  SeRestorePrivilege = (LUID)18LL;
  v58 = (PSID)19;
  SeShutdownPrivilege = (LUID)19LL;
  v59 = (PSID)20;
  SeDebugPrivilege = (LUID)20LL;
  v103 = 2LL;
  v60 = (PSID)21;
  v61 = (PSID)22;
  Sid = (PSID)23;
  SeAuditPrivilege = 21LL;
  SeSystemEnvironmentPrivilege = (LUID)22LL;
  SeChangeNotifyPrivilege = 23LL;
  SeRemoteShutdownPrivilege = 24LL;
  SeUndockPrivilege = 25LL;
  SeSyncAgentPrivilege = 26LL;
  SeEnableDelegationPrivilege = 27LL;
  qword_140D55078 = (__int64)SeNullSid;
  qword_140D55080 = (__int64)SeWorldSid;
  qword_140D55088 = (__int64)SeLocalSid;
  qword_140D55090 = (__int64)SeCreatorOwnerSid;
  qword_140D55098 = (__int64)SeCreatorGroupSid;
  qword_140D551C0 = (__int64)SeOwnerRightsSid;
  qword_140D550A0 = (__int64)SeNtAuthoritySid;
  qword_140D550A8 = SeDialupSid;
  qword_140D550B0 = SeNetworkSid;
  qword_140D550B8 = SeBatchSid;
  qword_140D550C0 = SeInteractiveSid;
  qword_140D550C8 = (__int64)SeLocalSystemSid;
  qword_140D55110 = SeAuthenticatedUsersSid;
  qword_140D55118 = (__int64)SeRestrictedSid;
  qword_140D55120 = (__int64)SeAnonymousLogonSid;
  qword_140D55140 = (__int64)SeLocalServiceSid;
  qword_140D55148 = (__int64)SeNetworkServiceSid;
  qword_140D55190 = (__int64)SeIUserSid;
  qword_140D550D0 = (__int64)SeAliasAdminsSid;
  qword_140D550D8 = (__int64)SeAliasUsersSid;
  qword_140D550E0 = SeAliasGuestsSid;
  qword_140D550E8 = SeAliasPowerUsersSid;
  qword_140D550F0 = SeAliasAccountOpsSid;
  qword_140D550F8 = (__int64)SeAliasSystemOpsSid;
  qword_140D55100 = (__int64)SeAliasPrintOpsSid;
  qword_140D55108 = (__int64)SeAliasBackupOpsSid;
  qword_140D55198 = (__int64)SeUntrustedMandatorySid;
  qword_140D551A0 = (__int64)SeLowMandatorySid;
  SeManageVolumePrivilege = 28LL;
  SeImpersonatePrivilege = 29LL;
  SeCreateGlobalPrivilege = (LUID)30LL;
  SeTrustedCredManAccessPrivilege = 31LL;
  SeRelabelPrivilege = 32LL;
  SeIncreaseWorkingSetPrivilege = 33LL;
  SeTimeZonePrivilege = (LUID)34LL;
  SeCreateSymbolicLinkPrivilege = 35LL;
  SeDelegateSessionUserImpersonatePrivilege = 36LL;
  qword_140D551A8 = (__int64)SeMediumMandatorySid;
  qword_140D551B0 = (__int64)SeHighMandatorySid;
  qword_140D551B8 = SeSystemMandatorySid;
  qword_140D551C8 = (__int64)SeAllAppPackagesSid;
  qword_140D551D0 = (__int64)SeUserModeDriversSid;
  qword_140D551D8 = SeProcTrustWinTcbSid;
  qword_140D551E0 = SeTrustedInstallerSid;
  qword_140D551F0 = (__int64)SeAppSiloSid;
  SepExports = 2LL;
  qword_140D54FC8 = 3LL;
  qword_140D54FD0 = 4LL;
  qword_140D54FD8 = 5LL;
  qword_140D54FE0 = 6LL;
  qword_140D54FE8 = 7LL;
  qword_140D54FF0 = 8LL;
  qword_140D54FF8 = 9LL;
  qword_140D55000 = 10LL;
  qword_140D55008 = 15LL;
  qword_140D55010 = 14LL;
  qword_140D55018 = 11LL;
  qword_140D55020 = 12LL;
  qword_140D55028 = 13LL;
  qword_140D55030 = 16LL;
  qword_140D55038 = 17LL;
  qword_140D55040 = 18LL;
  qword_140D55048 = 19LL;
  qword_140D55050 = 20LL;
  qword_140D551E8 = 36LL;
  qword_140D55058 = 21LL;
  qword_140D551F8 = (__int64)SeAppSiloVolumeRootMinimalCapabilitySid;
  qword_140D55060 = 22LL;
  qword_140D55200 = (__int64)SeAppSiloProfilesRootMinimalCapabilitySid;
  qword_140D55180 = 34LL;
  v39 = 5LL;
  qword_140D55188 = 35LL;
  v40 = (char *)&unk_140C400B8;
  qword_140D55068 = 23LL;
  qword_140D55070 = 24LL;
  qword_140D55128 = 25LL;
  qword_140D55130 = 26LL;
  qword_140D55138 = 27LL;
  qword_140D55150 = 28LL;
  qword_140D55158 = 29LL;
  qword_140D55160 = 30LL;
  qword_140D55168 = 31LL;
  qword_140D55170 = 32LL;
  qword_140D55178 = 33LL;
  SeExports = (PSE_EXPORTS)&SepExports;
  do
  {
    v40[8] = 0;
    *(_QWORD *)v40 = 0LL;
    *((_QWORD *)v40 - 3) = 0LL;
    v40 += 40;
    --v39;
  }
  while ( v39 );
  LowboxSessionMapLock = 0LL;
  g_SessionLowboxMap = 0LL;
  return (int)SepInitializeSharedSidMap() >= 0;
}
