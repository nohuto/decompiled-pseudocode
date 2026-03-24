/*
 * XREFs of PspAllocateProcess @ 0x140703F08
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE380 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x1402056D0 (PoEnergyEstimationEnabled.c)
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     PsIsProtectedProcess @ 0x14024FAF0 (PsIsProtectedProcess.c)
 *     PsIsSystemProcess @ 0x14025B950 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     KeQueryAffinityProcess @ 0x14025C0A0 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     MmGetDefaultPagePriority @ 0x14026E790 (MmGetDefaultPagePriority.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     PsReferencePartitionSafe @ 0x140303F74 (PsReferencePartitionSafe.c)
 *     PsIsProtectedProcessLight @ 0x1403143E0 (PsIsProtectedProcessLight.c)
 *     KeFirstGroupAffinityEx @ 0x14031B960 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x140324DF8 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x1403276E4 (PspWow64PickBestNtdll.c)
 *     KeQuerySystemTimeUnsafe @ 0x140341ED8 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140341EF0 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140341F00 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140344600 (RtlWow64GetEquivalentMachineCHPE.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     KeQueryActiveGroupCount @ 0x1403544B0 (KeQueryActiveGroupCount.c)
 *     KeQueryUnbiasedInterruptTime @ 0x14035ADE0 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14035AE10 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x14035AE38 (KeIsUserCetAllowed.c)
 *     KeSelectNodeForAffinity @ 0x14035E2C0 (KeSelectNodeForAffinity.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeSecureProcess @ 0x140513980 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x140580CC0 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x140584238 (PsReferencePartition.c)
 *     PspApplyComponentFilterOptions @ 0x1405CF994 (PspApplyComponentFilterOptions.c)
 *     SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405D0028 (SeDeleteCodeIntegrityOriginClaimMembers.c)
 *     SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405D004C (SeGetCodeIntegrityOriginClaimForFileObject.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140607AA4 (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x14060CF84 (PspUpdateCreateInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x140611BDC (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x140611E28 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406120AC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406120C8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140612100 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406121F8 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x140612AB4 (PspWritePebAffinityInfo.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     MmSecureVirtualMemory @ 0x1406201B0 (MmSecureVirtualMemory.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     PspAttachSession @ 0x140660A48 (PspAttachSession.c)
 *     PspDetachSession @ 0x140660AA4 (PspDetachSession.c)
 *     SeQuerySessionIdToken @ 0x1406773C0 (SeQuerySessionIdToken.c)
 *     PspAssignProcessQuotaBlock @ 0x140690864 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x140691B94 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x140691C68 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x140691CC0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x140691EB0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14069434C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x140695698 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x140696F40 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x14069777C (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x14069895C (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x14069AECC (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x14069C6D8 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x14069D7C4 (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x14069D820 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x14069DF2C (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x1406A1A34 (PspApplyIFEOPerfOptions.c)
 *     PsWow64GetProcessMachine @ 0x1406C14C0 (PsWow64GetProcessMachine.c)
 *     PsWow64IsMachineSupported @ 0x1406C7650 (PsWow64IsMachineSupported.c)
 *     SeQueryInformationToken @ 0x1406CF990 (SeQueryInformationToken.c)
 *     MmInitializeProcessAddressSpace @ 0x1406FBB04 (MmInitializeProcessAddressSpace.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     ObCreateObject @ 0x1407023B0 (ObCreateObject.c)
 *     LpcInitializeProcess @ 0x140703B30 (LpcInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x140703B60 (MmGetSessionSchedulingGroupByProcess.c)
 *     KeInitializeProcess @ 0x140703B8C (KeInitializeProcess.c)
 *     PspInitializeProcessSecurity @ 0x140703CD0 (PspInitializeProcessSecurity.c)
 *     PspApplyMitigationOptions @ 0x1407062EC (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x140706E24 (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x140706F00 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x140706F4C (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x140706F9C (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x140707084 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x14070710C (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x140707324 (PspComputeQuantumAndPriority.c)
 *     SeIsTokenAssignableToProcess @ 0x14070DAF4 (SeIsTokenAssignableToProcess.c)
 *     PspInitializeFullProcessImageName @ 0x14070F8F4 (PspInitializeFullProcessImageName.c)
 *     MmIsSessionLeaderProcess @ 0x140781840 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CEF24 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D0DE4 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C45A0 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408D7F78 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x140908614 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x14094C680 (ExCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
        volatile signed __int32 *a3,
        char a4,
        char a5,
        char a6,
        void *a7,
        void *a8,
        int a9,
        char a10,
        __int64 a11,
        int a12,
        PVOID a13,
        __int64 a14,
        _QWORD *a15)
{
  int v16; // r15d
  __int64 v18; // r13
  unsigned int v19; // ebx
  __int64 result; // rax
  unsigned int v21; // r14d
  int MaximumGroupCount; // eax
  unsigned int v23; // r12d
  _QWORD *v24; // r15
  char *v25; // rcx
  char v26; // al
  int v27; // r12d
  int v28; // r8d
  __int64 Flink; // rcx
  _QWORD *v30; // rcx
  int v31; // eax
  PEPROCESS v32; // r14
  int v33; // edx
  int DefaultPagePriority; // r8d
  __int64 v35; // r8
  int v36; // r9d
  int SectionInformation; // r14d
  void *v38; // rax
  unsigned __int64 v39; // rax
  PVOID v40; // rcx
  char v41; // r8
  int v42; // ebx
  __int16 v43; // cx
  int v44; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v46; // di
  int v47; // ecx
  HANDLE *v48; // r12
  int v49; // eax
  int v50; // r14d
  NTSTATUS v51; // eax
  unsigned int v52; // edi
  PVOID PoolWithTag; // rax
  int v54; // r12d
  _WORD *v55; // r10
  int v56; // eax
  __int16 v57; // r11
  _QWORD *v58; // rax
  unsigned int v59; // edi
  KPROCESSOR_MODE v60; // al
  __int16 v61; // r14
  bool v62; // sf
  unsigned __int16 v63; // di
  volatile signed __int32 *v64; // rdi
  PEPROCESS v65; // r12
  ULONG v66; // r14d
  char v67; // r12
  int v68; // edi
  int v69; // eax
  __int64 v70; // rdx
  PEPROCESS v71; // rdx
  unsigned __int64 v72; // r8
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v74; // rcx
  char v75; // r8
  _DWORD *v76; // r14
  _DWORD *v77; // rcx
  __int64 v78; // rax
  char v79; // al
  _BYTE *v80; // r9
  unsigned int v81; // r8d
  int inited; // eax
  __int64 v83; // r9
  int v84; // edi
  __int16 v85; // r11
  int v86; // r11d
  unsigned int v87; // edi
  unsigned __int64 v88; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v90; // r12
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // rdx
  int v94; // edi
  __int64 v95; // rdi
  PVOID v96; // rax
  PVOID v97; // r12
  int v98; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v100; // rcx
  _DWORD *v101; // r9
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v104; // di
  PEPROCESS v105; // rcx
  __int64 v106; // rax
  __int16 v107; // cx
  struct _KTHREAD *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // r8
  _DWORD *v111; // r9
  __int64 v112; // r8
  unsigned int ProcessNtdllType; // eax
  __int64 v114; // r8
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r8
  __int64 v118; // r9
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v120; // rcx
  int v122; // [rsp+78h] [rbp-6F0h]
  char v123; // [rsp+7Ch] [rbp-6ECh] BYREF
  char v124; // [rsp+7Dh] [rbp-6EBh] BYREF
  char v125[2]; // [rsp+7Eh] [rbp-6EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-6E8h]
  ULONG NumberOfBytes; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-6DCh]
  int v129; // [rsp+90h] [rbp-6D8h]
  int v130; // [rsp+94h] [rbp-6D4h]
  ULONG v131; // [rsp+98h] [rbp-6D0h] BYREF
  ULONG v132; // [rsp+9Ch] [rbp-6CCh] BYREF
  int v133; // [rsp+A0h] [rbp-6C8h]
  ULONG v134; // [rsp+A4h] [rbp-6C4h]
  __int64 v135; // [rsp+A8h] [rbp-6C0h]
  PVOID Object; // [rsp+B0h] [rbp-6B8h] BYREF
  volatile signed __int32 *v137; // [rsp+B8h] [rbp-6B0h]
  int v138; // [rsp+C0h] [rbp-6A8h]
  PVOID TokenInformation; // [rsp+C4h] [rbp-6A4h] BYREF
  ULONG SessionId; // [rsp+CCh] [rbp-69Ch] BYREF
  int v141; // [rsp+D0h] [rbp-698h]
  int v142; // [rsp+D4h] [rbp-694h]
  int v143; // [rsp+D8h] [rbp-690h]
  _KPROCESS *v144; // [rsp+E0h] [rbp-688h]
  PVOID v145; // [rsp+E8h] [rbp-680h]
  PVOID v146; // [rsp+F0h] [rbp-678h]
  __int64 v147; // [rsp+F8h] [rbp-670h]
  ULONG v148; // [rsp+100h] [rbp-668h] BYREF
  int v149; // [rsp+104h] [rbp-664h]
  int v150; // [rsp+108h] [rbp-660h]
  int v151; // [rsp+10Ch] [rbp-65Ch]
  PVOID Address; // [rsp+110h] [rbp-658h]
  __int64 v153; // [rsp+118h] [rbp-650h]
  PACCESS_TOKEN Token; // [rsp+120h] [rbp-648h]
  __int128 v155; // [rsp+128h] [rbp-640h] BYREF
  unsigned __int64 v156; // [rsp+138h] [rbp-630h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-628h]
  int v158; // [rsp+148h] [rbp-620h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp-618h] BYREF
  __int64 v160; // [rsp+158h] [rbp-610h]
  PVOID v161; // [rsp+160h] [rbp-608h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+168h] [rbp-600h] BYREF
  PVOID v163; // [rsp+170h] [rbp-5F8h] BYREF
  PVOID P; // [rsp+178h] [rbp-5F0h]
  unsigned __int64 *v165; // [rsp+180h] [rbp-5E8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-5E0h] BYREF
  __int128 v167; // [rsp+190h] [rbp-5D8h] BYREF
  __int64 v168; // [rsp+1A0h] [rbp-5C8h]
  __int64 v169; // [rsp+1A8h] [rbp-5C0h]
  __int64 v170; // [rsp+1B0h] [rbp-5B8h]
  __int64 v171[2]; // [rsp+1C0h] [rbp-5A8h] BYREF
  __int64 v172; // [rsp+1D0h] [rbp-598h]
  _QWORD *v173; // [rsp+1D8h] [rbp-590h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp-588h] BYREF
  OBJECT_ATTRIBUTES v175; // [rsp+210h] [rbp-558h] BYREF
  __int128 v176; // [rsp+240h] [rbp-528h] BYREF
  __int64 v177; // [rsp+250h] [rbp-518h]
  __m128i v178; // [rsp+260h] [rbp-508h] BYREF
  __int64 v179; // [rsp+270h] [rbp-4F8h]
  __int128 v180; // [rsp+280h] [rbp-4E8h] BYREF
  __int64 v181; // [rsp+290h] [rbp-4D8h]
  __int128 v182; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int64 v183; // [rsp+2B0h] [rbp-4B8h]
  __int128 v184; // [rsp+2C0h] [rbp-4A8h] BYREF
  __int64 v185; // [rsp+2D0h] [rbp-498h]
  __int128 v186; // [rsp+2E0h] [rbp-488h] BYREF
  __int64 v187; // [rsp+2F0h] [rbp-478h]
  __m128i v188; // [rsp+300h] [rbp-468h] BYREF
  __int64 v189; // [rsp+310h] [rbp-458h]
  __int128 v190; // [rsp+320h] [rbp-448h] BYREF
  __int64 v191; // [rsp+330h] [rbp-438h]
  _DWORD v192[20]; // [rsp+340h] [rbp-428h] BYREF
  __m128i v193; // [rsp+390h] [rbp-3D8h] BYREF
  __int64 v194; // [rsp+3A0h] [rbp-3C8h]
  __int128 v195; // [rsp+3A8h] [rbp-3C0h] BYREF
  __int64 v196; // [rsp+3B8h] [rbp-3B0h]
  struct _KAPC_STATE ApcState; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v198; // [rsp+3F0h] [rbp-378h] BYREF
  __int128 v199; // [rsp+400h] [rbp-368h]
  _OWORD v200[11]; // [rsp+410h] [rbp-358h] BYREF
  _DWORD v201[136]; // [rsp+4C0h] [rbp-2A8h] BYREF
  unsigned int v202[6]; // [rsp+6E0h] [rbp-88h] BYREF
  _WORD v203[20]; // [rsp+6F8h] [rbp-70h] BYREF

  v16 = (int)a3;
  v137 = a3;
  Process = (PEPROCESS)a1;
  v169 = a1;
  v145 = a7;
  Token = a8;
  v18 = a11;
  v170 = a11;
  v161 = a13;
  v172 = a14;
  v173 = a15;
  v158 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v155 = 0LL;
  KeyHandle = 0LL;
  memset(v200, 0, 0xA8uLL);
  v19 = 0;
  v193 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v125[0] = 0;
  memset(&v175, 0, sizeof(v175));
  Handle = 0LL;
  Object = 0LL;
  v124 = 0;
  LOWORD(v131) = 0;
  NumberOfBytes = 0;
  memset(v192, 0, 0x48uLL);
  TokenInformation = 0LL;
  v171[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v144 = CurrentThread->ApcState.Process;
  v160 = 0LL;
  v135 = 0LL;
  P = 0LL;
  v134 = 0;
  v149 = 0;
  v130 = 0;
  v146 = 0LL;
  v143 = 0;
  v142 = 0;
  LOWORD(v129) = 0;
  v133 = 0;
  v151 = 0;
  v138 = 0;
  Address = 0LL;
  v150 = 0;
  v168 = 0LL;
  memset(v201, 0, 0x218uLL);
  v122 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 1024;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 66560;
      if ( (a9 & 0x4000) != 0 )
        v19 = 197632;
    }
  }
  v153 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v160 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v135 = v160;
    v153 = 0LL;
  }
  else if ( a1 )
  {
    v153 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v153 = a1;
      v130 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v198 = 0LL;
  v199 = 0LL;
  v163 = 0LL;
  v21 = 2624;
  NumberOfBytes_4 = 0;
  v147 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v147 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    NumberOfBytes_4 = (v21 + 7) & 0xFFFFFFF8;
    v21 = NumberOfBytes_4 + 480;
    v19 |= 0x2000u;
    v16 = (int)v137;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v137) = MaximumGroupCount;
  v23 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v23 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v23;
  }
  result = ObCreateObject(a2, PsProcessType, v16, a2, 0, v21, 0, v21, &Object);
  if ( (int)result >= 0 )
  {
    v24 = Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(v24, 0x746C6644u);
    memset(v24, 0, v21);
    LpcInitializeProcess(v24);
    ExInitializePushLock(v24 + 139);
    PspInitializeProcessLock((__int64)v24);
    v24[189] = v24 + 188;
    v24[188] = v24 + 188;
    v24[277] = v24 + 276;
    v24[276] = v24 + 276;
    v24[307] = v24 + 306;
    v24[306] = v24 + 306;
    *((_BYTE *)v24 + 2170) = a4;
    *((_BYTE *)v24 + 2168) = a5;
    *((_BYTE *)v24 + 2169) = a6;
    v24[283] = 0LL;
    v24[321] = 0LL;
    v24[320] = 0LL;
    v24[323] = 0LL;
    v24[322] = 0LL;
    if ( (v19 & 0x400) != 0 )
      *((_DWORD *)v24 + 543) |= 1u;
    v141 = 32;
    if ( (v122 & 0x8000) != 0 )
      *((_DWORD *)v24 + 543) |= 0x20u;
    if ( v23 )
    {
      *((_DWORD *)v24 + 543) |= 0x80u;
      v25 = (char *)v24 + v23;
      v24[297] = v25;
      v24[298] = &v25[8 * (unsigned int)v137];
    }
    v26 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v24 + 543) |= 0x1000u;
    if ( (v26 & 4) != 0 )
      *((_DWORD *)v24 + 543) |= 0x800000u;
    if ( (v26 & 8) != 0 )
      *((_DWORD *)v24 + 543) |= 0x8000000u;
    v27 = v122;
    v28 = 512;
    Flink = (__int64)v144[1].Header.WaitListHead.Flink | 2;
    if ( (v122 & 0x200) != 0 )
      Flink = (__int64)v144[1].Header.WaitListHead.Flink;
    v24[169] = Flink;
    if ( (v19 & 0x200) != 0 )
      v24[279] = (char *)v24 + v147;
    if ( (v19 & 0x2000) != 0 )
    {
      v30 = (_QWORD *)((char *)v24 + NumberOfBytes_4);
      v24[285] = v30;
      PoEnergyContextInitialize(v30);
    }
    if ( v18 && (v28 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v31 = *(_DWORD *)(v18 + 316);
      v32 = Process;
    }
    else
    {
      v32 = Process;
      if ( Process )
        v31 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v31 = 5;
    }
    v171[1] = (__int64)(v24 + 191);
    *((_DWORD *)v24 + 382) = v31;
    *((_DWORD *)v24 + 501) = 259;
    if ( v32 )
    {
      v33 = (HIDWORD(v32[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v32[1].DirectoryTableBase) >> 12) & 7;
      v24[168] = v32[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    v137 = (volatile signed __int32 *)v24 + 281;
    *((_DWORD *)v24 + 281) = *((_DWORD *)v24 + 281) & 0xC7FFFFFF | (v33 << 27);
    v147 = (__int64)(v24 + 140);
    *((_DWORD *)v24 + 280) = (DefaultPagePriority << 12) | v24[140] & 0xFFFF8FFF;
    if ( v161 )
    {
      if ( !PsReferencePartitionSafe((__int64)v161) )
      {
        SectionInformation = -1073740640;
LABEL_176:
        PspRundownSingleProcess((__int64)v24, 0);
        ObfDereferenceObjectWithTag(v24, 0x72437350u);
LABEL_177:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        SeDeleteCodeIntegrityOriginClaimMembers();
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v161 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    v24[315] = v35;
    if ( !v36 )
    {
      v146 = v145;
      if ( v145 )
      {
        if ( (v122 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_176;
        }
        ObfReferenceObject(v145);
      }
      else if ( v32 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess((__int64)v32) )
        {
          SectionInformation = -1073741811;
          goto LABEL_176;
        }
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v32[1].ProfileListHead.Blink) )
        {
          v38 = (void *)v32[1].Affinity.Bitmap[17];
          v145 = v38;
          if ( v38 )
            ObfReferenceObject(v38);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v32[1].ProfileListHead.Blink);
        }
        if ( !v145 )
        {
          SectionInformation = -1073741558;
          goto LABEL_176;
        }
        v39 = v32[1].AffinityPadding[10];
        if ( v39 )
        {
          v19 |= 0x4000u;
          v129 = *(unsigned __int16 *)(v39 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v39 + 12);
        }
        if ( (v32[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v122 |= 8u;
          a9 = v27 | 8;
        }
      }
    }
    v165 = v24 + 163;
    v40 = v145;
    v24[163] = v145;
    LOWORD(NumberOfBytes_4) = 0;
    if ( v18 )
    {
      v24[270] = *(_QWORD *)(v18 + 464);
      SectionInformation = MmGetSectionInformation((__int64)v40, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v41 = *(_BYTE *)(v18 + 99);
      v42 = v19 | (32
                 * (v41 & 4 | (4
                             * (v41 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v143 = *(unsigned __int16 *)(v18 + 86);
      v142 = *(unsigned __int16 *)(v18 + 84);
      v43 = *(_WORD *)(v18 + 96);
      if ( (v42 & 0x100) != 0 && v43 == 332 && (v41 & 1) != 0 )
        v44 = 0x8000;
      else
        v44 = 0;
      v19 = v44 | v42;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v43);
      v46 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v47 = 3;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v47, v18, 0LL);
        goto LABEL_176;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v129) = v46;
        }
        if ( (v19 & 0x8000) == 0
          && (v46 < MEMORY[0xFFFFF7800000002C] || v46 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v47 = 4;
          goto LABEL_82;
        }
      }
      if ( v146 )
      {
        LOWORD(NumberOfBytes_4) = *(_WORD *)(v18 + 94);
        v48 = (HANDLE *)(v18 + 192);
        v49 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v49 < 0 )
        {
          if ( v49 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v48 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        v24[180] = *(_QWORD *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v50 = v122;
        }
        else
        {
          SectionInformation = PspDetectComplusILImage(v18, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          v50 = a9;
          LOWORD(v122) = a9;
          if ( v46 == 332 && (a9 & 8) == 0 )
          {
            if ( (unsigned int)PsWow64IsMachineSupported(332) )
            {
              v129 = 332;
LABEL_105:
              v19 |= 0x4000u;
              goto LABEL_108;
            }
            if ( (unsigned int)PsWow64IsMachineSupported(452) )
            {
              LOWORD(v129) = 452;
              goto LABEL_105;
            }
            v50 |= 8u;
            LOWORD(v122) = v50;
            a9 = v50;
          }
        }
LABEL_108:
        if ( *v48 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            v51 = RtlQueryImageFileKeyOption(*v48, L"Debugger", 1, &v131, 2u, &NumberOfBytes);
            if ( v51 == -2147483643 || v51 >= 0 && NumberOfBytes == 2 && (_WORD)v131 )
            {
              SectionInformation = -1073741767;
              v47 = 5;
              goto LABEL_83;
            }
          }
          v132 = 0;
          if ( RtlQueryImageFileKeyOption(*v48, L"UseLargePages", 4, &v132, 4u, 0LL) >= 0 )
          {
            if ( v132 )
            {
              v50 |= 0x10u;
              LOWORD(v122) = v50;
              a9 = v50;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v48;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v132 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v132, 4u, 0LL) >= 0 && v132 )
                  {
                    v50 |= 0x20u;
                    LOWORD(v122) = v50;
                    a9 = v50;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v153 )
          {
            PspReadIFEONodeOptions((__int64)v24, *v48);
            v160 = v135;
          }
          v148 = 0;
          if ( RtlQueryImageFileKeyOption(*v48, L"ForceWakeCharge", 4, &v148, 4u, 0LL) >= 0 && v148 )
            v130 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v48, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v52 = NumberOfBytes;
            if ( NumberOfBytes <= 0xA0 && (NumberOfBytes & 7) == 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_132:
                SectionInformation = -1073741801;
                goto LABEL_176;
              }
              if ( RtlQueryImageFileKeyOption(*v48, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v52, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v134 = NumberOfBytes >> 3;
              }
            }
          }
          v175.Length = 48;
          v175.RootDirectory = *v48;
          v175.Attributes = 576;
          v175.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v175.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v175) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v198);
            ObCloseHandle(Handle, 0);
          }
        }
LABEL_143:
        v54 = v149 | 0x20000;
        if ( (v50 & 8) == 0 )
          v54 = v149;
        if ( (v19 & 0x4000) != 0 )
        {
          v55 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          v24[176] = v55;
          if ( !v55 )
            goto LABEL_132;
          v56 = HIDWORD(TokenInformation);
          v57 = v129;
          if ( !HIDWORD(TokenInformation) )
            v56 = PspWow64PickBestNtdll(v18);
          v55[4] = v57;
          *(_DWORD *)(v24[176] + 12LL) = v56;
          v58 = (_QWORD *)v24[176];
          if ( v58 )
            *v58 = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_176;
        v59 = 0;
        v60 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            v202[0] = 14;
            v59 = 1;
          }
          if ( a12 )
            v202[v59++] = 3;
          v61 = v122;
          if ( (v122 & 0x30) != 0 )
            v202[v59++] = 4;
          if ( (v122 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v144) )
            v202[v59++] = 10;
          if ( (v122 & 0x8400) != 0 )
            v202[v59++] = 7;
          if ( v59 )
          {
            v62 = (int)RtlAcquirePrivilege(v202, v59, a12 != 0, &v163) < 0;
            v60 = a2;
            if ( !v62 )
              v19 |= 0x10u;
          }
          else
          {
            v60 = a2;
          }
        }
        else
        {
          v61 = v122;
        }
        if ( (v61 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v60) )
          goto LABEL_173;
        if ( v153 )
        {
          KeQueryAffinityProcess(v153, v200, 0LL, (__int64)v203);
          KeFirstGroupAffinityEx((__int64)&v155, v200);
          v135 = KeNodeBlock[(unsigned __int16)v203[WORD4(v155)]];
        }
        else
        {
          if ( v160 )
          {
            v63 = *(_WORD *)(v160 + 144);
          }
          else if ( Process )
          {
            if ( (Process[1].DirectoryTableBase & 0x100000) != 0 )
            {
              v130 |= 0x100000u;
              v135 = KeNodeBlock[Process->IdealGlobalNode];
              v63 = *(_WORD *)(v135 + 144);
            }
            else
            {
              v135 = PspSelectNodeForProcess();
              v63 = *(_WORD *)(v135 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v63 )
              {
                v135 = 0LL;
                v63 = 1;
              }
            }
          }
          else
          {
            v63 = 0;
          }
          WORD4(v155) = v63;
          *(_QWORD *)&v155 = qword_140CFC848[v63];
          if ( !v135 )
            v135 = KeSelectNodeForAffinity((__int64)&v155);
          LOBYTE(v122) = a9;
          v24 = Object;
        }
        v64 = v137;
        *v137 |= v54;
        *(_DWORD *)v147 |= v130;
        v65 = Process;
        if ( Process )
        {
          DmaAdapter = 0LL;
          v66 = 0;
          SessionId = 0;
          v67 = 0;
          v123 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, &v123);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v68 = (v19 >> 2) & 1;
            v67 = v123;
            if ( !v123 && !v68 )
              goto LABEL_173;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v69 = MmGetSessionIdEx((__int64)v144);
            v66 = SessionId;
            if ( SessionId != v69 )
            {
              if ( !v68 )
              {
LABEL_173:
                SectionInformation = -1073741727;
                goto LABEL_174;
              }
              if ( (v122 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_174;
              }
              v19 |= 1u;
            }
          }
          else if ( !v146 )
          {
            v66 = MmGetSessionIdEx((__int64)Process);
            SessionId = v66;
            v19 |= v66 != (unsigned int)MmGetSessionIdEx((__int64)v144);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v66, (__int64)&ApcState, (_KPROCESS **)&DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_174;
            }
            *(_DWORD *)v147 |= 0x80u;
          }
          if ( !a12 || v67 )
          {
            v71 = Process;
            if ( v67 )
              v71 = v144;
            PspInheritQuota((__int64)v24, (__int64)v71);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v24, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter, (__int64)&ApcState);
              goto LABEL_174;
            }
          }
          v72 = PspMaximumWorkingSet;
          if ( (BYTE4(v198) & 1) != 0 )
            v72 = *((_QWORD *)&v199 + 1);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (__int64)v161,
                    v70,
                    v72,
                    BYTE4(v198) & 1,
                    *(unsigned __int16 *)(v135 + 146) + 1,
                    (__int64)v24) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter, (__int64)&ApcState);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_228;
          v65 = Process;
          v64 = v137;
        }
        else
        {
          PspInheritQuota((__int64)v24, 0LL);
          *((_BYTE *)v24 + 912) = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_174;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v64, 0x40000u);
        v24 = Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess((__int64)Object);
        SectionInformation = KeInitializeProcess(v74, 8, (__int64 *)&v155, v135, SessionSchedulingGroupByProcess, v75);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        if ( v18 )
        {
          v133 = *(_DWORD *)(v18 + 416);
          v151 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 440);
          v150 = *(_DWORD *)(v18 + 448);
          v168 = *(_QWORD *)(v18 + 208);
          v76 = *(_DWORD **)(v18 + 424);
          v138 = *(_DWORD *)(v18 + 432);
          if ( *(_QWORD *)(v18 + 176) && (int)SeGetCodeIntegrityOriginClaimForFileObject() >= 0 )
          {
            if ( !v201[0] && v76 && v138 == 524 )
            {
              v77 = v201;
              v78 = 4LL;
              do
              {
                *(_OWORD *)v77 = *(_OWORD *)v76;
                *((_OWORD *)v77 + 1) = *((_OWORD *)v76 + 1);
                *((_OWORD *)v77 + 2) = *((_OWORD *)v76 + 2);
                *((_OWORD *)v77 + 3) = *((_OWORD *)v76 + 3);
                *((_OWORD *)v77 + 4) = *((_OWORD *)v76 + 4);
                *((_OWORD *)v77 + 5) = *((_OWORD *)v76 + 5);
                *((_OWORD *)v77 + 6) = *((_OWORD *)v76 + 6);
                v77 += 32;
                *((_OWORD *)v77 - 1) = *((_OWORD *)v76 + 7);
                v76 += 32;
                --v78;
              }
              while ( v78 );
              *(_QWORD *)v77 = *(_QWORD *)v76;
              v77[2] = v76[2];
            }
            v76 = v201;
            v138 = 536;
          }
        }
        else
        {
          v76 = 0LL;
        }
        SectionInformation = PspInitializeProcessSecurity(
                               v65,
                               (__int64)v24,
                               (__int64)Token,
                               a12,
                               v133,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v151,
                               (__int64)v76,
                               v138,
                               (__int64)Address,
                               v150,
                               v168,
                               (_DWORD *)v172);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        *((_BYTE *)v24 + 1463) = 2;
        if ( v65 )
        {
          v79 = *((_BYTE *)v24 + 1463);
          if ( ((HIBYTE(v65[1].ActiveProcessors.Bitmap[0]) - 1) & 0xFB) == 0 )
            v79 = HIBYTE(v65[1].ActiveProcessors.Bitmap[0]);
          *((_BYTE *)v24 + 1463) = v79;
          v80 = v18 ? *(_BYTE **)(v18 + 296) : 0LL;
          v81 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)((unsigned __int64)v65 & -(__int64)((a9 & 4) != 0)),
                     (struct _KPROCESS *)v24,
                     v81,
                     v80);
        }
        else
        {
          v24[174] = v144[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v24);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_174;
        if ( (v198 & 7) != 0 )
          PspApplyIFEOPerfOptions((__int64)v24, (unsigned int *)&v198, a2, v83);
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v24, v134, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v83) = a2;
            SectionInformation = PspSetProcessPriorityClass((__int64)v24, *(_BYTE *)(v18 + 248), 0LL, v83);
            if ( SectionInformation < 0 )
              goto LABEL_174;
          }
        }
        *((_BYTE *)v24 + 640) = PspComputeQuantumAndPriority((_DWORD)v24, 0, (unsigned int)&v124, 0, 0LL);
        *((_BYTE *)v24 + 641) = v124;
        SectionInformation = 0;
        v133 = 0;
        PspReadIFEOMitigationOptions(v18, &v193);
        v178 = v193;
        v179 = v194;
        v180 = PspSystemMitigationOptions;
        v181 = qword_140CFC9E0;
        PspInheritMitigationOptions(&v180, &v178, &v193);
        PspReadIFEOMitigationAuditOptions(v18, &v195);
        v182 = v195;
        v183 = v196;
        v184 = PspSystemMitigationAuditOptions;
        v185 = qword_140CFCB80;
        PspInheritMitigationAuditOptions(&v184, &v182, &v195);
        v84 = (HIWORD(v193.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v186 = *(_OWORD *)(v18 + 360);
            v187 = *(_QWORD *)(v18 + 376);
            v188 = v193;
            v189 = v194;
            PspInheritMitigationOptions(&v188, &v186, &v193);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v176 = *(_OWORD *)(v18 + 488);
            v177 = *(_QWORD *)(v18 + 504);
            v190 = v195;
            v191 = v196;
            PspInheritMitigationAuditOptions(&v190, &v176, &v195);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v84) = v84 | 4;
        v85 = v84 | 0x100;
        if ( (v84 & 4) == 0 )
          v85 = v84;
        if ( (v85 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v193);
        if ( !KeIsUserCetAllowed() )
          v193.m128i_i64[1] = v193.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (NumberOfBytes_4 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v141 = 0;
        v87 = v86 | ((NumberOfBytes_4 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)NumberOfBytes_4 >> 4) & 2 | ((v19 & 0x180) != 0) | v141 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        LODWORD(v137) = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          v193.m128i_i64[1] = v193.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v88 = v193.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v88 = v193.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v193.m128i_i64[0] = v88;
        }
        if ( !v146 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          v193.m128i_i64[1] = v193.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v24);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          v193.m128i_i64[1] = v193.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          v193.m128i_i64[1] = v193.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v90 = Process;
        PspApplyMitigationOptions((_DWORD)v24, (_DWORD)Process, (unsigned int)&v193, (unsigned int)&v195, v87);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions((__int64)v24, v18);
          PspApplyComponentFilterOptions(v92, v91);
          *(__m128i *)(v18 + 360) = v193;
          *(_QWORD *)(v18 + 376) = v194;
          *(_OWORD *)(v18 + 488) = v195;
          *(_QWORD *)(v18 + 504) = v196;
        }
        PsQueryProcessAttributes((struct _KPROCESS *)v24, 0LL, (__int64)v125);
        v93 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v93 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v24, v93);
        if ( v90 && v90 != PsInitialSystemProcess && (HIDWORD(v90[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          *((_DWORD *)v24 + 543) |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v144)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_173;
        }
        v94 = (int)v137;
        if ( (_DWORD)v137 || v146 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, v24);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v98 = MmInitializeProcessAddressSpace((ULONG_PTR)v24, (ULONG_PTR)v90, 0LL, &a9, (v19 & 0x20000) != 0);
              v97 = v145;
            }
            else
            {
              v97 = v145;
              v98 = MmInitializeProcessAddressSpace((ULONG_PTR)v24, 0LL, (__int64)v145, &a9, 0);
            }
            SectionInformation = v98;
            if ( v98 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v97);
                v100 = v24[164];
                if ( ImageSectionBasedAddress != v100 )
                  *(_QWORD *)(v18 + 48) += v100 - ImageSectionBasedAddress;
              }
              v133 = SectionInformation;
              if ( !v94 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_321;
            }
          }
        }
        else
        {
          if ( !v90 )
            goto LABEL_321;
          v24[164] = v90[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace(
                                 (ULONG_PTR)v24,
                                 (ULONG_PTR)v90,
                                 0LL,
                                 &a9,
                                 (v19 & 0x800) != 0);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v95 = *(unsigned __int16 *)(v90[1].ActiveProcessors.Bitmap[2] + 2);
            v96 = ExAllocatePoolWithTag(NonPagedPoolNx, v95 + 16, 0x61506553u);
            v24[184] = v96;
            if ( !v96 )
            {
LABEL_228:
              SectionInformation = -1073741670;
              goto LABEL_174;
            }
            memmove(v96, (const void *)v90[1].ActiveProcessors.Bitmap[2], v95 + 16);
            *(_QWORD *)(v24[184] + 8LL) = v24[184] + 16LL;
            *((_DWORD *)v24 + 330) = v90[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *v165 = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v145);
            }
LABEL_321:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(v163);
            if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v24) == 332 )
              *((_DWORD *)v24 + 158) |= 1u;
            v134 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings(
                                       (_KPROCESS *)v24,
                                       (__int64)&ApcState,
                                       (_QWORD *)v18,
                                       v101);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            LODWORD(v137) = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v167 = 0LL;
              *((_QWORD *)&v167 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v24);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v24);
              v104 = BYTE3(v167) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v125[0] & 1));
              BYTE3(v167) = v104;
              if ( v146 )
              {
                SectionInformation = MmCreatePeb(v24, (__int64)&v167, v24 + 170, (__int64)&v155);
                if ( SectionInformation < 0 )
                {
                  v24[170] = 0LL;
                  goto LABEL_176;
                }
                if ( (_QWORD)v155 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v147, 0xFFCFFFFF);
                  v24 = Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v155, (__int64)&v158);
                }
              }
              else
              {
                v105 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                v24[170] = Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_347:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(
                                           (__int64)v105,
                                           (_KPROCESS *)v24,
                                           (__int64)&ApcState,
                                           v18);
                  }
                  else if ( (_DWORD)v137 && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v24, &ApcState);
                    v108 = CurrentThread;
                    PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v24, v110, v111);
                    if ( (v19 & 8) != 0 )
                    {
                      SectionInformation = MmMapApiSetView((__int64)v24);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView((__int64)v24);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL, v112);
                          if ( SectionInformation >= 0 )
                          {
                            if ( v24[176] )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v24);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL, v114);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_351:
                    MmNewProcessInitialized(v24);
                    if ( SectionInformation < 0 )
                      goto LABEL_176;
                    PspLockProcessExclusive((__int64)v24, (__int64)v108);
                    v109 = ExCreateHandle(PspCidTable, v24);
                    v24[136] = v109;
                    if ( !v109 )
                    {
                      PspUnlockProcessExclusive((__int64)v24, (__int64)v108);
                      SectionInformation = -1073741670;
                      goto LABEL_176;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, v24[163], v171);
                      v115 = (__int64)v24;
                      if ( SectionInformation < 0 )
                      {
LABEL_365:
                        PspUnlockProcessExclusive(v115, (__int64)v108);
                        goto LABEL_176;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v24,
                                             **(_QWORD **)(v18 + 392),
                                             v24[170],
                                             (_DWORD *)v24[136],
                                             v171[0],
                                             v24[164],
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v115 = (__int64)v24;
                        goto LABEL_365;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise(v24 + 141, v116, v117, v118);
                    }
                    else
                    {
                      v24 = Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    v24[288] = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v120 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v120[291] = v24[288];
                    *v173 = v120;
                    SectionInformation = v133;
                    goto LABEL_177;
                  }
                  v108 = CurrentThread;
                  goto LABEL_351;
                }
                LOBYTE(v167) = 1;
                KeStackAttachProcess((PRKPROCESS)v24, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v167;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v106 = v24[176];
                  if ( v106 )
                  {
                    v107 = *(_WORD *)(v106 + 8);
                    if ( v107 == 332 || v107 == 452 )
                    {
                      v165 = *(unsigned __int64 **)v106;
                      if ( MmSecureVirtualMemory(v165, 0x480uLL, 4u) )
                      {
                        v156 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v156) = v104;
                        *v165 = v156;
                      }
                      else
                      {
                        SectionInformation = -1073741503;
                      }
                    }
                  }
                }
                KeUnstackDetachProcess(&ApcState);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            v105 = Process;
            goto LABEL_347;
          }
        }
LABEL_174:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(v163);
        goto LABEL_176;
      }
    }
    else if ( v40 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v40, 4, (__int64)v192);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v19 |= 32
           * (HIBYTE(v192[12]) & 4 | (4
                                    * (HIBYTE(v192[12]) & 2 | ((v192[16] & 1 | (2
                                                                              * (v192[16] & 2 | (2 * (v192[16] & 0xF8))))) << 11))));
      LOWORD(NumberOfBytes_4) = HIWORD(v192[11]);
      v143 = HIWORD(v192[9]);
      v142 = LOWORD(v192[9]);
      if ( !v146 )
      {
        v149 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v50) = v122;
    goto LABEL_143;
  }
  return result;
}
