/*
 * XREFs of NtSetInformationProcess @ 0x140657B40
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     RtlInterlockedSetClearBits @ 0x1402517B0 (RtlInterlockedSetClearBits.c)
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeEnterCriticalRegionThread @ 0x14025ABE0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     KeQueryGroupMaskProcess @ 0x14025C088 (KeQueryGroupMaskProcess.c)
 *     RtlStringCbCopyA @ 0x1402640B0 (RtlStringCbCopyA.c)
 *     MmGetDefaultPagePriority @ 0x14026E790 (MmGetDefaultPagePriority.c)
 *     PsSetIoPriorityThread @ 0x140277970 (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140277C64 (PsSetPagePriorityThread.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140297040 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140298A60 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiCreateSystemWsles @ 0x140299B00 (MiCreateSystemWsles.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     IoBoostThreadIoPriority @ 0x1402D8E10 (IoBoostThreadIoPriority.c)
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1402FFEE8 (RtlInsertDynamicFunctionTable.c)
 *     RtlRemoveDynamicFunctionTable @ 0x14030479C (RtlRemoveDynamicFunctionTable.c)
 *     KeSynchronizeSecurityDomain @ 0x1403154EC (KeSynchronizeSecurityDomain.c)
 *     PspWriteProcessSecurityDomain @ 0x140315664 (PspWriteProcessSecurityDomain.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140316414 (ExCpuSetResourceManagerAccessCheck.c)
 *     PspLockUnlockProcessExclusive @ 0x14031C374 (PspLockUnlockProcessExclusive.c)
 *     PtrToUlong @ 0x140321160 (PtrToUlong.c)
 *     PspUnlockProcessExclusive @ 0x140324DF8 (PspUnlockProcessExclusive.c)
 *     KeSetExecuteOptions @ 0x1403251CC (KeSetExecuteOptions.c)
 *     KeInitializeGate @ 0x14032BE90 (KeInitializeGate.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     KeBoostPriorityThread @ 0x140353A70 (KeBoostPriorityThread.c)
 *     PspLockProcessExclusive @ 0x14035AE10 (PspLockProcessExclusive.c)
 *     KeIsUserCetAllowed @ 0x14035AE38 (KeIsUserCetAllowed.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     MmSetMemoryPriorityProcess @ 0x14035B318 (MmSetMemoryPriorityProcess.c)
 *     KeVerifyGroupAffinity @ 0x140377C24 (KeVerifyGroupAffinity.c)
 *     MmRemoveExecuteGrants @ 0x14037E690 (MmRemoveExecuteGrants.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CFD40 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MmGetMaximumUserAddress @ 0x1403F2F48 (MmGetMaximumUserAddress.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IoRevokeHandlesForProcess @ 0x140506E50 (IoRevokeHandlesForProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C878 (KeRecomputeCpuSetAffinityProcess.c)
 *     MmReleaseCommitForMemResetPages @ 0x14052CC34 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x14052CE6C (MmSetCommitReleaseEligibility.c)
 *     PspLockProcessSharedUnsafe @ 0x14058181C (PspLockProcessSharedUnsafe.c)
 *     PspUnlockProcessSharedUnsafe @ 0x140581A90 (PspUnlockProcessSharedUnsafe.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     PspProcessDynamicEnforcedAddressRanges @ 0x1405CF6F4 (PspProcessDynamicEnforcedAddressRanges.c)
 *     LpcRequestPort @ 0x1405E3D10 (LpcRequestPort.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     PspWritePebAffinityInfo @ 0x140612AB4 (PspWritePebAffinityInfo.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     PsReferencePrimaryToken @ 0x140654390 (PsReferencePrimaryToken.c)
 *     KeSetAutoAlignmentProcess @ 0x140657954 (KeSetAutoAlignmentProcess.c)
 *     PsGetNextProcessThread @ 0x140657980 (PsGetNextProcessThread.c)
 *     PspSetProcessDefaultHardErrorMode @ 0x140657A80 (PspSetProcessDefaultHardErrorMode.c)
 *     MmAllocateUserStack @ 0x140678840 (MmAllocateUserStack.c)
 *     ObDereferenceProcessHandleTable @ 0x1406809F0 (ObDereferenceProcessHandleTable.c)
 *     PspCombineSecurityDomains @ 0x140685D04 (PspCombineSecurityDomains.c)
 *     PspSetQuotaLimits @ 0x140688A74 (PspSetQuotaLimits.c)
 *     MmProcessWorkingSetControl @ 0x140689770 (MmProcessWorkingSetControl.c)
 *     ExEnableRaiseUMExceptionOnInvalidHandleClose @ 0x14068F954 (ExEnableRaiseUMExceptionOnInvalidHandleClose.c)
 *     PspSetProcessPriorityClass @ 0x140696F40 (PspSetProcessPriorityClass.c)
 *     PoSetProcessEnergyTrackingState @ 0x14069B020 (PoSetProcessEnergyTrackingState.c)
 *     ExEnableHandleExceptions @ 0x14069CB2C (ExEnableHandleExceptions.c)
 *     SeSetVirtualizationToken @ 0x1406A1878 (SeSetVirtualizationToken.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1406A2C88 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406A5360 (PspGetNoChildProcessRestrictedPolicy.c)
 *     PsIsSystemWideMitigationOptionSet @ 0x1406A53D4 (PsIsSystemWideMitigationOptionSet.c)
 *     PsQuitNextProcessThread @ 0x1406A62F0 (PsQuitNextProcessThread.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     PsSetProcessPriorityByClass @ 0x140707200 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140707230 (PspSetProcessForegroundBackgroundRequest.c)
 *     KeSetDisableBoostProcess @ 0x14073452C (KeSetDisableBoostProcess.c)
 *     EtwSetProcessTelemetryCoverage @ 0x140771878 (EtwSetProcessTelemetryCoverage.c)
 *     KeSetDisableBoostThread @ 0x14077283C (KeSetDisableBoostThread.c)
 *     PsSetProcessFaultInformation @ 0x1407729F0 (PsSetProcessFaultInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14077CD80 (PspSetProcessAffinityUpdateMode.c)
 *     SeCompareSigningLevels @ 0x14077F140 (SeCompareSigningLevels.c)
 *     SeCheckPrivilegedObject @ 0x14078DD60 (SeCheckPrivilegedObject.c)
 *     PspAssignPrimaryToken @ 0x1407BC200 (PspAssignPrimaryToken.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BADCC (KeSetCheckStackExtentsProcess.c)
 *     MmValidateUserCallTarget @ 0x1408D7EC8 (MmValidateUserCallTarget.c)
 *     ObSetProcessDeviceMap @ 0x1408DF6DC (ObSetProcessDeviceMap.c)
 *     PsIsGuiThread @ 0x1409078F4 (PsIsGuiThread.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409079C8 (PsSetProcessHandleTracingInformation.c)
 *     PspEnableAltSystemCallHandling @ 0x140907C68 (PspEnableAltSystemCallHandling.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140907D54 (PspProcessDynamicEHContinuationTargets.c)
 *     PspSetProcessAffinitySafe @ 0x140908614 (PspSetProcessAffinitySafe.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A1C4 (PspFreeUserFiberShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090A550 (PspSetupUserFiberShadowStack.c)
 *     PsIumEnableOnDemandDebugWithResponse @ 0x14090C9D4 (PsIumEnableOnDemandDebugWithResponse.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14091BED0 (SeCodeIntegritySetInformationProcess.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  size_t v4; // rdi
  __int64 v5; // rbx
  unsigned int v7; // r14d
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int8 v9; // r15
  int v10; // eax
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  _DWORD *PoolWithTag; // rax
  void *v14; // rbx
  PVOID v15; // rcx
  int v16; // ebx
  unsigned int v17; // eax
  char v18; // di
  PVOID v19; // rcx
  char v20; // al
  __int16 v21; // bx
  NTSTATUS v22; // edi
  char v23; // bl
  unsigned int v24; // edi
  _QWORD *i; // rbx
  __int64 v26; // r8
  _DWORD *v27; // r9
  unsigned int v28; // ebx
  unsigned int v29; // r12d
  int v30; // esi
  unsigned __int64 v31; // rdx
  signed __int64 *v32; // roff
  signed __int64 v33; // r15
  signed __int64 v34; // rax
  struct _DMA_ADAPTER *v35; // r15
  int v36; // eax
  NTSTATUS v37; // eax
  NTSTATUS v38; // ebx
  PVOID v39; // rcx
  unsigned __int8 v40; // bl
  __int64 v41; // r13
  __int64 v42; // rax
  __int16 v43; // r8
  int v44; // ebx
  unsigned int GroupMaskProcess; // eax
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // r8
  _DWORD *v49; // r9
  _BOOL8 v50; // rdi
  __int64 v51; // r13
  PVOID v52; // rcx
  _QWORD *j; // rbx
  HANDLE v54; // rbx
  int v55; // ebx
  int v56; // ebx
  int v57; // ecx
  unsigned int v58; // eax
  unsigned __int64 v59; // r12
  volatile signed __int32 *v60; // r8
  signed __int32 v61; // eax
  int v62; // r9d
  signed __int32 v63; // edx
  KSPIN_LOCK *v64; // rbx
  int v65; // r14d
  int v66; // ebx
  _KPROCESS *CurrentProcess; // rax
  unsigned int v68; // ebx
  unsigned int v69; // ebx
  volatile signed __int32 *v70; // r8
  signed __int32 v71; // eax
  signed __int32 v72; // edx
  _QWORD *v73; // rdi
  int v74; // ebx
  _DWORD *PoolWithQuotaTag; // r15
  __int64 v76; // r8
  unsigned int v77; // ecx
  _DWORD *v78; // rdx
  _KPROCESS *v79; // rax
  _KPROCESS *v80; // r8
  unsigned __int64 v81; // rax
  __int16 v82; // cx
  __int64 v83; // rcx
  _QWORD *v84; // rdx
  PVOID k; // rcx
  _QWORD *v86; // rbx
  __int64 v87; // rdi
  char *v88; // rbx
  char *v89; // rax
  char *v90; // r13
  __int64 v91; // rdx
  __int64 v92; // r8
  volatile void **v93; // rdi
  __int64 v94; // rdx
  const void *v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdi
  __int64 v98; // rcx
  unsigned __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rbx
  unsigned int v102; // eax
  unsigned __int64 v103; // r8
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // rax
  unsigned __int64 v108; // rbx
  _KPROCESS *v109; // rdi
  BOOLEAN v110; // al
  BOOLEAN v111; // al
  struct _EX_RUNDOWN_REF *v112; // rcx
  __int64 v113; // rax
  __int16 v114; // r8
  bool v115; // r9
  unsigned __int64 v116; // r8
  __int16 v117; // r9
  __int64 v118; // r13
  PVOID v119; // r8
  volatile signed __int32 *v120; // rcx
  __int16 v121; // r9
  __int64 v122; // rcx
  __int64 *v123; // rdx
  char *v124; // rsi
  int v125; // r9d
  int v126; // ebx
  unsigned int v127; // edi
  struct _DMA_ADAPTER *v128; // rbx
  unsigned __int64 v129; // rbx
  __int64 v130; // rdx
  __int64 v131; // r8
  unsigned __int8 *v132; // r9
  int v133; // edx
  int v134; // ecx
  unsigned __int64 v135; // rax
  unsigned int v136; // ebx
  int v137; // r12d
  int v138; // edi
  int v139; // r15d
  int v140; // ebx
  char IsGuiThread; // al
  unsigned int v142; // ebx
  int v143; // edi
  char v144; // r12
  _KPROCESS *v145; // rax
  int v146; // eax
  bool IsSandboxedToken; // si
  BOOLEAN v148; // al
  int v149; // r8d
  int v150; // edi
  int v151; // edx
  int v152; // eax
  int v153; // edx
  bool v154; // zf
  int v155; // ebx
  int v156; // edx
  int v157; // ecx
  int v158; // eax
  int v159; // eax
  int v160; // r11d
  unsigned int v161; // ebx
  int v162; // r12d
  int v163; // edi
  __int64 v164; // rcx
  int v165; // r8d
  int v166; // ecx
  int v167; // ebx
  int v168; // edx
  unsigned int v169; // ecx
  int v170; // edi
  int v171; // r10d
  int v172; // edx
  int v173; // ebx
  int v174; // r11d
  int v175; // ecx
  int v176; // eax
  int v177; // edx
  unsigned int v178; // ebx
  unsigned int NoChildProcessRestrictedPolicy; // eax
  __int64 v180; // r8
  int v181; // edx
  int v182; // eax
  int v183; // ebx
  unsigned int v184; // ebx
  int RedirectionTrustPolicy; // eax
  int v186; // ecx
  int v187; // ebx
  int v188; // edx
  int v189; // ebx
  unsigned int v190; // ecx
  int v191; // r11d
  int v192; // ebx
  int v193; // edx
  int v194; // edi
  int v195; // esi
  int v196; // r15d
  int v197; // ecx
  int v198; // ebx
  unsigned __int64 v199; // rax
  void *v200; // rdi
  int v201; // eax
  void *v202; // rcx
  unsigned __int64 v203; // rdx
  PVOID v204; // rax
  _BOOL8 v205; // rdi
  __int64 v206; // r8
  _DWORD *v207; // r9
  unsigned int v208; // edi
  char v209; // bl
  unsigned int v210; // ebx
  unsigned __int64 v211; // rax
  char v212; // bl
  int v213; // ecx
  unsigned __int64 ExtensionTable; // rbx
  int v215; // edi
  NTSTATUS v216; // ebx
  ULONG v217; // eax
  NTSTATUS v218; // ebx
  __int128 v219; // xmm1
  const char *v220; // r8
  int v221; // eax
  unsigned int v222; // ecx
  unsigned int v223; // ecx
  int v224; // ebx
  __int64 v225; // r8
  unsigned int v226; // ebx
  unsigned __int64 v227; // rax
  HANDLE v228; // rbx
  HANDLE v229; // rbx
  _KPROCESS *v230; // rax
  unsigned __int64 v231; // rdx
  __int64 v232; // rcx
  __int64 *v233; // r8
  int v234; // ebx
  int v235; // eax
  unsigned int v236; // eax
  int v237; // eax
  unsigned int v238; // eax
  NTSTATUS v239; // ebx
  _DWORD *v240; // r12
  unsigned int v241; // eax
  const void *v242; // rbx
  size_t v243; // rdi
  _KPROCESS *v244; // rax
  struct _DMA_ADAPTER *v245; // rcx
  _DWORD *Pool2; // rax
  unsigned int v247; // ecx
  const void *v248; // rbx
  size_t v249; // rdi
  _KPROCESS *v250; // rax
  _DWORD *v251; // rax
  signed __int32 v252[8]; // [rsp+0h] [rbp-548h] BYREF
  PVOID Object; // [rsp+40h] [rbp-508h] BYREF
  unsigned int v254; // [rsp+48h] [rbp-500h]
  NTSTATUS v255; // [rsp+4Ch] [rbp-4FCh]
  struct _KTHREAD *v256; // [rsp+50h] [rbp-4F8h]
  HANDLE v257; // [rsp+58h] [rbp-4F0h]
  unsigned int v258; // [rsp+60h] [rbp-4E8h]
  ULONG v259; // [rsp+68h] [rbp-4E0h]
  HANDLE Handle; // [rsp+70h] [rbp-4D8h]
  unsigned int v261; // [rsp+78h] [rbp-4D0h]
  __int16 v262; // [rsp+7Ch] [rbp-4CCh]
  ULONG Alignment; // [rsp+80h] [rbp-4C8h]
  char v264; // [rsp+84h] [rbp-4C4h]
  char v265; // [rsp+85h] [rbp-4C3h]
  char v266; // [rsp+86h] [rbp-4C2h]
  char v267; // [rsp+88h] [rbp-4C0h]
  int v268; // [rsp+8Ch] [rbp-4BCh]
  char *v269; // [rsp+90h] [rbp-4B8h]
  __int64 v270; // [rsp+98h] [rbp-4B0h]
  _DWORD v271[2]; // [rsp+A0h] [rbp-4A8h] BYREF
  __int64 v272; // [rsp+A8h] [rbp-4A0h] BYREF
  PVOID v273; // [rsp+B0h] [rbp-498h] BYREF
  PVOID v274; // [rsp+B8h] [rbp-490h] BYREF
  __int64 v275; // [rsp+C0h] [rbp-488h]
  _DWORD *v276; // [rsp+C8h] [rbp-480h]
  PVOID v277; // [rsp+D0h] [rbp-478h] BYREF
  __int64 v278; // [rsp+D8h] [rbp-470h] BYREF
  __int64 v279; // [rsp+E0h] [rbp-468h]
  __int128 v280; // [rsp+E8h] [rbp-460h]
  unsigned int v281; // [rsp+F8h] [rbp-450h]
  int v282; // [rsp+FCh] [rbp-44Ch]
  unsigned int v283; // [rsp+100h] [rbp-448h]
  int v284; // [rsp+104h] [rbp-444h] BYREF
  PVOID v285; // [rsp+108h] [rbp-440h] BYREF
  void *Src[2]; // [rsp+110h] [rbp-438h] BYREF
  volatile void *Address[2]; // [rsp+120h] [rbp-428h]
  volatile void *v288[2]; // [rsp+130h] [rbp-418h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+140h] [rbp-408h]
  PVOID v290; // [rsp+148h] [rbp-400h]
  __int64 v291; // [rsp+150h] [rbp-3F8h]
  __int64 v292; // [rsp+158h] [rbp-3F0h]
  PVOID v293; // [rsp+160h] [rbp-3E8h] BYREF
  PVOID v294; // [rsp+168h] [rbp-3E0h] BYREF
  NTSTRSAFE_PCSTR pszSrc[2]; // [rsp+170h] [rbp-3D8h] BYREF
  __int64 v296; // [rsp+180h] [rbp-3C8h]
  int v297; // [rsp+188h] [rbp-3C0h]
  int v298; // [rsp+18Ch] [rbp-3BCh]
  int v299; // [rsp+190h] [rbp-3B8h]
  int v300; // [rsp+194h] [rbp-3B4h]
  int v301; // [rsp+198h] [rbp-3B0h]
  BOOL v302; // [rsp+19Ch] [rbp-3ACh]
  int v303; // [rsp+1A0h] [rbp-3A8h]
  int v304; // [rsp+1A4h] [rbp-3A4h]
  int v305; // [rsp+1A8h] [rbp-3A0h]
  HANDLE v306; // [rsp+1B0h] [rbp-398h]
  unsigned __int64 v307; // [rsp+1B8h] [rbp-390h]
  _DWORD *v308; // [rsp+1C0h] [rbp-388h]
  int v309; // [rsp+1C8h] [rbp-380h]
  __int64 v310; // [rsp+1D0h] [rbp-378h] BYREF
  HANDLE v311; // [rsp+1D8h] [rbp-370h]
  int v312; // [rsp+1E0h] [rbp-368h]
  int v313; // [rsp+1E4h] [rbp-364h]
  int v314; // [rsp+1E8h] [rbp-360h]
  int v315; // [rsp+1ECh] [rbp-35Ch]
  int v316; // [rsp+1F0h] [rbp-358h]
  __int128 v317; // [rsp+1F8h] [rbp-350h]
  __int128 v318; // [rsp+208h] [rbp-340h] BYREF
  __int128 v319; // [rsp+218h] [rbp-330h] BYREF
  __int64 v320; // [rsp+228h] [rbp-320h]
  __m256i v321; // [rsp+230h] [rbp-318h]
  _DWORD v322[2]; // [rsp+250h] [rbp-2F8h] BYREF
  __int128 v323; // [rsp+258h] [rbp-2F0h]
  __int128 v324; // [rsp+268h] [rbp-2E0h]
  __int64 v325; // [rsp+278h] [rbp-2D0h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+2A0h] [rbp-2A8h] BYREF
  HANDLE v327; // [rsp+2C0h] [rbp-288h]
  unsigned __int64 v328; // [rsp+2D0h] [rbp-278h]
  HANDLE v329; // [rsp+2D8h] [rbp-270h]
  HANDLE v330; // [rsp+2E0h] [rbp-268h]
  void **v331; // [rsp+2E8h] [rbp-260h]
  HANDLE v332; // [rsp+2F0h] [rbp-258h] BYREF
  int v333; // [rsp+2F8h] [rbp-250h]
  __int128 v334; // [rsp+300h] [rbp-248h] BYREF
  __int128 v335; // [rsp+310h] [rbp-238h]
  struct _KAPC_STATE ApcState; // [rsp+320h] [rbp-228h] BYREF
  _OWORD P[2]; // [rsp+350h] [rbp-1F8h] BYREF
  __int64 v338; // [rsp+370h] [rbp-1D8h]
  _OWORD v339[9]; // [rsp+380h] [rbp-1C8h] BYREF
  char v340[160]; // [rsp+410h] [rbp-138h] BYREF
  char pszDest[16]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v342; // [rsp+4C0h] [rbp-88h]
  __int128 v343; // [rsp+4D0h] [rbp-78h]
  __int128 v344; // [rsp+4E0h] [rbp-68h]
  char v345; // [rsp+4F0h] [rbp-58h]

  v4 = ProcessInformationLength;
  v5 = (__int64)ProcessInformation;
  Alignment = ProcessInformationClass;
  v279 = (__int64)ProcessInformation;
  v259 = ProcessInformationLength;
  v7 = 0;
  Object = 0LL;
  v334 = 0LL;
  v258 = 0;
  v262 = 0;
  v311 = 0LL;
  v285 = 0LL;
  v307 = 0LL;
  v271[0] = 0;
  v335 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v256 = CurrentThread;
  v9 = CurrentThread->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  if ( v9 )
  {
    switch ( ProcessInformationClass )
    {
      case ProcessBasePriority:
        v10 = 4;
        break;
      case ProcessEnableAlignmentFaultFixup:
        v10 = 1;
        break;
      case ProcessForegroundInformation:
        v10 = 1;
        break;
      case ProcessPriorityClass:
        v10 = 1;
        break;
      case ProcessAffinityMask:
        v10 = 8;
        break;
      case ProcessIoPriority:
        v10 = 4;
        break;
      case ProcessPagePriority:
        v10 = 4;
        break;
      case ProcessTlsInformation:
        v10 = 8;
        break;
      case ProcessExceptionPort:
        v10 = 8;
        break;
      case ProcessInstrumentationCallback:
        v10 = 8;
        break;
      case ProcessThreadStackAllocation:
        v10 = 8;
        break;
      case ProcessFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessFreeFiberShadowStackAllocation:
        v10 = 8;
        break;
      case ProcessAffinityUpdateMode:
        v10 = 4;
        break;
      case ProcessMemoryAllocationMode:
        v10 = 4;
        break;
      case ProcessConsoleHostProcess:
        v10 = 8;
        break;
      case ProcessDynamicFunctionTableInformation:
        v10 = 8;
        break;
      case ProcessRevokeFileHandles:
        v10 = 8;
        break;
      case ProcessMemoryExhaustion:
        v10 = 8;
        break;
      case ProcessCommitReleaseInformation:
        v10 = 8;
        break;
      case ProcessInPrivate:
        v10 = 1;
        break;
      case ProcessHighGraphicsPriorityInformation:
        v10 = 1;
        break;
      case ProcessManageWritesToExecutableMemory:
        v10 = 8;
        break;
      case ProcessDebugAuthInformation:
        v10 = 1;
        break;
      case ProcessSystemResourceManagement:
        v10 = 4;
        break;
      case ProcessLoaderDetour:
        v10 = 4;
        break;
      case ProcessCombineSecurityDomainsInformation:
        v10 = 8;
        break;
      case ProcessEnableReadWriteVmLogging:
        v10 = 1;
        break;
      case ProcessAltSystemCallInformation:
        v10 = 1;
        break;
      case ProcessDynamicEHContinuationTargets:
        v10 = 8;
        break;
      default:
        v10 = 4;
        if ( ProcessInformationClass == ProcessDynamicEnforcedCetCompatibleRanges )
          v10 = 8;
        break;
    }
    if ( ProcessInformationLength )
    {
      if ( ((v10 - 1) & (unsigned int)ProcessInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ProcessInformation + ProcessInformationLength > 0x7FFFFFFF0000LL
        || (char *)ProcessInformation + ProcessInformationLength < ProcessInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
      CurrentThread = v256;
    }
  }
  switch ( ProcessInformationClass )
  {
    case ProcessQuotaLimits:
      return PspSetQuotaLimits(ProcessHandle);
    case ProcessBasePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v16 = *(_DWORD *)ProcessInformation;
      v312 = v16;
      v17 = v16 & 0x80000000;
      if ( v16 < 0 )
        v16 &= ~0x80000000;
      v18 = v17 != 0 ? 2 : 0;
      if ( (unsigned int)(v16 - 1) > 0x1E )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( v16 > *((char *)Object + 640) )
      {
        v20 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                SeIncreaseBasePriorityPrivilege,
                ProcessHandle,
                512LL,
                v9);
        v19 = Object;
        if ( !v20 )
          goto LABEL_97;
      }
      KeSetPriorityAndQuantumProcess((__int64)v19, v16, 0, 0, 0);
      MmSetMemoryPriorityProcess((__int64)Object, v18);
      goto LABEL_88;
    case ProcessRaisePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v24 = *(_DWORD *)ProcessInformation;
      v313 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      for ( i = PsGetNextProcessThread((__int64)Object, 0LL); i; i = PsGetNextProcessThread((__int64)Object, i) )
        KeBoostPriorityThread((__int64)i, v24, v26, v27);
      goto LABEL_114;
    case ProcessExceptionPort:
      if ( ProcessInformationLength == 8 )
      {
        v29 = 0;
        v281 = 0;
        Handle = *(HANDLE *)ProcessInformation;
        v306 = Handle;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        Handle = *(HANDLE *)ProcessInformation;
        v306 = Handle;
        v281 = *((_DWORD *)ProcessInformation + 2);
        v29 = v281;
        if ( (v281 & 0xFFFFFFF8) != 0 )
          return -1073741811;
      }
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v277 = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0, LpcPortObjectType, v9, &v277, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)v277;
      if ( result < 0 )
        return result;
      v30 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x800u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v30 < 0 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v277);
        return v30;
      }
      v31 = (unsigned __int64)v277 | v29;
      v276 = (_DWORD *)v31;
      v32 = (signed __int64 *)((char *)Object + 1200);
      _m_prefetchw((char *)Object + 1200);
      v33 = *v32;
      do
      {
        Handle = (HANDLE)v33;
        if ( (_DWORD)v4 == 16 )
        {
          *(_DWORD *)(v5 + 8) = v33 & 7;
        }
        else if ( (v33 & 7) != 0 )
        {
          HalPutDmaAdapter(DmaAdapter);
          goto LABEL_133;
        }
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)Object + 150, v31, v33);
        v154 = v33 == v34;
        v33 = v34;
      }
      while ( !v154 );
      if ( v34 )
      {
        v323 = 0LL;
        v324 = 0LL;
        v35 = (struct _DMA_ADAPTER *)(v34 & 0xFFFFFFFFFFFFFFF8uLL);
        v322[0] = 3145736;
        v322[1] = 13;
        v325 = *((_QWORD *)Object + 136);
        while ( 1 )
        {
          v36 = LpcRequestPort((__int64)v35, (__int64)v322);
          if ( v36 != -1073741801 && v36 != -1073741670 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&PspShortTime);
        }
        PspLockUnlockProcessExclusive((__int64)Object, (__int64)v256);
        HalPutDmaAdapter(v35);
      }
      goto LABEL_141;
    case ProcessAccessToken:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v329 = *(HANDLE *)ProcessInformation;
      return PspAssignPrimaryToken(CurrentThread, v9, ProcessHandle);
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_145;
      return result;
    case ProcessLdtSize:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
        goto LABEL_145;
      return result;
    case ProcessDefaultHardErrorMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v28 = *(_DWORD *)ProcessInformation;
      v314 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      PspSetProcessDefaultHardErrorMode((__int64)Object, (__int64)v256, v28);
      goto LABEL_88;
    case ProcessIoPortHandlers:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
LABEL_145:
      v37 = xKdEnumerateDebuggingDevices();
      goto LABEL_146;
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v12 = PsChargeProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 0x6028uLL);
      if ( v12 < 0 )
        goto LABEL_79;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6028uLL, 0x73577350u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741801;
LABEL_78:
        PsReturnProcessNonPagedPoolQuota((struct _KPROCESS *)Object, 24616LL);
        goto LABEL_79;
      }
      PsWatchEnabled = 1;
      *PoolWithTag = 0;
      *((_QWORD *)PoolWithTag + 1) = 0LL;
      KeInitializeGate((__int64)(PoolWithTag + 4));
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)Object + 166, (signed __int64)v14, 0LL) )
      {
        ExFreePoolWithTag(v14, 0);
        v12 = -1073741752;
        goto LABEL_78;
      }
LABEL_141:
      v12 = 0;
      goto LABEL_79;
    case ProcessUserModeIOPL:
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return -1073741822;
    case ProcessEnableAlignmentFaultFixup:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v40 = *(_BYTE *)ProcessInformation;
      v264 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v41 = (__int64)v256;
      PspLockProcessExclusive((__int64)Object, (__int64)v256);
      if ( v40 )
        *((_DWORD *)Object + 382) |= 4u;
      else
        *((_DWORD *)Object + 382) &= ~4u;
      v42 = *((_QWORD *)Object + 176);
      if ( v42 )
      {
        v43 = *(_WORD *)(v42 + 8);
        if ( v43 == 332 || v43 == 452 )
          v40 = 1;
      }
      KeSetAutoAlignmentProcess((__int64)Object, v40);
      PspUnlockProcessExclusive((__int64)Object, v41);
      goto LABEL_88;
    case ProcessPriorityClass:
      if ( ProcessInformationLength != 2 )
        return -1073741820;
      v21 = *(_WORD *)ProcessInformation;
      v262 = *(_WORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v22 = PspSetProcessPriorityClass(Object, HIBYTE(v262), ProcessHandle, v9);
      if ( v22 >= 0 )
      {
        LOBYTE(v7) = (_BYTE)v21 != 0;
        PsSetProcessPriorityByClass(Object, v7);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v22;
    case ProcessWx86Information:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v44 = *(_DWORD *)ProcessInformation;
      v309 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x200u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 < 0 )
        return v12;
      if ( *((_QWORD *)Object + 280) )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
      if ( v44 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x1000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFEFFFFFF);
      goto LABEL_79;
    case ProcessAffinityMask:
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v334 = *(_QWORD *)ProcessInformation;
        if ( !(_QWORD)v334 )
          return -1073741811;
      }
      else
      {
        if ( ProcessInformationLength != 16 )
          return -1073741820;
        v334 = *(_OWORD *)ProcessInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v334, 0) )
          return -1073741811;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
        {
          if ( (_DWORD)v4 != 8 )
            goto LABEL_186;
          _BitScanForward(&GroupMaskProcess, GroupMaskProcess);
          v258 = GroupMaskProcess;
          v46 = v334 & qword_140CFC848[GroupMaskProcess];
          if ( v46 == (_QWORD)v334 )
          {
            WORD4(v334) = v258;
            *(_QWORD *)&v334 = v46;
LABEL_186:
            v47 = (__int64)v256;
            KeEnterCriticalRegionThread((__int64)v256);
            if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
            {
              PspLockProcessSharedUnsafe((__int64)Object);
              v12 = PspSetProcessAffinitySafe((_DWORD)Object, 0, 0, (unsigned int)&v334, (__int64)v271);
              PspUnlockProcessSharedUnsafe((__int64)Object);
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              if ( v12 >= 0 )
              {
                if ( v271[0] )
                  PspWritePebAffinityInfo(v47, (__int64)Object, v48, v49);
                _InterlockedOr((volatile signed __int32 *)Object + 280, 0x200000u);
                KeLeaveCriticalRegionThread(v47);
                goto LABEL_79;
              }
            }
            else
            {
              v12 = -1073741558;
            }
            KeLeaveCriticalRegionThread(v47);
LABEL_79:
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            return v12;
          }
        }
LABEL_133:
        v12 = -1073741811;
        goto LABEL_79;
      }
      return result;
    case ProcessPriorityBoost:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v315 = *(_DWORD *)ProcessInformation;
      v50 = v315 != 0;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v51 = (__int64)v256;
      PspLockProcessExclusive((__int64)Object, (__int64)v256);
      KeSetDisableBoostProcess(Object, v50);
      v52 = Object;
      for ( j = (_QWORD *)*((_QWORD *)Object + 188); j != (_QWORD *)((char *)Object + 1504); v52 = Object )
      {
        KeSetDisableBoostThread(j - 157, v50);
        j = (_QWORD *)*j;
      }
      goto LABEL_266;
    case ProcessDeviceMap:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v54 = *(HANDLE *)ProcessInformation;
      v327 = *(HANDLE *)ProcessInformation;
      if ( RtlIsSandboxedToken(0LL, v9) )
        return -1073741790;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = ObSetProcessDeviceMap(Object, v54, v9);
      goto LABEL_146;
    case ProcessSessionInformation:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v55 = *(_DWORD *)ProcessInformation;
      v316 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x204u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v55 != (unsigned int)MmGetSessionId((__int64)Object) )
        v7 = -1073741790;
      goto LABEL_214;
    case ProcessForegroundInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v23 = *(_BYTE *)ProcessInformation;
      v267 = *(_BYTE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v7) = v23 != 0;
      PsSetProcessPriorityByClass(Object, v7);
      goto LABEL_88;
    case ProcessBreakOnTermination:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v56 = *(_DWORD *)ProcessInformation;
      v297 = *(_DWORD *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v56 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x2000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFDFFF);
      goto LABEL_88;
    case ProcessDebugFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      v282 = *(_DWORD *)v5;
      if ( (v282 & 0xFFFFFFFE) != 0 )
        goto LABEL_133;
      if ( (v282 & 1) != 0 )
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFFFD);
      else
        _InterlockedOr((volatile signed __int32 *)Object + 281, 2u);
      goto LABEL_79;
    case ProcessHandleTracing:
      v278 = 0LL;
      if ( !ProcessInformationLength )
        goto LABEL_229;
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      v57 = *(_DWORD *)ProcessInformation;
      LODWORD(v278) = *(_DWORD *)ProcessInformation;
      if ( ProcessInformationLength == 8 )
        HIDWORD(v278) = *((_DWORD *)ProcessInformation + 1);
      else
        HIDWORD(v278) = 0;
      if ( v57 )
        return -1073741811;
LABEL_229:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 )
        v37 = PsSetProcessHandleTracingInformation(Object, &v278);
      else
        v37 = PsSetProcessHandleTracingInformation(Object, 0LL);
      goto LABEL_146;
    case ProcessIoPriority:
      if ( ((ProcessInformationLength - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 4 )
      {
        v58 = *(_DWORD *)ProcessInformation;
        v268 = *(_DWORD *)ProcessInformation;
        LOBYTE(v59) = 0;
      }
      else
      {
        v307 = *(_QWORD *)ProcessInformation;
        v58 = v307;
        v59 = HIDWORD(v307);
        v268 = v307;
      }
      if ( v58 >= 4 )
        return -1073741811;
      if ( v58 >= 3
        && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                               SeIncreaseBasePriorityPrivilege,
                               ProcessHandle,
                               512LL,
                               v9) )
      {
        return -1073741727;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        v51 = (__int64)v256;
        PspLockProcessExclusive((__int64)Object, (__int64)v256);
        v60 = (volatile signed __int32 *)Object;
        v61 = *((_DWORD *)Object + 281);
        v62 = v268 << 27;
        do
        {
          v63 = v61;
          v61 = _InterlockedCompareExchange(v60 + 281, v62 | v61 & 0xC7FFFFFF, v61);
        }
        while ( v61 != v63 );
        v52 = Object;
        v64 = (KSPIN_LOCK *)*((_QWORD *)Object + 188);
        if ( v64 != (KSPIN_LOCK *)((char *)Object + 1504) )
        {
          v65 = v268;
          do
          {
            if ( (_BYTE)v59 == 1 && ((*((_DWORD *)v64 + 10) >> 9) & 7) < v65 )
              IoBoostThreadIoPriority(v64 - 157, v65, 0);
            PsSetIoPriorityThread((__int64)(v64 - 157), v65);
            v64 = (KSPIN_LOCK *)*v64;
            v52 = Object;
          }
          while ( v64 != (KSPIN_LOCK *)((char *)Object + 1504) );
        }
LABEL_266:
        PspUnlockProcessExclusive((__int64)v52, v51);
LABEL_114:
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
LABEL_115:
        v12 = -1073741558;
      }
      goto LABEL_79;
    case ProcessExecuteFlags:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v66 = *(_DWORD *)ProcessInformation;
      v298 = v66;
      CurrentProcess = PsGetCurrentProcess();
      v22 = KeSetExecuteOptions((__int64)CurrentProcess, v66);
      if ( v22 < 0 || (v66 & 3) != 1 )
        return v22;
      MmRemoveExecuteGrants();
      return v22;
    case ProcessTlsInformation:
      memset(P, 0, sizeof(P));
      v338 = 0LL;
      v254 = 0;
      v269 = 0LL;
      v275 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength < 0x28 || (ProcessInformationLength - 16) % 0x18uLL )
        return -1073741820;
      if ( ProcessInformationLength == 40 )
      {
        PoolWithQuotaTag = P;
        v256 = (struct _KTHREAD *)P;
      }
      else
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, ProcessInformationLength, 0x736C5450u);
        v256 = (struct _KTHREAD *)PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return -1073741670;
      }
      v308 = PoolWithQuotaTag;
      v276 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, (const void *)v5, v4);
      if ( PoolWithQuotaTag[1] < 2u
        && (*PoolWithQuotaTag & 0xFFFFFFFE) == 0
        && (v76 = (unsigned int)PoolWithQuotaTag[2], (_DWORD)v76)
        && (unsigned int)(v4 - 16) / 0x18uLL == v76 )
      {
        v77 = 0;
        v254 = 0;
        v78 = PoolWithQuotaTag + 4;
        do
        {
          if ( *v78 )
            goto LABEL_325;
          v254 = ++v77;
          v78 += 6;
        }
        while ( v77 < (unsigned int)v76 );
        v79 = PsGetCurrentProcess();
        v80 = v79;
        Object = v79;
        v259 = 0;
        if ( (*PoolWithQuotaTag & 1) != 0 )
        {
          v81 = v79[1].AffinityPadding[10];
          if ( !v81 || (v82 = *(_WORD *)(v81 + 8), v82 != 332) && v82 != 452 )
          {
LABEL_325:
            v12 = -1073741811;
            goto LABEL_327;
          }
          v259 = 1;
        }
        v83 = v259 ^ 1;
        Alignment = 4 * v83 + 4;
        v279 = 4 * v83 + 4;
        v270 = v5;
        v254 = 0;
        v12 = 0;
        v255 = 0;
        v84 = 0LL;
        for ( k = v80; ; k = Object )
        {
          Handle = PsGetNextProcessThread((__int64)k, v84);
          v86 = Handle;
          if ( !Handle || v254 >= PoolWithQuotaTag[2] )
            break;
          if ( (*((_DWORD *)Handle + 29) & 0x400) == 0 && ExAcquireRundownProtection((PEX_RUNDOWN_REF)Handle + 159) )
          {
            v87 = v86[30];
            v291 = v87;
            if ( v259 )
            {
              v88 = (char *)(v87 + 8236);
              v275 = v87 + 8236;
              LODWORD(v89) = PtrToUlong((const void *)*(unsigned int *)(v87 + 8236));
              v90 = v89;
              v269 = v89;
            }
            else
            {
              v88 = (char *)(v87 + 88);
              v275 = v87 + 88;
              v90 = *(char **)(v87 + 88);
              v269 = v90;
            }
            if ( v90 )
            {
              if ( PoolWithQuotaTag[1] == 1 )
              {
                if ( v90 == v88 )
                {
                  v269 = 0LL;
                }
                else
                {
                  v91 = (unsigned int)PoolWithQuotaTag[3];
                  v92 = v279 * v91;
                  if ( v279 * v91 )
                  {
                    if ( ((Alignment - 1) & (unsigned int)v90) != 0 )
                      ExRaiseDatatypeMisalignment();
                    if ( (unsigned __int64)&v90[v92] > 0x7FFFFFFF0000LL || &v90[v92] < v90 )
                    {
                      MEMORY[0x7FFFFFFF0000] = 0;
                      v91 = (unsigned int)v308[3];
                    }
                  }
                  v93 = (volatile void **)&PoolWithQuotaTag[6 * v254 + 6];
                  ProbeForWrite(*v93, v279 * v91, Alignment);
                  memmove((void *)*v93, v90, v279 * (unsigned int)PoolWithQuotaTag[3]);
                  _InterlockedOr(v252, 0);
                  v87 = v291;
                }
                v94 = v254;
                *(_DWORD *)(v270 + 24LL * v254 + 16) |= 1u;
                v95 = *(const void **)&v276[6 * v94 + 6];
                if ( v259 )
                  *(_DWORD *)(v87 + 8236) = PtrToUlong(v95);
                else
                  *(_QWORD *)(v87 + 88) = v95;
                v96 = v270 + 24LL * v254;
                *(_QWORD *)(v96 + 32) = *((_QWORD *)Handle + 144);
                *(_QWORD *)(v96 + 24) = v269;
                *(_DWORD *)(v96 + 16) ^= 3u;
                ++v254;
              }
              else
              {
                v97 = 6LL * v254;
                *(_DWORD *)(v97 * 4 + v270 + 16) |= 1u;
                v98 = (unsigned int)v276[3];
                if ( v259 )
                {
                  v99 = (unsigned __int64)&v90[4 * v98];
                  if ( v99 >= 0x7FFFFFFF0000LL )
                    v99 = 0x7FFFFFFF0000LL;
                  LODWORD(v100) = PtrToUlong((const void *)*(unsigned int *)v99);
                  v101 = v100;
                  v275 = v100;
                  v102 = PtrToUlong(*(const void **)&PoolWithQuotaTag[v97 + 6]);
                  v103 = (unsigned __int64)&v269[4 * PoolWithQuotaTag[3]];
                  if ( v103 >= 0x7FFFFFFF0000LL )
                    v103 = 0x7FFFFFFF0000LL;
                  *(_DWORD *)v103 = v102;
                }
                else
                {
                  v104 = (unsigned __int64)&v90[8 * v98];
                  if ( v104 >= 0x7FFFFFFF0000LL )
                    v104 = 0x7FFFFFFF0000LL;
                  v101 = *(_QWORD *)v104;
                  v275 = *(_QWORD *)v104;
                  v105 = (unsigned __int64)&v269[8 * PoolWithQuotaTag[3]];
                  if ( v105 >= 0x7FFFFFFF0000LL )
                    v105 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v105 = *(_QWORD *)&PoolWithQuotaTag[v97 + 6];
                }
                v106 = 3LL * v254;
                v107 = v270;
                *(_QWORD *)(v270 + 8 * v106 + 24) = v101;
                *(_DWORD *)(v107 + 8 * v106 + 16) ^= 3u;
                ++v254;
              }
            }
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Handle + 159);
          }
          v84 = Handle;
        }
        if ( Handle )
          PsQuitNextProcessThread(Handle);
      }
      else
      {
        v12 = -1073741820;
      }
LABEL_327:
      if ( PoolWithQuotaTag == (_DWORD *)P )
        return v12;
      ExFreePoolWithTag(PoolWithQuotaTag, 0);
      return v12;
    case ProcessPagePriority:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v68 = *(_DWORD *)ProcessInformation;
      v283 = v68;
      if ( v68 > (unsigned int)MmGetDefaultPagePriority() || v68 < (unsigned int)MiCreateSystemWsles() )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        goto LABEL_115;
      v51 = (__int64)v256;
      PspLockProcessExclusive((__int64)Object, (__int64)v256);
      v69 = v68 << 12;
      v70 = (volatile signed __int32 *)Object;
      v71 = *((_DWORD *)Object + 280);
      do
      {
        v72 = v71;
        v71 = _InterlockedCompareExchange(v70 + 280, v69 | v71 & 0xFFFF8FFF, v71);
      }
      while ( v71 != v72 );
      v52 = Object;
      v73 = (_QWORD *)*((_QWORD *)Object + 188);
      if ( v73 != (_QWORD *)((char *)Object + 1504) )
      {
        v74 = v283;
        do
        {
          PsSetPagePriorityThread((__int64)(v73 - 157), v74);
          v73 = (_QWORD *)*v73;
          v52 = Object;
        }
        while ( v73 != (_QWORD *)((char *)Object + 1504) );
      }
      goto LABEL_266;
    case ProcessInstrumentationCallback:
      memset(&ApcState, 0, sizeof(ApcState));
      if ( ((ProcessInformationLength - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      if ( ProcessInformationLength == 8 )
      {
        *(_QWORD *)&v280 = 0LL;
        v108 = *(_QWORD *)ProcessInformation;
        *((_QWORD *)&v280 + 1) = *(_QWORD *)ProcessInformation;
      }
      else
      {
        v280 = *(_OWORD *)ProcessInformation;
        v108 = *((_QWORD *)&v280 + 1);
      }
      if ( DWORD1(v280) )
        return -1073741811;
      if ( (_DWORD)v280 != DWORD1(v280) )
        return -1073741736;
      if ( v108 != (__int64)(v108 << 16) >> 16 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v109 = PsGetCurrentProcess();
      v110 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
      v19 = Object;
      if ( v110 || Object == v109 )
      {
        v111 = ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139);
        v112 = (struct _EX_RUNDOWN_REF *)Object;
        if ( !v111 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741558;
        }
        v113 = *((_QWORD *)Object + 176);
        v115 = 0;
        if ( v113 )
        {
          v114 = *(_WORD *)(v113 + 8);
          if ( v114 == 332 || v114 == 452 )
            v115 = 1;
        }
        v116 = v109[1].AffinityPadding[10];
        if ( v115 )
        {
          if ( v116 )
          {
            v121 = *(_WORD *)(v116 + 8);
            if ( v121 == 332 || v121 == 452 )
            {
              KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
              if ( v108 < MmGetMaximumUserAddress() && (unsigned int)MmValidateUserCallTarget(v108, 1LL) )
              {
                v122 = 0LL;
                v123 = (__int64 *)*((_QWORD *)Object + 176);
                if ( v123 )
                  v122 = *v123;
                *(_DWORD *)(v122 + 1160) = DWORD2(v280);
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
              else
              {
                v7 = -1073741811;
                KeUnstackDetachProcess(&ApcState);
                ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
              }
LABEL_214:
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return v7;
            }
          }
        }
        else if ( !v116 || (v117 = *(_WORD *)(v116 + 8), v117 != 332) && v117 != 452 )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          if ( !(unsigned int)MmValidateUserCallTarget(v108, 0LL) )
            v7 = -1073741811;
          KeUnstackDetachProcess(&ApcState);
          v112 = (struct _EX_RUNDOWN_REF *)Object;
          if ( (v7 & 0x80000000) == 0 )
          {
            v118 = (__int64)v256;
            PspLockProcessExclusive((__int64)Object, (__int64)v256);
            *((_QWORD *)Object + 123) = v108;
            v119 = Object;
            v120 = (volatile signed __int32 *)*((_QWORD *)Object + 188);
            if ( v120 != (volatile signed __int32 *)((char *)Object + 1504) )
            {
              while ( 1 )
              {
                if ( v108 )
                  _interlockedbittestandset(v120 - 314, 0x19u);
                else
                  _interlockedbittestandreset(v120 - 314, 0x19u);
                v120 = *(volatile signed __int32 **)v120;
                v119 = Object;
                if ( v120 == (volatile signed __int32 *)((char *)Object + 1504) )
                  break;
                v108 = *((_QWORD *)&v280 + 1);
              }
            }
            PspUnlockProcessExclusive((__int64)v119, v118);
            ExReleaseRundownProtection((PEX_RUNDOWN_REF)Object + 139);
            goto LABEL_214;
          }
LABEL_371:
          ExReleaseRundownProtection(v112 + 139);
          goto LABEL_214;
        }
        v7 = -1073741637;
        goto LABEL_371;
      }
LABEL_97:
      ObfDereferenceObjectWithTag(v19, 0x79517350u);
      return -1073741727;
    case ProcessThreadStackAllocation:
      v318 = 0LL;
      v319 = 0LL;
      v320 = 0LL;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v124 = 0LL;
      if ( ProcessInformationLength == 40 )
      {
        if ( v9 )
        {
          v318 = *(_OWORD *)ProcessInformation;
          v319 = *((_OWORD *)ProcessInformation + 1);
          v320 = *((_QWORD *)ProcessInformation + 4);
          v124 = (char *)ProcessInformation + 32;
          v5 = (__int64)&v318;
        }
        v125 = *(_DWORD *)v5;
        if ( *(_DWORD *)v5 > 0x40u || *(_DWORD *)(v5 + 4) | *(_DWORD *)(v5 + 8) | *(_DWORD *)(v5 + 12) )
          return -1073741811;
        v5 += 16LL;
      }
      else
      {
        if ( ProcessInformationLength != 24 )
          return -1073741820;
        v125 = 0;
        if ( v9 )
        {
          v319 = *(_OWORD *)ProcessInformation;
          v124 = (char *)ProcessInformation + 16;
          v5 = (__int64)&v319;
        }
      }
      if ( !*(_QWORD *)v5 )
        return -1073741811;
      v310 = *(_QWORD *)v5;
      *(_QWORD *)(v5 + 16) = 0LL;
      result = MmAllocateUserStack((int)v5 + 16, *(_QWORD *)(v5 + 8), (unsigned int)&v310, v125, 0);
      if ( result >= 0 && v9 )
        *(_QWORD *)v124 = *(_QWORD *)(v5 + 16);
      return result;
    case ProcessAffinityUpdateMode:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v284 = *(_DWORD *)ProcessInformation;
      if ( (v284 & 0xFFFFFFFC) != 0 )
        return -1073741811;
      return PspSetProcessAffinityUpdateMode(CurrentThread, &v284);
    case ProcessMemoryAllocationMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v126 = *(_DWORD *)ProcessInformation;
      v299 = v126;
      if ( (v126 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (v126 & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x200000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFDFFFFF);
      goto LABEL_88;
    case ProcessTokenVirtualizationEnabled:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v127 = *(_DWORD *)ProcessInformation;
      v300 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v128 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken((PEPROCESS)Object);
      SeSetVirtualizationToken(v128, v127);
      HalPutDmaAdapter(v128);
      goto LABEL_88;
    case ProcessConsoleHostProcess:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v129 = *(_QWORD *)ProcessInformation;
      v328 = v129;
      if ( (v129 & 3) != 1 )
        return -1073741811;
      PsGetCurrentProcess()[1].AffinityPadding[3] = v129;
      return 0;
    case ProcessMitigationPolicy:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v257 = *(HANDLE *)ProcessInformation;
      if ( ProcessHandle != (HANDLE)-1LL && (_DWORD)v257 != 2 )
        return -1073741811;
      break;
    case ProcessDynamicFunctionTableInformation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v317 = *(_OWORD *)ProcessInformation;
      if ( BYTE8(v317) )
        return RtlRemoveDynamicFunctionTable(v317);
      else
        return RtlInsertDynamicFunctionTable(v317);
    case ProcessHandleCheckingMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v198 = *(_DWORD *)ProcessInformation;
      v301 = v198;
      if ( (v198 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v199 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v199 )
      {
        ExEnableHandleExceptions(v199, v198 & 1);
        ObDereferenceProcessHandleTable(Object);
      }
      else
      {
LABEL_791:
        v7 = -1073741558;
      }
      goto LABEL_214;
    case ProcessRevokeFileHandles:
      *(_OWORD *)Src = 0LL;
      v200 = 0LL;
      v290 = 0LL;
      if ( v9 != 1 )
        goto LABEL_804;
      if ( (unsigned __int64)ProcessInformation >= 0x7FFFFFFF0000LL )
        v5 = 0x7FFFFFFF0000LL;
      v201 = *(_DWORD *)v5;
      LODWORD(Src[0]) = v201;
      v202 = *(void **)(v5 + 8);
      Src[1] = v202;
      if ( !(_WORD)v201 )
        return -1073741811;
      if ( ((unsigned __int8)v202 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v203 = (unsigned __int64)v202 + (unsigned __int16)v201;
      if ( v203 > 0x7FFFFFFF0000LL || v203 < (unsigned __int64)v202 )
        MEMORY[0x7FFFFFFF0000] = 0;
      v204 = ExAllocatePoolWithTag(NonPagedPoolNx, LOWORD(Src[0]), 0x6E497350u);
      v200 = v204;
      v290 = v204;
      if ( !v204 )
        return -1073741670;
      memmove(v204, Src[1], LOWORD(Src[0]));
      Src[1] = v200;
      v5 = (__int64)Src;
      v331 = Src;
LABEL_804:
      v12 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x2000u,
              (POBJECT_TYPE)PsProcessType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      if ( v12 >= 0 )
      {
        v38 = IoRevokeHandlesForProcess(v5, Object);
        if ( v200 )
          ExFreePoolWithTag(v200, 0);
        goto LABEL_147;
      }
      if ( !v200 )
        return v12;
      ExFreePoolWithTag(v200, 0);
      return v12;
    case ProcessWorkingSetControl:
      return MmProcessWorkingSetControl((ULONG_PTR)ProcessHandle);
    case ProcessCheckStackExtentsMode:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v205 = *(_DWORD *)v5 != 0;
      v302 = *(_DWORD *)v5 != 0;
      if ( PsGetCurrentProcess() == Object )
      {
        v12 = -1073741790;
      }
      else if ( SeSinglePrivilegeCheck(SeDebugPrivilege, v9) )
      {
        v12 = 0;
        KeSetCheckStackExtentsProcess(Object, v205);
        if ( !v205 && (*((_DWORD *)Object + 280) & 0x20000) != 0 )
          _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFFFDFFFF);
      }
      else
      {
        v12 = -1073741727;
      }
      goto LABEL_79;
    case ProcessMemoryExhaustion:
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      v335 = *(_OWORD *)ProcessInformation;
      if ( (_WORD)v335 != 1 || DWORD1(v335) )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((_QWORD *)&v335 + 1) )
        _InterlockedOr((volatile signed __int32 *)Object + 281, 0x100u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 281, 0xFFFFFEFF);
      goto LABEL_88;
    case ProcessFaultInformation:
      v292 = 0LL;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v292 = *(_QWORD *)v5;
      v37 = PsSetProcessFaultInformation((ULONG_PTR)Object);
      goto LABEL_146;
    case ProcessCommitReleaseInformation:
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2001u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v321 = *(__m256i *)v5;
      if ( v321.m256i_i32[0] != 3 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741735;
      }
      if ( (v321.m256i_i32[1] & 0xFFFFFFF8) != 0
        || *(_OWORD *)&v321.m256i_u64[1] != 0LL
        || ((((unsigned __int32)v321.m256i_i32[1] >> 1) & 1) != 0 || (v321.m256i_i8[4] & 4) != 0)
        && (v321.m256i_i8[4] & 1) == 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( (((unsigned __int32)v321.m256i_i32[1] >> 1) & 1) != 0 || (v321.m256i_i8[4] & 4) != 0 )
        v37 = MmReleaseCommitForMemResetPages(
                (volatile signed __int32 *)Object,
                ((unsigned __int32)v321.m256i_i32[1] >> 2) & 1);
      else
        v37 = MmSetCommitReleaseEligibility((__int64)Object, v321.m256i_i8[4] & 1, v206, v207);
LABEL_146:
      v38 = v37;
LABEL_147:
      v39 = Object;
LABEL_148:
      ObfDereferenceObjectWithTag(v39, 0x79517350u);
      return v38;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (ProcessInformationLength & 7) != 0 || ProcessInformationLength > 0xA0 )
        return -1073741820;
      memmove(v340, ProcessInformation, ProcessInformationLength);
      v208 = (unsigned int)v4 >> 3;
      if ( Alignment == 67 )
      {
        result = ExCpuSetResourceManagerAccessCheck(v9);
        if ( result < 0 )
          return result;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v37 = KeSetCpuSetsProcess((__int64)Object, v208, v340);
      goto LABEL_146;
    case ProcessSubsystemProcess:
      if ( (PsGetCurrentProcess()[1].IdealProcessorPadding[10] & 0x100) == 0 )
        return -1073741727;
      v293 = 0LL;
      v38 = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, v9, &v293, 0LL);
      Object = v293;
      if ( v38 < 0 )
        return v38;
      _InterlockedOr((volatile signed __int32 *)v293 + 543, 0x40u);
      HalPutDmaAdapter((PADAPTER_OBJECT)Object);
      return v38;
    case ProcessInPrivate:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedOr((volatile signed __int32 *)Object + 280, 0x80000000);
      goto LABEL_88;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v210 = *(_DWORD *)ProcessInformation;
      v304 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v211 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v211 )
        goto LABEL_791;
      ExEnableRaiseUMExceptionOnInvalidHandleClose(v211, v210);
      ObDereferenceProcessHandleTable(Object);
      goto LABEL_214;
    case ProcessIumChallengeResponse:
      return PsIumEnableOnDemandDebugWithResponse(ProcessHandle, ProcessInformation, ProcessInformationLength);
    case ProcessHighGraphicsPriorityInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      v212 = *(_BYTE *)ProcessInformation;
      v266 = *(_BYTE *)ProcessInformation;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v212 )
        _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFFFFDFF);
      goto LABEL_88;
    case ProcessPowerThrottlingState:
      v332 = 0LL;
      v333 = 0;
      if ( ProcessInformationLength != 12 )
        return -1073741820;
      v332 = *(HANDLE *)ProcessInformation;
      v213 = *((_DWORD *)ProcessInformation + 2);
      v333 = v213;
      if ( (_DWORD)v332 != 1 || (HIDWORD(v332) & 0xFFFFFFFC) != 0 || (~HIDWORD(v332) & v213) != 0 )
        return -1073741811;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v215 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x2000u,
               (POBJECT_TYPE)PsProcessType,
               v9,
               0x79517350u,
               &Object,
               0LL);
      if ( v215 >= 0 )
      {
        v216 = (*(__int64 (__fastcall **)(PVOID, HANDLE *))(ExtensionTable + 8))(Object, &v332);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v216;
      }
      else
      {
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
        return v215;
      }
    case ProcessDisableSystemAllowedCpuSets:
      result = ExCpuSetResourceManagerAccessCheck(v9);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v4 != 1 )
        return -1073741820;
      v209 = *(_BYTE *)v5;
      v265 = v209;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( v209 )
        _InterlockedOr((volatile signed __int32 *)Object + 280, 0x8000000u);
      else
        _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xF7FFFFFF);
      KeRecomputeCpuSetAffinityProcess((__int64)Object);
      goto LABEL_88;
    case ProcessEnergyTrackingState:
      if ( ProcessInformationLength < 8 )
        return -1073741820;
      memset(v339, 0, sizeof(v339));
      v217 = 144;
      if ( ProcessInformationLength < 0x90 )
        v217 = ProcessInformationLength;
      memmove(v339, ProcessInformation, v217);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x200u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v218 = PoSetProcessEnergyTrackingState(Object, v339);
      v15 = Object;
      if ( v218 >= 0 )
        goto LABEL_89;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v218;
    case ProcessManageWritesToExecutableMemory:
      return -1073741637;
    case ProcessTelemetryCoverage:
      if ( ProcessInformationLength != 24 )
        return -1073741820;
      *(_OWORD *)pszDest = 0LL;
      v342 = 0LL;
      v343 = 0LL;
      v344 = 0LL;
      v345 = 0;
      v219 = *(_OWORD *)ProcessInformation;
      *(_OWORD *)pszSrc = v219;
      v296 = *((_QWORD *)ProcessInformation + 2);
      v220 = (const char *)v219;
      if ( (unsigned __int64)(v219 + 65) > 0x7FFFFFFF0000LL || (__int64)v219 + 65 < (unsigned __int64)v219 )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v220 = pszSrc[0];
      }
      RtlStringCbCopyA(pszDest, 0x41uLL, v220);
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x220u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      pszSrc[0] = pszDest;
      v345 = 0;
      v22 = EtwSetProcessTelemetryCoverage(Object, pszSrc);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)(v5 + 12) = HIDWORD(pszSrc[1]);
      *(_DWORD *)(v5 + 16) = v296;
      return v22;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !ProcessInformationLength
        || ProcessInformationClass == ProcessEnableLogging && ProcessInformationLength < 4 )
      {
        return -1073741820;
      }
      if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, v9) && !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      v261 = 0;
      if ( Alignment == 87 )
        v221 = (*(_BYTE *)v5 & 1 ^ *(_BYTE *)v5) & 2 ^ *(_BYTE *)v5 & 1;
      else
        v221 = *(_DWORD *)v5;
      v261 = v221;
      if ( (v221 & 0xFFFFFFF0) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      _InterlockedAnd((volatile signed __int32 *)Object + 543, 0xFFE7FFFF);
      v222 = (((v261 >> 2) & 1) << 19) | 0x100000;
      if ( (v261 & 8) == 0 )
        v222 = ((v261 >> 2) & 1) << 19;
      _InterlockedOr((volatile signed __int32 *)Object + 543, v222);
      _InterlockedAnd((volatile signed __int32 *)Object + 280, 0xFCFFFFFF);
      v223 = ((v261 & 1) << 24) | 0x2000000;
      if ( (v261 & 2) == 0 )
        v223 = (v261 & 1) << 24;
      _InterlockedOr((volatile signed __int32 *)Object + 280, v223);
      goto LABEL_88;
    case ProcessDebugAuthInformation:
      return SeCodeIntegritySetInformationProcess(
               ProcessHandle,
               (unsigned int)ProcessInformationClass,
               ProcessInformation,
               ProcessInformationLength);
    case ProcessSystemResourceManagement:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v224 = *(_DWORD *)ProcessInformation;
      v303 = v224;
      if ( (v224 & 0xFFFFFFFE) != 0 )
        return -1073741811;
      if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, v9) )
        return -1073741727;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      LOBYTE(v225) = 1;
      PspSetProcessForegroundBackgroundRequest(Object, v224 & 1, v225);
LABEL_88:
      v15 = Object;
LABEL_89:
      ObfDereferenceObjectWithTag(v15, 0x79517350u);
      return 0;
    case ProcessLoaderDetour:
      if ( ProcessInformationLength != 4 )
        return -1073741820;
      v226 = *(_DWORD *)ProcessInformation;
      v305 = *(_DWORD *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v12 = result;
      if ( result < 0 )
        return result;
      if ( Object != PsGetCurrentProcess() || !v226 )
        goto LABEL_133;
      v227 = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( v227 )
      {
        (*(void (__fastcall **)(PVOID, _QWORD))(v227 + 40))(Object, v226);
        ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      }
      goto LABEL_79;
    case ProcessCombineSecurityDomainsInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v228 = *(HANDLE *)ProcessInformation;
      v330 = *(HANDLE *)ProcessInformation;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x2000u,
                 (POBJECT_TYPE)PsProcessType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v38 = ObReferenceObjectByHandleWithTag(v228, 0x1000u, (POBJECT_TYPE)PsProcessType, v9, 0x79517350u, &v285, 0LL);
      v39 = Object;
      if ( v38 < 0 )
        goto LABEL_148;
      v38 = PspCombineSecurityDomains(Object, v285);
      ObfDereferenceObjectWithTag(v285, 0x79517350u);
      goto LABEL_147;
    case ProcessLeapSecondInformation:
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      v229 = *(HANDLE *)ProcessInformation;
      v311 = v229;
      if ( ((unsigned int)v229 & 0xFFFFFFFE) != 0 || ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      v230 = PsGetCurrentProcess();
      Object = v230;
      v231 = v230[1].AffinityPadding[4];
      if ( !v231 )
        return -1073741790;
      v232 = 0LL;
      v233 = (__int64 *)v230[1].AffinityPadding[10];
      if ( v233 )
        v232 = *v233;
      v234 = (unsigned __int8)v229 & 1;
      v235 = *(_DWORD *)(v231 + 1984);
      if ( v234 )
        v236 = v235 | 1;
      else
        v236 = v235 & 0xFFFFFFFE;
      *(_DWORD *)(v231 + 1984) = v236;
      if ( v232 )
      {
        v237 = *(_DWORD *)(v232 + 1140);
        if ( v234 )
          v238 = v237 | 1;
        else
          v238 = v237 & 0xFFFFFFFE;
        *(_DWORD *)(v232 + 1140) = v238;
      }
      return v7;
    case ProcessFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 32 )
        return -1073741820;
      if ( !KeIsUserCetAllowed() || (KeGetCurrentThread()->MiscFlags & 0x100000) == 0 )
        return -1073741637;
      return PspSetupUserFiberShadowStack(
               *(_QWORD *)v5,
               *(_QWORD *)(v5 + 8),
               (unsigned int)*(_OWORD *)(v5 + 16),
               v5 + 24);
    case ProcessFreeFiberShadowStackAllocation:
      if ( ProcessHandle != (HANDLE)-1LL )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741823;
      if ( ProcessInformationLength != 8 )
        return -1073741820;
      if ( KeIsUserCetAllowed() && (KeGetCurrentThread()->MiscFlags & 0x100000) != 0 )
        return PspFreeUserFiberShadowStack(*(PVOID *)v5);
      else
        return -1073741637;
    case ProcessAltSystemCallInformation:
      if ( ProcessInformationLength != 1 )
        return -1073741820;
      if ( !*(_BYTE *)ProcessInformation )
        return -1073741811;
      if ( v9 )
        return -1073741790;
      v294 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0xBEAu, (POBJECT_TYPE)PsProcessType, 0, &v294, 0LL);
      Object = v294;
      if ( result >= 0 )
      {
        v239 = PspEnableAltSystemCallHandling();
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        return v239;
      }
      return result;
    case ProcessDynamicEHContinuationTargets:
      v271[1] = 0;
      v240 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)Address = *(_OWORD *)ProcessInformation;
      v241 = 16 * LOWORD(Address[0]);
      if ( !v241 )
        return -1073741811;
      v242 = (const void *)Address[1];
      if ( !Address[1] )
        return -1073741811;
      v243 = v241;
      ProbeForWrite(Address[1], v241, 8u);
      if ( WORD1(Address[0]) || HIDWORD(Address[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v274 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v274, 0LL);
      Object = v274;
      if ( result < 0 )
        return result;
      v244 = PsGetCurrentProcess();
      v245 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v244 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(257LL, v243, 1313359172LL);
        v240 = Pool2;
        v274 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, v242, v243);
          v12 = PspProcessDynamicEHContinuationTargets((ULONG_PTR)Object);
          v255 = v12;
          v258 = 0;
        }
        else
        {
          v12 = -1073741801;
        }
        v245 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
      goto LABEL_955;
    case ProcessDynamicEnforcedCetCompatibleRanges:
      LODWORD(v272) = 0;
      v240 = 0LL;
      if ( ProcessInformationLength != 16 )
        return -1073741820;
      *(_OWORD *)v288 = *(_OWORD *)ProcessInformation;
      v247 = 24 * LOWORD(v288[0]);
      if ( !v247 )
        return -1073741811;
      v248 = (const void *)v288[1];
      if ( !v288[1] )
        return -1073741811;
      v249 = v247;
      ProbeForWrite(v288[1], v247, 8u);
      if ( WORD1(v288[0]) || HIDWORD(v288[0]) )
        return -1073741811;
      if ( v9 != 1 )
        return -1073741790;
      v273 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x200u, (POBJECT_TYPE)PsProcessType, 1, &v273, 0LL);
      Object = v273;
      if ( result < 0 )
        return result;
      v250 = PsGetCurrentProcess();
      v245 = (struct _DMA_ADAPTER *)Object;
      if ( Object == v250 && (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
      {
        v12 = -1073741790;
      }
      else if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
      {
        v251 = (_DWORD *)ExAllocatePool2(257LL, v249, 1380009284LL);
        v240 = v251;
        v273 = v251;
        if ( v251 )
        {
          memmove(v251, v248, v249);
          v12 = PspProcessDynamicEnforcedAddressRanges(
                  (PRKPROCESS)Object,
                  (__int64)Object + 2576,
                  (__int64)v240,
                  (unsigned __int16)v288[0],
                  (unsigned int *)&v272);
          v255 = v12;
          while ( 1 )
          {
            v258 = v7;
            if ( v7 >= (unsigned int)v272 )
              break;
            *((_DWORD *)v248 + 6 * v7 + 4) = v240[6 * v7 + 4];
            ++v7;
          }
        }
        else
        {
          v12 = -1073741801;
        }
        v245 = (struct _DMA_ADAPTER *)Object;
      }
      else
      {
        v12 = -1073741637;
      }
LABEL_955:
      if ( v245 )
        HalPutDmaAdapter(v245);
      if ( v240 )
      {
        ExFreePoolWithTag(v240, 0);
        return v12;
      }
      return v12;
    default:
      return -1073741821;
  }
  v132 = (unsigned __int8 *)PsGetCurrentProcess();
  Object = v132;
  switch ( (int)v257 )
  {
    case 1:
      if ( (HIDWORD(v257) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v133 = (HIDWORD(v257) >> 1) & 1;
      if ( !v133 && (*((_DWORD *)v132 + 628) & 0x10) != 0 )
        goto LABEL_429;
      if ( (BYTE4(v257) & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x40) == 0 )
        goto LABEL_429;
      v134 = (HIDWORD(v257) >> 3) & 1;
      if ( !v134 && (*((_DWORD *)v132 + 628) & 8) != 0 )
        goto LABEL_429;
      if ( v134 )
      {
        if ( !v133 )
        {
          v12 = -1073741776;
          goto LABEL_501;
        }
      }
      else if ( !v133 )
      {
LABEL_435:
        if ( (BYTE4(v257) & 1) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v132 + 628, 0xFFFFFFBF);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v134 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 8u);
          v132 = (unsigned __int8 *)Object;
        }
        v12 = 0;
        goto LABEL_501;
      }
      _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x10u);
      v132 = (unsigned __int8 *)Object;
      goto LABEL_435;
    case 2:
      v142 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && (BYTE4(v257) & 8) != 0 )
        v142 = HIDWORD(v257) & 0xFFFFFFF7;
      v143 = v142 & 1;
      if ( (v142 & 1) == 0 && ((v142 & 2) != 0 || (v142 & 4) != 0) )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (unsigned int)PsIsSystemWideMitigationOptionSet(9LL) )
      {
        v132 = (unsigned __int8 *)Object;
LABEL_500:
        v12 = -1073741637;
        goto LABEL_501;
      }
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v132 = (unsigned __int8 *)Object;
        v144 = 0;
      }
      else
      {
        v12 = ObReferenceObjectByHandleWithTag(
                ProcessHandle,
                0x200u,
                (POBJECT_TYPE)PsProcessType,
                v9,
                0x79517350u,
                &Object,
                0LL);
        if ( v12 < 0 )
          goto LABEL_450;
        v144 = 1;
        v145 = PsGetCurrentProcess();
        v132 = (unsigned __int8 *)Object;
        if ( Object != v145 )
        {
          v146 = *((_DWORD *)Object + 628);
          if ( (v146 & 0x100) != 0 )
          {
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            SeCaptureSubjectContextEx(0LL, (PEPROCESS)Object, &SubjectContext);
            IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, 1);
            SeReleaseSubjectContext(&SubjectContext);
            if ( !RtlIsSandboxedToken(0LL, v9) && IsSandboxedToken )
            {
              v132 = (unsigned __int8 *)Object;
              if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
                goto LABEL_512;
            }
            v148 = SeSinglePrivilegeCheck(SeDebugPrivilege, v9);
            v132 = (unsigned __int8 *)Object;
            if ( v148 )
              goto LABEL_512;
          }
          else if ( (v142 & 8) != 0 || (v142 & 1) != 0 || (v146 & 0x800) == 0 )
          {
LABEL_512:
            v149 = 0;
            if ( (v142 & 1) == 0 )
              v149 = 2304;
            v150 = -v143;
            v151 = (v150 != 0 ? 0x100 : 0) | 0x800;
            if ( (v142 & 8) == 0 )
              v151 = v150 != 0 ? 0x900 : 0;
            if ( ((v142 >> 1) & 1) == 0 )
              v149 |= 0x200u;
            v152 = v151 | 0x200;
            if ( ((v142 >> 1) & 1) == 0 )
              v152 = v151;
            v153 = v152 | 0x400;
            v155 = (v142 >> 2) & 1;
            v154 = v155 == 0;
            goto LABEL_548;
          }
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( (v142 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x100) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v156 = (v142 >> 3) & 1;
      if ( !v156 && (v142 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x800) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_502;
      }
      v157 = (v142 >> 1) & 1;
      if ( v157 )
      {
        v158 = *((_DWORD *)v132 + 628);
        if ( (v158 & 0x100) != 0 && (v158 & 0x200) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      v155 = (v142 >> 2) & 1;
      if ( v155 )
      {
        v159 = *((_DWORD *)v132 + 628);
        if ( (v159 & 0x100) != 0 && (v159 & 0x400) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_502;
        }
      }
      if ( v143 )
      {
        v160 = 2304;
      }
      else
      {
        v160 = 0;
        if ( v156 )
          v160 = 2048;
      }
      v149 = (v157 ^ 1) << 9;
      v152 = v160 | 0x200;
      if ( !v157 )
        v152 = v160;
      v153 = v152 | 0x400;
      v154 = v155 == 0;
LABEL_548:
      if ( v154 )
        v153 = v152;
      if ( !v155 )
        v149 |= 0x400u;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v153, v149);
      v12 = 0;
      v132 = (unsigned __int8 *)Object;
      goto LABEL_502;
    case 3:
      if ( (HIDWORD(v257) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( ((HIDWORD(v257) >> 1) & 1) != 0 || (BYTE4(v257) & 1) == 0 )
      {
        if ( ((HIDWORD(v257) >> 1) & 1) == 0 || (BYTE4(v257) & 1) != 0 )
        {
          v135 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v132);
          if ( v135 )
          {
            v12 = -1073741790;
            if ( (unsigned __int8)ExEnableHandleExceptions(v135, BYTE4(v257) & 1) )
              v12 = 0;
            ObDereferenceProcessHandleTable(Object);
            v132 = (unsigned __int8 *)Object;
          }
          else
          {
            v12 = -1073741558;
LABEL_450:
            v132 = (unsigned __int8 *)Object;
          }
        }
        else
        {
          v12 = -1073741811;
        }
      }
      else
      {
        v12 = -1073741811;
      }
      goto LABEL_501;
    case 4:
      v136 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && (BYTE4(v257) & 2) != 0 )
      {
        v136 = HIDWORD(v257) & 0xFFFFFFFD;
        HIDWORD(v257) &= ~2u;
      }
      if ( (v136 & 4) != 0 && (v136 & 8) != 0 )
      {
        v136 &= ~8u;
        HIDWORD(v257) = v136;
      }
      v137 = v136 & 1;
      if ( (v136 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x1000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v138 = (v136 >> 2) & 1;
      if ( !v138 && (*((_DWORD *)v132 + 652) & 2) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v139 = (v136 >> 1) & 1;
      if ( !v139 && (v136 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x2000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v140 = (v136 >> 3) & 1;
      if ( !v140 && !v138 && (*((_DWORD *)v132 + 652) & 4) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v137 || v139 )
      {
        IsGuiThread = PsIsGuiThread(v256, v130, v131, v132);
        v132 = (unsigned __int8 *)Object;
        if ( IsGuiThread )
        {
          v12 = -1073741431;
          goto LABEL_501;
        }
      }
      v12 = 0;
      if ( v137 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x3000u);
      }
      else
      {
        if ( !v139 )
          goto LABEL_485;
        _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x2000u);
      }
      v132 = (unsigned __int8 *)Object;
LABEL_485:
      if ( v138 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 652, 6u);
        v132 = (unsigned __int8 *)Object;
      }
      else if ( v140 )
      {
        _InterlockedOr((volatile signed __int32 *)v132 + 652, 4u);
        v132 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    case 6:
      if ( (HIDWORD(v257) & 0xFFFFFFFE) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v257) & 1) != 0 || (*((_DWORD *)v132 + 628) & 0x80u) == 0 )
      {
        v12 = 0;
        if ( (BYTE4(v257) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x80u);
          v132 = (unsigned __int8 *)Object;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 7:
      if ( (HIDWORD(v257) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (*((_DWORD *)v132 + 628) & 1) != 0 )
      {
        if ( (BYTE4(v257) & 4) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 4u);
          v12 = 0;
          v132 = (unsigned __int8 *)Object;
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 8:
      v161 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && ((BYTE4(v257) & 8) != 0 || (BYTE4(v257) & 0x10) != 0) )
        v161 = HIDWORD(v257) & 0xFFFFFFE7;
      if ( (v161 & 2) != 0 && (v161 & 0x10) != 0 )
        v161 &= ~0x10u;
      v162 = (v161 >> 3) & 1;
      if ( v162 && (v161 & 0x10) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      v163 = (v161 >> 1) & 1;
      if ( (v161 & 1) + v163 > 1 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (v161 & 1) != 0 )
        goto LABEL_590;
      if ( v132[2168] >= 8u && v132[2169] >= 8u )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      if ( v163 )
        goto LABEL_590;
      LOBYTE(v130) = 6;
      if ( (unsigned int)SeCompareSigningLevels(v132[2168], v130) )
      {
        LOBYTE(v130) = 6;
        if ( (unsigned int)SeCompareSigningLevels(*((unsigned __int8 *)Object + 2169), v130) )
        {
          v12 = -1073741790;
          v132 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
      }
      v132 = (unsigned __int8 *)Object;
LABEL_590:
      if ( (*((_DWORD *)v132 + 628) & 0x3000000) != 0 && (v161 & 0x10) == 0 && !v163 && !v162 && (v161 & 1) == 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v12 = 0;
      if ( (v161 & 1) == 0 )
      {
        if ( !v163 )
          goto LABEL_607;
        LOBYTE(v130) = 6;
        if ( !(unsigned int)SeCompareSigningLevels(v132[2168], v130) )
        {
          v12 = -1073741790;
          v132 = (unsigned __int8 *)Object;
          goto LABEL_501;
        }
        LOBYTE(v164) = 6;
        if ( (unsigned int)SeCompareSigningLevels(v164, *((unsigned __int8 *)Object + 2169)) )
          *((_BYTE *)Object + 2169) = 6;
        goto LABEL_606;
      }
      if ( v132[2168] < 8u )
      {
        v132[2168] = 8;
        v132 = (unsigned __int8 *)Object;
      }
      if ( v132[2169] < 8u )
      {
        v132[2169] = 8;
LABEL_606:
        v132 = (unsigned __int8 *)Object;
      }
LABEL_607:
      if ( v161 )
        v7 = 0x800000;
      v165 = ((v161 & 8) == 0) << 24;
      v166 = v7 | 0x1000000;
      if ( !v162 )
        v166 = v7;
      v167 = (v161 >> 4) & 1;
      if ( !v167 )
        v165 |= 0x2000000u;
      v168 = v166 | 0x2000000;
      if ( !v167 )
        v168 = v166;
      RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v168, v165);
      v132 = (unsigned __int8 *)Object;
      goto LABEL_501;
    case 9:
      if ( (HIDWORD(v257) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
      }
      else if ( (BYTE4(v257) & 1) != 0 || (*((_DWORD *)v132 + 628) & 0x10000) == 0 )
      {
        if ( (BYTE4(v257) & 1) != 0 || (BYTE4(v257) & 2) != 0 || (*((_DWORD *)v132 + 628) & 0x20000) == 0 )
        {
          v12 = 0;
          if ( (BYTE4(v257) & 1) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, 0x10000, 0x20000);
            v132 = (unsigned __int8 *)Object;
          }
          else if ( (BYTE4(v257) & 2) != 0 )
          {
            RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, 0x20000, 0x10000);
            v132 = (unsigned __int8 *)Object;
          }
        }
        else
        {
          v12 = -1073741790;
        }
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 10:
      v169 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFE0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && (BYTE4(v257) & 8) != 0 )
        v169 = HIDWORD(v257) & 0xFFFFFFF7;
      if ( (v169 & 2) != 0 && (v169 & 0x10) != 0 )
        v169 &= ~0x10u;
      v170 = v169 & 1;
      v171 = 0x80000;
      if ( (v169 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x80000) != 0 )
        goto LABEL_429;
      v172 = (v169 >> 1) & 1;
      if ( !v172 && (*((_DWORD *)v132 + 628) & 0x200000) != 0 )
        goto LABEL_429;
      v173 = (v169 >> 2) & 1;
      if ( !v173 && (*((_DWORD *)v132 + 628) & 0x40000) != 0 )
      {
        v12 = -1073741790;
        goto LABEL_501;
      }
      v174 = (v169 >> 3) & 1;
      if ( !v174 && (v169 & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x100000) != 0 )
        goto LABEL_429;
      v175 = (v169 >> 4) & 1;
      if ( v175 || v172 || (*((_DWORD *)v132 + 628) & 0x400000) == 0 )
      {
        v176 = 0;
        if ( v170 )
        {
          v176 = 0x100000;
        }
        else
        {
          v171 = 0;
          if ( v174 )
            v171 = 0x100000;
        }
        if ( v172 )
        {
          v171 |= 0x200000u;
          v176 |= 0x400000u;
        }
        else if ( v175 )
        {
          v171 |= 0x400000u;
        }
        v177 = v171 | 0x40000;
        if ( !v173 )
          v177 = v171;
        RtlInterlockedSetClearBits((volatile signed __int32 *)v132 + 628, v177, v176);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 13:
      v178 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFF8) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) == 0 && (BYTE4(v257) & 4) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && (BYTE4(v257) & 2) != 0 )
        v178 = HIDWORD(v257) & 0xFFFFFFFD;
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v132);
      v180 = NoChildProcessRestrictedPolicy;
      v181 = v178 & 1;
      if ( (v178 & 1) == 0 && NoChildProcessRestrictedPolicy - 1 <= 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v182 = (v178 >> 2) & 1;
      if ( v182 && (_DWORD)v180 == 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v183 = (v178 >> 1) & 1;
      if ( v183 )
        goto LABEL_680;
      if ( v181 )
        goto LABEL_681;
      if ( (_DWORD)v180 == 3 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
LABEL_680:
      if ( v181 )
      {
LABEL_681:
        if ( v182 )
          PspSetNoChildProcessRestrictedPolicy(Object, 2LL, v180);
        else
          PspSetNoChildProcessRestrictedPolicy(Object, 1LL, v180);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      if ( v183 )
        PspSetNoChildProcessRestrictedPolicy(Object, 3LL, v180);
      goto LABEL_687;
    case 14:
      if ( (HIDWORD(v257) & 0xFFFFFFF0) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) == 0 && (*((_DWORD *)v132 + 628) & 0x40000000) != 0
        || ((HIDWORD(v257) >> 1) & 1) == 0 && *((int *)v132 + 628) < 0
        || ((HIDWORD(v257) >> 3) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x2000) != 0 )
      {
        goto LABEL_429;
      }
      v189 = (HIDWORD(v257) >> 2) & 1;
      if ( v189 || (*((_DWORD *)v132 + 629) & 0x1000) == 0 )
      {
        if ( (BYTE4(v257) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x40000000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v257) >> 1) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 628, 0x80000000);
          _InterlockedOr((volatile signed __int32 *)Object + 543, 0x200000u);
          PspWriteProcessSecurityDomain((__int64)Object, _InterlockedIncrement64(&PsNextSecurityDomain), 1);
          KeSynchronizeSecurityDomain((_KPROCESS *)Object);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v189 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x1000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( ((HIDWORD(v257) >> 3) & 1) != 0 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x2000u);
          v132 = (unsigned __int8 *)Object;
        }
        v12 = 0;
      }
      else
      {
        v12 = -1073741790;
      }
      goto LABEL_501;
    case 15:
      v190 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFC00) == 0 )
      {
        if ( (BYTE4(v257) & 0x10) != 0 )
        {
          v190 = HIDWORD(v257) | 1;
          HIDWORD(v257) |= 1u;
        }
        if ( (v190 & 0x200) != 0 )
        {
          v190 |= 4u;
          HIDWORD(v257) = v190;
        }
        if ( (v190 & 0x40) != 0 )
        {
          v190 |= 0x20u;
          HIDWORD(v257) = v190;
        }
        v191 = (v190 >> 4) & 1;
        if ( !v191 && (*((_DWORD *)v132 + 629) & 0x100000) != 0
          || (v190 & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x4000) != 0 )
        {
          goto LABEL_429;
        }
        if ( (v190 & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x4000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v192 = (v190 >> 9) & 1;
        if ( v192 )
        {
          if ( *((int *)v132 + 629) >= 0 )
            goto LABEL_429;
        }
        v193 = (v190 >> 2) & 1;
        if ( !v193 && (*((_DWORD *)v132 + 629) & 0x20000) != 0 )
          goto LABEL_429;
        if ( v193 && (*((_DWORD *)v132 + 629) & 0x20000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v194 = (v190 >> 6) & 1;
        if ( !v194 && (*((_DWORD *)v132 + 629) & 0x400000) != 0 )
          goto LABEL_429;
        v195 = (v190 >> 5) & 1;
        if ( !v195 && (*((_DWORD *)v132 + 629) & 0x200000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        v196 = (v190 >> 8) & 1;
        if ( !v196 && (*((_DWORD *)v132 + 629) & 0x40000000) != 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( ((v190 >> 1) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x8000) != 0
          || ((v190 >> 1) & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x8000) == 0
          || ((v190 >> 3) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x40000) != 0
          || ((v190 >> 3) & 1) != 0 && (*((_DWORD *)v132 + 629) & 0x40000) == 0
          || (v197 = (v190 >> 7) & 1) == 0 && (*((_DWORD *)v132 + 629) & 0x800000) != 0 )
        {
LABEL_429:
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v197 && (*((_DWORD *)v132 + 629) & 0x800000) == 0 )
        {
          v12 = -1073741790;
          goto LABEL_501;
        }
        if ( v191 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x100000u);
          v132 = (unsigned __int8 *)Object;
        }
        if ( !v192 && v193 )
        {
          _InterlockedAnd((volatile signed __int32 *)v132 + 629, 0x7FFFFFFFu);
          v132 = (unsigned __int8 *)Object;
        }
        if ( v194 )
        {
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x200000u);
          _InterlockedOr((volatile signed __int32 *)Object + 629, 0x400000u);
        }
        else
        {
          if ( !v195 )
          {
LABEL_778:
            if ( v196 )
            {
              _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x40000000u);
              v132 = (unsigned __int8 *)Object;
            }
            v12 = 0;
            goto LABEL_501;
          }
          _InterlockedOr((volatile signed __int32 *)v132 + 629, 0x200000u);
        }
        v132 = (unsigned __int8 *)Object;
        goto LABEL_778;
      }
      v12 = -1073741811;
LABEL_501:
      v144 = 0;
LABEL_502:
      if ( v144 != 1 )
        return v12;
      ObfDereferenceObjectWithTag(v132, 0x79517350u);
      return v12;
    case 16:
      v184 = HIDWORD(v257);
      if ( (HIDWORD(v257) & 0xFFFFFFFC) != 0 )
      {
        v12 = -1073741811;
        goto LABEL_501;
      }
      if ( (BYTE4(v257) & 1) != 0 && (BYTE4(v257) & 2) != 0 )
        v184 = HIDWORD(v257) & 0xFFFFFFFD;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)v132);
      v186 = v184 & 1;
      if ( (v184 & 1) == 0 && RedirectionTrustPolicy == 1 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
        goto LABEL_501;
      }
      v187 = (v184 >> 1) & 1;
      if ( v187 )
        goto LABEL_700;
      if ( v186 )
        goto LABEL_701;
      if ( RedirectionTrustPolicy == 2 )
      {
        v12 = -1073741790;
        v132 = (unsigned __int8 *)Object;
      }
      else
      {
LABEL_700:
        if ( v186 )
        {
LABEL_701:
          v188 = 1;
        }
        else
        {
          if ( !v187 )
          {
LABEL_687:
            v12 = 0;
            v132 = (unsigned __int8 *)Object;
            goto LABEL_501;
          }
          v188 = 2;
        }
        PspSetRedirectionTrustPolicy((struct _KPROCESS *)Object, v188);
        v12 = 0;
        v132 = (unsigned __int8 *)Object;
      }
      goto LABEL_501;
    default:
      goto LABEL_500;
  }
}
