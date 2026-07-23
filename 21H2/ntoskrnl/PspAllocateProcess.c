/*
 * XREFs of PspAllocateProcess @ 0x1406AD918
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 * Callees:
 *     PsIsProtectedProcessLight @ 0x140239790 (PsIsProtectedProcessLight.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeFirstGroupAffinityEx @ 0x140240B10 (KeFirstGroupAffinityEx.c)
 *     PspUnlockProcessExclusive @ 0x14024A0C8 (PspUnlockProcessExclusive.c)
 *     PspWow64PickBestNtdll @ 0x14024C7E4 (PspWow64PickBestNtdll.c)
 *     KeQuerySystemTimeUnsafe @ 0x140266E68 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140266E90 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140266EA0 (KeQuerySystemTimePrecise.c)
 *     RtlWow64GetEquivalentMachineCHPE @ 0x140269590 (RtlWow64GetEquivalentMachineCHPE.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     MmGetDefaultPagePriority @ 0x14027348C (MmGetDefaultPagePriority.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     PsIsSystemProcess @ 0x14027D660 (PsIsSystemProcess.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeQueryAffinityProcess @ 0x14027DDB0 (KeQueryAffinityProcess.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     KeQueryActiveGroupCount @ 0x1402942A0 (KeQueryActiveGroupCount.c)
 *     KeQueryUnbiasedInterruptTime @ 0x14029ABD0 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x14029AC00 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x14029AC28 (KeIsUserCetAllowed.c)
 *     KeSelectNodeForAffinity @ 0x14029E0B0 (KeSelectNodeForAffinity.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     PoEnergyEstimationEnabled @ 0x1402AA040 (PoEnergyEstimationEnabled.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     PsIsProtectedProcess @ 0x1402F4AE0 (PsIsProtectedProcess.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     KeSetCpuSetsProcess @ 0x1403C6154 (KeSetCpuSetsProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeSecureProcess @ 0x140513C80 (KeSecureProcess.c)
 *     PspInitializeProcessLock @ 0x140580FC0 (PspInitializeProcessLock.c)
 *     PsReferencePartition @ 0x140584528 (PsReferencePartition.c)
 *     PspApplyComponentFilterOptions @ 0x1405CF994 (PspApplyComponentFilterOptions.c)
 *     SeDeleteCodeIntegrityOriginClaimMembers @ 0x1405D0028 (SeDeleteCodeIntegrityOriginClaimMembers.c)
 *     SeGetCodeIntegrityOriginClaimForFileObject @ 0x1405D004C (SeGetCodeIntegrityOriginClaimForFileObject.c)
 *     PspAttachSession @ 0x1405E4478 (PspAttachSession.c)
 *     PspDetachSession @ 0x1405E44D4 (PspDetachSession.c)
 *     SeQuerySessionIdToken @ 0x1405F2610 (SeQuerySessionIdToken.c)
 *     PspAssignProcessQuotaBlock @ 0x14060BFA4 (PspAssignProcessQuotaBlock.c)
 *     PspDetectComplusILImage @ 0x14060D484 (PspDetectComplusILImage.c)
 *     PspReadIFEONodeOptions @ 0x14060D558 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x14060D5B0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 *     RtlAcquirePrivilege @ 0x14061013C (RtlAcquirePrivilege.c)
 *     PspSelectNodeForProcess @ 0x140611518 (PspSelectNodeForProcess.c)
 *     PspSetProcessPriorityClass @ 0x140613150 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x14061398C (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x140614E58 (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x14061736C (PspHardenMitigationOptions.c)
 *     PspInheritQuota @ 0x140618504 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406195EC (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x140619680 (RtlOpenImageFileOptionsKey.c)
 *     RtlReleasePrivilege @ 0x140619EC0 (RtlReleasePrivilege.c)
 *     PspApplyIFEOPerfOptions @ 0x14061DEC4 (PspApplyIFEOPerfOptions.c)
 *     PsWow64GetProcessMachine @ 0x14063D4F0 (PsWow64GetProcessMachine.c)
 *     PsWow64IsMachineSupported @ 0x1406436B0 (PsWow64IsMachineSupported.c)
 *     SeQueryInformationToken @ 0x14064B9F0 (SeQueryInformationToken.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     MmSecureVirtualMemory @ 0x140689A00 (MmSecureVirtualMemory.c)
 *     MmGetSectionInformation @ 0x14068ABA0 (MmGetSectionInformation.c)
 *     SeSinglePrivilegeCheck @ 0x140693750 (SeSinglePrivilegeCheck.c)
 *     ObInitProcess @ 0x1406970D4 (ObInitProcess.c)
 *     PspUpdateCreateInfo @ 0x14069C5D4 (PspUpdateCreateInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x1406A122C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406A1478 (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x1406A16FC (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x1406A1718 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x1406A1750 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406A1848 (MmCreatePeb.c)
 *     PspWritePebAffinityInfo @ 0x1406A2104 (PspWritePebAffinityInfo.c)
 *     MmCreateProcessAddressSpace @ 0x1406A77C4 (MmCreateProcessAddressSpace.c)
 *     ObCreateObject @ 0x1406ABDC0 (ObCreateObject.c)
 *     LpcInitializeProcess @ 0x1406AD540 (LpcInitializeProcess.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x1406AD570 (MmGetSessionSchedulingGroupByProcess.c)
 *     KeInitializeProcess @ 0x1406AD59C (KeInitializeProcess.c)
 *     PspInitializeProcessSecurity @ 0x1406AD6E0 (PspInitializeProcessSecurity.c)
 *     PspApplyMitigationOptions @ 0x1406AFCFC (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x1406B0834 (PspInheritMitigationOptions.c)
 *     MmNewProcessInitialized @ 0x1406B0910 (MmNewProcessInitialized.c)
 *     SmProcessCreateNotification @ 0x1406B095C (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x1406B09AC (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x1406B0A94 (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x1406B0B1C (PspReadIFEOMitigationAuditOptions.c)
 *     PspComputeQuantumAndPriority @ 0x1406B0D34 (PspComputeQuantumAndPriority.c)
 *     MmInitializeProcessAddressSpace @ 0x1406BFB24 (MmInitializeProcessAddressSpace.c)
 *     SeIsTokenAssignableToProcess @ 0x1406C4F9C (SeIsTokenAssignableToProcess.c)
 *     PspInitializeFullProcessImageName @ 0x1406C6DA4 (PspInitializeFullProcessImageName.c)
 *     PsQueryProcessAttributes @ 0x1406F0684 (PsQueryProcessAttributes.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     MmIsSessionLeaderProcess @ 0x140781B00 (MmIsSessionLeaderProcess.c)
 *     MmInitializeHandBuiltProcess @ 0x1407CF174 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x1407D1034 (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x1408C46B0 (MmGetImageSectionBasedAddress.c)
 *     MmGetSectionStrongImageReference @ 0x1408D8088 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x140908724 (PspSetProcessAffinitySafe.c)
 *     ExCreateHandle @ 0x14094C800 (ExCreateHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  int v23; // ecx
  unsigned int v24; // r12d
  LARGE_INTEGER *v25; // r15
  char *v26; // rcx
  char v27; // al
  int v28; // r12d
  int v29; // r8d
  __int64 Flink; // rcx
  _QWORD *v31; // rcx
  int v32; // eax
  PEPROCESS v33; // r14
  int v34; // edx
  int DefaultPagePriority; // r8d
  LARGE_INTEGER v36; // r8
  int v37; // r9d
  int SectionInformation; // r14d
  void *v39; // rax
  unsigned __int64 v40; // rax
  PVOID v41; // rcx
  char v42; // r8
  int v43; // ebx
  __int16 v44; // cx
  int v45; // eax
  __int16 EquivalentMachineCHPE; // ax
  unsigned __int16 v47; // di
  int v48; // ecx
  HANDLE *v49; // r12
  int v50; // eax
  int v51; // r14d
  NTSTATUS v52; // eax
  unsigned int v53; // edi
  PVOID PoolWithTag; // rax
  int v55; // r12d
  _WORD *v56; // r10
  int v57; // eax
  __int16 v58; // r11
  _QWORD *QuadPart; // rax
  ULONG v60; // edi
  KPROCESSOR_MODE v61; // al
  __int16 v62; // r14
  bool v63; // sf
  unsigned __int16 v64; // di
  volatile signed __int32 *v65; // rdi
  PEPROCESS v66; // r12
  ULONG v67; // r14d
  char v68; // r12
  int v69; // edi
  int v70; // eax
  __int64 v71; // rdx
  PEPROCESS v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v79; // rcx
  char v80; // r8
  _DWORD *v81; // r14
  _DWORD *v82; // rcx
  __int64 v83; // rax
  char QuadPart_high; // al
  _BYTE *v85; // r9
  unsigned int v86; // r8d
  int inited; // eax
  int v88; // edi
  __int16 v89; // r11
  int v90; // r11d
  unsigned int v91; // edi
  unsigned __int64 v92; // rax
  __int64 ProcessServerSilo; // rax
  PEPROCESS v94; // r12
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  int v98; // edi
  __int64 v99; // rdi
  PVOID v100; // rax
  PVOID v101; // r12
  int v102; // eax
  __int64 ImageSectionBasedAddress; // rax
  LARGE_INTEGER v104; // rcx
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v107; // di
  PEPROCESS v108; // rcx
  LARGE_INTEGER v109; // rax
  __int16 v110; // cx
  struct _KTHREAD *v111; // rdi
  __int64 v112; // rax
  unsigned int ProcessNtdllType; // eax
  __int64 v114; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v116; // rcx
  int v117[2]; // [rsp+20h] [rbp-748h]
  int v119; // [rsp+78h] [rbp-6F0h]
  char v120; // [rsp+7Ch] [rbp-6ECh] BYREF
  char v121; // [rsp+7Dh] [rbp-6EBh] BYREF
  char v122[2]; // [rsp+7Eh] [rbp-6EAh] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp-6E8h]
  ULONG NumberOfBytes; // [rsp+88h] [rbp-6E0h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+8Ch] [rbp-6DCh]
  int v126; // [rsp+90h] [rbp-6D8h]
  int v127; // [rsp+94h] [rbp-6D4h]
  ULONG v128; // [rsp+98h] [rbp-6D0h] BYREF
  ULONG v129; // [rsp+9Ch] [rbp-6CCh] BYREF
  int v130; // [rsp+A0h] [rbp-6C8h]
  ULONG v131; // [rsp+A4h] [rbp-6C4h]
  __int64 v132; // [rsp+A8h] [rbp-6C0h]
  PVOID Object; // [rsp+B0h] [rbp-6B8h]
  volatile signed __int32 *p_HighPart; // [rsp+B8h] [rbp-6B0h]
  int v135; // [rsp+C0h] [rbp-6A8h]
  PVOID TokenInformation; // [rsp+C4h] [rbp-6A4h] BYREF
  ULONG SessionId; // [rsp+CCh] [rbp-69Ch] BYREF
  int v138; // [rsp+D0h] [rbp-698h]
  int v139; // [rsp+D4h] [rbp-694h]
  int v140; // [rsp+D8h] [rbp-690h]
  _KPROCESS *v141; // [rsp+E0h] [rbp-688h]
  PVOID v142; // [rsp+E8h] [rbp-680h]
  PVOID v143; // [rsp+F0h] [rbp-678h]
  __int64 v144; // [rsp+F8h] [rbp-670h]
  ULONG v145; // [rsp+100h] [rbp-668h] BYREF
  int v146; // [rsp+104h] [rbp-664h]
  int v147; // [rsp+108h] [rbp-660h]
  int v148; // [rsp+10Ch] [rbp-65Ch]
  PVOID Address; // [rsp+110h] [rbp-658h]
  __int64 v150; // [rsp+118h] [rbp-650h]
  PACCESS_TOKEN Token; // [rsp+120h] [rbp-648h]
  __int128 v152; // [rsp+128h] [rbp-640h] BYREF
  unsigned __int64 v153; // [rsp+138h] [rbp-630h]
  struct _KTHREAD *CurrentThread; // [rsp+140h] [rbp-628h]
  int v155; // [rsp+148h] [rbp-620h] BYREF
  HANDLE Handle; // [rsp+150h] [rbp-618h] BYREF
  __int64 v157; // [rsp+158h] [rbp-610h]
  PVOID v158; // [rsp+160h] [rbp-608h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+168h] [rbp-600h] BYREF
  PVOID ReturnedState; // [rsp+170h] [rbp-5F8h] BYREF
  PVOID P; // [rsp+178h] [rbp-5F0h]
  unsigned __int64 *p_QuadPart; // [rsp+180h] [rbp-5E8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-5E0h] BYREF
  __int128 v164; // [rsp+190h] [rbp-5D8h] BYREF
  __int64 v165; // [rsp+1A0h] [rbp-5C8h]
  __int64 v166; // [rsp+1A8h] [rbp-5C0h]
  __int64 v167; // [rsp+1B0h] [rbp-5B8h]
  __int64 v168[2]; // [rsp+1C0h] [rbp-5A8h] BYREF
  __int64 v169; // [rsp+1D0h] [rbp-598h]
  _QWORD *v170; // [rsp+1D8h] [rbp-590h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp-588h] BYREF
  OBJECT_ATTRIBUTES v172; // [rsp+210h] [rbp-558h] BYREF
  __int128 v173; // [rsp+240h] [rbp-528h] BYREF
  __int64 v174; // [rsp+250h] [rbp-518h]
  __m128i v175; // [rsp+260h] [rbp-508h] BYREF
  __int64 v176; // [rsp+270h] [rbp-4F8h]
  __int128 v177; // [rsp+280h] [rbp-4E8h] BYREF
  __int64 v178; // [rsp+290h] [rbp-4D8h]
  __int128 v179; // [rsp+2A0h] [rbp-4C8h] BYREF
  __int64 v180; // [rsp+2B0h] [rbp-4B8h]
  __int128 v181; // [rsp+2C0h] [rbp-4A8h] BYREF
  __int64 v182; // [rsp+2D0h] [rbp-498h]
  __int128 v183; // [rsp+2E0h] [rbp-488h] BYREF
  __int64 v184; // [rsp+2F0h] [rbp-478h]
  __m128i v185; // [rsp+300h] [rbp-468h] BYREF
  __int64 v186; // [rsp+310h] [rbp-458h]
  __int128 v187; // [rsp+320h] [rbp-448h] BYREF
  __int64 v188; // [rsp+330h] [rbp-438h]
  _DWORD v189[20]; // [rsp+340h] [rbp-428h] BYREF
  __m128i v190; // [rsp+390h] [rbp-3D8h] BYREF
  __int64 v191; // [rsp+3A0h] [rbp-3C8h]
  __int128 v192; // [rsp+3A8h] [rbp-3C0h] BYREF
  __int64 v193; // [rsp+3B8h] [rbp-3B0h]
  struct _KAPC_STATE ApcState; // [rsp+3C0h] [rbp-3A8h] BYREF
  __int128 v195; // [rsp+3F0h] [rbp-378h] BYREF
  __int128 v196; // [rsp+400h] [rbp-368h]
  _OWORD v197[11]; // [rsp+410h] [rbp-358h] BYREF
  _DWORD v198[136]; // [rsp+4C0h] [rbp-2A8h] BYREF
  ULONG Privilege[6]; // [rsp+6E0h] [rbp-88h] BYREF
  _WORD v200[20]; // [rsp+6F8h] [rbp-70h] BYREF

  v16 = (int)a3;
  p_HighPart = a3;
  Process = (PEPROCESS)a1;
  v166 = a1;
  v142 = a7;
  Token = a8;
  v18 = a11;
  v167 = a11;
  v158 = a13;
  v169 = a14;
  v170 = a15;
  v155 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v152 = 0LL;
  KeyHandle = 0LL;
  memset(v197, 0, 0xA8uLL);
  v19 = 0;
  v190 = 0LL;
  v191 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v122[0] = 0;
  memset(&v172, 0, sizeof(v172));
  Handle = 0LL;
  Object = 0LL;
  v121 = 0;
  LOWORD(v128) = 0;
  NumberOfBytes = 0;
  memset(v189, 0, 0x48uLL);
  TokenInformation = 0LL;
  v168[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v141 = CurrentThread->ApcState.Process;
  v157 = 0LL;
  v132 = 0LL;
  P = 0LL;
  v131 = 0;
  v146 = 0;
  v127 = 0;
  v143 = 0LL;
  v140 = 0;
  v139 = 0;
  LOWORD(v126) = 0;
  v130 = 0;
  v148 = 0;
  v135 = 0;
  Address = 0LL;
  v147 = 0;
  v165 = 0LL;
  memset(v198, 0, 0x218uLL);
  v119 = a9;
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
  v150 = a1 & -(__int64)((a9 & 0x100) != 0);
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((a9 & 0x100) != 0)) != 0 )
      return 3221225520LL;
    v157 = KeNodeBlock[*(unsigned __int16 *)(a11 + 250)];
    v132 = v157;
    v150 = 0LL;
  }
  else if ( a1 )
  {
    v150 = a1 & -(__int64)((a9 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v150 = a1;
      v127 = 0x200000;
    }
  }
  if ( a11 && (*(_DWORD *)(a11 + 4) & 0x40000) != 0 )
    v19 |= 0x1000u;
  v195 = 0LL;
  v196 = 0LL;
  ReturnedState = 0LL;
  v21 = 2624;
  NumberOfBytes_4 = 0;
  v144 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v21 = 2664;
    v19 |= 0x200u;
    v144 = 2624LL;
  }
  if ( PoEnergyEstimationEnabled() )
  {
    NumberOfBytes_4 = (v21 + 7) & 0xFFFFFFF8;
    v21 = NumberOfBytes_4 + 480;
    v19 |= 0x2000u;
    v16 = (int)p_HighPart;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(p_HighPart) = MaximumGroupCount;
  v24 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v24 = (v21 + 7) & 0xFFFFFFF8;
    v21 = 16 * (unsigned __int16)MaximumGroupCount + v24;
  }
  *(_QWORD *)v117 = 0LL;
  LOBYTE(v23) = a2;
  result = ObCreateObject(v23, (int)PsProcessType, v16, a2);
  if ( (int)result >= 0 )
  {
    v25 = (LARGE_INTEGER *)Object;
    ObfReferenceObjectWithTag(Object, 0x72437350u);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    memset(Object, 0, v21);
    LpcInitializeProcess(Object);
    ExInitializePushLock((PKSPIN_LOCK)Object + 139);
    PspInitializeProcessLock((__int64)Object);
    *((_QWORD *)Object + 189) = (char *)Object + 1504;
    v25[188].QuadPart = (LONGLONG)&v25[188];
    v25[277].QuadPart = (LONGLONG)&v25[276];
    v25[276].QuadPart = (LONGLONG)&v25[276];
    v25[307].QuadPart = (LONGLONG)&v25[306];
    v25[306].QuadPart = (LONGLONG)&v25[306];
    BYTE2(v25[271].u.LowPart) = a4;
    LOBYTE(v25[271].LowPart) = a5;
    BYTE1(v25[271].LowPart) = a6;
    v25[283].QuadPart = 0LL;
    v25[321].QuadPart = 0LL;
    v25[320].QuadPart = 0LL;
    v25[323].QuadPart = 0LL;
    v25[322].QuadPart = 0LL;
    if ( (v19 & 0x400) != 0 )
      v25[271].HighPart |= 1u;
    v138 = 32;
    if ( (v119 & 0x8000) != 0 )
      v25[271].HighPart |= 0x20u;
    if ( v24 )
    {
      v25[271].HighPart |= 0x80u;
      v26 = (char *)v25 + v24;
      v25[297].QuadPart = (LONGLONG)v26;
      v25[298].QuadPart = (LONGLONG)&v26[8 * (unsigned int)p_HighPart];
    }
    v27 = a10;
    if ( (a10 & 1) != 0 )
      v25[271].HighPart |= 0x1000u;
    if ( (v27 & 4) != 0 )
      v25[271].HighPart |= 0x800000u;
    if ( (v27 & 8) != 0 )
      v25[271].HighPart |= 0x8000000u;
    v28 = v119;
    v29 = 512;
    Flink = (__int64)v141[1].Header.WaitListHead.Flink | 2;
    if ( (v119 & 0x200) != 0 )
      Flink = (__int64)v141[1].Header.WaitListHead.Flink;
    v25[169].QuadPart = Flink;
    if ( (v19 & 0x200) != 0 )
      v25[279].QuadPart = (LONGLONG)v25 + v144;
    if ( (v19 & 0x2000) != 0 )
    {
      v31 = (LONGLONG *)((char *)&v25->QuadPart + NumberOfBytes_4);
      v25[285].QuadPart = (LONGLONG)v31;
      PoEnergyContextInitialize(v31);
    }
    if ( v18 && (v29 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v32 = *(_DWORD *)(v18 + 316);
      v33 = Process;
    }
    else
    {
      v33 = Process;
      if ( Process )
        v32 = Process[1].ActiveProcessors.Bitmap[9];
      else
        v32 = 5;
    }
    v168[1] = (__int64)&v25[191];
    v25[191].LowPart = v32;
    v25[250].HighPart = 259;
    if ( v33 )
    {
      v34 = (HIDWORD(v33[1].DirectoryTableBase) >> 27) & 7;
      DefaultPagePriority = (LODWORD(v33[1].DirectoryTableBase) >> 12) & 7;
      v25[168] = (LARGE_INTEGER)v33[1].Header.WaitListHead.Flink;
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    p_HighPart = &v25[140].HighPart;
    v25[140].HighPart = v25[140].HighPart & 0xC7FFFFFF | (v34 << 27);
    v144 = (__int64)&v25[140];
    v25[140].LowPart = (DefaultPagePriority << 12) | v25[140].LowPart & 0xFFFF8FFF;
    if ( v158 )
    {
      if ( !PsReferencePartitionSafe((__int64)v158) )
      {
        SectionInformation = -1073740640;
LABEL_176:
        PspRundownSingleProcess((ULONG_PTR)v25);
        ObfDereferenceObjectWithTag(v25, 0x72437350u);
LABEL_177:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        SeDeleteCodeIntegrityOriginClaimMembers();
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v158 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    v25[315] = v36;
    if ( !v37 )
    {
      v143 = v142;
      if ( v142 )
      {
        if ( (v119 & 0x1000) != 0 )
        {
LABEL_57:
          SectionInformation = -1073741776;
          goto LABEL_176;
        }
        ObfReferenceObject(v142);
      }
      else if ( v33 )
      {
        if ( a12 )
          goto LABEL_57;
        if ( PsIsSystemProcess((__int64)v33) )
        {
          SectionInformation = -1073741811;
          goto LABEL_176;
        }
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink) )
        {
          v39 = (void *)v33[1].Affinity.Bitmap[17];
          v142 = v39;
          if ( v39 )
            ObfReferenceObject(v39);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)&v33[1].ProfileListHead.Blink);
        }
        if ( !v142 )
        {
          SectionInformation = -1073741558;
          goto LABEL_176;
        }
        v40 = v33[1].AffinityPadding[10];
        if ( v40 )
        {
          v19 |= 0x4000u;
          v126 = *(unsigned __int16 *)(v40 + 8);
          HIDWORD(TokenInformation) = *(_DWORD *)(v40 + 12);
        }
        if ( (v33[1].DirectoryTableBase & 0x2000000000000LL) != 0 )
        {
          v119 |= 8u;
          a9 = v28 | 8;
        }
      }
    }
    p_QuadPart = (unsigned __int64 *)&v25[163].QuadPart;
    v41 = v142;
    v25[163].QuadPart = (LONGLONG)v142;
    LOWORD(NumberOfBytes_4) = 0;
    if ( v18 )
    {
      v25[270] = *(LARGE_INTEGER *)(v18 + 464);
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v42 = *(_BYTE *)(v18 + 99);
      v43 = v19 | (32
                 * (v42 & 4 | (4
                             * (v42 & 2 | ((*(_DWORD *)(v18 + 112) & 1 | (2
                                                                        * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xF8))))) << 11)))));
      v140 = *(unsigned __int16 *)(v18 + 86);
      v139 = *(unsigned __int16 *)(v18 + 84);
      v44 = *(_WORD *)(v18 + 96);
      if ( (v43 & 0x100) != 0 && v44 == 332 && (v42 & 1) != 0 )
        v45 = 0x8000;
      else
        v45 = 0;
      v19 = v45 | v43;
      EquivalentMachineCHPE = RtlWow64GetEquivalentMachineCHPE(v44);
      v47 = EquivalentMachineCHPE;
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        v48 = 3;
LABEL_82:
        SectionInformation = -1073741701;
LABEL_83:
        PspUpdateCreateInfo(v48, v18, 0LL);
        goto LABEL_176;
      }
      if ( (v19 & 0x8000) == 0 )
      {
        if ( (unsigned int)PsWow64IsMachineSupported(EquivalentMachineCHPE) )
        {
          v19 |= 0x4000u;
          LOWORD(v126) = v47;
        }
        if ( (v19 & 0x8000) == 0
          && (v47 < MEMORY[0xFFFFF7800000002C] || v47 > MEMORY[0xFFFFF7800000002E])
          && (v19 & 0x4000) == 0 )
        {
          v48 = 4;
          goto LABEL_82;
        }
      }
      if ( v143 )
      {
        LOWORD(NumberOfBytes_4) = *(_WORD *)(v18 + 94);
        v49 = (HANDLE *)(v18 + 192);
        v50 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v50 < 0 )
        {
          if ( v50 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v49 = 0LL;
        }
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        v25[180] = *(LARGE_INTEGER *)(v18 + 176);
        if ( (v19 & 0x4000) != 0 )
        {
          v51 = v119;
        }
        else
        {
          SectionInformation = PspDetectComplusILImage(v18, &a9);
          if ( SectionInformation < 0 )
            goto LABEL_176;
          v51 = a9;
          LOWORD(v119) = a9;
          if ( v47 == 332 && (a9 & 8) == 0 )
          {
            if ( (unsigned int)PsWow64IsMachineSupported(332) )
            {
              v126 = 332;
LABEL_105:
              v19 |= 0x4000u;
              goto LABEL_108;
            }
            if ( (unsigned int)PsWow64IsMachineSupported(452) )
            {
              LOWORD(v126) = 452;
              goto LABEL_105;
            }
            v51 |= 8u;
            LOWORD(v119) = v51;
            a9 = v51;
          }
        }
LABEL_108:
        if ( *v49 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            v52 = RtlQueryImageFileKeyOption(*v49, L"Debugger", 1, &v128, 2u, &NumberOfBytes);
            if ( v52 == -2147483643 || v52 >= 0 && NumberOfBytes == 2 && (_WORD)v128 )
            {
              SectionInformation = -1073741767;
              v48 = 5;
              goto LABEL_83;
            }
          }
          v129 = 0;
          if ( RtlQueryImageFileKeyOption(*v49, L"UseLargePages", 4, &v129, 4u, 0LL) >= 0 )
          {
            if ( v129 )
            {
              v51 |= 0x10u;
              LOWORD(v119) = v51;
              a9 = v51;
              if ( (v19 & 0x4000) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v49;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v129 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v129, 4u, 0LL) >= 0 && v129 )
                  {
                    v51 |= 0x20u;
                    LOWORD(v119) = v51;
                    a9 = v51;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v150 )
          {
            PspReadIFEONodeOptions((__int64)v25, *v49);
            v157 = v132;
          }
          v145 = 0;
          if ( RtlQueryImageFileKeyOption(*v49, L"ForceWakeCharge", 4, &v145, 4u, 0LL) >= 0 && v145 )
            v127 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v49, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v53 = NumberOfBytes;
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
              if ( RtlQueryImageFileKeyOption(*v49, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v53, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v131 = NumberOfBytes >> 3;
              }
            }
          }
          v172.Length = 48;
          v172.RootDirectory = *v49;
          v172.Attributes = 576;
          v172.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v172.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v172) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle, (__int64)&v195);
            ObCloseHandle(Handle, 0);
          }
        }
LABEL_143:
        v55 = v146 | 0x20000;
        if ( (v51 & 8) == 0 )
          v55 = v146;
        if ( (v19 & 0x4000) != 0 )
        {
          v56 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
          v25[176].QuadPart = (LONGLONG)v56;
          if ( !v56 )
            goto LABEL_132;
          v57 = HIDWORD(TokenInformation);
          v58 = v126;
          if ( !HIDWORD(TokenInformation) )
            v57 = PspWow64PickBestNtdll(v18);
          v56[4] = v58;
          *(_DWORD *)(v25[176].QuadPart + 12) = v57;
          QuadPart = (_QWORD *)v25[176].QuadPart;
          if ( QuadPart )
            *QuadPart = 1LL;
        }
        SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
        if ( SectionInformation < 0 )
          goto LABEL_176;
        v60 = 0;
        v61 = a2;
        if ( a2 )
        {
          if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
          {
            Privilege[0] = 14;
            v60 = 1;
          }
          if ( a12 )
            Privilege[v60++] = 3;
          v62 = v119;
          if ( (v119 & 0x30) != 0 )
            Privilege[v60++] = 4;
          if ( (v119 & 0x80u) != 0 && !(unsigned int)MmIsSessionLeaderProcess(v141) )
            Privilege[v60++] = 10;
          if ( (v119 & 0x8400) != 0 )
            Privilege[v60++] = 7;
          if ( v60 )
          {
            v63 = RtlAcquirePrivilege(Privilege, v60, a12 != 0, &ReturnedState) < 0;
            v61 = a2;
            if ( !v63 )
              v19 |= 0x10u;
          }
          else
          {
            v61 = a2;
          }
        }
        else
        {
          v62 = v119;
        }
        if ( (v62 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v61) )
          goto LABEL_173;
        if ( v150 )
        {
          KeQueryAffinityProcess(v150, v197, 0LL, (__int64)v200);
          KeFirstGroupAffinityEx((__int64)&v152, v197);
          v132 = KeNodeBlock[(unsigned __int16)v200[WORD4(v152)]];
        }
        else
        {
          if ( v157 )
          {
            v64 = *(_WORD *)(v157 + 144);
          }
          else if ( Process )
          {
            if ( (Process[1].DirectoryTableBase & 0x100000) != 0 )
            {
              v127 |= 0x100000u;
              v132 = KeNodeBlock[Process->IdealGlobalNode];
              v64 = *(_WORD *)(v132 + 144);
            }
            else
            {
              v132 = PspSelectNodeForProcess();
              v64 = *(_WORD *)(v132 + 144);
              if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v64 )
              {
                v132 = 0LL;
                v64 = 1;
              }
            }
          }
          else
          {
            v64 = 0;
          }
          WORD4(v152) = v64;
          *(_QWORD *)&v152 = qword_140CFC848[v64];
          if ( !v132 )
            v132 = KeSelectNodeForAffinity((__int64)&v152);
          LOBYTE(v119) = a9;
          v25 = (LARGE_INTEGER *)Object;
        }
        v65 = p_HighPart;
        *p_HighPart |= v55;
        *(_DWORD *)v144 |= v127;
        v66 = Process;
        if ( Process )
        {
          DmaAdapter = 0LL;
          v67 = 0;
          SessionId = 0;
          v68 = 0;
          v120 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 4u;
            SectionInformation = SeIsTokenAssignableToProcess(Token, &v120);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v69 = (v19 >> 2) & 1;
            v68 = v120;
            if ( !v120 && !v69 )
              goto LABEL_173;
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_174;
            v70 = MmGetSessionIdEx((__int64)v141);
            v67 = SessionId;
            if ( SessionId != v70 )
            {
              if ( !v69 )
              {
LABEL_173:
                SectionInformation = -1073741727;
                goto LABEL_174;
              }
              if ( (v119 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_174;
              }
              v19 |= 1u;
            }
          }
          else if ( !v143 )
          {
            v67 = MmGetSessionIdEx((__int64)Process);
            SessionId = v67;
            v19 |= v67 != (unsigned int)MmGetSessionIdEx((__int64)v141);
          }
          if ( (v19 & 1) != 0 )
          {
            SectionInformation = PspAttachSession(v67, (__int64)&ApcState, (ULONG_PTR *)&DmaAdapter);
            if ( SectionInformation < 0 )
            {
              LOBYTE(v19) = v19 & 0xFE;
              goto LABEL_174;
            }
            *(_DWORD *)v144 |= 0x80u;
          }
          if ( !a12 || v68 )
          {
            v72 = Process;
            if ( v68 )
              v72 = v141;
            PspInheritQuota((__int64)v25, (__int64)v72);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v25, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 1) != 0 )
                PspDetachSession(DmaAdapter, (__int64)&ApcState);
              goto LABEL_174;
            }
          }
          v73 = PspMaximumWorkingSet;
          if ( (BYTE4(v195) & 1) != 0 )
            v73 = *((_QWORD *)&v196 + 1);
          v19 |= 32
               * (MmCreateProcessAddressSpace(
                    (__int64)v158,
                    v71,
                    v73,
                    BYTE4(v195) & 1,
                    *(unsigned __int16 *)(v132 + 146) + 1,
                    (__int64)v25) & 1);
          if ( (v19 & 1) != 0 )
            PspDetachSession(DmaAdapter, (__int64)&ApcState);
          if ( (v19 & 0x20) == 0 )
            goto LABEL_228;
          v66 = Process;
          v65 = p_HighPart;
        }
        else
        {
          PspInheritQuota((__int64)v25, 0LL);
          LOBYTE(v25[114].LowPart) = 1;
          SectionInformation = MmInitializeHandBuiltProcess(v75, v74, v76, v77, *(_QWORD *)v117);
          if ( SectionInformation < 0 )
            goto LABEL_174;
        }
        HIDWORD(TokenInformation) = v19;
        _InterlockedOr(v65, 0x40000u);
        v25 = (LARGE_INTEGER *)Object;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess((__int64)Object);
        SectionInformation = KeInitializeProcess(v79, 8, (__int64 *)&v152, v132, SessionSchedulingGroupByProcess, v80);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        if ( v18 )
        {
          v130 = *(_DWORD *)(v18 + 416);
          v148 = *(_DWORD *)(v18 + 420);
          Address = *(PVOID *)(v18 + 440);
          v147 = *(_DWORD *)(v18 + 448);
          v165 = *(_QWORD *)(v18 + 208);
          v81 = *(_DWORD **)(v18 + 424);
          v135 = *(_DWORD *)(v18 + 432);
          if ( *(_QWORD *)(v18 + 176) && (int)SeGetCodeIntegrityOriginClaimForFileObject() >= 0 )
          {
            if ( !v198[0] && v81 && v135 == 524 )
            {
              v82 = v198;
              v83 = 4LL;
              do
              {
                *(_OWORD *)v82 = *(_OWORD *)v81;
                *((_OWORD *)v82 + 1) = *((_OWORD *)v81 + 1);
                *((_OWORD *)v82 + 2) = *((_OWORD *)v81 + 2);
                *((_OWORD *)v82 + 3) = *((_OWORD *)v81 + 3);
                *((_OWORD *)v82 + 4) = *((_OWORD *)v81 + 4);
                *((_OWORD *)v82 + 5) = *((_OWORD *)v81 + 5);
                *((_OWORD *)v82 + 6) = *((_OWORD *)v81 + 6);
                v82 += 32;
                *((_OWORD *)v82 - 1) = *((_OWORD *)v81 + 7);
                v81 += 32;
                --v83;
              }
              while ( v83 );
              *(_QWORD *)v82 = *(_QWORD *)v81;
              v82[2] = v81[2];
            }
            v81 = v198;
            v135 = 536;
          }
        }
        else
        {
          v81 = 0LL;
        }
        SectionInformation = PspInitializeProcessSecurity(
                               v66,
                               (__int64)v25,
                               (__int64)Token,
                               a12,
                               v130,
                               (v19 >> 11) & 1,
                               (v19 >> 12) & 1,
                               v148,
                               (__int64)v81,
                               v135,
                               (__int64)Address,
                               v147,
                               v165,
                               (_DWORD *)v169);
        if ( SectionInformation < 0 )
          goto LABEL_174;
        HIBYTE(v25[182].QuadPart) = 2;
        if ( v66 )
        {
          QuadPart_high = HIBYTE(v25[182].QuadPart);
          if ( ((HIBYTE(v66[1].ActiveProcessors.Bitmap[0]) - 1) & 0xFB) == 0 )
            QuadPart_high = HIBYTE(v66[1].ActiveProcessors.Bitmap[0]);
          HIBYTE(v25[182].QuadPart) = QuadPart_high;
          v85 = v18 ? *(_BYTE **)(v18 + 296) : 0LL;
          v86 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess(
                     (struct _EX_RUNDOWN_REF *)((unsigned __int64)v66 & -(__int64)((a9 & 4) != 0)),
                     (struct _KPROCESS *)v25,
                     v86,
                     v85);
        }
        else
        {
          v25[174] = (LARGE_INTEGER)v141[1].AffinityPadding[8];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v25);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_174;
        if ( (v195 & 7) != 0 )
          PspApplyIFEOPerfOptions((__int64)v25, (unsigned int *)&v195, a2);
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v25, v131, (char *)P);
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            SectionInformation = PspSetProcessPriorityClass((__int64)v25, *(_BYTE *)(v18 + 248), 0LL, a2);
            if ( SectionInformation < 0 )
              goto LABEL_174;
          }
        }
        LOBYTE(v25[80].LowPart) = PspComputeQuantumAndPriority((_DWORD)v25, 0, (unsigned int)&v121, 0, 0LL);
        BYTE1(v25[80].LowPart) = v121;
        SectionInformation = 0;
        v130 = 0;
        PspReadIFEOMitigationOptions(v18, &v190);
        v175 = v190;
        v176 = v191;
        v177 = PspSystemMitigationOptions;
        v178 = qword_140CFC9E0;
        PspInheritMitigationOptions(&v177, &v175, &v190);
        PspReadIFEOMitigationAuditOptions(v18, &v192);
        v179 = v192;
        v180 = v193;
        v181 = PspSystemMitigationAuditOptions;
        v182 = qword_140CFCB80;
        PspInheritMitigationAuditOptions(&v181, &v179, &v192);
        v88 = (HIWORD(v190.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v183 = *(_OWORD *)(v18 + 360);
            v184 = *(_QWORD *)(v18 + 376);
            v185 = v190;
            v186 = v191;
            PspInheritMitigationOptions(&v185, &v183, &v190);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v173 = *(_OWORD *)(v18 + 488);
            v174 = *(_QWORD *)(v18 + 504);
            v187 = v192;
            v188 = v193;
            PspInheritMitigationAuditOptions(&v187, &v173, &v192);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v88) = v88 | 4;
        v89 = v88 | 0x100;
        if ( (v88 & 4) == 0 )
          v89 = v88;
        if ( (v89 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v190);
        if ( !KeIsUserCetAllowed() )
          v190.m128i_i64[1] = v190.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (NumberOfBytes_4 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v138 = 0;
        v91 = v90 | ((NumberOfBytes_4 & 0x4000) != 0 ? 8 : 0) | ((unsigned __int16)NumberOfBytes_4 >> 4) & 2 | ((v19 & 0x180) != 0) | v138 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2);
        LODWORD(p_HighPart) = v19 & 0x400;
        if ( (v19 & 0x400) != 0 )
        {
          v190.m128i_i64[1] = v190.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v92 = v190.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v92 = v190.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v190.m128i_i64[0] = v92;
        }
        if ( !v143 && Process && (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) == 0 )
          v190.m128i_i64[1] = v190.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        ProcessServerSilo = PsGetProcessServerSilo((__int64)v25);
        if ( !PsIsHostSilo(ProcessServerSilo) )
          v190.m128i_i64[1] = v190.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x4000) != 0 )
          v190.m128i_i64[1] = v190.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v94 = Process;
        PspApplyMitigationOptions((_DWORD)v25, (_DWORD)Process, (unsigned int)&v190, (unsigned int)&v192, v91);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions((__int64)v25, v18);
          PspApplyComponentFilterOptions(v96, v95);
          *(__m128i *)(v18 + 360) = v190;
          *(_QWORD *)(v18 + 376) = v191;
          *(_OWORD *)(v18 + 488) = v192;
          *(_QWORD *)(v18 + 504) = v193;
        }
        PsQueryProcessAttributes(v25, 0LL, v122);
        v97 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v97 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v25, v97);
        if ( v94 && v94 != PsInitialSystemProcess && (HIDWORD(v94[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
          v25[271].HighPart |= 0x2000000u;
        if ( (a9 & 0x80u) != 0
          && !(unsigned int)MmIsSessionLeaderProcess(v141)
          && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
        {
          goto LABEL_173;
        }
        v98 = (int)p_HighPart;
        if ( (_DWORD)p_HighPart || v143 )
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, v25);
          if ( SectionInformation >= 0 )
          {
            if ( (v19 & 0x10000) != 0 )
            {
              v102 = MmInitializeProcessAddressSpace((ULONG_PTR)v25, (v19 >> 17) & 1);
              v101 = v142;
            }
            else
            {
              v101 = v142;
              v102 = MmInitializeProcessAddressSpace((ULONG_PTR)v25, 0);
            }
            SectionInformation = v102;
            if ( v102 >= 0 )
            {
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v101);
                v104 = v25[164];
                if ( ImageSectionBasedAddress != v104.QuadPart )
                  *(_QWORD *)(v18 + 48) += v104.QuadPart - ImageSectionBasedAddress;
              }
              v130 = SectionInformation;
              if ( !v98 )
                LOWORD(v19) = v19 | 2;
              LOWORD(v19) = (4 * (a9 & 0x10 | 2)) | v19;
              goto LABEL_321;
            }
          }
        }
        else
        {
          if ( !v94 )
            goto LABEL_321;
          v25[164] = (LARGE_INTEGER)v94[1].Affinity.Bitmap[18];
          SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v25, (v19 >> 11) & 1);
          if ( SectionInformation >= 0 )
          {
            LOWORD(v19) = WORD2(TokenInformation) | (4 * (a9 & 0x10)) | 2;
            v99 = *(unsigned __int16 *)(v94[1].ActiveProcessors.Bitmap[2] + 2);
            v100 = ExAllocatePoolWithTag(NonPagedPoolNx, v99 + 16, 0x61506553u);
            v25[184].QuadPart = (LONGLONG)v100;
            if ( !v100 )
            {
LABEL_228:
              SectionInformation = -1073741670;
              goto LABEL_174;
            }
            memmove(v100, (const void *)v94[1].ActiveProcessors.Bitmap[2], v99 + 16);
            *(_QWORD *)(v25[184].QuadPart + 8) = v25[184].QuadPart + 16;
            v25[165].LowPart = v94[1].Affinity.Bitmap[19];
            if ( (a9 & 0x1000) != 0 )
            {
              *p_QuadPart = 0LL;
              HalPutDmaAdapter((PADAPTER_OBJECT)v142);
            }
LABEL_321:
            if ( (v19 & 0x10) != 0 )
              RtlReleasePrivilege(ReturnedState);
            if ( (unsigned __int16)PsWow64GetProcessMachine((__int64)v25) == 332 )
              v25[79].LowPart |= 1u;
            v131 = v19 & 8;
            if ( (v19 & 8) != 0 )
            {
              if ( v18 )
              {
                SectionInformation = PspSetupReservedUserMappings((_KPROCESS *)v25, (__int64)&ApcState, (_QWORD *)v18);
                if ( SectionInformation < 0 )
                  goto LABEL_176;
              }
            }
            LODWORD(p_HighPart) = v19 & 2;
            if ( (v19 & 2) != 0 )
            {
              *(_QWORD *)&v164 = 0LL;
              *((_QWORD *)&v164 + 1) = -1LL;
              IsProtectedProcess = PsIsProtectedProcess((__int64)v25);
              IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v25);
              v107 = BYTE3(v164) & 0x88 | ((v19 & 0x40) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x80) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v122[0] & 1));
              BYTE3(v164) = v107;
              if ( v143 )
              {
                SectionInformation = MmCreatePeb(
                                       v25,
                                       (__int64)&v164,
                                       (LARGE_INTEGER *)&v25[170].QuadPart,
                                       (__int64)&v152);
                if ( SectionInformation < 0 )
                {
                  v25[170].QuadPart = 0LL;
                  goto LABEL_176;
                }
                if ( (_QWORD)v152 )
                {
                  _InterlockedAnd((volatile signed __int32 *)v144, 0xFFCFFFFF);
                  v25 = (LARGE_INTEGER *)Object;
                  PspSetProcessAffinitySafe((_DWORD)Object, 1, 0, (unsigned int)&v152, (__int64)&v155);
                }
              }
              else
              {
                v108 = Process;
                Address = (PVOID)Process[1].AffinityPadding[4];
                v25[170].QuadPart = (LONGLONG)Address;
                if ( (v19 & 0x800) != 0 )
                {
LABEL_347:
                  if ( (v19 & 8) != 0 && v18 )
                  {
                    SectionInformation = PspSetupUserProcessAddressSpace(
                                           (__int64)v108,
                                           (_KPROCESS *)v25,
                                           (__int64)&ApcState,
                                           v18);
                  }
                  else if ( (_DWORD)p_HighPart && (v19 & 0x800) == 0 )
                  {
                    SectionInformation = 0;
                    KeStackAttachProcess((PRKPROCESS)v25, &ApcState);
                    v111 = CurrentThread;
                    PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v25);
                    if ( (v19 & 8) != 0 )
                    {
                      SectionInformation = MmMapApiSetView((__int64)v25);
                      if ( SectionInformation >= 0 )
                      {
                        SectionInformation = PspMapSiloSharedDataView((__int64)v25);
                        if ( SectionInformation >= 0 )
                        {
                          SectionInformation = PspPrepareSystemDllInitBlock(0LL, 0LL);
                          if ( SectionInformation >= 0 )
                          {
                            if ( v25[176].QuadPart )
                            {
                              ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v25);
                              SectionInformation = PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                            }
                          }
                        }
                      }
                    }
                    KeUnstackDetachProcess(&ApcState);
LABEL_351:
                    MmNewProcessInitialized(v25);
                    if ( SectionInformation < 0 )
                      goto LABEL_176;
                    PspLockProcessExclusive((__int64)v25, (__int64)v111);
                    v112 = ExCreateHandle(PspCidTable, v25);
                    v25[136].QuadPart = v112;
                    if ( !v112 )
                    {
                      PspUnlockProcessExclusive((__int64)v25, (__int64)v111);
                      SectionInformation = -1073741670;
                      goto LABEL_176;
                    }
                    if ( (v19 & 0x1000) != 0 )
                    {
                      SectionInformation = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))MmGetSectionStrongImageReference)(
                                             0LL,
                                             0LL,
                                             (LARGE_INTEGER)v25[163].QuadPart,
                                             v168);
                      v114 = (__int64)v25;
                      if ( SectionInformation < 0 )
                      {
LABEL_365:
                        PspUnlockProcessExclusive(v114, (__int64)v111);
                        goto LABEL_176;
                      }
                      SectionInformation = KeSecureProcess(
                                             (_KPROCESS *)v25,
                                             **(_QWORD **)(v18 + 392),
                                             v25[170].QuadPart,
                                             v25[136].QuadPart,
                                             v168[0],
                                             v25[164].QuadPart,
                                             *(struct _MDL **)(v18 + 392),
                                             *(unsigned int *)(v18 + 408));
                      if ( SectionInformation < 0 )
                      {
                        v114 = (__int64)v25;
                        goto LABEL_365;
                      }
                    }
                    if ( KeQuerySystemTimeUnsafe() )
                    {
                      KeQuerySystemTimePrecise(v25 + 141);
                    }
                    else
                    {
                      v25 = (LARGE_INTEGER *)Object;
                      *((_QWORD *)Object + 141) = MEMORY[0xFFFFF78000000014];
                    }
                    v25[288].QuadPart = MEMORY[0xFFFFF78000000008];
                    UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                    v116 = Object;
                    *((_QWORD *)Object + 289) = UnbiasedInterruptTime;
                    v116[291] = v25[288].QuadPart;
                    *v170 = v116;
                    SectionInformation = v130;
                    goto LABEL_177;
                  }
                  v111 = CurrentThread;
                  goto LABEL_351;
                }
                LOBYTE(v164) = 1;
                KeStackAttachProcess((PRKPROCESS)v25, &ApcState);
                if ( MmSecureVirtualMemory(Address, 0x7C8uLL, 4u) )
                  *(_OWORD *)Address = v164;
                else
                  SectionInformation = -1073741503;
                if ( SectionInformation >= 0 )
                {
                  v109 = v25[176];
                  if ( v109.QuadPart )
                  {
                    v110 = *(_WORD *)(v109.QuadPart + 8);
                    if ( v110 == 332 || v110 == 452 )
                    {
                      p_QuadPart = *(unsigned __int64 **)v109.QuadPart;
                      if ( MmSecureVirtualMemory(p_QuadPart, 0x480uLL, 4u) )
                      {
                        v153 = 0xFFFFFFFF00000001uLL;
                        BYTE3(v153) = v107;
                        *p_QuadPart = v153;
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
            v108 = Process;
            goto LABEL_347;
          }
        }
LABEL_174:
        if ( (v19 & 0x10) != 0 )
          RtlReleasePrivilege(ReturnedState);
        goto LABEL_176;
      }
    }
    else if ( v41 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, (__int64)v189);
      if ( SectionInformation < 0 )
        goto LABEL_176;
      v19 |= 32
           * (HIBYTE(v189[12]) & 4 | (4
                                    * (HIBYTE(v189[12]) & 2 | ((v189[16] & 1 | (2
                                                                              * (v189[16] & 2 | (2 * (v189[16] & 0xF8))))) << 11))));
      LOWORD(NumberOfBytes_4) = HIWORD(v189[11]);
      v140 = HIWORD(v189[9]);
      v139 = LOWORD(v189[9]);
      if ( !v143 )
      {
        v146 = 8;
        v19 |= 0x800u;
      }
    }
    LOBYTE(v51) = v119;
    goto LABEL_143;
  }
  return result;
}
