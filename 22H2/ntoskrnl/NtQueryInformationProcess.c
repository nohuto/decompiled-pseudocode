/*
 * XREFs of NtQueryInformationProcess @ 0x1406216C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeUnstackDetachProcess @ 0x140207580 (KeUnstackDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x14022C200 (ExGenRandom.c)
 *     PsIsProtectedProcess @ 0x14024FAF0 (PsIsProtectedProcess.c)
 *     MmGetSessionId @ 0x140252DB0 (MmGetSessionId.c)
 *     KeEnterCriticalRegionThread @ 0x14025ABE0 (KeEnterCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14025B970 (KeStackAttachProcess.c)
 *     MmQueryWorkingSetInformation @ 0x14025BFB0 (MmQueryWorkingSetInformation.c)
 *     KeQueryGroupMaskProcess @ 0x14025C088 (KeQueryGroupMaskProcess.c)
 *     KeQueryAffinityProcess @ 0x14025C0A0 (KeQueryAffinityProcess.c)
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     ExUnlockUserBuffer @ 0x1402EC94C (ExUnlockUserBuffer.c)
 *     ExReleaseExtensionTable @ 0x1402F75FC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1402F7618 (ExGetExtensionTable.c)
 *     PsGetWin32KFilterSet @ 0x1402FF710 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x1403184E0 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x14031D238 (MmQueryCommitReleaseState.c)
 *     PsGetProcessProtection @ 0x140322920 (PsGetProcessProtection.c)
 *     KeQuerySystemTimePrecise @ 0x140341F10 (KeQuerySystemTimePrecise.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140380800 (ExQueryHandleExceptionsPermanency.c)
 *     PspUnlockProcessShared @ 0x140399040 (PspUnlockProcessShared.c)
 *     PspLockProcessSecurityShared @ 0x140399750 (PspLockProcessSecurityShared.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403CFD40 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwQueryInformationJobObject @ 0x1403FC380 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x14051C594 (KeQueryCpuSetsProcess.c)
 *     PsGetProcessSecurityDomain @ 0x140581884 (PsGetProcessSecurityDomain.c)
 *     PspGetRedirectionTrustPolicy @ 0x1405CF638 (PspGetRedirectionTrustPolicy.c)
 *     PsQueryProcessEnergyValues @ 0x1405E92D0 (PsQueryProcessEnergyValues.c)
 *     ObReferenceProcessHandleTable @ 0x1405F57B4 (ObReferenceProcessHandleTable.c)
 *     MmCopyVirtualMemory @ 0x1405F6DB0 (MmCopyVirtualMemory.c)
 *     PsQueryProcessAttributes @ 0x140600F24 (PsQueryProcessAttributes.c)
 *     PsReferenceProcessFilePointer @ 0x140604BE0 (PsReferenceProcessFilePointer.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x140604C58 (PspAllocateAndQueryProcessNotificationChannel.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryStatisticsProcess @ 0x140619120 (PsQueryStatisticsProcess.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     PspQueryQuotaLimits @ 0x14062069C (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x140620880 (IoQueryFileDosDeviceName.c)
 *     MmGetSectionInformation @ 0x140621350 (MmGetSectionInformation.c)
 *     PsQueryRuntimeProcess @ 0x1406215F0 (PsQueryRuntimeProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1406254C0 (ObQueryDeviceMapInformation.c)
 *     PsGetProcessDeepFreezeStats @ 0x14062C0CC (PsGetProcessDeepFreezeStats.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     ExLockUserBuffer @ 0x1406605D0 (ExLockUserBuffer.c)
 *     ExEnumHandleTable @ 0x140665730 (ExEnumHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x1406809F0 (ObDereferenceProcessHandleTable.c)
 *     ExIsRestrictedCaller @ 0x140686630 (ExIsRestrictedCaller.c)
 *     PsQueryProcessQuotaCounters @ 0x140689744 (PsQueryProcessQuotaCounters.c)
 *     PsQueryFullProcessImageName @ 0x14068D51C (PsQueryFullProcessImageName.c)
 *     KeGetExecuteOptions @ 0x140691AF8 (KeGetExecuteOptions.c)
 *     ObGetProcessHandleCount @ 0x1406976DC (ObGetProcessHandleCount.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x1406A1EA0 (PsQueryProcessSignatureMitigationPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x1406A5360 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     ExQueryRaiseUMExceptionOnInvalidHandleClose @ 0x140781A70 (ExQueryRaiseUMExceptionOnInvalidHandleClose.c)
 *     ExSystemExceptionFilter @ 0x1407D4E30 (ExSystemExceptionFilter.c)
 *     DbgkOpenProcessDebugPort @ 0x140884438 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14088F9F8 (VslGetSecurePebAddress.c)
 *     VslLiveDumpCaptureProcess @ 0x14088FD9C (VslLiveDumpCaptureProcess.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1408F2938 (PoQueryProcessEnergyTrackingState.c)
 *     PsGetKeepAliveCountProcess @ 0x1409078D4 (PsGetKeepAliveCountProcess.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140907910 (PsQueryTotalCycleTimeProcess.c)
 *     PspQueryPooledQuotaLimits @ 0x1409080F8 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409082A0 (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x14090CA68 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x140934D9C (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x14094C6A4 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryHandleExceptions @ 0x14094C8E4 (ExQueryHandleExceptions.c)
 *     ExQueryProcessHandleInformation @ 0x14094C8F4 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x14094CAF4 (ExReferenceHandleDebugInfo.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // bl
  __int64 v11; // rax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  ULONG v14; // ecx
  NTSTATUS DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v16; // r12
  struct _FILE_OBJECT *v17; // rbx
  int v18; // r12d
  POBJECT_NAME_INFORMATION v19; // rbx
  ULONG v20; // edi
  unsigned __int64 v21; // rdi
  _KPROCESS *v22; // rbx
  PVOID v23; // rcx
  __int64 v24; // r8
  unsigned __int64 Group; // rdx
  unsigned __int64 v26; // rax
  __int16 v27; // cx
  _DWORD *v28; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // ebx
  _QWORD *v32; // rbx
  __int64 v33; // rcx
  struct _EX_RUNDOWN_REF *v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int ExecuteOptions; // ebx
  _DWORD *v38; // rcx
  HANDLE v39; // rdx
  int ProcessHandleCount; // edi
  NTSTATUS ProcessTelemetryCoverage; // eax
  NTSTATUS v42; // ebx
  int v43; // ebx
  int v44; // ebx
  unsigned int v45; // edi
  int SessionId; // ebx
  unsigned __int64 *v47; // rax
  int v48; // ebx
  unsigned __int64 v49; // r13
  NTSTATUS v50; // edi
  PVOID v51; // r12
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rbx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rdx
  _OWORD *v57; // rax
  __int64 v58; // r9
  int v59; // eax
  PVOID v60; // r12
  void *CurrentProcess; // r10
  void *v62; // r10
  struct _DMA_ADAPTER *v63; // rdx
  int DmaOperations; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v67; // ecx
  unsigned __int64 v68; // rax
  struct _EX_RUNDOWN_REF *v69; // r13
  struct _DMA_ADAPTER *Count; // r12
  NTSTATUS v71; // ebx
  PVOID v72; // rdi
  __int64 v73; // rax
  __int64 v74; // rax
  void *v75; // rdi
  NTSTATUS ProcessHandleInformation; // edi
  struct _DMA_ADAPTER *v77; // rcx
  _DMA_OPERATIONS *v78; // rsi
  struct _DMA_ADAPTER *v79; // rbx
  _DMA_OPERATIONS *v80; // rdi
  NTSTATUS v81; // r12d
  int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned int v85; // eax
  void *v86; // r8
  ULONG v87; // ecx
  unsigned int v88; // edx
  NTSTATUS v89; // ebx
  __int64 v90; // rbx
  struct _KPROCESS *v91; // rbx
  unsigned __int64 *v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  __int64 v95; // rcx
  ULONG v96; // eax
  _KPROCESS *v97; // rax
  struct _DMA_ADAPTER *v98; // r14
  unsigned __int64 v99; // rax
  int v100; // edi
  _DWORD *v101; // rcx
  int v102; // eax
  unsigned __int64 v103; // rax
  int v104; // ecx
  int v105; // eax
  int v106; // ecx
  int v107; // eax
  _DWORD *v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  _DWORD *v112; // rcx
  int v113; // eax
  int v114; // ecx
  int v115; // eax
  _DWORD *v116; // rcx
  int v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  _DWORD *v121; // rcx
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int RedirectionTrustPolicy; // eax
  int v128; // eax
  int v129; // eax
  _DWORD *v130; // rcx
  int v131; // eax
  _DWORD *v132; // rcx
  int v133; // eax
  _DWORD *v134; // rcx
  int v135; // eax
  NTSTATUS v136; // edi
  unsigned __int64 v137; // rax
  __int64 v138; // rdx
  __int64 v139; // rcx
  int v140; // ebx
  PVOID v141; // rbx
  unsigned __int64 v142; // rax
  char v143; // r9
  PVOID v144; // rbx
  NTSTATUS ProcessCommandLine; // eax
  char v146; // r9
  unsigned __int64 v147; // rax
  __int64 v148; // r8
  ULONG v149; // ebx
  void *v150; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v152; // eax
  int v153; // eax
  unsigned __int64 ExtensionTable; // rdi
  int v155; // ebx
  __int64 (__fastcall *v156)(PVOID, __int64 *); // rax
  PVOID v157; // rdi
  _DWORD *v158; // rcx
  int v159; // edx
  int v160; // eax
  PVOID v161; // rdi
  ULONG v162; // ebx
  __int64 v163; // rcx
  _KPROCESS *v164; // rcx
  __int64 v165; // r12
  struct _KTHREAD *v166; // rdi
  __int64 v167; // rcx
  int v168; // r8d
  ULONG v169; // edi
  _KPROCESS *v170; // rax
  unsigned __int64 v171; // r8
  __int64 v172; // rcx
  __int64 *v173; // rdx
  int v174; // eax
  signed __int32 v175[8]; // [rsp+0h] [rbp-9E8h] BYREF
  ULONG Tag[2]; // [rsp+20h] [rbp-9C8h]
  PVOID Object; // [rsp+40h] [rbp-9A8h] BYREF
  NTSTATUS i; // [rsp+48h] [rbp-9A0h]
  _BYTE v179[2]; // [rsp+4Ch] [rbp-99Ch] BYREF
  char v180; // [rsp+4Eh] [rbp-99Ah] BYREF
  char v181; // [rsp+4Fh] [rbp-999h] BYREF
  unsigned int GroupMaskProcess; // [rsp+50h] [rbp-998h] BYREF
  HANDLE v183; // [rsp+58h] [rbp-990h]
  ULONG v184; // [rsp+60h] [rbp-988h] BYREF
  PVOID P; // [rsp+68h] [rbp-980h] BYREF
  __int16 v186; // [rsp+70h] [rbp-978h]
  int v187; // [rsp+74h] [rbp-974h] BYREF
  unsigned int v188; // [rsp+78h] [rbp-970h]
  volatile signed __int32 *v189; // [rsp+80h] [rbp-968h]
  int v190; // [rsp+88h] [rbp-960h]
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-958h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-950h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-948h]
  PVOID v194; // [rsp+A8h] [rbp-940h] BYREF
  unsigned int v195; // [rsp+B0h] [rbp-938h] BYREF
  int v196; // [rsp+B4h] [rbp-934h] BYREF
  int v197; // [rsp+B8h] [rbp-930h]
  int v198; // [rsp+BCh] [rbp-92Ch] BYREF
  int v199; // [rsp+C0h] [rbp-928h] BYREF
  HANDLE v200; // [rsp+C8h] [rbp-920h] BYREF
  __int64 v201; // [rsp+D0h] [rbp-918h]
  PVOID v202; // [rsp+D8h] [rbp-910h]
  int v203[4]; // [rsp+E0h] [rbp-908h]
  _OBJECT_NAME_INFORMATION v204; // [rsp+F0h] [rbp-8F8h] BYREF
  __int128 v205; // [rsp+100h] [rbp-8E8h] BYREF
  _DWORD v206[4]; // [rsp+110h] [rbp-8D8h] BYREF
  unsigned __int64 v207; // [rsp+120h] [rbp-8C8h] BYREF
  __int64 v208; // [rsp+128h] [rbp-8C0h] BYREF
  LARGE_INTEGER v209; // [rsp+130h] [rbp-8B8h] BYREF
  __int64 v210; // [rsp+138h] [rbp-8B0h]
  PVOID v211; // [rsp+140h] [rbp-8A8h] BYREF
  __int64 v212; // [rsp+148h] [rbp-8A0h] BYREF
  _QWORD v213[2]; // [rsp+150h] [rbp-898h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+160h] [rbp-888h] BYREF
  PVOID v215; // [rsp+168h] [rbp-880h] BYREF
  _OWORD v216[3]; // [rsp+170h] [rbp-878h] BYREF
  __int64 v217; // [rsp+1A0h] [rbp-848h]
  __int128 v218; // [rsp+1A8h] [rbp-840h] BYREF
  __int64 v219; // [rsp+1B8h] [rbp-830h]
  __int64 v220; // [rsp+1C0h] [rbp-828h]
  HANDLE v221; // [rsp+1C8h] [rbp-820h]
  __int64 v222; // [rsp+1D0h] [rbp-818h]
  __int64 v223; // [rsp+1D8h] [rbp-810h]
  int v224; // [rsp+1E0h] [rbp-808h]
  int v225; // [rsp+1E4h] [rbp-804h]
  char *v226; // [rsp+1E8h] [rbp-800h]
  __int64 v227; // [rsp+1F0h] [rbp-7F8h]
  __int64 v228; // [rsp+1F8h] [rbp-7F0h] BYREF
  __int128 v229; // [rsp+200h] [rbp-7E8h]
  int v230; // [rsp+210h] [rbp-7D8h]
  __int128 v231; // [rsp+218h] [rbp-7D0h]
  __int128 v232; // [rsp+228h] [rbp-7C0h]
  __int128 v233; // [rsp+238h] [rbp-7B0h]
  __int128 Src; // [rsp+250h] [rbp-798h] BYREF
  __int128 v235; // [rsp+260h] [rbp-788h] BYREF
  __int128 v236; // [rsp+270h] [rbp-778h] BYREF
  __int128 v237; // [rsp+280h] [rbp-768h] BYREF
  __int128 v238; // [rsp+290h] [rbp-758h] BYREF
  __int128 v239; // [rsp+2A0h] [rbp-748h]
  __int128 v240; // [rsp+2B0h] [rbp-738h] BYREF
  __int128 v241; // [rsp+2C0h] [rbp-728h] BYREF
  __int128 v242; // [rsp+2D0h] [rbp-718h]
  _OWORD v243[6]; // [rsp+2E0h] [rbp-708h] BYREF
  __int64 v244; // [rsp+340h] [rbp-6A8h]
  unsigned __int64 v245; // [rsp+350h] [rbp-698h]
  __int128 v246; // [rsp+358h] [rbp-690h] BYREF
  unsigned __int64 v247; // [rsp+368h] [rbp-680h]
  void *v248; // [rsp+370h] [rbp-678h]
  __int128 v249; // [rsp+380h] [rbp-668h]
  __int128 v250; // [rsp+390h] [rbp-658h]
  __int128 v251; // [rsp+3A0h] [rbp-648h]
  __int128 v252; // [rsp+3B0h] [rbp-638h]
  __int128 v253; // [rsp+3C0h] [rbp-628h]
  __int128 v254; // [rsp+3D0h] [rbp-618h]
  __int128 v255; // [rsp+3E0h] [rbp-608h]
  __int128 v256; // [rsp+3F0h] [rbp-5F8h]
  __int128 v257; // [rsp+400h] [rbp-5E8h]
  __int128 v258; // [rsp+410h] [rbp-5D8h]
  __int64 v259; // [rsp+420h] [rbp-5C8h] BYREF
  int v260; // [rsp+428h] [rbp-5C0h]
  __int128 JobObjectInformation; // [rsp+430h] [rbp-5B8h] BYREF
  __int128 v262; // [rsp+440h] [rbp-5A8h]
  __int64 v263; // [rsp+450h] [rbp-598h]
  struct _KAPC_STATE ApcState; // [rsp+458h] [rbp-590h] BYREF
  struct _KAPC_STATE v265; // [rsp+488h] [rbp-560h] BYREF
  __int128 v266; // [rsp+4C0h] [rbp-528h] BYREF
  __int128 v267; // [rsp+4D0h] [rbp-518h]
  __int128 v268; // [rsp+4E0h] [rbp-508h]
  __int128 v269; // [rsp+4F0h] [rbp-4F8h]
  __int128 v270; // [rsp+500h] [rbp-4E8h]
  __int128 v271; // [rsp+510h] [rbp-4D8h]
  __int128 v272; // [rsp+520h] [rbp-4C8h]
  __int128 v273; // [rsp+530h] [rbp-4B8h]
  __int128 v274; // [rsp+540h] [rbp-4A8h]
  __int64 v275; // [rsp+550h] [rbp-498h]
  _OWORD v276[9]; // [rsp+560h] [rbp-488h] BYREF
  _OWORD v277[11]; // [rsp+5F0h] [rbp-3F8h] BYREF
  _OWORD v278[11]; // [rsp+6A0h] [rbp-348h] BYREF
  _OWORD v279[27]; // [rsp+750h] [rbp-298h] BYREF
  _QWORD v280[20]; // [rsp+900h] [rbp-E8h] BYREF

  v5 = ProcessInformationLength;
  v6 = (unsigned __int64)ProcessInformation;
  v183 = ProcessHandle;
  v202 = ProcessInformation;
  v226 = (char *)ProcessInformation;
  v206[2] = ProcessInformationLength;
  v189 = (volatile signed __int32 *)ReturnLength;
  memset(&ApcState, 0, sizeof(ApcState));
  v9 = 0LL;
  v184 = 0;
  Handle = 0LL;
  v187 = 0;
  memset(v278, 0, 0xA8uLL);
  v194 = 0LL;
  GroupMaskProcess = 0;
  v206[0] = 0;
  v224 = 0;
  v231 = 0LL;
  v232 = 0LL;
  v233 = 0LL;
  v266 = 0LL;
  v267 = 0LL;
  v268 = 0LL;
  v269 = 0LL;
  v270 = 0LL;
  v271 = 0LL;
  v272 = 0LL;
  v273 = 0LL;
  v274 = 0LL;
  v275 = 0LL;
  memset(&v216[1], 0, 32);
  v217 = 0LL;
  v201 = 0LL;
  v246 = 0LL;
  v208 = 0LL;
  JobObjectInformation = 0LL;
  v262 = 0LL;
  v263 = 0LL;
  v207 = 0LL;
  ObjectNameInformation = 0LL;
  v186 = 0;
  Object = 0LL;
  v213[0] = 0LL;
  v195 = 0;
  memset(v243, 0, sizeof(v243));
  v244 = 0LL;
  Src = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  v237 = 0LL;
  v238 = 0LL;
  v239 = 0LL;
  v240 = 0LL;
  v10 = KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10];
  v179[1] = v10;
  CurrentThread = KeGetCurrentThread();
  if ( !v10 )
    goto LABEL_23;
  if ( ProcessInformationClass == ProcessProtectionInformation )
  {
LABEL_13:
    v11 = 0LL;
    goto LABEL_14;
  }
  if ( ProcessInformationClass != ProcessCommitReleaseInformation )
  {
    if ( ((ProcessInformationClass - 70) & 0xFFFFFFFB) != 0 )
    {
      if ( ProcessInformationClass == ProcessSequenceNumber )
      {
        v11 = 7LL;
      }
      else if ( ProcessInformationClass == ProcessSecurityDomainInformation )
      {
        v11 = 7LL;
      }
      else
      {
        v11 = 3LL;
        if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging )
          v11 = 0LL;
      }
      goto LABEL_14;
    }
    goto LABEL_13;
  }
  v11 = 7LL;
LABEL_14:
  if ( (_DWORD)v5 )
  {
    if ( (v11 & v6) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v6 + v5 > 0x7FFFFFFF0000LL || v6 + v5 < v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( ReturnLength )
  {
    v12 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v12 = *(_DWORD *)v12;
  }
LABEL_23:
  switch ( ProcessInformationClass )
  {
    case ProcessBasicInformation:
      memset(v277, 0, 0xA8uLL);
      v179[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v21 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        LODWORD(v5) = 64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v21 = 0LL;
        ObjectNameInformation = 0LL;
      }
      v184 = v5;
      P = (PVOID)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v18 = result;
      i = result;
      if ( result < 0 )
        return result;
      v22 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = v22[1].AffinityPadding[4];
      if ( (v22->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v22);
      v23 = v22;
      if ( v18 >= 0 )
      {
        P = 0LL;
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)v22);
        if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 || v22 == CurrentThread->Process )
        {
          KeQueryAffinityProcess((__int64)v22, v277, &GroupMaskProcess, 0LL);
          v24 = GroupMaskProcess;
          if ( ((GroupMaskProcess - 1) & GroupMaskProcess) == 0 )
          {
            _BitScanForward((unsigned int *)&Group, GroupMaskProcess);
            goto LABEL_69;
          }
          if ( v22 == CurrentThread->Process )
          {
            Group = CurrentThread->UserAffinity.Group;
            if ( _bittest64(&v24, Group) )
            {
LABEL_69:
              if ( (_DWORD)Group != 20 )
                P = (PVOID)*((_QWORD *)v277 + Group + 1);
            }
          }
        }
        if ( v21 )
          PsQueryProcessAttributes(v22, (__int64)v179, 0LL);
        *(_QWORD *)(v6 + 16) = P;
        *(_DWORD *)(v6 + 24) = v22->BasePriority;
        *(_QWORD *)(v6 + 32) = v22[1].Header.WaitListHead.Flink;
        *(_QWORD *)(v6 + 40) = v22[1].AffinityPadding[2];
        if ( v21 )
        {
          *(_DWORD *)(v21 + 56) = 0;
          if ( PsIsProtectedProcess((__int64)v22) )
          {
            *(_DWORD *)(v21 + 56) = 1;
            LODWORD(v9) = 1;
          }
          v26 = v22[1].AffinityPadding[10];
          if ( v26 )
          {
            v27 = *(_WORD *)(v26 + 8);
            if ( v27 == 332 || v27 == 452 )
              *(_DWORD *)(v21 + 56) = v9 | 2;
          }
          v28 = (_DWORD *)&v22[1].DirectoryTableBase + 1;
          if ( (v22[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
            *(_DWORD *)(v21 + 56) |= 4u;
          v22 = (_KPROCESS *)Object;
          v29 = *(_DWORD *)(v21 + 56) ^ ((unsigned __int8)*(_DWORD *)(v21 + 56) ^ (unsigned __int8)(*((_DWORD *)Object + 280) >> 4)) & 8;
          *(_DWORD *)(v21 + 56) = v29;
          if ( v22->FreezeCount + ((*(_DWORD *)&v22->0 >> 3) & 1) )
          {
            v29 |= 0x10u;
            *(_DWORD *)(v21 + 56) = v29;
          }
          v30 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(*v28 >> 15)) & 0x20;
          *(_DWORD *)(v21 + 56) = v30;
          if ( v179[0] )
          {
            v30 |= 0x40u;
            *(_DWORD *)(v21 + 56) = v30;
          }
          if ( (v22->SecureState.SecureHandle & 1) != 0 )
          {
            v30 |= 0x80u;
            *(_DWORD *)(v21 + 56) = v30;
          }
          if ( *(_QWORD *)&v22[2].Affinity.Count )
            *(_DWORD *)(v21 + 56) = v30 | 0x100;
          v18 = i;
        }
        if ( ReturnLength )
          *ReturnLength = v5;
        goto LABEL_543;
      }
LABEL_559:
      ObfDereferenceObjectWithTag(v23, 0x79517350u);
      return v18;
    case ProcessQuotaLimits:
      return PspQueryQuotaLimits(ProcessHandle, 0x7FFFFFFF0000LL, (void *)v6, v5, ReturnLength, v10);
    case ProcessIoCounters:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      PsQueryStatisticsProcess((__int64)Object, v243);
      v231 = *(_OWORD *)((char *)&v243[2] + 8);
      v232 = *(_OWORD *)((char *)&v243[3] + 8);
      v233 = *(_OWORD *)((char *)&v243[4] + 8);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_OWORD *)v6 = v231;
      *(_OWORD *)(v6 + 16) = v232;
      *(_OWORD *)(v6 + 32) = v233;
      if ( ReturnLength )
        *ReturnLength = 48;
      return DeviceMapInformation;
    case ProcessVmCounters:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v32 = Object;
      Src = *((_OWORD *)Object + 73);
      LODWORD(v235) = *((_DWORD *)Object + 417);
      KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
      i = MmQueryWorkingSetInformation((_QWORD *)&v235 + 1, &v236, &v240, &v207, &v208, v206);
      KeUnstackDetachProcess(&ApcState);
      PsQueryProcessQuotaCounters(v32, 1LL, &v237, (char *)&v236 + 8);
      PsQueryProcessQuotaCounters(v33, 0LL, &v238, (char *)&v237 + 8);
      *((_QWORD *)&v238 + 1) = v32[201] << 12;
      *(_QWORD *)&v239 = *((_QWORD *)Object + 202) << 12;
      *((_QWORD *)&v240 + 1) = *((_QWORD *)Object + 293) << 12;
      *((_QWORD *)&v239 + 1) = *((_QWORD *)&v238 + 1);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      result = i;
      if ( i < 0 )
        return result;
      memmove((void *)v6, &Src, v5);
      if ( ReturnLength )
        *ReturnLength = v5;
      return 0;
    case ProcessTimes:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v34 = (struct _EX_RUNDOWN_REF *)Object;
      v35 = PsQueryRuntimeProcess((__int64)Object, &v195);
      v36 = KeMaximumIncrement;
      *(_QWORD *)(v6 + 16) = KeMaximumIncrement * (unsigned __int64)v35;
      *(_QWORD *)(v6 + 24) = v36 * v195;
      *(struct _EX_RUNDOWN_REF *)v6 = v34[141];
      *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v34[264];
      if ( ReturnLength )
        *ReturnLength = 32;
      goto LABEL_355;
    case ProcessDebugPort:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      Handle = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessLdtInformation:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x410u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
      goto LABEL_150;
    case ProcessDefaultHardErrorMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v31 = *((_DWORD *)Object + 382);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v31;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessPooledUsageAndLimits:
      return PspQueryPooledQuotaLimits(ProcessHandle, v10);
    case ProcessWorkingSetWatch:
    case ProcessWorkingSetWatchEx:
      return PspQueryWorkingSetWatch(ProcessHandle, (__int64)ReturnLength, v10);
    case ProcessPriorityClass:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      HIBYTE(v186) = *((_BYTE *)Object + 1463);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_WORD *)v6 = v186;
      if ( ReturnLength )
        *ReturnLength = 2;
      return 0;
    case ProcessWx86Information:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x400u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v43 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v43;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessHandleCount:
      v196 = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount(Object, &v196);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = v196;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessAffinityMask:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v34 = (struct _EX_RUNDOWN_REF *)Object;
      GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
      if ( ((GroupMaskProcess - 1) & GroupMaskProcess) != 0
        || (KeQueryAffinityProcess((__int64)v34, v278, &GroupMaskProcess, 0LL),
            ((GroupMaskProcess - 1) & GroupMaskProcess) != 0) )
      {
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        return -1073741811;
      }
      _BitScanForward((unsigned int *)&v83, GroupMaskProcess);
      v84 = *((_QWORD *)v278 + v83 + 1);
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v83;
      *(_QWORD *)v6 = v84;
      if ( ReturnLength )
        *ReturnLength = v5;
      goto LABEL_355;
    case ProcessPriorityBoost:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v44 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v44;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return DeviceMapInformation;
    case ProcessDeviceMap:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v188 = *(_DWORD *)(v6 + 40);
        v45 = v188;
        if ( (v188 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v45 = 0;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation(Object, v6, v45);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && ReturnLength )
        *ReturnLength = v5;
      return DeviceMapInformation;
    case ProcessSessionInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      SessionId = MmGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessWow64Information:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v47 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v47 )
        v9 = *v47;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessImageFileName:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v14 = v5 - 16;
      }
      else
      {
        v6 = (unsigned __int64)&v246;
        v14 = 0;
      }
      if ( (unsigned int)v5 >= 0x10 )
        v9 = (unsigned __int64)(v226 + 16);
      v184 = v14;
      DeviceMapInformation = PsQueryFullProcessImageName(Object, v6, v9, &v184);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v9 )
        DeviceMapInformation = -1073741820;
      if ( ReturnLength && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *ReturnLength = v184 + 16;
      return DeviceMapInformation;
    case ProcessLUIDDeviceMapsEnabled:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessBreakOnTermination:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v48 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v48;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessDebugObjectHandle:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, v10, &Handle);
      v39 = Handle;
      if ( DeviceMapInformation < 0 )
        v39 = 0LL;
      Handle = v39;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handle;
      if ( ReturnLength )
        *ReturnLength = 8;
      return DeviceMapInformation;
    case ProcessDebugFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessHandleTracing:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(v10) )
        return -1073741790;
      P = (PVOID)((unsigned int)(v5 - 16) / 0xA0uLL);
      v49 = v6 + 16;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v50 = result;
      if ( result >= 0 )
      {
        v51 = Object;
        v52 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v53 = v52;
        v207 = v52;
        if ( v52 )
        {
          v54 = ExReferenceHandleDebugInfo(v52);
          v55 = v54;
          v208 = v54;
          if ( v54 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v56 = (unsigned int)(*(_DWORD *)(v54 + 72) % *(_DWORD *)(v54 + 4));
            v197 = v56;
            while ( 1 )
            {
              v206[1] = v9;
              if ( (unsigned int)v9 >= *(_DWORD *)(v55 + 4) )
                break;
              v57 = (_OWORD *)(v55 + 160 * v56);
              v249 = v57[5];
              v250 = v57[6];
              v251 = v57[7];
              v252 = v57[8];
              v253 = v57[9];
              v254 = v57[10];
              v255 = v57[11];
              v256 = v57[12];
              v257 = v57[13];
              v258 = v57[14];
              v58 = v250;
              if ( *(_QWORD *)v6 == (_QWORD)v250 || !*(_QWORD *)v6 )
              {
                v59 = DWORD2(v250);
                if ( DWORD2(v250) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)P )
                  {
                    P = (PVOID)(unsigned int)((_DWORD)P - 1);
                    v225 = (int)P;
                    *(_QWORD *)v49 = v58;
                    *(_OWORD *)(v49 + 8) = v249;
                    *(_DWORD *)(v49 + 24) = v59;
                    *(_OWORD *)(v49 + 32) = v251;
                    *(_OWORD *)(v49 + 48) = v252;
                    *(_OWORD *)(v49 + 64) = v253;
                    *(_OWORD *)(v49 + 80) = v254;
                    *(_OWORD *)(v49 + 96) = v255;
                    *(_OWORD *)(v49 + 112) = v256;
                    *(_OWORD *)(v49 + 128) = v257;
                    *(_OWORD *)(v49 + 144) = v258;
                    v49 += 160LL;
                    v247 = v49;
                  }
                  else
                  {
                    v50 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( !(_DWORD)v56 )
                LODWORD(v56) = *(_DWORD *)(v55 + 4);
              v56 = (unsigned int)(v56 - 1);
              v197 = v56;
              LODWORD(v9) = v9 + 1;
            }
            if ( ReturnLength )
              *ReturnLength = v49 - v6;
            ExDereferenceHandleDebugInfo(v53, v55);
            v60 = Object;
            ObDereferenceProcessHandleTable(Object);
            ObfDereferenceObjectWithTag(v60, 0x79517350u);
            return v50;
          }
          else
          {
            ObDereferenceProcessHandleTable(v51);
            ObfDereferenceObjectWithTag(v51, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v51, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessIoPriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessExecuteFlags:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        CurrentProcess = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        CurrentProcess = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(CurrentProcess, &v187);
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v62, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v187;
        if ( ReturnLength )
          *ReturnLength = 4;
      }
      return ExecuteOptions;
    case ProcessCookie:
      v209.QuadPart = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v63 = (struct _DMA_ADAPTER *)PsGetCurrentProcess();
        v189 = (volatile signed __int32 *)v63;
        Object = v63;
      }
      else
      {
        v215 = 0LL;
        result = ObReferenceObjectByHandle(ProcessHandle, 0x20u, (POBJECT_TYPE)PsProcessType, v10, &v215, 0LL);
        v63 = (struct _DMA_ADAPTER *)v215;
        v189 = (volatile signed __int32 *)v215;
        Object = v215;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        DmaOperations = (int)v63[82].DmaOperations;
        if ( DmaOperations )
          break;
        KeQuerySystemTimePrecise(&v209);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v67 = ExGenRandom(1);
        v68 = __rdtsc();
        _InterlockedCompareExchange(
          v189 + 330,
          v68 ^ v67 ^ CurrentPrcb->MmPageFaultCount ^ v209.LowPart ^ v209.HighPart ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        v63 = (struct _DMA_ADAPTER *)Object;
        v189 = (volatile signed __int32 *)Object;
      }
      *(_DWORD *)v6 = DmaOperations;
      if ( ReturnLength )
        *ReturnLength = 4;
      if ( ProcessHandle != (HANDLE)-1LL )
        HalPutDmaAdapter(v63);
      return v9;
    case ProcessImageInformation:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v69 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == CurrentThread->Process )
      {
        Count = (struct _DMA_ADAPTER *)*((_QWORD *)Object + 163);
        if ( !Count )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
      {
        Count = (struct _DMA_ADAPTER *)v69[163].Count;
        if ( Count )
          ObfReferenceObject(v69[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection(v69 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Count = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v69, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Count, 1, v6);
        if ( (_DWORD)v9 )
          HalPutDmaAdapter(Count);
        if ( DeviceMapInformation >= 0 && ReturnLength )
          *ReturnLength = 64;
      }
      return DeviceMapInformation;
    case ProcessCycleTime:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v71 = result;
      if ( result < 0 )
        return result;
      v72 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, v213);
      *(_QWORD *)(v6 + 8) = v213[0];
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_649;
    case ProcessPagePriority:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessImageFileNameWin32:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v16 = (struct _EX_RUNDOWN_REF *)Object;
      v17 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v194 = v17;
      if ( v17 )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v17);
          ExReleaseRundownProtection(v16 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer((struct _EX_RUNDOWN_REF *)Object, (ULONG_PTR *)&v194);
        v17 = (struct _FILE_OBJECT *)v194;
      }
      ObfDereferenceObjectWithTag(v16, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v18 = IoQueryFileDosDeviceName(v17, &ObjectNameInformation);
      HalPutDmaAdapter((PADAPTER_OBJECT)v17);
      if ( v18 >= 0 )
      {
        v19 = ObjectNameInformation;
        v20 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v20 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v19->Name.MaximumLength;
          if ( v19->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v19->Name.Buffer, v19->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v18 = -1073741820;
          i = -1073741820;
        }
        if ( ReturnLength )
          *ReturnLength = v20;
        ExFreePoolWithTag(v19, 0);
      }
      return v18;
    case ProcessImageFileMapping:
      DmaAdapter = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v75 = *(void **)v6;
      v248 = *(void **)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObReferenceObjectByHandleWithTag(
                         v75,
                         0x100020u,
                         (POBJECT_TYPE)IoFileObjectType,
                         v10,
                         0x79517350u,
                         &v194,
                         0LL);
      v38 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_122;
      ProcessHandleInformation = PsReferenceProcessFilePointer(
                                   (struct _EX_RUNDOWN_REF *)Object,
                                   (ULONG_PTR *)&DmaAdapter);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v77 = (struct _DMA_ADAPTER *)v194;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_365;
      v78 = (_DMA_OPERATIONS *)*((_QWORD *)v194 + 5);
      v79 = DmaAdapter;
      v80 = DmaAdapter[2].DmaOperations;
      v81 = 0;
      if ( v78 != v80 )
        v81 = -1073741823;
      HalPutDmaAdapter((PADAPTER_OBJECT)v194);
      HalPutDmaAdapter(v79);
      result = v81;
      if ( v78 == v80 && ReturnLength )
        *ReturnLength = 0;
      return result;
    case ProcessAffinityUpdateMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v188 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v82 = (v188 >> 19) & 1 | 2;
      if ( (v188 & 0x40000) == 0 )
        v82 = (v188 >> 19) & 1;
      *(_DWORD *)v6 = v82;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessMemoryAllocationMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v188 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v188 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ProcessGroupInformation:
      if ( !ReturnLength || (v5 & 1) != 0 )
        return -1073741811;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v85 = KeQueryGroupMaskProcess((__int64)Object);
        GroupMaskProcess = v85;
        v87 = v184;
        do
        {
          _BitScanForward(&v88, v85);
          v87 += 2;
          v184 = v87;
          if ( v87 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v88;
            v6 += 2LL;
            v245 = v6;
          }
          _bittestandreset((signed __int32 *)&GroupMaskProcess, v88);
          v85 = GroupMaskProcess;
        }
        while ( GroupMaskProcess );
        *ReturnLength = v87;
        v89 = (unsigned int)v5 < v87 ? 0xC0000023 : 0;
        i = v89;
        ObfDereferenceObjectWithTag(v86, 0x79517350u);
        return v89;
      }
      return result;
    case ProcessConsoleHostProcess:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v90 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v90;
      if ( ReturnLength )
        *ReturnLength = 8;
      return 0;
    case ProcessWindowInformation:
      memset(&v265, 0, sizeof(v265));
      v190 = 0;
      *(_OWORD *)v203 = 0LL;
      v228 = 0LL;
      if ( v10 != 1 )
        return -1073741823;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 1,
                 0x79517350u,
                 &Object,
                 0LL);
      i = result;
      if ( result >= 0 )
      {
        v91 = (struct _KPROCESS *)Object;
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 139) )
        {
          KeStackAttachProcess(v91, &v265);
          v92 = (unsigned __int64 *)v91[1].AffinityPadding[10];
          if ( v92 )
            v9 = *v92;
          if ( v9 )
          {
            v227 = *(unsigned int *)(v9 + 16);
            v190 = *(_DWORD *)(v227 + 104);
            v93 = *(_QWORD *)(v227 + 112);
            v213[1] = v93;
            v203[0] = v93;
            *(_QWORD *)&v203[2] = HIDWORD(v93);
          }
          else
          {
            v210 = *(_QWORD *)(v91[1].AffinityPadding[4] + 32);
            v94 = v210 + 164;
            if ( (unsigned __int64)(v210 + 164) >= 0x7FFFFFFF0000LL )
              v94 = 0x7FFFFFFF0000LL;
            v190 = *(_DWORD *)v94;
            v229 = 0LL;
            v95 = v210 + 176;
            if ( (unsigned __int64)(v210 + 176) >= 0x7FFFFFFF0000LL )
              v95 = 0x7FFFFFFF0000LL;
            LODWORD(v229) = *(_DWORD *)v95;
            *((_QWORD *)&v229 + 1) = *(_QWORD *)(v95 + 8);
            *(_OWORD *)v203 = v229;
            LOWORD(v93) = v229;
          }
          DeviceMapInformation = i;
          KeUnstackDetachProcess(&v265);
          if ( DeviceMapInformation < 0 )
            goto LABEL_353;
          v96 = (unsigned __int16)v93 + 6;
          if ( ReturnLength )
            *ReturnLength = v96;
          if ( (unsigned int)v5 >= v96 )
          {
            *(_DWORD *)v6 = v190;
            *(_WORD *)(v6 + 4) = v93;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v93 )
          {
            v97 = PsGetCurrentProcess();
            *(_QWORD *)Tag = (unsigned __int16)v93;
            v34 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MmCopyVirtualMemory(
                                     (ULONG_PTR)Object,
                                     *(char **)&v203[2],
                                     (ULONG_PTR)v97,
                                     (char *)(v6 + 6),
                                     *(size_t *)Tag,
                                     1,
                                     &v228);
          }
          else
          {
LABEL_353:
            v34 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection(v34 + 139);
LABEL_355:
          ObfDereferenceObjectWithTag(v34, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_334:
          ObfDereferenceObjectWithTag(v91, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case ProcessHandleInformation:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( ReturnLength )
          *ReturnLength = 16;
        return -1073741820;
      }
      v211 = 0LL;
      result = ObReferenceObjectByHandle(ProcessHandle, 0x400u, (POBJECT_TYPE)PsProcessType, v10, &v211, 0LL);
      if ( result >= 0 )
      {
        KeEnterCriticalRegionThread((__int64)CurrentThread);
        v98 = (struct _DMA_ADAPTER *)v211;
        v99 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)v211);
        if ( v99 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v99, v6, (unsigned int)v5, ReturnLength);
          ObDereferenceProcessHandleTable(v98);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v77 = v98;
LABEL_365:
        HalPutDmaAdapter(v77);
        return ProcessHandleInformation;
      }
      return result;
    case ProcessMitigationPolicy:
      v198 = 0;
      v180 = 0;
      v181 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v100 = *(_DWORD *)v6;
      v230 = *(_DWORD *)v6;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        Object = PsGetCurrentProcess();
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x1000u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case ProcessHandleCheckingMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v136 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v137 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v137 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryHandleExceptions(v137) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_517;
    case ProcessKeepAliveCount:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      LOBYTE(v138) = 1;
      *(_DWORD *)v6 = PsGetKeepAliveCountProcess(Object, v138);
      *(_DWORD *)(v6 + 4) = PsGetKeepAliveCountProcess(v139, 0LL);
      goto LABEL_122;
    case ProcessHandleTable:
      v212 = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->$6BEBF485330D18E60173AA6D991B35AC::gap0[10],
                 1LL,
                 &v212,
                 &P);
      if ( result >= 0 )
      {
        v140 = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x440u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
        if ( v140 >= 0 )
        {
          v216[0] = 0LL;
          v141 = Object;
          v142 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v142 )
          {
            *(_QWORD *)&v216[0] = v212;
            *((_QWORD *)&v216[0] + 1) = (unsigned int)v5 >> 2;
            ExEnumHandleTable(v142, PspHandleTableWalker, v216, 0LL);
            ObDereferenceProcessHandleTable(v141);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v141, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 4 * HIDWORD(v216[0]);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v140;
        }
      }
      return result;
    case ProcessCheckStackExtentsMode:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x400u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_122;
    case ProcessCommandLineInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v143 = v10;
      v144 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((ULONG_PTR)Object, v6, v5, v143, ReturnLength);
      goto LABEL_534;
    case ProcessProtectionInformation:
      v18 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 < 0 )
        return v18;
      if ( (_DWORD)v5 )
      {
        v22 = (_KPROCESS *)Object;
        *(_BYTE *)v6 = PsGetProcessProtection((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 1;
        v18 = 0;
      }
      else
      {
        v18 = -1073741820;
        v22 = (_KPROCESS *)Object;
      }
      if ( !v22 )
        return v18;
LABEL_543:
      ObfDereferenceObjectWithTag(v22, 0x79517350u);
      return v18;
    case ProcessTelemetryIdInformation:
      DeviceMapInformation = ObReferenceObjectByHandleWithTag(
                               ProcessHandle,
                               0x1000u,
                               (POBJECT_TYPE)PsProcessType,
                               v10,
                               0x79517350u,
                               &Object,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v146 = v10;
      v144 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo(
                             (__int64)Object,
                             (char *)v6,
                             (unsigned int)v5,
                             v146,
                             ReturnLength);
LABEL_534:
      DeviceMapInformation = ProcessCommandLine;
      if ( v144 )
        goto LABEL_535;
      return DeviceMapInformation;
    case ProcessCommitReleaseInformation:
      v199 = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v204 = *(_OBJECT_NAME_INFORMATION *)v6;
        v205 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v204.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v204.Name.MaximumLength + 1) >= 8u || v204.Name.Buffer )
          {
            v18 = -1073741811;
          }
          else
          {
            v18 = ObReferenceObjectByHandleWithTag(
                    ProcessHandle,
                    0x1000u,
                    (POBJECT_TYPE)PsProcessType,
                    v10,
                    0x79517350u,
                    &Object,
                    0LL);
            if ( v18 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &v199, &v204.Name.Buffer, &v205, (_QWORD *)&v205 + 1);
              *(_DWORD *)(&v204.Name.MaximumLength + 1) ^= ((unsigned __int8)v199 ^ *((_BYTE *)&v204.Name.MaximumLength
                                                                                    + 2)) & 1;
              v204.Name.Buffer = (wchar_t *)((__int64)v204.Name.Buffer << 12);
              *(_QWORD *)&v205 = (_QWORD)v205 << 12;
              *((_QWORD *)&v205 + 1) <<= 12;
              *(_OBJECT_NAME_INFORMATION *)v6 = v204;
              *(_OWORD *)(v6 + 16) = v205;
              v18 = 0;
            }
          }
        }
        else
        {
          v18 = -1073741735;
        }
      }
      else
      {
        v18 = -1073741820;
      }
      v23 = Object;
      if ( Object )
        goto LABEL_559;
      return v18;
    case ProcessDefaultCpuSetsInformation:
    case ProcessAllowedCpuSetsInformation:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
        return -1073741820;
      v18 = ObReferenceObjectByHandleWithTag(
              ProcessHandle,
              0x1000u,
              (POBJECT_TYPE)PsProcessType,
              v10,
              0x79517350u,
              &Object,
              0LL);
      if ( v18 >= 0 )
      {
        LOBYTE(v9) = ProcessInformationClass == ProcessAllowedCpuSetsInformation;
        v149 = 8 * KeQueryCpuSetsProcess((__int64)Object, v280, v148, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = v149;
        if ( v149 < (unsigned int)v5 )
          LODWORD(v5) = v149;
        memmove((void *)v6, v280, (unsigned int)v5);
      }
      return v18;
    case ProcessJobMemoryInformation:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        *((_QWORD *)&v216[2] + 1) = 0LL;
        v217 = 0LL;
        if ( *((_QWORD *)Object + 162) )
        {
          KeStackAttachProcess((PRKPROCESS)Object, &ApcState);
          ZwQueryInformationJobObject(0LL, JobObjectMemoryUsageInformation, &JobObjectInformation, 0x28u, 0LL);
          ZwQueryInformationJobObject(0LL, JobObjectExtendedLimitInformation, &v266, 0x98u, 0LL);
          KeUnstackDetachProcess(&ApcState);
          *(_OWORD *)((char *)&v216[1] + 8) = JobObjectInformation;
          *(_QWORD *)&v216[1] = v262;
          v73 = v217;
          if ( (v267 & 0x200000) != 0 )
            v73 = v275;
          v217 = v73;
          v74 = *((_QWORD *)&v216[2] + 1);
          if ( (v267 & 0x200) != 0 )
            v74 = *((_QWORD *)&v273 + 1);
          *((_QWORD *)&v216[2] + 1) = v74;
          *(__m256i *)v6 = *(__m256i *)&v216[1];
          *(_QWORD *)(v6 + 32) = v217;
          if ( ReturnLength )
            *ReturnLength = 40;
        }
        else
        {
          LODWORD(v9) = -1073741394;
        }
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      return result;
    case ProcessInPrivate:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_122;
    case ProcessRaiseUMExceptionOnInvalidHandleClose:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v136 = result;
      i = result;
      if ( result < 0 )
        return result;
      v91 = (struct _KPROCESS *)Object;
      v147 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v147 )
        goto LABEL_334;
      LOBYTE(v9) = (unsigned __int8)ExQueryRaiseUMExceptionOnInvalidHandleClose(v147) != 0;
      *(_DWORD *)v6 = v9;
LABEL_517:
      ObDereferenceProcessHandleTable(v91);
      ObfDereferenceObjectWithTag(v91, 0x79517350u);
      return v136;
    case ProcessIumChallengeResponse:
      return PsIumGetOnDemandDebugChallenge(ProcessHandle, v6, (unsigned int)v5, ReturnLength);
    case ProcessChildProcessInformation:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v150 = PsGetCurrentProcess();
        Object = v150;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v150 = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(v150);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v152 = NoChildProcessRestrictedPolicy - 1;
      if ( !v152 )
        goto LABEL_586;
      v153 = v152 - 1;
      if ( v153 )
      {
        if ( v153 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_586:
        *(_BYTE *)v6 = 1;
      }
      if ( ReturnLength )
        *ReturnLength = 3;
      if ( ProcessHandle == (HANDLE)-1LL )
        return v9;
LABEL_590:
      ObfDereferenceObjectWithTag(v150, 0x79517350u);
      return 0;
    case ProcessHighGraphicsPriorityInformation:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_122;
    case ProcessSubsystemInformation:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C1E090;
      *(_DWORD *)v6 = v9;
      if ( ReturnLength )
        *ReturnLength = 4;
      goto LABEL_122;
    case ProcessEnergyValues:
      memset(v279, 0, sizeof(v279));
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      v71 = result;
      if ( result < 0 )
        return result;
      v72 = Object;
      PsQueryProcessEnergyValues(Object, v279);
      if ( (unsigned int)v5 > 0x1B0 )
        LODWORD(v5) = 432;
      memmove((void *)v6, v279, (unsigned int)v5);
      if ( ReturnLength )
        *ReturnLength = 432;
      goto LABEL_649;
    case ProcessPowerThrottlingState:
      v259 = 0LL;
      v260 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v155 = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               0x1000u,
               (POBJECT_TYPE)PsProcessType,
               v10,
               0x79517350u,
               &Object,
               0LL);
      if ( v155 >= 0 )
      {
        v156 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v157 = Object;
        v155 = v156(Object, &v259);
        if ( v155 >= 0 )
        {
          *(_QWORD *)v6 = v259;
          *(_DWORD *)(v6 + 8) = v260;
          if ( ReturnLength )
            *ReturnLength = 12;
          v155 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v157, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v155;
    case ProcessWin32kSyscallFilterInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( ProcessHandle == (HANDLE)-1LL )
      {
        v158 = PsGetCurrentProcess();
        Object = v158;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ProcessHandle,
                   0x400u,
                   (POBJECT_TYPE)PsProcessType,
                   v10,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v158 = Object;
      }
      *(_DWORD *)v6 = 0;
      v159 = v158[628];
      v160 = 0;
      if ( (v159 & 0x4000) != 0 )
      {
        v160 = 1;
        *(_DWORD *)v6 = 1;
        v159 = v158[628];
      }
      if ( (v159 & 0x8000) != 0 )
        *(_DWORD *)v6 = v160 | 2;
      *(_DWORD *)(v6 + 4) = v158[602];
      if ( ReturnLength )
        *ReturnLength = 8;
      if ( ProcessHandle != (HANDLE)-1LL )
        goto LABEL_629;
      return v9;
    case ProcessWakeInformation:
      if ( v10 )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 0,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v144 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(
                                 (__int64)CurrentThread,
                                 (__int64)Object,
                                 v6);
        if ( DeviceMapInformation >= 0 && ReturnLength )
        {
          *ReturnLength = 48;
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_535:
          ObfDereferenceObjectWithTag(v144, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case ProcessEnergyTrackingState:
      memset(v276, 0, sizeof(v276));
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result >= 0 )
      {
        v161 = Object;
        PoQueryProcessEnergyTrackingState(Object, v276);
        v162 = 144;
        if ( (unsigned int)v5 < 0x90 )
          v162 = v5;
        memmove((void *)v6, v276, v162);
        if ( ReturnLength )
          *ReturnLength = v162;
        i = 0;
        ObfDereferenceObjectWithTag(v161, 0x79517350u);
        return 0;
      }
      return result;
    case ProcessCaptureTrustletLiveDump:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x418u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v72 = Object;
      if ( *((_QWORD *)Object + 124) )
      {
        v71 = VslLiveDumpCaptureProcess(Object);
LABEL_649:
        ObfDereferenceObjectWithTag(v72, 0x79517350u);
        return v71;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case ProcessTelemetryCoverage:
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, ReturnLength);
LABEL_150:
      v42 = ProcessTelemetryCoverage;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v42;
    case ProcessEnableReadWriteVmLogging:
    case ProcessEnableLogging:
      if ( ProcessInformationClass == ProcessEnableReadWriteVmLogging && !(_DWORD)v5
        || ProcessInformationClass == ProcessEnableLogging && (unsigned int)v5 < 4 )
      {
        return -1073741820;
      }
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
      if ( ProcessInformationClass == ProcessEnableLogging )
        *(_DWORD *)v6 |= (v38[543] >> 17) & 0xC;
      goto LABEL_122;
    case ProcessUptimeInformation:
      v241 = 0LL;
      v242 = 0LL;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v219 = 0LL;
      v165 = 0LL;
      v220 = 0LL;
      v200 = 0LL;
      v221 = 0LL;
      v223 = 0LL;
      v166 = CurrentThread;
      v150 = Object;
      PspLockProcessSecurityShared((__int64)Object, (__int64)CurrentThread);
      v167 = *((_QWORD *)v150 + 292) >> 61;
      if ( (unsigned __int64)(v167 - 3) <= 1
        && (v200 = (HANDLE)(*((_QWORD *)v150 + 292) & 0x1FFFFFFFFFFFFFFFLL),
            v221 = v200,
            v219 = *((_QWORD *)v150 + 291),
            v165 = v219 - *((_QWORD *)v150 + 288),
            v220 = v165,
            v167 == 3) )
      {
        v168 = 512;
      }
      else
      {
        v168 = v223;
      }
      LODWORD(v223) = v168 & 0xFFFFFE00 | *((_BYTE *)v150 + 2171) & 7 | (2
                                                                       * (*((_BYTE *)v150 + 2171) & 0x38 | (32 * (*((_DWORD *)v150 + 543) & 4))));
      PspUnlockProcessShared((__int64)v150, (__int64)v166);
      PsGetProcessDeepFreezeStats(v150, &v241);
      v218 = v241;
      v222 = v242;
      if ( !v165 )
        v220 = v241 - *((_QWORD *)v150 + 288);
      if ( !v200 )
        v221 = (HANDLE)(*((_QWORD *)&v241 + 1) - *((_QWORD *)v150 + 289) - v242);
      v169 = 56;
      if ( (unsigned int)v5 < 0x38 )
        v169 = v5;
      memmove((void *)v6, &v218, v169);
      if ( ReturnLength )
        *ReturnLength = v169;
      i = 0;
      goto LABEL_590;
    case ProcessImageSection:
      v200 = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( v10 )
      {
        v163 = v6;
        if ( v6 >= 0x7FFFFFFF0000LL )
          v163 = 0x7FFFFFFF0000LL;
        *(_QWORD *)v163 = *(_QWORD *)v163;
      }
      v164 = PsGetCurrentProcess();
      if ( ProcessHandle != (HANDLE)-1LL || v164 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer((PVOID)v164[1].Affinity.Bitmap[17], 0, 0LL, 5u, MmSectionObjectType, v10, &v200);
      if ( result >= 0 )
      {
        *(_QWORD *)v6 = v200;
        if ( ReturnLength )
          *ReturnLength = 8;
      }
      return result;
    case ProcessSequenceNumber:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v38 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( ReturnLength )
        *ReturnLength = 8;
LABEL_122:
      ObfDereferenceObjectWithTag(v38, 0x79517350u);
      return ExecuteOptions;
    case ProcessSecurityDomainInformation:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ProcessHandle,
                 0x1000u,
                 (POBJECT_TYPE)PsProcessType,
                 v10,
                 0x79517350u,
                 &Object,
                 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v175, 0);
        *(_QWORD *)v6 = PsGetProcessSecurityDomain((__int64)Object);
        if ( ReturnLength )
          *ReturnLength = 8;
        i = 0;
LABEL_629:
        ObfDereferenceObjectWithTag(v158, 0x79517350u);
        return 0;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case ProcessLeapSecondInformation:
      if ( (_DWORD)v5 == 8 )
      {
        if ( ProcessHandle == (HANDLE)-1LL )
        {
          v170 = PsGetCurrentProcess();
          v171 = v170[1].AffinityPadding[4];
          if ( v171 )
          {
            v172 = 0LL;
            v173 = (__int64 *)v170[1].AffinityPadding[10];
            if ( v173 )
              v172 = *v173;
            if ( v172 )
            {
              if ( (*(_DWORD *)(v172 + 1140) & 1) != 0 )
                LODWORD(v201) = 1;
            }
            else
            {
              v174 = v201;
              if ( (*(_BYTE *)(v171 + 1984) & 1) != 0 )
                v174 = 1;
              LODWORD(v201) = v174;
            }
          }
          *(_QWORD *)v6 = v201;
          if ( ReturnLength )
            *ReturnLength = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( ReturnLength )
          *ReturnLength = 8;
        return -1073741820;
      }
    default:
      return -1073741821;
  }
  switch ( v100 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v101 = Object;
      v102 = *((_DWORD *)Object + 628);
      if ( (v102 & 0x40) == 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v102 = v101[628];
      }
      if ( (v102 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v102 = v101[628];
      }
      if ( (v102 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v102 = v101[628];
      }
      if ( (v102 & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_510;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v108 = Object;
      v109 = *((_DWORD *)Object + 628);
      if ( (v109 & 0x100) != 0 )
      {
        v110 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v109 & 0x800) == 0 )
          goto LABEL_404;
        v110 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v110;
LABEL_404:
      v111 = v108[628];
      if ( (v111 & 0x200) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v111 = v108[628];
      }
      if ( (v111 & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 3:
      i = 0;
      v103 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v103 )
      {
        ExQueryHandleExceptionsPermanency(v103, &v180, &v181);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v180 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v181 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ObDereferenceProcessHandleTable(Object);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_510;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v104 = *((_DWORD *)Object + 628);
      if ( (v104 & 0x1000) != 0 )
      {
        v105 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v104 & 0x2000) == 0 )
          goto LABEL_393;
        v105 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v105;
LABEL_393:
      v106 = *((_DWORD *)Object + 652);
      if ( (v106 & 2) != 0 )
      {
        v107 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v106 & 4) == 0 )
          goto LABEL_510;
        v107 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v107;
      goto LABEL_510;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_510;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v112 = Object;
      v113 = *((_DWORD *)Object + 628);
      if ( (v113 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v113 = v112[628];
      }
      if ( (v113 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v113 = v112[628];
      }
      if ( (v113 & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v198);
      *(_DWORD *)(v6 + 4) = v198;
      goto LABEL_510;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v114 = *((_DWORD *)Object + 628);
      if ( (v114 & 0x10000) != 0 )
      {
        v115 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v114 & 0x20000) == 0 )
          goto LABEL_510;
        v115 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v115;
      goto LABEL_510;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v116 = Object;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 0x80000) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v117 & 0x100000) == 0 )
          goto LABEL_431;
        v118 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v118;
LABEL_431:
      v119 = v116[628];
      if ( (v119 & 0x200000) != 0 )
      {
        v120 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v119 & 0x400000) == 0 )
          goto LABEL_436;
        v120 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v120;
LABEL_436:
      if ( (v116[628] & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_510;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_510;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v121 = Object;
      v122 = *((_DWORD *)Object + 629);
      if ( (v122 & 1) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v122 = v121[629];
      }
      if ( (v122 & 4) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v122 = v121[629];
      }
      if ( (v122 & 0x400) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v122 = v121[629];
      }
      if ( (v122 & 0x10) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v122 = v121[629];
      }
      if ( (v122 & 0x40) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v122 = v121[629];
      }
      if ( (v122 & 0x100) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x400u;
        v122 = v121[629];
      }
      if ( (v122 & 2) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v122 = v121[629];
      }
      if ( (v122 & 8) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v122 = v121[629];
      }
      if ( (v122 & 0x800) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v122 = v121[629];
      }
      if ( (v122 & 0x20) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v122 = v121[629];
      }
      if ( (v122 & 0x80u) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x200u;
        v122 = v121[629];
      }
      if ( (v122 & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_510;
    case 13:
      i = 0;
      v123 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v124 = v123 - 1;
      if ( !v124 )
        goto LABEL_470;
      v125 = v124 - 1;
      if ( v125 )
      {
        if ( v125 != 1 )
          goto LABEL_510;
        v126 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_470:
        v126 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v126;
      goto LABEL_510;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v130 = Object;
      v131 = *((_DWORD *)Object + 628);
      if ( (v131 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v131 = v130[628];
      }
      if ( v131 < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      v132 = Object;
      v133 = *((_DWORD *)Object + 629);
      if ( (v133 & 0x1000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v133 = v132[629];
      }
      if ( (v133 & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_510;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v134 = Object;
      v135 = *((_DWORD *)Object + 629);
      if ( (v135 & 0x4000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 1u;
        v135 = v134[629];
      }
      if ( (v135 & 0x8000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 2u;
        v135 = v134[629];
      }
      if ( (v135 & 0x20000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 4u;
        v135 = v134[629];
      }
      if ( (v135 & 0x40000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 8u;
        v135 = v134[629];
      }
      if ( (v135 & 0x100000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x10u;
        v135 = v134[629];
      }
      if ( (v135 & 0x200000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x20u;
        v135 = v134[629];
      }
      if ( (v135 & 0x400000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x40u;
        v135 = v134[629];
      }
      if ( (v135 & 0x800000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x80u;
        v135 = v134[629];
      }
      if ( (v135 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v6 + 4) |= 0x100u;
        v135 = v134[629];
      }
      if ( v135 < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_510;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy((struct _KPROCESS *)Object);
      *(_DWORD *)(v6 + 4) = 0;
      v128 = RedirectionTrustPolicy - 1;
      if ( v128 )
      {
        if ( v128 != 1 )
          goto LABEL_510;
        v129 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v129 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v129;
LABEL_510:
      if ( ProcessHandle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_510;
  }
}
