/*
 * XREFs of PspAllocateProcess @ 0x14070BD10
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 * Callees:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402037B0 (KeUnstackDetachProcess.c)
 *     KeCopyXfdMaskToPeb @ 0x140205DD4 (KeCopyXfdMaskToPeb.c)
 *     PspWow64PickBestNtdll @ 0x1402361E4 (PspWow64PickBestNtdll.c)
 *     KeQueryAffinityProcess @ 0x1402395A0 (KeQueryAffinityProcess.c)
 *     PsIsProtectedProcessLight @ 0x140242520 (PsIsProtectedProcessLight.c)
 *     KeSelectGroupFromNode @ 0x140250060 (KeSelectGroupFromNode.c)
 *     PspUnlockProcessExclusive @ 0x14025302C (PspUnlockProcessExclusive.c)
 *     KeCopyAffinityEx2 @ 0x140256360 (KeCopyAffinityEx2.c)
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     PsIsSystemProcess @ 0x1402820E0 (PsIsSystemProcess.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     PsIsProtectedProcess @ 0x1402A0790 (PsIsProtectedProcess.c)
 *     ExInitializePushLock @ 0x1402A0840 (ExInitializePushLock.c)
 *     KeQueryUnbiasedInterruptTime @ 0x1402A0850 (KeQueryUnbiasedInterruptTime.c)
 *     PspLockProcessExclusive @ 0x1402A0880 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x1402A08A8 (KeIsUserCetAllowed.c)
 *     KeStartIdealProcessorAssignmentBlock @ 0x1402A08BC (KeStartIdealProcessorAssignmentBlock.c)
 *     KeInitializeIdealProcessorAssignmentBlock @ 0x1402A0D30 (KeInitializeIdealProcessorAssignmentBlock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeQuerySystemTimeUnsafe @ 0x1402F0880 (KeQuerySystemTimeUnsafe.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     KeQueryMaximumGroupCount @ 0x1402F5110 (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     MmGetDefaultPagePriority @ 0x140360698 (MmGetDefaultPagePriority.c)
 *     PsReferencePartitionSafe @ 0x1403606EC (PsReferencePartitionSafe.c)
 *     KeSetCpuSetsProcess @ 0x1403D2D98 (KeSetCpuSetsProcess.c)
 *     KeSelectNodeForAffinity @ 0x1403DE5C8 (KeSelectNodeForAffinity.c)
 *     KeQueryGroupAffinityEx @ 0x1403DF470 (KeQueryGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsReferencePartition @ 0x14045ECC6 (PsReferencePartition.c)
 *     KeSecureProcess @ 0x14056C6B8 (KeSecureProcess.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     PspUpdateCreateInfo @ 0x14066EFE8 (PspUpdateCreateInfo.c)
 *     PspSetupUserProcessAddressSpace @ 0x14067259C (PspSetupUserProcessAddressSpace.c)
 *     PspPrepareSystemDllInitBlock @ 0x1406727EC (PspPrepareSystemDllInitBlock.c)
 *     PsWow64GetProcessNtdllType @ 0x140672A7C (PsWow64GetProcessNtdllType.c)
 *     PspMapSiloSharedDataView @ 0x140672A98 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140672AD0 (MmMapApiSetView.c)
 *     PspWritePebAffinityInfo @ 0x140672BD8 (PspWritePebAffinityInfo.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     SeIsTokenAssignableToProcess @ 0x140695160 (SeIsTokenAssignableToProcess.c)
 *     MmSecureVirtualMemory @ 0x1406A2410 (MmSecureVirtualMemory.c)
 *     ObInitProcess @ 0x1406A6448 (ObInitProcess.c)
 *     PspDetachSession @ 0x1406A8EC8 (PspDetachSession.c)
 *     PspAttachSession @ 0x1406A8EEC (PspAttachSession.c)
 *     PspAssignProcessQuotaBlock @ 0x1406C86A0 (PspAssignProcessQuotaBlock.c)
 *     RtlAcquirePrivilege @ 0x1406CB6DC (RtlAcquirePrivilege.c)
 *     PspReadIFEONodeOptions @ 0x1406CC6A0 (PspReadIFEONodeOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     PspSetProcessPriorityClass @ 0x1406D2718 (PspSetProcessPriorityClass.c)
 *     PoEnergyContextInitialize @ 0x1406D811C (PoEnergyContextInitialize.c)
 *     PspSetupReservedUserMappings @ 0x1406D94F0 (PspSetupReservedUserMappings.c)
 *     PspHardenMitigationOptions @ 0x1406DA7B0 (PspHardenMitigationOptions.c)
 *     RtlReleasePrivilege @ 0x1406DAE08 (RtlReleasePrivilege.c)
 *     PspInheritQuota @ 0x1406DBC80 (PspInheritQuota.c)
 *     PspApplyWin32kFilterOptions @ 0x1406DD840 (PspApplyWin32kFilterOptions.c)
 *     RtlOpenImageFileOptionsKey @ 0x1406DD890 (RtlOpenImageFileOptionsKey.c)
 *     SeGetCodeIntegrityOriginClaimForFileObject @ 0x1406DD8A8 (SeGetCodeIntegrityOriginClaimForFileObject.c)
 *     PspApplyComponentFilterOptions @ 0x1406DF640 (PspApplyComponentFilterOptions.c)
 *     MmIsSessionLeaderProcess @ 0x1406E8FE0 (MmIsSessionLeaderProcess.c)
 *     KeInitializeProcess @ 0x14070A268 (KeInitializeProcess.c)
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     PsQueryProcessAttributes @ 0x14070BA00 (PsQueryProcessAttributes.c)
 *     PspApplyMitigationOptions @ 0x14070E104 (PspApplyMitigationOptions.c)
 *     PspInheritMitigationOptions @ 0x14070ED0C (PspInheritMitigationOptions.c)
 *     SeDeleteCodeIntegrityOriginClaimMembers @ 0x14070EDE0 (SeDeleteCodeIntegrityOriginClaimMembers.c)
 *     SmProcessCreateNotification @ 0x14070EE20 (SmProcessCreateNotification.c)
 *     PspInheritMitigationAuditOptions @ 0x14070EE70 (PspInheritMitigationAuditOptions.c)
 *     PspReadIFEOMitigationOptions @ 0x14070EF5C (PspReadIFEOMitigationOptions.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x14070EFE4 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitializeProcessSecurity @ 0x14070F0D8 (PspInitializeProcessSecurity.c)
 *     MmGetSessionSchedulingGroupByProcess @ 0x14070F320 (MmGetSessionSchedulingGroupByProcess.c)
 *     LpcInitializeProcess @ 0x14070F34C (LpcInitializeProcess.c)
 *     ObRetagReferences @ 0x14070F37C (ObRetagReferences.c)
 *     PspInitializeFullProcessImageName @ 0x14070F3A8 (PspInitializeFullProcessImageName.c)
 *     PspSelectMachineForProcess @ 0x140711058 (PspSelectMachineForProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 *     PspComputeQuantumAndPriority @ 0x14079D364 (PspComputeQuantumAndPriority.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     SeQuerySessionIdToken @ 0x14079FB80 (SeQuerySessionIdToken.c)
 *     ExCreateHandle @ 0x1407A347C (ExCreateHandle.c)
 *     PspSelectNodeForProcess @ 0x1407F1710 (PspSelectNodeForProcess.c)
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     PspReadIFEOPerfOptions @ 0x1407F6CE0 (PspReadIFEOPerfOptions.c)
 *     PspApplyIFEOPerfOptions @ 0x1407F7128 (PspApplyIFEOPerfOptions.c)
 *     MmInitializeHandBuiltProcess @ 0x14085D8F8 (MmInitializeHandBuiltProcess.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140860DAC (MmInitializeHandBuiltProcess2.c)
 *     MmGetImageSectionBasedAddress @ 0x140881A7E (MmGetImageSectionBasedAddress.c)
 *     KeInitializeProcessUserCetLogging @ 0x140960988 (KeInitializeProcessUserCetLogging.c)
 *     MmGetSectionStrongImageReference @ 0x14097F148 (MmGetSectionStrongImageReference.c)
 *     PspSetProcessAffinitySafe @ 0x1409AE810 (PspSetProcessAffinitySafe.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PspAllocateProcess(
        __int64 a1,
        char a2,
        _WORD *a3,
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
  __int16 v20; // r12
  __int64 result; // rax
  unsigned int v22; // r14d
  int MaximumGroupCount; // eax
  int v24; // ecx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  char *v27; // r15
  __int16 v28; // r9
  char *v29; // rcx
  char v30; // al
  __int16 v31; // cx
  int v32; // r9d
  __int64 Flink; // rax
  char *v34; // rcx
  int v35; // eax
  __int64 v36; // r14
  int v37; // ecx
  int DefaultPagePriority; // edx
  __int64 v39; // r8
  int SectionInformation; // r14d
  PVOID v41; // rcx
  void *v42; // rax
  __int64 v43; // rax
  int v44; // edi
  int v45; // ecx
  HANDLE *v46; // r12
  int v47; // eax
  NTSTATUS v48; // eax
  int v49; // r14d
  unsigned int v50; // edi
  PVOID PoolWithTag; // rax
  _DWORD *v52; // r10
  int v53; // eax
  __int16 v54; // r11
  _QWORD *v55; // rax
  unsigned int v56; // edi
  KPROCESSOR_MODE v57; // al
  int v58; // ecx
  __int16 v59; // r14
  BOOL IsSessionLeaderProcess; // eax
  bool v61; // sf
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int16 *v65; // r14
  unsigned __int16 v66; // di
  ULONG v67; // r14d
  char v68; // r12
  BOOL v69; // edi
  int v70; // eax
  int v71; // edx
  __int64 v72; // rdx
  int v73; // r8d
  __int64 SessionSchedulingGroupByProcess; // rax
  __int64 v75; // rcx
  char v76; // r8
  _DWORD *v77; // r14
  _DWORD *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rdi
  char v81; // al
  __int64 v82; // r9
  int v83; // r8d
  int inited; // eax
  __int64 v85; // r8
  __int64 v86; // r9
  int v87; // edi
  __int16 v88; // r11
  int v89; // r11d
  int v90; // eax
  unsigned int v91; // eax
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  _DWORD *v96; // r9
  PVOID v97; // rdi
  int v98; // eax
  __int64 ImageSectionBasedAddress; // rax
  __int64 v100; // rcx
  ULONG_PTR v101; // rdi
  __int64 v102; // rdi
  PVOID v103; // rax
  size_t v104; // r8
  __int64 v105; // rdi
  bool IsProtectedProcess; // di
  bool IsProtectedProcessLight; // al
  char v108; // di
  __int64 v109; // rcx
  unsigned __int64 **v110; // rdx
  __int16 v111; // cx
  char v112; // al
  struct _KTHREAD *v113; // rdi
  __int64 v114; // rax
  __int64 v115; // r8
  _DWORD *v116; // r9
  unsigned int ProcessNtdllType; // eax
  __int64 v118; // rcx
  ULONGLONG UnbiasedInterruptTime; // rax
  _QWORD *v120; // rcx
  int v121[2]; // [rsp+20h] [rbp-808h]
  unsigned __int16 v123[2]; // [rsp+78h] [rbp-7B0h] BYREF
  char v124; // [rsp+7Ch] [rbp-7ACh] BYREF
  char v125; // [rsp+7Dh] [rbp-7ABh] BYREF
  char v126[2]; // [rsp+7Eh] [rbp-7AAh] BYREF
  __int64 v127; // [rsp+80h] [rbp-7A8h]
  unsigned __int16 v128; // [rsp+88h] [rbp-7A0h]
  ULONG NumberOfBytes; // [rsp+8Ch] [rbp-79Ch] BYREF
  int NumberOfBytes_4; // [rsp+90h] [rbp-798h]
  int v131; // [rsp+94h] [rbp-794h]
  int v132; // [rsp+98h] [rbp-790h]
  ULONG v133; // [rsp+9Ch] [rbp-78Ch] BYREF
  ULONG v134; // [rsp+A0h] [rbp-788h] BYREF
  int v135; // [rsp+A4h] [rbp-784h]
  int v136; // [rsp+A8h] [rbp-780h]
  ULONG v137; // [rsp+ACh] [rbp-77Ch]
  int v138; // [rsp+B0h] [rbp-778h] BYREF
  int v139; // [rsp+B4h] [rbp-774h]
  PVOID TokenInformation; // [rsp+B8h] [rbp-770h] BYREF
  unsigned __int16 *v141; // [rsp+C0h] [rbp-768h]
  unsigned __int16 *v142; // [rsp+C8h] [rbp-760h]
  PVOID v143; // [rsp+D0h] [rbp-758h]
  int v144; // [rsp+D8h] [rbp-750h]
  _WORD *v145; // [rsp+E0h] [rbp-748h]
  int v146; // [rsp+E8h] [rbp-740h]
  int v147; // [rsp+ECh] [rbp-73Ch]
  volatile signed __int32 *v148; // [rsp+F0h] [rbp-738h]
  ULONG SessionId; // [rsp+F8h] [rbp-730h] BYREF
  _KPROCESS *Process; // [rsp+100h] [rbp-728h]
  PVOID Object; // [rsp+108h] [rbp-720h]
  int v152; // [rsp+110h] [rbp-718h]
  int v153; // [rsp+114h] [rbp-714h]
  ULONG v154; // [rsp+118h] [rbp-710h] BYREF
  ULONG v155; // [rsp+11Ch] [rbp-70Ch] BYREF
  int v156; // [rsp+120h] [rbp-708h]
  __int64 v157; // [rsp+128h] [rbp-700h]
  PACCESS_TOKEN Token; // [rsp+130h] [rbp-6F8h]
  PVOID Address; // [rsp+138h] [rbp-6F0h]
  unsigned __int64 v160; // [rsp+140h] [rbp-6E8h]
  struct _KTHREAD *CurrentThread; // [rsp+148h] [rbp-6E0h]
  __int64 v162; // [rsp+150h] [rbp-6D8h]
  HANDLE Handle; // [rsp+158h] [rbp-6D0h] BYREF
  PVOID v164; // [rsp+160h] [rbp-6C8h]
  PVOID v165; // [rsp+168h] [rbp-6C0h] BYREF
  PVOID v166; // [rsp+170h] [rbp-6B8h] BYREF
  PVOID P; // [rsp+178h] [rbp-6B0h]
  int v168; // [rsp+180h] [rbp-6A8h]
  HANDLE KeyHandle; // [rsp+188h] [rbp-6A0h] BYREF
  unsigned __int64 *v170; // [rsp+190h] [rbp-698h]
  __int128 v171; // [rsp+198h] [rbp-690h] BYREF
  __int64 v172; // [rsp+1B0h] [rbp-678h]
  __int64 v173; // [rsp+1C0h] [rbp-668h] BYREF
  __int64 v174; // [rsp+1C8h] [rbp-660h]
  __int64 v175; // [rsp+1D0h] [rbp-658h]
  __int64 v176; // [rsp+1D8h] [rbp-650h]
  _QWORD *v177; // [rsp+1E0h] [rbp-648h]
  __int128 v178; // [rsp+1E8h] [rbp-640h] BYREF
  __int128 v179; // [rsp+1F8h] [rbp-630h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+208h] [rbp-620h] BYREF
  OBJECT_ATTRIBUTES v181; // [rsp+238h] [rbp-5F0h] BYREF
  __int128 v182; // [rsp+270h] [rbp-5B8h] BYREF
  __int64 v183; // [rsp+280h] [rbp-5A8h]
  __m128i v184; // [rsp+290h] [rbp-598h] BYREF
  unsigned __int64 v185; // [rsp+2A0h] [rbp-588h]
  __int128 v186; // [rsp+2B0h] [rbp-578h] BYREF
  __int64 v187; // [rsp+2C0h] [rbp-568h]
  __int128 v188; // [rsp+2D0h] [rbp-558h] BYREF
  __int64 v189; // [rsp+2E0h] [rbp-548h]
  __int128 v190; // [rsp+2F0h] [rbp-538h] BYREF
  __int64 v191; // [rsp+300h] [rbp-528h]
  __int128 v192; // [rsp+310h] [rbp-518h] BYREF
  __int64 v193; // [rsp+320h] [rbp-508h]
  __m128i v194; // [rsp+330h] [rbp-4F8h] BYREF
  unsigned __int64 v195; // [rsp+340h] [rbp-4E8h]
  __int128 v196; // [rsp+350h] [rbp-4D8h] BYREF
  __int64 v197; // [rsp+360h] [rbp-4C8h]
  _DWORD v198[20]; // [rsp+370h] [rbp-4B8h] BYREF
  __m128i v199; // [rsp+3C0h] [rbp-468h] BYREF
  unsigned __int64 v200; // [rsp+3D0h] [rbp-458h]
  __int128 v201; // [rsp+3D8h] [rbp-450h] BYREF
  __int64 v202; // [rsp+3E8h] [rbp-440h]
  __int128 v203; // [rsp+3F0h] [rbp-438h] BYREF
  __int128 v204; // [rsp+400h] [rbp-428h]
  __int64 v205; // [rsp+410h] [rbp-418h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+418h] [rbp-410h] BYREF
  _DWORD v207[68]; // [rsp+450h] [rbp-3D8h] BYREF
  _DWORD v208[136]; // [rsp+560h] [rbp-2C8h] BYREF
  unsigned int v209[8]; // [rsp+780h] [rbp-A8h] BYREF
  _OWORD v210[4]; // [rsp+7A0h] [rbp-88h] BYREF

  v16 = (int)a3;
  v145 = a3;
  v127 = a1;
  v175 = a1;
  Object = a7;
  Token = a8;
  v18 = a11;
  v172 = a11;
  v164 = a13;
  v176 = a14;
  v177 = a15;
  v168 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  v208[131] = 0;
  memset(&ObjectAttributes, 0, 44);
  v179 = 0LL;
  KeyHandle = 0LL;
  memset(&v207[2], 0, 0x100uLL);
  v19 = 0;
  v138 = 0;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v126[0] = 0;
  memset(&v181, 0, 44);
  Handle = 0LL;
  v143 = 0LL;
  v125 = 0;
  LOWORD(v133) = 0;
  NumberOfBytes = 0;
  memset(v198, 0, 0x48uLL);
  LODWORD(TokenInformation) = 0;
  v173 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v141 = 0LL;
  v142 = 0LL;
  P = 0LL;
  v137 = 0;
  v131 = 0;
  v132 = 0;
  v147 = 0;
  v146 = 0;
  v135 = 34404;
  v156 = 0;
  v136 = 0;
  v153 = 0;
  v139 = 0;
  Address = 0LL;
  v152 = 0;
  v174 = 0LL;
  v128 = 0;
  memset(v208, 0, 0x218uLL);
  v20 = a9;
  NumberOfBytes_4 = a9;
  if ( (a9 & 0x800) != 0 )
  {
    v19 = 2;
    if ( (a9 & 0x2000) != 0 )
    {
      v19 = 6;
      if ( (a9 & 0x4000) != 0 )
        v19 = 14;
    }
  }
  else if ( !Object )
  {
    v19 = a1 != 0 ? 4 : 1;
  }
  if ( (v19 & 4) != 0 )
  {
    if ( a12 && (v19 & 2) == 0 )
      return 3221225520LL;
    if ( PsIsSystemProcess(a1) )
      return 3221225485LL;
  }
  else if ( (a9 & 0x1000) != 0 )
  {
    return 3221225520LL;
  }
  v157 = a1 & -(__int64)((v20 & 0x100) != 0);
  if ( v18 && (*(_DWORD *)(v18 + 4) & 0x2000) != 0 )
  {
    if ( (a1 & -(__int64)((v20 & 0x100) != 0)) == 0 )
    {
      v141 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(v18 + 250)];
      v142 = v141;
      v157 = 0LL;
      goto LABEL_20;
    }
    return 3221225520LL;
  }
  if ( a1 )
  {
    v157 = a1 & -(__int64)((v20 & 0x100) != 0);
    if ( (*(_DWORD *)(a1 + 1120) & 0x200000) != 0 )
    {
      v157 = a1;
      v132 = 0x200000;
    }
  }
LABEL_20:
  if ( v18 && (*(_DWORD *)(v18 + 4) & 0x40000) != 0 )
    v19 |= 0x10000u;
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v166 = 0LL;
  v22 = 2944;
  LODWORD(v148) = 0;
  v162 = 0LL;
  if ( !PsDisableDiskCounters )
  {
    v22 = 2984;
    v19 |= 0x8000u;
    v162 = 2944LL;
  }
  if ( (unsigned __int8)PoEnergyEstimationEnabled() )
  {
    LODWORD(v148) = (v22 + 7) & 0xFFFFFFF8;
    v22 = (_DWORD)v148 + 480;
    v19 |= 0x20000u;
    v16 = (int)v145;
  }
  MaximumGroupCount = KeQueryMaximumGroupCount();
  LODWORD(v145) = MaximumGroupCount;
  v25 = 0;
  if ( (unsigned __int16)MaximumGroupCount > 1u )
  {
    v25 = (v22 + 7) & 0xFFFFFFF8;
    v22 = 16 * (unsigned __int16)MaximumGroupCount + v25;
  }
  *(_QWORD *)v121 = 0LL;
  LOBYTE(v24) = a2;
  result = ObCreateObject(v24, (int)PsProcessType, v16, a2);
  if ( (int)result >= 0 )
  {
    v27 = (char *)v143;
    ObRetagReferences(v143, v26, 1917023056LL);
    memset(v143, 0, v22);
    LpcInitializeProcess(v143);
    ExInitializePushLock((PEX_RUNDOWN_REF)v143 + 139);
    *((_QWORD *)v143 + 135) = 0LL;
    *((_QWORD *)v27 + 189) = v27 + 1504;
    *((_QWORD *)v27 + 188) = v27 + 1504;
    *((_QWORD *)v27 + 277) = v27 + 2208;
    *((_QWORD *)v27 + 276) = v27 + 2208;
    *((_QWORD *)v27 + 307) = v27 + 2448;
    *((_QWORD *)v27 + 306) = v27 + 2448;
    v27[2170] = a4;
    v27[2168] = a5;
    v27[2169] = a6;
    *((_QWORD *)v27 + 283) = 0LL;
    v170 = (unsigned __int64 *)(v27 + 2560);
    KeInitializeIdealProcessorAssignmentBlock((__int64)(v27 + 2560));
    *((_QWORD *)v27 + 356) = 0LL;
    *((_QWORD *)v27 + 355) = 0LL;
    *((_QWORD *)v27 + 358) = 0LL;
    *((_QWORD *)v27 + 357) = 0LL;
    *((_QWORD *)v27 + 360) = 0LL;
    if ( (v19 & 2) != 0 )
      *((_DWORD *)v27 + 543) |= 1u;
    v28 = NumberOfBytes_4;
    v144 = 32;
    if ( (NumberOfBytes_4 & 0x8000) != 0 )
      *((_DWORD *)v27 + 543) |= 0x20u;
    if ( v25 )
    {
      *((_DWORD *)v27 + 543) |= 0x80u;
      v29 = &v27[v25];
      *((_QWORD *)v27 + 297) = v29;
      *((_QWORD *)v27 + 298) = &v29[8 * (unsigned int)v145];
    }
    v30 = a10;
    if ( (a10 & 1) != 0 )
      *((_DWORD *)v27 + 543) |= 0x1000u;
    if ( (v30 & 4) != 0 )
      *((_DWORD *)v27 + 543) |= 0x800000u;
    if ( (v30 & 8) != 0 )
      *((_DWORD *)v27 + 543) |= 0x8000000u;
    v31 = v28;
    v32 = 512;
    Flink = (__int64)Process[1].Header.WaitListHead.Flink | 2;
    if ( (v31 & 0x200) != 0 )
      Flink = (__int64)Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v27 + 169) = Flink;
    if ( (v19 & 0x8000) != 0 )
      *((_QWORD *)v27 + 279) = &v27[v162];
    if ( v19 >= 0x20000 )
    {
      v34 = &v27[(unsigned int)v148];
      *((_QWORD *)v27 + 285) = v34;
      PoEnergyContextInitialize(v34);
    }
    if ( v18 && (v32 & *(_DWORD *)(v18 + 4)) != 0 )
    {
      v35 = *(_DWORD *)(v18 + 316);
      v36 = v127;
    }
    else
    {
      v36 = v127;
      if ( v127 )
        v35 = *(_DWORD *)(v127 + 1528);
      else
        v35 = 5;
    }
    *((_DWORD *)v27 + 382) = v35;
    *((_DWORD *)v27 + 501) = 259;
    if ( v36 )
    {
      v37 = (*(_DWORD *)(v36 + 1124) >> 27) & 7;
      DefaultPagePriority = (*(_DWORD *)(v36 + 1120) >> 12) & 7;
      *((_QWORD *)v27 + 168) = *(_QWORD *)(v36 + 1088);
    }
    else
    {
      DefaultPagePriority = MmGetDefaultPagePriority();
    }
    *((_DWORD *)v27 + 281) = *((_DWORD *)v27 + 281) & 0xC7FFFFFF | (v37 << 27);
    v148 = (volatile signed __int32 *)(v27 + 1120);
    *((_DWORD *)v27 + 280) = (DefaultPagePriority << 12) | *((_DWORD *)v27 + 280) & 0xFFFF8FFF;
    if ( v164 )
    {
      if ( !PsReferencePartitionSafe((__int64)v164) )
      {
        SectionInformation = -1073740640;
LABEL_161:
        PspRundownSingleProcess((__int64)v27, 0);
        ObfDereferenceObjectWithTag(v27, 0x72437350u);
LABEL_162:
        if ( P )
          ExFreePoolWithTag(P, 0x73437350u);
        SeDeleteCodeIntegrityOriginClaimMembers(v208);
        return (unsigned int)SectionInformation;
      }
    }
    else
    {
      v164 = PspSystemPartition;
      PsReferencePartition((__int64)PspSystemPartition);
    }
    *((_QWORD *)v27 + 315) = v39;
    v41 = Object;
    if ( Object )
    {
      ObfReferenceObject(Object);
      v41 = Object;
    }
    if ( (v19 & 4) == 0 || (v135 = *(unsigned __int16 *)(v36 + 2412), (v19 & 2) != 0) )
    {
      v44 = 0;
    }
    else
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v36 + 1112)) )
      {
        v42 = *(void **)(v36 + 1304);
        Object = v42;
        if ( v42 )
          ObfReferenceObject(v42);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v36 + 1112));
      }
      v41 = Object;
      if ( !Object )
      {
        SectionInformation = -1073741558;
        goto LABEL_161;
      }
      v43 = *(_QWORD *)(v36 + 1408);
      if ( v43 )
      {
        v19 |= 0x40u;
        v156 = *(_DWORD *)(v43 + 8);
      }
      v44 = 0;
      if ( (*(_DWORD *)(v36 + 1124) & 0x20000) != 0 )
        v44 = 0x20000;
      v131 = v44;
    }
    v162 = (__int64)(v27 + 1304);
    *((_QWORD *)v27 + 163) = v41;
    if ( v18 )
    {
      *((_QWORD *)v27 + 270) = *(_QWORD *)(v18 + 440);
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, v18 + 48);
      if ( SectionInformation < 0 )
        goto LABEL_161;
      v19 |= (*(_BYTE *)(v18 + 99) & 4 | (4
                                        * (*(_BYTE *)(v18 + 99) & 2 | (32
                                                                     * (*(_DWORD *)(v18 + 112) & 1 | (2 * (*(_DWORD *)(v18 + 112) & 2 | (2 * (*(_DWORD *)(v18 + 112) & 0xFC))))))))) << 11;
      v147 = *(unsigned __int16 *)(v18 + 86);
      v146 = *(unsigned __int16 *)(v18 + 84);
      if ( (*(_WORD *)(v18 + 92) & *(_WORD *)(v18 + 10)) != 0 )
      {
        SectionInformation = -1073741701;
        v45 = 3;
LABEL_81:
        PspUpdateCreateInfo(v45, v18, 0LL);
        goto LABEL_161;
      }
      if ( (v19 & 4) == 0 )
      {
        ObfReferenceObjectWithTag(*(PVOID *)(v18 + 176), 0x72437350u);
        *((_QWORD *)v27 + 180) = *(_QWORD *)(v18 + 176);
        v128 = *(_WORD *)(v18 + 94);
        v46 = (HANDLE *)(v18 + 192);
        v47 = RtlOpenImageFileOptionsKey((unsigned __int16 *)(v18 + 232), 0LL, (HANDLE *)(v18 + 192));
        if ( v47 < 0 )
        {
          if ( v47 == -1073741772 )
            *(_BYTE *)(v18 + 8) |= 0x40u;
          *v46 = 0LL;
        }
        SectionInformation = PspSelectMachineForProcess(v127, v18, &v138);
        if ( SectionInformation < 0 )
        {
          v45 = 4;
          goto LABEL_81;
        }
        v135 = (unsigned __int16)v138;
        if ( BYTE2(v138) )
          v19 |= 0x40u;
        if ( HIBYTE(v138) )
          v131 = v44 | 0x20000;
        if ( *v46 )
        {
          if ( *(char *)(v18 + 8) >= 0 )
          {
            if ( (v48 = RtlQueryImageFileKeyOption(*v46, L"Debugger", 1, &v133, 2u, &NumberOfBytes), v48 == -2147483643)
              || v48 >= 0 && NumberOfBytes == 2 && (_WORD)v133
              || (v154 = 0, RtlQueryImageFileKeyOption(*v46, L"AppExecutionAliasRedirect", 4, &v154, 4u, 0LL) >= 0)
              && v154 == 1 )
            {
              SectionInformation = -1073741767;
              v45 = 5;
              goto LABEL_81;
            }
          }
          v134 = 0;
          if ( RtlQueryImageFileKeyOption(*v46, L"UseLargePages", 4, &v134, 4u, 0LL) >= 0 )
          {
            if ( v134 )
            {
              v49 = NumberOfBytes_4 | 0x10;
              NumberOfBytes_4 = v49;
              a9 = v49;
              if ( (v19 & 0x40) == 0 )
              {
                ObjectAttributes.Length = 48;
                ObjectAttributes.RootDirectory = *v46;
                ObjectAttributes.Attributes = 576;
                ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspLargePageDLLKeyName;
                *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
                {
                  v134 = 0;
                  if ( RtlQueryImageFileKeyOption(KeyHandle, L"ntdll.dll", 4, &v134, 4u, 0LL) >= 0 && v134 )
                  {
                    NumberOfBytes_4 = v49 | 0x20;
                    a9 = v49 | 0x20;
                  }
                  ObCloseHandle(KeyHandle, 0);
                }
              }
            }
          }
          if ( !v157 )
          {
            PspReadIFEONodeOptions((__int64)v27, *v46);
            v141 = v142;
          }
          v155 = 0;
          if ( RtlQueryImageFileKeyOption(*v46, L"ForceWakeCharge", 4, &v155, 4u, 0LL) >= 0 && v155 )
            v132 |= 0x40u;
          if ( RtlQueryImageFileKeyOption(*v46, L"AllowedCpuSets", 3, 0LL, 0, &NumberOfBytes) == -2147483643 )
          {
            v50 = NumberOfBytes;
            if ( NumberOfBytes <= 0x100 && (NumberOfBytes & 7) == 0 )
            {
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, 0x73437350u);
              P = PoolWithTag;
              if ( !PoolWithTag )
              {
LABEL_119:
                SectionInformation = -1073741801;
                goto LABEL_161;
              }
              if ( RtlQueryImageFileKeyOption(*v46, L"AllowedCpuSets", 3, (ULONG *)PoolWithTag, v50, &NumberOfBytes) >= 0
                && (NumberOfBytes & 7) == 0 )
              {
                v19 |= 0x200000u;
                v137 = NumberOfBytes >> 3;
              }
            }
          }
          v181.Length = 48;
          v181.RootDirectory = *v46;
          v181.Attributes = 576;
          v181.ObjectName = (PUNICODE_STRING)&PspPerfOptionsKeyName;
          *(_OWORD *)&v181.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&Handle, 1u, &v181) >= 0 )
          {
            PspReadIFEOPerfOptions(Handle);
            ObCloseHandle(Handle, 0);
          }
        }
      }
    }
    else if ( v41 )
    {
      SectionInformation = MmGetSectionInformation((__int64)v41, 4, (__int64)v198);
      if ( SectionInformation < 0 )
        goto LABEL_161;
      v19 |= (HIBYTE(v198[12]) & 4 | (4
                                    * (HIBYTE(v198[12]) & 2 | (32
                                                             * (v198[16] & 1 | (2
                                                                              * (v198[16] & 2 | (2 * (v198[16] & 0xFC))))))))) << 11;
      v128 = HIWORD(v198[11]);
      v147 = HIWORD(v198[9]);
      v146 = LOWORD(v198[9]);
      if ( (v19 & 4) != 0 )
      {
        v131 = v44 | 8;
        v19 |= 0x18u;
      }
    }
    if ( (v19 & 0x40) != 0 )
    {
      v52 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x50776F57u);
      *((_QWORD *)v27 + 176) = v52;
      if ( !v52 )
        goto LABEL_119;
      v53 = v156;
      v54 = v135;
      if ( !v156 )
        v53 = PspWow64PickBestNtdll(v18);
      v52[2] = v53;
      v55 = (_QWORD *)*((_QWORD *)v27 + 176);
      if ( v55 )
        *v55 = 1LL;
    }
    else
    {
      v54 = v135;
    }
    v145 = v27 + 2412;
    *((_WORD *)v27 + 1206) = v54;
    SectionInformation = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
    if ( SectionInformation < 0 )
      goto LABEL_161;
    v56 = 0;
    v57 = a2;
    if ( a2 )
    {
      if ( v18 && (*(_DWORD *)(v18 + 4) & 0x100) != 0 && *(_BYTE *)(v18 + 248) == 4 )
      {
        v209[0] = 14;
        v56 = 1;
      }
      v58 = a12;
      if ( a12 )
        v209[v56++] = 3;
      v59 = NumberOfBytes_4;
      if ( (NumberOfBytes_4 & 0x30) != 0 )
        v209[v56++] = 4;
      if ( (v59 & 0x80u) != 0 )
      {
        IsSessionLeaderProcess = MmIsSessionLeaderProcess();
        v58 = a12;
        if ( !IsSessionLeaderProcess )
          v209[v56++] = 10;
      }
      if ( (v59 & 0x8400) != 0 )
        v209[v56++] = 7;
      if ( v56 )
      {
        v61 = (int)RtlAcquirePrivilege(v209, v56, v58 != 0, &v166) < 0;
        v57 = a2;
        if ( !v61 )
          v19 |= 0x400u;
      }
      else
      {
        v57 = a2;
      }
    }
    else
    {
      v59 = NumberOfBytes_4;
    }
    if ( (v59 & 0x8400) != 0 && !SeSinglePrivilegeCheck(SeTcbPrivilege, v57) )
      goto LABEL_158;
    v123[0] = -1;
    v207[0] = 2097153;
    memset(&v207[1], 0, 0x104uLL);
    if ( v157 )
    {
      KeQueryAffinityProcess(v157, (__int64)v207, 0LL, v210, v123);
      v141 = (unsigned __int16 *)KeNodeBlock[*((unsigned __int16 *)v210 + v123[0])];
      v142 = v141;
      goto LABEL_173;
    }
    v65 = v141;
    if ( !v141 )
    {
      if ( !v127 )
      {
        v66 = 0;
        v123[0] = 0;
        KeAddProcessorAffinityEx((unsigned __int16 *)v207, 0);
LABEL_171:
        KeCopyAffinityEx2((__int64)v207, (__int64)KeActiveProcessors);
        if ( !v65 )
        {
          v178 = 0LL;
          WORD4(v178) = v66;
          *(_QWORD *)&v178 = KeQueryGroupAffinityEx((unsigned __int16 *)v207, v66);
          v141 = (unsigned __int16 *)KeSelectNodeForAffinity((__int64)&v178);
          v142 = v141;
        }
LABEL_173:
        *((_DWORD *)v27 + 281) |= v131;
        *v148 |= v132;
        if ( v127 )
        {
          v165 = 0LL;
          v67 = 0;
          SessionId = 0;
          v68 = 0;
          v124 = 0;
          if ( a12 )
          {
            if ( SeSinglePrivilegeCheck(SeAssignPrimaryTokenPrivilege, a2) )
              v19 |= 0x200u;
            SectionInformation = SeIsTokenAssignableToProcess((__int64)Token, &v124);
            if ( SectionInformation < 0 )
              goto LABEL_159;
            v68 = v124;
            if ( v124 )
            {
              v69 = (v19 & 0x200) != 0;
            }
            else
            {
              v69 = (v19 & 0x200) != 0;
              if ( (v19 & 0x200) == 0 )
                goto LABEL_158;
            }
            SectionInformation = SeQuerySessionIdToken(Token, &SessionId);
            if ( SectionInformation < 0 )
              goto LABEL_159;
            v70 = MmGetSessionIdEx((__int64)Process);
            v67 = SessionId;
            if ( SessionId != v70 )
            {
              if ( !v69 )
              {
LABEL_158:
                SectionInformation = -1073741727;
                goto LABEL_159;
              }
              if ( (NumberOfBytes_4 & 0x80u) != 0 )
              {
                SectionInformation = -1073741811;
                goto LABEL_159;
              }
              v19 |= 0x20u;
            }
          }
          else if ( (v19 & 4) != 0 )
          {
            v67 = MmGetSessionIdEx(v127);
            SessionId = v67;
            v19 |= (unsigned int)MmGetSessionIdEx((__int64)Process) != v67 ? 0x20 : 0;
          }
          if ( (v19 & 0x20) != 0 )
          {
            SectionInformation = PspAttachSession(v67, (__int64)&ApcState, (ULONG_PTR *)&v165);
            if ( SectionInformation < 0 )
            {
              LOWORD(v19) = v19 & 0xFFDF;
              goto LABEL_159;
            }
            *v148 |= 0x80u;
          }
          if ( !a12 || v68 )
          {
            v72 = v127;
            if ( v68 )
              v72 = (__int64)Process;
            PspInheritQuota((__int64)v27, v72);
          }
          else
          {
            SectionInformation = PspAssignProcessQuotaBlock(0LL, (__int64)v27, (__int64)Token);
            if ( SectionInformation < 0 )
            {
              if ( (v19 & 0x20) != 0 )
                PspDetachSession(v165, (__int64)&ApcState);
              goto LABEL_159;
            }
          }
          v73 = PspMaximumWorkingSet;
          if ( (BYTE4(v203) & 1) != 0 )
            v73 = DWORD2(v204);
          v19 |= (MmCreateProcessAddressSpace(
                    (_DWORD)v164,
                    v71,
                    v73,
                    BYTE4(v203) & 1,
                    (unsigned int)*v141 + 1,
                    (__int64)v27) & 1) << 11;
          if ( (v19 & 0x20) != 0 )
            PspDetachSession(v165, (__int64)&ApcState);
          if ( (v19 & 0x800) == 0 )
            goto LABEL_213;
        }
        else
        {
          PspInheritQuota((__int64)v27, 0LL);
          v27[912] = 1;
          SectionInformation = MmInitializeHandBuiltProcess();
          if ( SectionInformation < 0 )
            goto LABEL_159;
        }
        _InterlockedOr((volatile signed __int32 *)v27 + 281, 0x40000u);
        v27 = (char *)v143;
        SessionSchedulingGroupByProcess = MmGetSessionSchedulingGroupByProcess(v143);
        SectionInformation = KeInitializeProcess(
                               v75,
                               8,
                               v123[0],
                               (unsigned __int16 *)v207,
                               v142,
                               SessionSchedulingGroupByProcess,
                               v76);
        if ( SectionInformation < 0 )
          goto LABEL_159;
        if ( v18 )
        {
          v136 = *(_DWORD *)(v18 + 392);
          v153 = *(_DWORD *)(v18 + 396);
          Address = *(PVOID *)(v18 + 416);
          v152 = *(_DWORD *)(v18 + 424);
          v174 = *(_QWORD *)(v18 + 208);
          v77 = *(_DWORD **)(v18 + 400);
          v139 = *(_DWORD *)(v18 + 408);
          if ( *(_QWORD *)(v18 + 176) && (int)SeGetCodeIntegrityOriginClaimForFileObject() >= 0 )
          {
            if ( !v208[0] && v77 && v139 == 524 )
            {
              v78 = v208;
              v79 = 4LL;
              do
              {
                *(_OWORD *)v78 = *(_OWORD *)v77;
                *((_OWORD *)v78 + 1) = *((_OWORD *)v77 + 1);
                *((_OWORD *)v78 + 2) = *((_OWORD *)v77 + 2);
                *((_OWORD *)v78 + 3) = *((_OWORD *)v77 + 3);
                *((_OWORD *)v78 + 4) = *((_OWORD *)v77 + 4);
                *((_OWORD *)v78 + 5) = *((_OWORD *)v77 + 5);
                *((_OWORD *)v78 + 6) = *((_OWORD *)v77 + 6);
                v78 += 32;
                *((_OWORD *)v78 - 1) = *((_OWORD *)v77 + 7);
                v77 += 32;
                --v79;
              }
              while ( v79 );
              *(_QWORD *)v78 = *(_QWORD *)v77;
              v78[2] = v77[2];
            }
            v77 = v208;
            v139 = 536;
          }
        }
        else
        {
          v77 = 0LL;
        }
        v80 = v127;
        SectionInformation = PspInitializeProcessSecurity(
                               v127,
                               (_DWORD)v27,
                               (_DWORD)Token,
                               a12,
                               v136,
                               (v19 >> 4) & 1,
                               HIWORD(v19) & 1,
                               v153,
                               (__int64)v77,
                               v139,
                               (__int64)Address,
                               v152,
                               v174,
                               v176);
        if ( SectionInformation < 0 )
          goto LABEL_159;
        v27[1463] = 2;
        if ( v80 )
        {
          v81 = v27[1463];
          if ( ((*(_BYTE *)(v80 + 1463) - 1) & 0xFB) == 0 )
            v81 = *(_BYTE *)(v80 + 1463);
          v27[1463] = v81;
          if ( v18 )
            v82 = *(_QWORD *)(v18 + 296);
          else
            LODWORD(v82) = 0;
          v83 = v18 ? *(_DWORD *)(v18 + 292) : 0;
          inited = ObInitProcess((struct _EX_RUNDOWN_REF *)(v80 & -(__int64)((a9 & 4) != 0)), (__int64)v27, v83, v82);
        }
        else
        {
          *((_QWORD *)v27 + 174) = Process[1].Affinity.StaticBitmap[28];
          inited = MmInitializeHandBuiltProcess2((ULONG_PTR)v27);
        }
        SectionInformation = inited;
        if ( inited < 0 )
          goto LABEL_159;
        if ( (v203 & 7) != 0 )
        {
          LOBYTE(v85) = a2;
          PspApplyIFEOPerfOptions(v27, &v203, v85);
        }
        if ( (v19 & 0x200000) != 0 )
          KeSetCpuSetsProcess((__int64)v27, v137, (char *)P);
        KeStartIdealProcessorAssignmentBlock(
          (__int64)v170,
          (__int64)v27,
          (unsigned int *)((unsigned __int64)&v205 & -(__int64)((BYTE4(v203) & 2) != 0)));
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x100) != 0 )
          {
            LOBYTE(v86) = a2;
            SectionInformation = PspSetProcessPriorityClass((__int64)v27, *(_BYTE *)(v18 + 248), 0LL, v86);
            if ( SectionInformation < 0 )
              goto LABEL_159;
          }
        }
        v27[640] = PspComputeQuantumAndPriority((_DWORD)v27, 0, (unsigned int)&v125, 0, 0LL);
        v27[641] = v125;
        SectionInformation = 0;
        v136 = 0;
        PspReadIFEOMitigationOptions(v18, &v199);
        v184 = v199;
        v185 = v200;
        v186 = PspSystemMitigationOptions;
        v187 = qword_140D06DF8;
        PspInheritMitigationOptions(&v186, &v184, &v199);
        PspReadIFEOMitigationAuditOptions(v18, &v201);
        v188 = v201;
        v189 = v202;
        v190 = PspSystemMitigationAuditOptions;
        v191 = qword_140D07080;
        PspInheritMitigationAuditOptions(&v190, &v188, &v201);
        v87 = (HIWORD(v199.m128i_i64[0]) & 3) << 16;
        if ( v18 )
        {
          if ( (*(_DWORD *)(v18 + 4) & 0x10000) != 0 )
          {
            v192 = *(_OWORD *)(v18 + 336);
            v193 = *(_QWORD *)(v18 + 352);
            v194 = v199;
            v195 = v200;
            PspInheritMitigationOptions(&v194, &v192, &v199);
          }
          if ( (*(_DWORD *)(v18 + 4) & 0x8000000) != 0 )
          {
            v182 = *(_OWORD *)(v18 + 464);
            v183 = *(_QWORD *)(v18 + 480);
            v196 = v201;
            v197 = v202;
            PspInheritMitigationAuditOptions(&v196, &v182, &v201);
          }
        }
        if ( (_DWORD)TokenInformation )
          LOWORD(v87) = v87 | 4;
        v88 = v87 | 0x100;
        if ( (v87 & 4) == 0 )
          v88 = v87;
        if ( (v88 & 0xFF00) != 0 )
          PspHardenMitigationOptions(&v199);
        if ( !KeIsUserCetAllowed() )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v128 & 0x4000) == 0 || (v19 & 0x40000) == 0 )
          v144 = 0;
        if ( (v128 & 0x4000) == 0 || (v90 = 0x80000, (v19 & 0x400000) == 0) )
          v90 = 0;
        v91 = v89 | ((v128 & 0x4000) != 0 ? 8 : 0) | (v128 >> 4) & 2 | ((v19 & 0x6000) != 0) | v144 | ((v19 & 0x100000 | (v19 >> 1) & 0x7C00000) >> 2) | v90;
        if ( (v19 & 2) != 0 )
        {
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFCuLL | 0x2000000000000002LL;
          if ( (a10 & 2) != 0 )
            v92 = v199.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000220000LL;
          else
            v92 = v199.m128i_i64[0] & 0xFFFFFCFFFFCCFFFFuLL | 0x20000110000LL;
          v199.m128i_i64[0] = v92;
        }
        if ( (v19 & 4) != 0 && (*(_DWORD *)(v127 + 2516) & 0x4000) == 0 )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        if ( (v19 & 0x40) != 0 )
          v199.m128i_i64[1] = v199.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x2000000000000000LL;
        v200 = v200 & 0xFFFFFFFFFFFFCFFFuLL | 0x2000;
        PspApplyMitigationOptions((_DWORD)v27, v127, (unsigned int)&v199, (unsigned int)&v201, v91);
        if ( v18 )
        {
          PspApplyWin32kFilterOptions((__int64)v27, v18);
          PspApplyComponentFilterOptions(v94, v93);
          *(__m128i *)(v18 + 336) = v199;
          *(_QWORD *)(v18 + 352) = v200;
          *(_OWORD *)(v18 + 464) = v201;
          *(_QWORD *)(v18 + 480) = v202;
        }
        PsQueryProcessAttributes((__int64)v27, 0LL, (__int64)v126);
        v95 = ((_DWORD)TokenInformation != 0) | 2u;
        if ( (a9 & 0x20000) == 0 )
          v95 = (_DWORD)TokenInformation != 0;
        SmProcessCreateNotification(v27, v95);
        if ( (*((_DWORD *)v27 + 629) & 0x4000) != 0 )
        {
          SectionInformation = KeInitializeProcessUserCetLogging(v27);
          if ( SectionInformation < 0 )
            goto LABEL_159;
        }
        if ( (a9 & 0x80u) != 0 && !MmIsSessionLeaderProcess() && !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, a2) )
          goto LABEL_158;
        if ( (v19 & 1) != 0 )
        {
LABEL_302:
          if ( (v19 & 0x400) != 0 )
            RtlReleasePrivilege(v166);
          if ( *v145 == 332 )
            *((_DWORD *)v27 + 158) |= 1u;
          v137 = v19 & 0x80;
          if ( (v19 & 0x80) != 0 )
          {
            if ( v18 )
            {
              SectionInformation = PspSetupReservedUserMappings(
                                     (_KPROCESS *)v27,
                                     (__int64)&ApcState,
                                     (_QWORD *)v18,
                                     v96);
              if ( SectionInformation < 0 )
                goto LABEL_161;
            }
          }
          LODWORD(v145) = v19 & 0x100;
          if ( (v19 & 0x100) != 0 )
          {
            *(_QWORD *)&v171 = 0LL;
            *((_QWORD *)&v171 + 1) = -1LL;
            IsProtectedProcess = PsIsProtectedProcess((__int64)v27);
            IsProtectedProcessLight = PsIsProtectedProcessLight((__int64)v27);
            v108 = BYTE3(v171) & 0x88 | ((v19 & 0x1000) != 0) | (2
                                                               * (IsProtectedProcess | (2
                                                                                      * ((16 * IsProtectedProcessLight) | ((v19 & 0x2000) != 0))))) & 0xCF | (16 * (((_DWORD)TokenInformation != 0 ? 2 : 0) | v126[0] & 1));
            BYTE3(v171) = v108;
            if ( (v19 & 4) != 0 )
            {
              v109 = v127;
              Address = *(PVOID *)(v127 + 1360);
              *((_QWORD *)v27 + 170) = Address;
              if ( (v19 & 0x10) != 0 )
              {
LABEL_330:
                if ( (v19 & 0x80) != 0 && v18 )
                {
                  PspSetupUserProcessAddressSpace(v109, (_KPROCESS *)v27, (__int64)&ApcState, v18);
                }
                else if ( (_DWORD)v145 && (v19 & 0x10) == 0 )
                {
                  KeStackAttachProcess((PRKPROCESS)v27, &ApcState);
                  KeCopyXfdMaskToPeb(v27);
                  v113 = CurrentThread;
                  PspWritePebAffinityInfo((__int64)CurrentThread, (__int64)v27, v115, v116);
                  if ( (v19 & 0x80) != 0
                    && (int)MmMapApiSetView((__int64)v27) >= 0
                    && (int)PspMapSiloSharedDataView((__int64)v27) >= 0
                    && (int)PspPrepareSystemDllInitBlock(0LL, 0LL) >= 0
                    && *((_QWORD *)v27 + 176) )
                  {
                    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)v27);
                    PspPrepareSystemDllInitBlock(ProcessNtdllType, 0LL);
                  }
                  KeUnstackDetachProcess(&ApcState);
LABEL_334:
                  PspLockProcessExclusive((__int64)v27, (__int64)v113);
                  v114 = ExCreateHandle(PspCidTable, v27);
                  *((_QWORD *)v27 + 136) = v114;
                  if ( !v114 )
                  {
                    PspUnlockProcessExclusive((__int64)v27, (__int64)v113);
                    SectionInformation = -1073741670;
                    goto LABEL_161;
                  }
                  if ( (v19 & 0x10000) != 0 )
                  {
                    SectionInformation = MmGetSectionStrongImageReference(0LL, 0LL, *((_QWORD *)v27 + 163), &v173);
                    v118 = (__int64)v27;
                    if ( SectionInformation < 0 )
                    {
LABEL_347:
                      PspUnlockProcessExclusive(v118, (__int64)v113);
                      goto LABEL_161;
                    }
                    SectionInformation = KeSecureProcess(
                                           (_KPROCESS *)v27,
                                           **(_QWORD **)(v18 + 368),
                                           *((_QWORD *)v27 + 170),
                                           *((_DWORD **)v27 + 136),
                                           v173,
                                           *((_QWORD *)v27 + 164),
                                           *(struct _MDL **)(v18 + 368),
                                           *(unsigned int *)(v18 + 384));
                    if ( SectionInformation < 0 )
                    {
                      v118 = (__int64)v27;
                      goto LABEL_347;
                    }
                  }
                  if ( KeQuerySystemTimeUnsafe() )
                  {
                    KeQuerySystemTimePrecise((_QWORD *)v27 + 141);
                  }
                  else
                  {
                    v27 = (char *)v143;
                    *((_QWORD *)v143 + 141) = MEMORY[0xFFFFF78000000014];
                  }
                  *((_QWORD *)v27 + 288) = MEMORY[0xFFFFF78000000008];
                  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
                  v120 = v143;
                  *((_QWORD *)v143 + 289) = UnbiasedInterruptTime;
                  v120[291] = *((_QWORD *)v27 + 288);
                  *v177 = v120;
                  SectionInformation = v136;
                  goto LABEL_162;
                }
                v113 = CurrentThread;
                goto LABEL_334;
              }
              LOBYTE(v171) = 1;
              KeStackAttachProcess((PRKPROCESS)v27, &ApcState);
              if ( MmSecureVirtualMemory(Address, 0x7D0uLL, 4u) )
                *(_OWORD *)Address = v171;
              else
                SectionInformation = -1073741503;
              if ( SectionInformation >= 0 )
              {
                v110 = (unsigned __int64 **)*((_QWORD *)v27 + 176);
                if ( v110 )
                {
                  v111 = *((_WORD *)v27 + 1206);
                  if ( v111 == 332 || (v112 = 0, v111 == 452) )
                    v112 = 1;
                  if ( v112 )
                  {
                    v170 = *v110;
                    if ( MmSecureVirtualMemory(v170, 0x488uLL, 4u) )
                    {
                      v160 = 0xFFFFFFFF00000001uLL;
                      BYTE3(v160) = v108;
                      *v170 = v160;
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
                goto LABEL_161;
            }
            else
            {
              SectionInformation = MmCreatePeb(v27, &v171, v27 + 1360, &v179);
              if ( SectionInformation < 0 )
              {
                *((_QWORD *)v27 + 170) = 0LL;
                goto LABEL_161;
              }
              if ( (_QWORD)v179 )
              {
                _InterlockedAnd(v148, 0xFFCFFFFF);
                v27 = (char *)v143;
                PspSetProcessAffinitySafe(v143, 1LL, 0LL);
              }
            }
          }
          v109 = v127;
          goto LABEL_330;
        }
        if ( (v19 & 4) != 0 )
        {
          v101 = v127;
          *((_QWORD *)v27 + 164) = *(_QWORD *)(v127 + 1312);
          SectionInformation = MmInitializeProcessAddressSpace((ULONG_PTR)v27, v101, 0LL, &a9, (v19 & 8) != 0);
          if ( SectionInformation >= 0 )
          {
            v102 = *(unsigned __int16 *)(*(_QWORD *)(v101 + 1472) + 2LL);
            v103 = ExAllocatePoolWithTag(NonPagedPoolNx, v102 + 16, 0x61506553u);
            *((_QWORD *)v27 + 184) = v103;
            if ( !v103 )
            {
LABEL_213:
              SectionInformation = -1073741670;
              goto LABEL_159;
            }
            v104 = v102 + 16;
            v105 = v127;
            memmove(v103, *(const void **)(v127 + 1472), v104);
            *(_QWORD *)(*((_QWORD *)v27 + 184) + 8LL) = *((_QWORD *)v27 + 184) + 16LL;
            *((_DWORD *)v27 + 330) = *(_DWORD *)(v105 + 1320);
            if ( (*(_DWORD *)(v105 + 1120) & 0x1000000) != 0 )
              *v148 |= 0x1000000u;
            if ( (a9 & 0x1000) != 0 )
            {
              *(_QWORD *)v162 = 0LL;
              ObfDereferenceObject(Object);
            }
            goto LABEL_299;
          }
        }
        else
        {
          SectionInformation = PspInitializeFullProcessImageName(v18, v27);
          if ( SectionInformation >= 0 )
          {
            v97 = Object;
            v98 = MmInitializeProcessAddressSpace((ULONG_PTR)v27, 0LL, (__int64)Object, &a9, 0);
            SectionInformation = v98;
            if ( v98 >= 0 )
            {
              v136 = v98;
              if ( v18 )
              {
                ImageSectionBasedAddress = MmGetImageSectionBasedAddress(v97);
                v100 = *((_QWORD *)v27 + 164);
                if ( ImageSectionBasedAddress != v100 )
                  *(_QWORD *)(v18 + 48) += v100 - ImageSectionBasedAddress;
              }
              v19 |= 0x80u;
LABEL_299:
              if ( (v19 & 1) == 0 )
              {
                v19 |= (a9 & 0x10) << 8;
                if ( (v19 & 2) == 0 )
                  v19 |= 0x100u;
              }
              goto LABEL_302;
            }
          }
        }
LABEL_159:
        if ( (v19 & 0x400) != 0 )
          RtlReleasePrivilege(v166);
        goto LABEL_161;
      }
      if ( (*(_DWORD *)(v127 + 1120) & 0x100000) == 0 )
      {
        v65 = (unsigned __int16 *)PspSelectNodeForProcess(v127, v62, v63, v64, *(_QWORD *)v121);
        v141 = v65;
        v142 = v65;
        v66 = KeSelectGroupFromNode((__int64)v65);
        v123[0] = v66;
        if ( KeForceGroupAwareness && KeQueryActiveGroupCount() > 1u && !v66 )
        {
          v65 = 0LL;
          v141 = 0LL;
          v142 = 0LL;
          v66 = 1;
          v123[0] = 1;
        }
        goto LABEL_171;
      }
      v132 |= 0x100000u;
      v65 = (unsigned __int16 *)KeNodeBlock[*(unsigned __int16 *)(v127 + 836)];
      v141 = v65;
      v142 = v65;
    }
    v123[0] = KeSelectGroupFromNode((__int64)v65);
    v66 = v123[0];
    goto LABEL_171;
  }
  return result;
}
