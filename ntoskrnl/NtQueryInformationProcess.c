/*
 * XREFs of NtQueryInformationProcess @ 0x1407215F0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     KeQuerySystemTimePrecise @ 0x1402384E0 (KeQuerySystemTimePrecise.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402459D0 (PsIsCurrentThreadInServerSilo.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     KeQueryGroupMaskProcess @ 0x1402961A4 (KeQueryGroupMaskProcess.c)
 *     MmGetSessionId @ 0x140299600 (MmGetSessionId.c)
 *     MmQueryWorkingSetInformation @ 0x140299640 (MmQueryWorkingSetInformation.c)
 *     KeQueryAffinityProcess @ 0x14029A300 (KeQueryAffinityProcess.c)
 *     ExGetExtensionTable @ 0x1402C57F0 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402C5820 (ExReleaseExtensionTable.c)
 *     ExUnlockUserBuffer @ 0x1402CFFD4 (ExUnlockUserBuffer.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     PsGetWin32KFilterSet @ 0x1402E0F20 (PsGetWin32KFilterSet.c)
 *     PsQueryProcessCommandLine @ 0x1402E8A40 (PsQueryProcessCommandLine.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     xKdEnumerateDebuggingDevices @ 0x1403B1960 (xKdEnumerateDebuggingDevices.c)
 *     ExQueryHandleExceptionsPermanency @ 0x1403C1108 (ExQueryHandleExceptionsPermanency.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040A0E4 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     ZwQueryInformationJobObject @ 0x140414D90 (ZwQueryInformationJobObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeQueryCpuSetsProcess @ 0x140572B54 (KeQueryCpuSetsProcess.c)
 *     PsQueryStatisticsProcess @ 0x1406A8F30 (PsQueryStatisticsProcess.c)
 *     PsQueryProcessEnergyValues @ 0x1406B0B60 (PsQueryProcessEnergyValues.c)
 *     PsQueryProcessAttributes @ 0x1406D3448 (PsQueryProcessAttributes.c)
 *     ExEnumHandleTable @ 0x14070F670 (ExEnumHandleTable.c)
 *     ObGetProcessHandleCount @ 0x14071172C (ObGetProcessHandleCount.c)
 *     ObReferenceProcessHandleTable @ 0x140711794 (ObReferenceProcessHandleTable.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14071D7DC (EtwQueryProcessTelemetryInfo.c)
 *     PsQueryFullProcessImageName @ 0x14071F6D4 (PsQueryFullProcessImageName.c)
 *     PspQueryQuotaLimits @ 0x14071F77C (PspQueryQuotaLimits.c)
 *     IoQueryFileDosDeviceName @ 0x14071FFB0 (IoQueryFileDosDeviceName.c)
 *     PsQueryRuntimeProcess @ 0x140720A5C (PsQueryRuntimeProcess.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     ObQueryDeviceMapInformation @ 0x140720E70 (ObQueryDeviceMapInformation.c)
 *     PsReferenceProcessFilePointer @ 0x14074C940 (PsReferenceProcessFilePointer.c)
 *     ExLockUserBuffer @ 0x14075D5A4 (ExLockUserBuffer.c)
 *     PspAllocateAndQueryProcessNotificationChannel @ 0x1407825CC (PspAllocateAndQueryProcessNotificationChannel.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140789FC0 (PsQueryTotalCycleTimeProcess.c)
 *     ExIsRestrictedCaller @ 0x14078A078 (ExIsRestrictedCaller.c)
 *     PspGetRedirectionTrustPolicy @ 0x14078F55C (PspGetRedirectionTrustPolicy.c)
 *     PspGetNoChildProcessRestrictedPolicy @ 0x14079B490 (PspGetNoChildProcessRestrictedPolicy.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCopyVirtualMemory @ 0x1407C5950 (MiCopyVirtualMemory.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     PsGetProcessDeepFreezeStats @ 0x1407E844C (PsGetProcessDeepFreezeStats.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExSystemExceptionFilter @ 0x140861790 (ExSystemExceptionFilter.c)
 *     KeGetExecuteOptions @ 0x140872398 (KeGetExecuteOptions.c)
 *     PsQueryProcessSignatureMitigationPolicy @ 0x140872660 (PsQueryProcessSignatureMitigationPolicy.c)
 *     DbgkOpenProcessDebugPort @ 0x140933D80 (DbgkOpenProcessDebugPort.c)
 *     VslGetSecurePebAddress @ 0x14093F540 (VslGetSecurePebAddress.c)
 *     PoQueryProcessEnergyTrackingState @ 0x1409955A8 (PoQueryProcessEnergyTrackingState.c)
 *     PspQueryPooledQuotaLimits @ 0x1409AC410 (PspQueryPooledQuotaLimits.c)
 *     PspQueryWorkingSetWatch @ 0x1409AC5BC (PspQueryWorkingSetWatch.c)
 *     PsIumGetOnDemandDebugChallenge @ 0x1409B3380 (PsIumGetOnDemandDebugChallenge.c)
 *     EtwQueryProcessTelemetryCoverage @ 0x1409E52A8 (EtwQueryProcessTelemetryCoverage.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F5EC0 (ExDereferenceHandleDebugInfo.c)
 *     ExQueryProcessHandleInformation @ 0x1409F60F4 (ExQueryProcessHandleInformation.c)
 *     ExReferenceHandleDebugInfo @ 0x1409F62F8 (ExReferenceHandleDebugInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall NtQueryInformationProcess(
        HANDLE Handle,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  size_t v5; // r13
  unsigned __int64 v6; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int8 PreviousMode; // bl
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rcx
  NTSTATUS result; // eax
  __int128 *v17; // rdx
  void *v18; // rax
  void *v19; // rsi
  int DeviceMapInformation; // edi
  struct _EX_RUNDOWN_REF *v21; // r12
  struct _FILE_OBJECT *v22; // rbx
  NTSTATUS v23; // r12d
  POBJECT_NAME_INFORMATION v24; // rbx
  unsigned int v25; // edi
  unsigned __int64 v26; // rdi
  int v27; // r12d
  _KPROCESS *v28; // r13
  unsigned __int16 UserAffinityPrimaryGroup; // dx
  __int64 v30; // rax
  int v31; // eax
  __int16 v32; // cx
  _DWORD *v33; // rdx
  int v34; // ecx
  int v35; // ebx
  _QWORD *v36; // rbx
  struct _EX_RUNDOWN_REF *v37; // rbx
  unsigned int v38; // eax
  __int64 v39; // rcx
  int ExecuteOptions; // ebx
  _DWORD *v41; // rcx
  HANDLE v42; // rdx
  int ProcessHandleCount; // edi
  int ProcessTelemetryCoverage; // eax
  int v45; // ebx
  int v46; // ebx
  unsigned int v47; // edi
  __int64 v48; // r9
  int SessionId; // ebx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 EffectiveServerSilo; // rax
  unsigned __int64 *v53; // rax
  int v54; // ebx
  unsigned __int64 v55; // r13
  int v56; // edi
  struct _EX_RUNDOWN_REF *v57; // r12
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rbx
  __int64 v60; // rax
  __int64 v61; // r8
  unsigned int v62; // ecx
  __int64 v63; // rdx
  _OWORD *v64; // rax
  __int64 v65; // r9
  int v66; // eax
  PVOID v67; // r12
  void *Process; // r10
  void *v69; // r10
  _DWORD *p_LockNV; // rcx
  int v71; // eax
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  int v74; // ecx
  unsigned __int64 v75; // rax
  struct _EX_RUNDOWN_REF *v76; // r13
  void *Ptr; // r12
  int v78; // ecx
  __int64 v79; // rdx
  int v80; // ebx
  PVOID v81; // rdi
  unsigned int v82; // ecx
  __int64 v83; // rdx
  __int64 v84; // rax
  HANDLE v85; // rax
  ULONG_PTR v86; // rdi
  int ProcessHandleInformation; // edi
  PVOID v88; // rcx
  __int64 v89; // rsi
  PVOID v90; // rbx
  __int64 v91; // rdi
  int v92; // r12d
  int v93; // ecx
  __int64 v94; // rcx
  unsigned int GroupMaskProcess; // ecx
  void *v96; // r8
  unsigned int v97; // edx
  unsigned int v98; // eax
  unsigned int v99; // ebx
  __int64 v100; // rbx
  PVOID v101; // rbx
  __int64 v102; // rax
  __int64 *v103; // rcx
  void *v104; // rbx
  __int64 v105; // rax
  __int64 v106; // rcx
  unsigned int v107; // eax
  __int64 v108; // rbx
  struct _EX_RUNDOWN_REF *v109; // r14
  unsigned __int64 v110; // rax
  int v111; // edi
  unsigned __int64 v112; // rax
  int v113; // ecx
  int v114; // eax
  int v115; // ecx
  int v116; // eax
  int v117; // ecx
  int v118; // eax
  int v119; // ecx
  int v120; // eax
  int v121; // ecx
  int v122; // eax
  int v123; // ecx
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  int RedirectionTrustPolicy; // eax
  int v130; // eax
  int v131; // eax
  NTSTATUS v132; // edi
  unsigned __int64 v133; // rax
  int v134; // ebx
  struct _EX_RUNDOWN_REF *v135; // rbx
  unsigned __int64 v136; // rax
  char v137; // r9
  PVOID v138; // rbx
  int ProcessCommandLine; // eax
  PVOID v140; // r8
  char v141; // r9
  unsigned __int64 v142; // rax
  __int64 v143; // r8
  unsigned int v144; // ebx
  _QWORD *p_Lock; // rbx
  int NoChildProcessRestrictedPolicy; // eax
  int v147; // eax
  int v148; // eax
  size_t v149; // r8
  unsigned __int64 ExtensionTable; // rdi
  int v151; // ebx
  __int64 (__fastcall *v152)(PVOID, __int64 *); // rax
  PVOID v153; // rdi
  _DWORD *v154; // r8
  int v155; // ecx
  __int64 v156; // rax
  NTSTATUS v157; // ebx
  _DWORD *v158; // r8
  _KPROCESS *v159; // r10
  __int64 v160; // rbx
  _QWORD *v161; // rdi
  __int64 v162; // rcx
  int v163; // ecx
  _KPROCESS *v164; // rcx
  __int64 v165; // rdx
  __int64 *v166; // rax
  int v167; // eax
  signed __int32 v168[8]; // [rsp+0h] [rbp-768h] BYREF
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-748h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-740h]
  PVOID Object; // [rsp+40h] [rbp-728h] BYREF
  int i; // [rsp+48h] [rbp-720h]
  _BYTE v173[2]; // [rsp+4Ch] [rbp-71Ch] BYREF
  char v174; // [rsp+4Eh] [rbp-71Ah] BYREF
  char v175; // [rsp+4Fh] [rbp-719h] BYREF
  PVOID P; // [rsp+50h] [rbp-718h] BYREF
  unsigned __int16 v177; // [rsp+58h] [rbp-710h] BYREF
  HANDLE v178; // [rsp+60h] [rbp-708h]
  unsigned int v179; // [rsp+68h] [rbp-700h] BYREF
  unsigned int v180; // [rsp+6Ch] [rbp-6FCh] BYREF
  unsigned __int64 p_Process; // [rsp+70h] [rbp-6F8h] BYREF
  __int16 v182; // [rsp+78h] [rbp-6F0h]
  PVOID v183; // [rsp+80h] [rbp-6E8h] BYREF
  int v184; // [rsp+88h] [rbp-6E0h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+90h] [rbp-6D8h] BYREF
  unsigned int v186; // [rsp+98h] [rbp-6D0h]
  struct _OBJECT_NAME_INFORMATION v187; // [rsp+A0h] [rbp-6C8h] BYREF
  __int128 v188; // [rsp+B0h] [rbp-6B8h] BYREF
  HANDLE Handlea; // [rsp+C0h] [rbp-6A8h] BYREF
  struct _KTHREAD *v190; // [rsp+C8h] [rbp-6A0h]
  int v191; // [rsp+D0h] [rbp-698h]
  int v192; // [rsp+D4h] [rbp-694h] BYREF
  unsigned int v193; // [rsp+D8h] [rbp-690h]
  unsigned int v194; // [rsp+DCh] [rbp-68Ch] BYREF
  __int64 v195; // [rsp+E0h] [rbp-688h]
  unsigned int *v196; // [rsp+E8h] [rbp-680h]
  unsigned __int64 v197; // [rsp+F0h] [rbp-678h]
  struct _OBJECT_NAME_INFORMATION v198; // [rsp+100h] [rbp-668h] BYREF
  unsigned int v199; // [rsp+110h] [rbp-658h]
  int v200; // [rsp+118h] [rbp-650h]
  int v201; // [rsp+11Ch] [rbp-64Ch] BYREF
  __int64 v202; // [rsp+120h] [rbp-648h] BYREF
  unsigned __int64 v203; // [rsp+128h] [rbp-640h] BYREF
  int v204; // [rsp+130h] [rbp-638h]
  PVOID v205; // [rsp+138h] [rbp-630h] BYREF
  __int64 v206; // [rsp+140h] [rbp-628h] BYREF
  HANDLE v207[5]; // [rsp+148h] [rbp-620h] BYREF
  __int64 v208; // [rsp+170h] [rbp-5F8h]
  __int128 v209; // [rsp+178h] [rbp-5F0h] BYREF
  __int64 v210; // [rsp+188h] [rbp-5E0h]
  __int64 v211; // [rsp+190h] [rbp-5D8h]
  __int64 v212; // [rsp+198h] [rbp-5D0h]
  __int64 v213; // [rsp+1A0h] [rbp-5C8h]
  __int64 v214; // [rsp+1A8h] [rbp-5C0h]
  int v215; // [rsp+1B0h] [rbp-5B8h]
  int v216; // [rsp+1B4h] [rbp-5B4h]
  struct _KTHREAD *v218; // [rsp+1C0h] [rbp-5A8h]
  unsigned __int128 v219; // [rsp+1C8h] [rbp-5A0h]
  unsigned __int128 v220; // [rsp+1D8h] [rbp-590h]
  unsigned __int128 v221; // [rsp+1E8h] [rbp-580h]
  __int128 Src; // [rsp+200h] [rbp-568h] BYREF
  __int128 v223; // [rsp+210h] [rbp-558h] BYREF
  __int128 v224; // [rsp+220h] [rbp-548h] BYREF
  __int128 v225; // [rsp+230h] [rbp-538h]
  __int128 v226; // [rsp+240h] [rbp-528h]
  __int128 v227; // [rsp+250h] [rbp-518h]
  __int128 v228; // [rsp+260h] [rbp-508h] BYREF
  __int128 v229; // [rsp+270h] [rbp-4F8h] BYREF
  __int128 v230; // [rsp+280h] [rbp-4E8h]
  _OWORD v231[2]; // [rsp+290h] [rbp-4D8h] BYREF
  __int128 v232; // [rsp+2B0h] [rbp-4B8h]
  __int128 v233; // [rsp+2C0h] [rbp-4A8h]
  __int128 v234; // [rsp+2D0h] [rbp-498h]
  __int128 v235; // [rsp+2E0h] [rbp-488h]
  __int64 v236; // [rsp+2F0h] [rbp-478h]
  unsigned __int64 v237; // [rsp+300h] [rbp-468h]
  ULONG_PTR v238; // [rsp+308h] [rbp-460h]
  unsigned __int64 v239; // [rsp+310h] [rbp-458h]
  __int128 v240; // [rsp+318h] [rbp-450h] BYREF
  __int64 v241; // [rsp+328h] [rbp-440h] BYREF
  int v242; // [rsp+330h] [rbp-438h]
  __int128 v243; // [rsp+338h] [rbp-430h]
  __int128 v244; // [rsp+348h] [rbp-420h]
  __int64 v245; // [rsp+358h] [rbp-410h]
  $115DCDF994C6370D29323EAB0E0C9502 v246; // [rsp+360h] [rbp-408h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v247; // [rsp+390h] [rbp-3D8h] BYREF
  __int128 v248; // [rsp+3C0h] [rbp-3A8h]
  __int128 v249; // [rsp+3D0h] [rbp-398h]
  __int128 v250; // [rsp+3E0h] [rbp-388h]
  __int128 v251; // [rsp+3F0h] [rbp-378h]
  __int128 v252; // [rsp+400h] [rbp-368h]
  __int128 v253; // [rsp+410h] [rbp-358h]
  __int128 v254; // [rsp+420h] [rbp-348h]
  __int128 v255; // [rsp+430h] [rbp-338h]
  __int128 v256; // [rsp+440h] [rbp-328h]
  __int64 v257; // [rsp+450h] [rbp-318h]
  _OWORD v258[27]; // [rsp+460h] [rbp-308h] BYREF
  _QWORD v259[34]; // [rsp+610h] [rbp-158h] BYREF

  v5 = a4;
  v6 = a3;
  v178 = Handle;
  v197 = a3;
  v199 = a4;
  v196 = a5;
  memset(&v246, 0, sizeof(v246));
  v9 = 0LL;
  v179 = 0;
  Handlea = 0LL;
  v184 = 0;
  memset(v259, 0, 0x108uLL);
  v183 = 0LL;
  v180 = 0;
  v201 = 0;
  v216 = 0;
  v219 = 0LL;
  v220 = 0LL;
  v221 = 0LL;
  v248 = 0LL;
  v249 = 0LL;
  v250 = 0LL;
  v251 = 0LL;
  v252 = 0LL;
  v253 = 0LL;
  v254 = 0LL;
  v255 = 0LL;
  v256 = 0LL;
  v257 = 0LL;
  memset(&v207[1], 0, 32);
  v208 = 0LL;
  v195 = 0LL;
  v240 = 0LL;
  v202 = 0LL;
  v243 = 0LL;
  v244 = 0LL;
  v245 = 0LL;
  v203 = 0LL;
  ObjectNameInformation = 0LL;
  v177 = 0;
  v182 = 0;
  Object = 0LL;
  v206 = 0LL;
  v194 = 0;
  memset(v231, 0, sizeof(v231));
  v232 = 0LL;
  v233 = 0LL;
  v234 = 0LL;
  v235 = 0LL;
  v236 = 0LL;
  Src = 0LL;
  v223 = 0LL;
  v224 = 0LL;
  v225 = 0LL;
  v226 = 0LL;
  v227 = 0LL;
  v228 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v173[1] = PreviousMode;
  CurrentThread = KeGetCurrentThread();
  v190 = CurrentThread;
  v218 = CurrentThread;
  if ( PreviousMode )
  {
    if ( a2 != 61 )
    {
      if ( a2 == 65 )
      {
        v13 = 7LL;
LABEL_14:
        if ( (_DWORD)v5 )
        {
          if ( (v6 & v13) != 0 )
            ExRaiseDatatypeMisalignment();
          v10 = v6 + v5;
          v14 = 0x7FFFFFFF0000LL;
          if ( v6 + v5 > 0x7FFFFFFF0000LL || v10 < v6 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        else
        {
          v14 = 0x7FFFFFFF0000LL;
        }
        if ( a5 )
        {
          v15 = 0x7FFFFFFF0000LL;
          if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
            v15 = (__int64)a5;
          *(_DWORD *)v15 = *(_DWORD *)v15;
          CurrentThread = v190;
        }
        goto LABEL_26;
      }
      if ( ((a2 - 70) & 0xFFFFFFFB) != 0 )
      {
        if ( a2 == 92 )
        {
          v13 = 7LL;
        }
        else if ( a2 == 94 )
        {
          v13 = 7LL;
        }
        else
        {
          v13 = 3LL;
          if ( a2 == 87 )
            v13 = 0LL;
        }
        goto LABEL_14;
      }
    }
    v13 = 0LL;
    goto LABEL_14;
  }
  v14 = 0x7FFFFFFF0000LL;
LABEL_26:
  switch ( a2 )
  {
    case 0:
      v173[0] = 0;
      if ( (_DWORD)v5 == 64 )
      {
        v26 = v6;
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v6;
        v183 = (PVOID)64;
        *(_QWORD *)v6 = 64LL;
        v6 += 8LL;
        v179 = 64;
      }
      else
      {
        if ( (_DWORD)v5 != 48 )
          return -1073741820;
        v26 = 0LL;
        ObjectNameInformation = 0LL;
        v183 = (PVOID)48;
        v179 = 48;
      }
      p_Process = v6;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v27 = result;
      i = result;
      if ( result < 0 )
        return result;
      v28 = (_KPROCESS *)Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 501);
      *(_QWORD *)(v6 + 8) = v28[1].Affinity.StaticBitmap[24];
      if ( (v28->SecureState.SecureHandle & 1) != 0 )
        VslGetSecurePebAddress(v28);
      if ( v27 < 0 )
        goto LABEL_65;
      ObjectNameInformation = 0LL;
      if ( (*(_DWORD *)&v28->0 & 0x1000) != 0 )
      {
        p_Process = (unsigned __int64)&v190->Process;
        if ( v28 != v190->Process )
          goto LABEL_76;
      }
      else
      {
        p_Process = (unsigned __int64)&v218->Process;
      }
      LODWORD(v259[0]) = 2097153;
      memset((char *)v259 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)v28, (__int64)v259, &v180, 0LL, &v177);
      if ( v28 == *(_KPROCESS **)p_Process )
      {
        UserAffinityPrimaryGroup = v190->UserAffinityPrimaryGroup;
        v30 = v180;
        if ( !_bittest64(&v30, UserAffinityPrimaryGroup) )
          goto LABEL_76;
      }
      else
      {
        UserAffinityPrimaryGroup = v177;
      }
      if ( UserAffinityPrimaryGroup != 32 )
        ObjectNameInformation = (POBJECT_NAME_INFORMATION)v259[UserAffinityPrimaryGroup + 1];
LABEL_76:
      if ( v26 )
        PsQueryProcessAttributes((__int64)v28, (__int64)v173, 0LL);
      *(_QWORD *)(v6 + 16) = ObjectNameInformation;
      *(_DWORD *)(v6 + 24) = v28->BasePriority;
      *(_QWORD *)(v6 + 32) = v28[1].Header.WaitListHead.Flink;
      *(_QWORD *)(v6 + 40) = v28[1].Affinity.StaticBitmap[22];
      if ( v26 )
      {
        *(_DWORD *)(v26 + 56) = 0;
        if ( (BYTE2(v28[2].Header.WaitListHead.Flink) & 7) != 0 )
        {
          *(_DWORD *)(v26 + 56) = 1;
          v31 = 3;
        }
        else
        {
          v31 = 2;
        }
        if ( v28[1].Affinity.StaticBitmap[30] )
        {
          v32 = WORD2(v28[2].Affinity.StaticBitmap[20]);
          if ( v32 == 332 || v32 == 452 )
            *(_DWORD *)(v26 + 56) = v31;
        }
        if ( (v28[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
          *(_DWORD *)(v26 + 56) |= 4u;
        v33 = Object;
        v34 = *(_DWORD *)(v26 + 56) ^ ((unsigned __int8)*(_DWORD *)(v26 + 56) ^ (unsigned __int8)(*((_DWORD *)Object
                                                                                                  + 280) >> 4)) & 8;
        *(_DWORD *)(v26 + 56) = v34;
        if ( v33[222] + ((v33[158] >> 3) & 1) )
          *(_DWORD *)(v26 + 56) = v34 | 0x10;
        if ( *((_QWORD *)v33 + 162) && *(_DWORD *)(*((_QWORD *)Object + 162) + 1056LL) )
          *(_DWORD *)(v26 + 56) |= 0x20u;
        if ( v173[0] )
          *(_DWORD *)(v26 + 56) |= 0x40u;
        v28 = (_KPROCESS *)Object;
        if ( (*((_BYTE *)Object + 992) & 1) != 0 )
          *(_DWORD *)(v26 + 56) |= 0x80u;
        if ( *(_QWORD *)&v28[2].Affinity.Count )
          *(_DWORD *)(v26 + 56) |= 0x100u;
        v27 = i;
      }
      if ( a5 )
        *a5 = (unsigned int)v183;
LABEL_65:
      ObfDereferenceObjectWithTag(v28, 0x79517350u);
      return v27;
    case 1:
      LOBYTE(HandleInformation) = PreviousMode;
      return PspQueryQuotaLimits((ULONG_PTR)Handle, v10, (void *)v6, v5, a5);
    case 2:
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        PsQueryStatisticsProcess((__int64)Object, v231);
        v219 = __PAIR128__(v233, *((unsigned __int64 *)&v232 + 1));
        v220 = __PAIR128__(v234, *((unsigned __int64 *)&v233 + 1));
        v221 = __PAIR128__(v235, *((unsigned __int64 *)&v234 + 1));
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_OWORD *)v6 = v219;
        *(_OWORD *)(v6 + 16) = v220;
        *(_OWORD *)(v6 + 32) = v221;
        if ( a5 )
          *a5 = 48;
        return DeviceMapInformation;
      }
      return result;
    case 3:
      if ( (((_DWORD)v5 - 88) & 0xFFFFFFE7) != 0 || (_DWORD)v5 == 104 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        Src = *((_OWORD *)Object + 73);
        LODWORD(v223) = *((_DWORD *)Object + 417);
        v36 = Object;
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v246);
        i = MmQueryWorkingSetInformation((_QWORD *)&v223 + 1, &v224, &v228, &v203, &v202, &v201);
        KiUnstackDetachProcess(&v246);
        *(_QWORD *)&v225 = v36[143];
        *((_QWORD *)&v224 + 1) = *((_QWORD *)Object + 145);
        *(_QWORD *)&v226 = *((_QWORD *)Object + 142);
        *((_QWORD *)&v225 + 1) = *((_QWORD *)Object + 144);
        *((_QWORD *)&v226 + 1) = *((_QWORD *)Object + 201) << 12;
        *(_QWORD *)&v227 = *((_QWORD *)Object + 202) << 12;
        *((_QWORD *)&v228 + 1) = *((_QWORD *)Object + 293) << 12;
        *((_QWORD *)&v227 + 1) = *((_QWORD *)&v226 + 1);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        result = i;
        if ( i >= 0 )
        {
          memmove((void *)v6, &Src, v5);
          if ( a5 )
            *a5 = v5;
          return 0;
        }
      }
      return result;
    case 4:
      if ( (_DWORD)v5 != 32 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result >= 0 )
      {
        v37 = (struct _EX_RUNDOWN_REF *)Object;
        v38 = PsQueryRuntimeProcess((__int64)Object, &v194);
        v39 = (unsigned int)KeMaximumIncrement;
        *(_QWORD *)(v6 + 16) = (unsigned int)KeMaximumIncrement * (unsigned __int64)v38;
        *(_QWORD *)(v6 + 24) = v39 * v194;
        *(struct _EX_RUNDOWN_REF *)v6 = v37[141];
        *(struct _EX_RUNDOWN_REF *)(v6 + 8) = v37[264];
        if ( a5 )
          *a5 = 32;
        goto LABEL_386;
      }
      return result;
    case 7:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        Handlea = (HANDLE)((unsigned __int128)-(__int128)*((unsigned __int64 *)Object + 175) >> 64);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_QWORD *)v6 = Handlea;
        if ( a5 )
          *a5 = 8;
        return 0;
      }
      return result;
    case 10:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        ProcessTelemetryCoverage = xKdEnumerateDebuggingDevices();
        goto LABEL_158;
      }
      return result;
    case 12:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v35 = *((_DWORD *)Object + 382);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v35;
        if ( a5 )
          *a5 = 4;
        return 0;
      }
      return result;
    case 14:
      return PspQueryPooledQuotaLimits((ULONG_PTR)Handle, PreviousMode);
    case 15:
    case 42:
      return PspQueryWorkingSetWatch((ULONG_PTR)Handle, (__int64)a5, PreviousMode);
    case 18:
      if ( (_DWORD)v5 != 2 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        HIBYTE(v182) = *((_BYTE *)Object + 1463);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_WORD *)v6 = v182;
        if ( a5 )
          *a5 = 2;
        return 0;
      }
      return result;
    case 19:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)Handle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v45 = *((_BYTE *)Object + 1127) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v45;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 20:
      LODWORD(P) = 0;
      if ( (((_DWORD)v5 - 4) & 0xFFFFFFFB) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ProcessHandleCount = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = ProcessHandleCount;
      if ( (_DWORD)v5 != 4 )
        *(_DWORD *)(v6 + 4) = (_DWORD)P;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 21:
      if ( (((_DWORD)v5 - 8) & 0xFFFFFFF7) != 0 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v37 = (struct _EX_RUNDOWN_REF *)Object;
      if ( (*((_DWORD *)Object + 158) & 0x1000) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      LODWORD(v259[0]) = 2097153;
      memset((char *)v259 + 4, 0, 0x104uLL);
      KeQueryAffinityProcess((__int64)Object, (__int64)v259, &v180, 0LL, &v177);
      v94 = v259[v177 + 1];
      if ( (_DWORD)v5 == 16 )
        *(_WORD *)(v6 + 8) = v177;
      *(_QWORD *)v6 = v94;
      if ( a5 )
        *a5 = v5;
      goto LABEL_386;
    case 22:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)Handle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation >= 0 )
      {
        v46 = (*((_DWORD *)Object + 158) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_DWORD *)v6 = v46;
        if ( a5 )
          *a5 = 4;
      }
      return DeviceMapInformation;
    case 23:
      if ( (unsigned int)v5 < 0x24 )
        return -1073741820;
      if ( (_DWORD)v5 == 48 )
      {
        v186 = *(_DWORD *)(v6 + 40);
        v47 = v186;
        if ( (v186 & 0xFFFFFFFE) != 0 )
          return -1073741811;
      }
      else
      {
        if ( (_DWORD)v5 != 36 )
          return -1073741820;
        v47 = 0;
      }
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = ObQueryDeviceMapInformation((_KPROCESS *)Object, v6, v47, v48);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && a5 )
        *a5 = v5;
      return DeviceMapInformation;
    case 24:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      SessionId = MmGetSessionId((__int64)Object);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = SessionId;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 26:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v53 = (unsigned __int64 *)*((_QWORD *)Object + 176);
      if ( v53 )
        v9 = *v53;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v9;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 27:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v17 = &v240;
      if ( (unsigned int)v5 >= 0x10 )
        v17 = (__int128 *)v6;
      v18 = (void *)(v6 + 16);
      v19 = 0LL;
      if ( (unsigned int)v5 >= 0x10 )
      {
        v19 = v18;
        LODWORD(v9) = v5 - 16;
      }
      v179 = v9;
      DeviceMapInformation = PsQueryFullProcessImageName((__int64)Object, v17, v19, &v179);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      if ( DeviceMapInformation >= 0 && !v19 )
        DeviceMapInformation = -1073741820;
      if ( a5 && ((int)(DeviceMapInformation + 0x80000000) < 0 || DeviceMapInformation == -1073741820) )
        *a5 = v179 + 16;
      return DeviceMapInformation;
    case 28:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 1;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 29:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v54 = (*((_DWORD *)Object + 281) >> 13) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v54;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 30:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      DeviceMapInformation = DbgkOpenProcessDebugPort(Object, PreviousMode, &Handlea);
      v42 = Handlea;
      if ( DeviceMapInformation < 0 )
        v42 = 0LL;
      Handlea = v42;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = Handlea;
      if ( a5 )
        *a5 = 8;
      return DeviceMapInformation;
    case 31:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 281) & 2) == 0;
      if ( a5 )
        *a5 = 4;
      goto LABEL_160;
    case 32:
      if ( (unsigned int)v5 < 0x10 )
        return -1073741820;
      if ( (unsigned int)ExIsRestrictedCaller(PreviousMode) )
        return -1073741790;
      p_Process = (unsigned int)(v5 - 16) / 0xA0uLL;
      v55 = v6 + 16;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v56 = result;
      if ( result >= 0 )
      {
        v57 = (struct _EX_RUNDOWN_REF *)Object;
        v58 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
        v59 = v58;
        v203 = v58;
        if ( v58 )
        {
          v60 = ExReferenceHandleDebugInfo(v58);
          v61 = v60;
          v202 = v60;
          if ( v60 )
          {
            *(_DWORD *)(v6 + 8) = 0;
            v62 = *(_DWORD *)(v60 + 4);
            v63 = *(_DWORD *)(v60 + 72) % v62;
            v193 = v63;
            while ( 1 )
            {
              v204 = v9;
              if ( (unsigned int)v9 >= v62 )
                break;
              v64 = (_OWORD *)(v61 + 160 * v63);
              v258[0] = v64[5];
              v258[1] = v64[6];
              v258[2] = v64[7];
              v258[3] = v64[8];
              v258[4] = v64[9];
              v258[5] = v64[10];
              v258[6] = v64[11];
              v258[7] = v64[12];
              v258[8] = v64[13];
              v258[9] = v64[14];
              v65 = *(_QWORD *)&v258[1];
              if ( *(_QWORD *)v6 == *(_QWORD *)&v258[1] || !*(_QWORD *)v6 )
              {
                v66 = DWORD2(v258[1]);
                if ( DWORD2(v258[1]) )
                {
                  ++*(_DWORD *)(v6 + 8);
                  if ( (_DWORD)p_Process )
                  {
                    p_Process = (unsigned int)(p_Process - 1);
                    v215 = p_Process;
                    *(_QWORD *)v55 = v65;
                    *(_OWORD *)(v55 + 8) = v258[0];
                    *(_DWORD *)(v55 + 24) = v66;
                    *(_OWORD *)(v55 + 32) = v258[2];
                    *(_OWORD *)(v55 + 48) = v258[3];
                    *(_OWORD *)(v55 + 64) = v258[4];
                    *(_OWORD *)(v55 + 80) = v258[5];
                    *(_OWORD *)(v55 + 96) = v258[6];
                    *(_OWORD *)(v55 + 112) = v258[7];
                    *(_OWORD *)(v55 + 128) = v258[8];
                    *(_OWORD *)(v55 + 144) = v258[9];
                    v55 += 160LL;
                    v237 = v55;
                  }
                  else
                  {
                    v56 = -1073741820;
                    i = -1073741820;
                  }
                }
              }
              if ( (_DWORD)v63 )
              {
                v63 = (unsigned int)(v63 - 1);
                v193 = v63;
                v62 = *(_DWORD *)(v61 + 4);
              }
              else
              {
                v62 = *(_DWORD *)(v61 + 4);
                v63 = v62 - 1;
                v193 = v62 - 1;
              }
              LODWORD(v9) = v9 + 1;
            }
            if ( a5 )
              *a5 = v55 - v6;
            ExDereferenceHandleDebugInfo(v59, v61);
            v67 = Object;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
            ObfDereferenceObjectWithTag(v67, 0x79517350u);
            return v56;
          }
          else
          {
            ExReleaseRundownProtection_0(v57 + 139);
            ObfDereferenceObjectWithTag(v57, 0x79517350u);
            return -1073741811;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v57, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 33:
    case 110:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v78 = (*((_DWORD *)Object + 281) >> 27) & 7;
      if ( a2 == 33 )
      {
        *(_DWORD *)v6 = v78;
      }
      else
      {
        v79 = *((_QWORD *)Object + 162);
        if ( v79 && v78 >= *(_DWORD *)(v79 + 1068) )
          v78 = *(_DWORD *)(v79 + 1068);
        *(_DWORD *)v6 = v78;
        ExecuteOptions = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_159;
    case 34:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        Process = Object;
      }
      ExecuteOptions = KeGetExecuteOptions(Process, &v184);
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(v69, 0x79517350u);
      if ( ExecuteOptions >= 0 )
      {
        *(_DWORD *)v6 = v184;
        if ( a5 )
          *a5 = 4;
      }
      return ExecuteOptions;
    case 36:
      p_Process = 0LL;
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        p_LockNV = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = p_LockNV;
      }
      else
      {
        v205 = 0LL;
        result = ObReferenceObjectByHandle(Handle, 0x20u, (POBJECT_TYPE)PsProcessType, PreviousMode, &v205, 0LL);
        p_LockNV = v205;
        Object = v205;
        if ( result < 0 )
          return result;
      }
      for ( i = 0; ; LODWORD(v9) = i )
      {
        v71 = p_LockNV[330];
        if ( v71 )
          break;
        KeQuerySystemTimePrecise(&p_Process);
        CurrentPrcb = KeGetCurrentPrcb();
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        v74 = ExGenRandom(1);
        v75 = __rdtsc();
        _InterlockedCompareExchange(
          (volatile signed __int32 *)Object + 330,
          v75 ^ v74 ^ CurrentPrcb->MmPageFaultCount ^ p_Process ^ HIDWORD(p_Process) ^ LowPart ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime ^ CurrentPrcb->KeSystemCalls,
          0);
        p_LockNV = Object;
      }
      *(_DWORD *)v6 = v71;
      if ( a5 )
        *a5 = 4;
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObject(p_LockNV);
      return v9;
    case 37:
      if ( (_DWORD)v5 != 64 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v76 = (struct _EX_RUNDOWN_REF *)Object;
      if ( Object == v190->Process )
      {
        Ptr = (void *)*((_QWORD *)Object + 163);
        if ( !Ptr )
          result = -1073741558;
        DeviceMapInformation = result;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
      {
        Ptr = v76[163].Ptr;
        if ( Ptr )
          ObfReferenceObject(v76[163].Ptr);
        else
          DeviceMapInformation = -1073741811;
        ExReleaseRundownProtection_0(v76 + 139);
        LODWORD(v9) = 1;
      }
      else
      {
        DeviceMapInformation = -1073741558;
        Ptr = 0LL;
        LODWORD(v9) = 1;
      }
      ObfDereferenceObjectWithTag(v76, 0x79517350u);
      if ( DeviceMapInformation >= 0 )
      {
        DeviceMapInformation = MmGetSectionInformation((__int64)Ptr, 1, v6);
        if ( (_DWORD)v9 )
          ObfDereferenceObject(Ptr);
        if ( DeviceMapInformation >= 0 && a5 )
          *a5 = 64;
      }
      return DeviceMapInformation;
    case 38:
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v80 = result;
      if ( result < 0 )
        return result;
      v81 = Object;
      *(_QWORD *)v6 = PsQueryTotalCycleTimeProcess(Object, &v206);
      *(_QWORD *)(v6 + 8) = v206;
      if ( a5 )
        *a5 = 16;
      goto LABEL_687;
    case 39:
    case 111:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      i = result;
      if ( result < 0 )
        return result;
      v82 = (*((_DWORD *)Object + 280) >> 12) & 7;
      if ( a2 == 39 )
      {
        *(_DWORD *)v6 = v82;
      }
      else
      {
        v83 = *((_QWORD *)Object + 162);
        if ( v83 && v82 >= *(_DWORD *)(v83 + 1076) )
          v82 = *(_DWORD *)(v83 + 1076);
        *(_DWORD *)v6 = v82;
        ExecuteOptions = i;
      }
      if ( a5 )
        *a5 = 4;
      goto LABEL_159;
    case 43:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      DeviceMapInformation = result;
      if ( result < 0 )
        return result;
      v21 = (struct _EX_RUNDOWN_REF *)Object;
      v22 = (struct _FILE_OBJECT *)*((_QWORD *)Object + 180);
      v183 = v22;
      if ( v22 )
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          ObfReferenceObject(v22);
          ExReleaseRundownProtection_0(v21 + 139);
        }
        else
        {
          DeviceMapInformation = -1073741558;
        }
      }
      else
      {
        DeviceMapInformation = PsReferenceProcessFilePointer(Object, &v183);
        v22 = (struct _FILE_OBJECT *)v183;
      }
      ObfDereferenceObjectWithTag(v21, 0x79517350u);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v23 = IoQueryFileDosDeviceName(v22, &ObjectNameInformation);
      ObfDereferenceObject(v22);
      if ( v23 >= 0 )
      {
        v24 = ObjectNameInformation;
        v25 = ObjectNameInformation->Name.MaximumLength + 16;
        if ( v25 <= (unsigned int)v5 )
        {
          *(_WORD *)v6 = ObjectNameInformation->Name.Length;
          *(_WORD *)(v6 + 2) = v24->Name.MaximumLength;
          if ( v24->Name.MaximumLength )
          {
            v9 = v6 + 16;
            memmove((void *)(v6 + 16), v24->Name.Buffer, v24->Name.MaximumLength);
          }
          *(_QWORD *)(v6 + 8) = v9;
        }
        else
        {
          v23 = -1073741820;
          i = -1073741820;
        }
        if ( a5 )
          *a5 = v25;
        ExFreePoolWithTag(v24, 0);
      }
      return v23;
    case 44:
      P = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v86 = *(_QWORD *)v6;
      v238 = *(_QWORD *)v6;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ExecuteOptions = ObpReferenceObjectByHandleWithTag(v86, 0x79517350u, (__int64)&v183, 0LL, 0LL);
      v41 = Object;
      if ( ExecuteOptions < 0 )
        goto LABEL_160;
      ProcessHandleInformation = PsReferenceProcessFilePointer(Object, &P);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v88 = v183;
      if ( ProcessHandleInformation < 0 )
        goto LABEL_396;
      v89 = *((_QWORD *)v183 + 5);
      v90 = P;
      v91 = *((_QWORD *)P + 5);
      v92 = 0;
      if ( v89 != v91 )
        v92 = -1073741823;
      ObfDereferenceObject(v183);
      ObfDereferenceObject(v90);
      result = v92;
      if ( v89 == v91 && a5 )
        *a5 = 0;
      return result;
    case 45:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v186 = *((_DWORD *)Object + 280);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v93 = (v186 >> 19) & 1 | 2;
      if ( (v186 & 0x40000) == 0 )
        v93 = (v186 >> 19) & 1;
      *(_DWORD *)v6 = v93;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 46:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v186 = *((_DWORD *)Object + 281);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      LOBYTE(v9) = (v186 & 0x200000) != 0;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 47:
      if ( !a5 || (v5 & 1) != 0 )
        return -1073741811;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        GroupMaskProcess = KeQueryGroupMaskProcess((__int64)Object);
        v180 = GroupMaskProcess;
        do
        {
          _BitScanForward(&v97, GroupMaskProcess);
          v98 = v9 + 2;
          v179 = v9 + 2;
          if ( (int)v9 + 2 <= (unsigned int)v5 )
          {
            *(_WORD *)v6 = v97;
            v6 += 2LL;
            v239 = v6;
          }
          _bittestandreset((signed __int32 *)&v180, v97);
          LODWORD(v9) = v9 + 2;
          GroupMaskProcess = v180;
        }
        while ( v180 );
        *a5 = v98;
        v99 = (unsigned int)v5 < v98 ? 0xC0000023 : 0;
        i = v99;
        ObfDereferenceObjectWithTag(v96, 0x79517350u);
        return v99;
      }
      return result;
    case 49:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v100 = *((_QWORD *)Object + 169);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_QWORD *)v6 = v100;
      if ( a5 )
        *a5 = 8;
      return 0;
    case 50:
      memset(&v247, 0, sizeof(v247));
      v191 = 0;
      v187 = 0LL;
      v241 = 0LL;
      if ( PreviousMode != 1 )
        return -1073741823;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      i = result;
      if ( result >= 0 )
      {
        v101 = Object;
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139) )
        {
          KiStackAttachProcess((_KPROCESS *)v101, 0, (__int64)&v247);
          v102 = 0LL;
          v103 = (__int64 *)*((_QWORD *)v101 + 176);
          if ( v103 )
            v102 = *v103;
          if ( v102 )
          {
            *(_QWORD *)&v198.Name.Length = *(unsigned int *)(v102 + 16);
            v191 = *(_DWORD *)(*(_QWORD *)&v198.Name.Length + 104LL);
            v104 = *(void **)(*(_QWORD *)&v198.Name.Length + 112LL);
            P = v104;
            *(_DWORD *)&v187.Name.Length = (_DWORD)v104;
            v187.Name.Buffer = (wchar_t *)HIDWORD(v104);
          }
          else
          {
            P = *(PVOID *)(*((_QWORD *)v101 + 170) + 32LL);
            v105 = (__int64)P + 164;
            if ( (unsigned __int64)P + 164 >= 0x7FFFFFFF0000LL )
              v105 = 0x7FFFFFFF0000LL;
            v191 = *(_DWORD *)v105;
            v198 = 0LL;
            v106 = (__int64)P + 176;
            if ( (unsigned __int64)P + 176 >= 0x7FFFFFFF0000LL )
              v106 = 0x7FFFFFFF0000LL;
            *(_DWORD *)&v198.Name.Length = *(_DWORD *)v106;
            v198.Name.Buffer = *(wchar_t **)(v106 + 8);
            v187 = v198;
            LOWORD(v104) = v198.Name.Length;
          }
          DeviceMapInformation = i;
          KiUnstackDetachProcess(&v247);
          if ( DeviceMapInformation < 0 )
            goto LABEL_384;
          v107 = (unsigned __int16)v104 + 6;
          if ( a5 )
            *a5 = v107;
          if ( (unsigned int)v5 >= v107 )
          {
            *(_DWORD *)v6 = v191;
            *(_WORD *)(v6 + 4) = (_WORD)v104;
          }
          else
          {
            DeviceMapInformation = -1073741820;
            i = -1073741820;
          }
          if ( DeviceMapInformation >= 0 && (_WORD)v104 )
          {
            v37 = (struct _EX_RUNDOWN_REF *)Object;
            DeviceMapInformation = MiCopyVirtualMemory((ULONG_PTR)Object, v187.Name.Length, 1, (__int64)&v241, 0);
          }
          else
          {
LABEL_384:
            v37 = (struct _EX_RUNDOWN_REF *)Object;
          }
          ExReleaseRundownProtection_0(v37 + 139);
LABEL_386:
          ObfDereferenceObjectWithTag(v37, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_365:
          ObfDereferenceObjectWithTag(v101, 0x79517350u);
          return -1073741558;
        }
      }
      return result;
    case 51:
      if ( (unsigned int)v5 < 0x10 )
      {
        if ( a5 )
          *a5 = 16;
        return -1073741820;
      }
      P = 0LL;
      result = ObReferenceObjectByHandle(Handle, 0x400u, (POBJECT_TYPE)PsProcessType, PreviousMode, &P, 0LL);
      if ( result >= 0 )
      {
        v108 = (__int64)v190;
        --v190->KernelApcDisable;
        v109 = (struct _EX_RUNDOWN_REF *)P;
        v110 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)P);
        if ( v110 )
        {
          ProcessHandleInformation = ExQueryProcessHandleInformation(v110, v6, (unsigned int)v5, a5);
          ExReleaseRundownProtection_0(v109 + 139);
        }
        else
        {
          ProcessHandleInformation = -1073741558;
        }
        KeLeaveCriticalRegionThread(v108);
        v88 = v109;
LABEL_396:
        ObfDereferenceObject(v88);
        return ProcessHandleInformation;
      }
      return result;
    case 52:
      v192 = 0;
      v174 = 0;
      v175 = 0;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      v111 = *(_DWORD *)v6;
      v200 = *(_DWORD *)v6;
      if ( Handle == (HANDLE)-1LL )
      {
        Object = KeGetCurrentThread()->ApcState.Process;
        v111 = v200;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
      }
      break;
    case 54:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v132 = result;
      i = result;
      if ( result < 0 )
        return result;
      v101 = Object;
      v133 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v133 )
        goto LABEL_365;
      LOBYTE(v9) = (*(_BYTE *)(v133 + 44) & 2) != 0;
      *(_DWORD *)v6 = v9;
      goto LABEL_555;
    case 55:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = *((_DWORD *)Object + 619) & 0x7FFFFFFF;
      *(_DWORD *)(v6 + 4) = v41[627] & 0x7FFFFFFF;
      goto LABEL_160;
    case 58:
      *(_QWORD *)&v198.Name.Length = 0LL;
      P = 0LL;
      if ( (unsigned int)v5 < 4 )
        return -1073741820;
      result = ExLockUserBuffer(
                 v6,
                 (unsigned int)v5,
                 (unsigned __int8)KeGetCurrentThread()->PreviousMode,
                 1LL,
                 &v198,
                 &P);
      if ( result >= 0 )
      {
        v134 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( v134 >= 0 )
        {
          v187 = 0LL;
          v135 = (struct _EX_RUNDOWN_REF *)Object;
          v136 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
          if ( v136 )
          {
            *(_QWORD *)&v187.Name.Length = *(_QWORD *)&v198.Name.Length;
            v187.Name.Buffer = (wchar_t *)((unsigned int)v5 >> 2);
            ExEnumHandleTable(
              v136,
              (__int64 (__fastcall *)(__int64, signed __int64 *, _QWORD, __int64))PspHandleTableWalker,
              (__int64)&v187,
              0LL);
            ExReleaseRundownProtection_0(v135 + 139);
          }
          else
          {
            LODWORD(v9) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v135, 0x79517350u);
          if ( a5 )
            *a5 = 4 * HIDWORD(v187.Name.Buffer);
          ExUnlockUserBuffer((struct _MDL *)P);
          return v9;
        }
        else
        {
          ExUnlockUserBuffer((struct _MDL *)P);
          return v134;
        }
      }
      return result;
    case 59:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_DWORD *)v6 = (*((_DWORD *)Object + 158) >> 5) & 1;
      goto LABEL_160;
    case 60:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)Handle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v137 = PreviousMode;
      v138 = Object;
      ProcessCommandLine = PsQueryProcessCommandLine((struct _EX_RUNDOWN_REF *)Object, v6, v5, v137, a5);
      goto LABEL_572;
    case 61:
      v23 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v23 < 0 )
        return v23;
      if ( (_DWORD)v5 )
      {
        v140 = Object;
        *(_BYTE *)v6 = *((_BYTE *)Object + 2170);
        if ( a5 )
          *a5 = 1;
        v23 = 0;
      }
      else
      {
        v23 = -1073741820;
        v140 = Object;
      }
      if ( !v140 )
        return v23;
      ObfDereferenceObjectWithTag(v140, 0x79517350u);
      return v23;
    case 64:
      DeviceMapInformation = ObpReferenceObjectByHandleWithTag(
                               (ULONG_PTR)Handle,
                               0x79517350u,
                               (__int64)&Object,
                               0LL,
                               0LL);
      if ( DeviceMapInformation < 0 )
        return DeviceMapInformation;
      v141 = PreviousMode;
      v138 = Object;
      ProcessCommandLine = EtwQueryProcessTelemetryInfo((__int64)Object, (char *)v6, (unsigned int)v5, v141, a5);
LABEL_572:
      DeviceMapInformation = ProcessCommandLine;
      if ( v138 )
        goto LABEL_573;
      return DeviceMapInformation;
    case 65:
      LODWORD(P) = 0;
      if ( (_DWORD)v5 == 32 )
      {
        v187 = *(struct _OBJECT_NAME_INFORMATION *)v6;
        v188 = *(_OWORD *)(v6 + 16);
        if ( *(_DWORD *)&v187.Name.Length == 3 )
        {
          if ( *(_DWORD *)(&v187.Name.MaximumLength + 1) >= 8u || v187.Name.Buffer )
          {
            v23 = -1073741811;
          }
          else
          {
            v23 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
            if ( v23 >= 0 )
            {
              MmQueryCommitReleaseState((ULONG_PTR)Object, &P, &v187.Name.Buffer, &v188, (_QWORD *)&v188 + 1);
              *(_DWORD *)(&v187.Name.MaximumLength + 1) ^= ((unsigned __int8)P ^ *((_BYTE *)&v187.Name.MaximumLength + 2)) & 1;
              v187.Name.Buffer = (wchar_t *)((__int64)v187.Name.Buffer << 12);
              *(_QWORD *)&v188 = (_QWORD)v188 << 12;
              *((_QWORD *)&v188 + 1) <<= 12;
              *(struct _OBJECT_NAME_INFORMATION *)v6 = v187;
              *(_OWORD *)(v6 + 16) = v188;
              v23 = 0;
            }
          }
        }
        else
        {
          v23 = -1073741735;
        }
      }
      else
      {
        v23 = -1073741820;
      }
      if ( !Object )
        return v23;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return v23;
    case 66:
    case 67:
      if ( (v5 & 7) != 0 || (unsigned int)v5 > 0x100 )
        return -1073741820;
      v23 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v23 >= 0 )
      {
        LOBYTE(v9) = a2 == 67;
        v144 = 8 * KeQueryCpuSetsProcess((__int64)Object, v258, v143, v9);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( a5 )
          *a5 = v144;
        if ( v144 >= (unsigned int)v5 )
          v144 = v5;
        memmove((void *)v6, v258, v144);
      }
      return v23;
    case 69:
      if ( (_DWORD)v5 != 40 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v207[4] = 0LL;
      v208 = 0LL;
      if ( *((_QWORD *)Object + 162) )
      {
        KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v246);
        ZwQueryInformationJobObject(0LL, 28LL);
        ObjectType = 0LL;
        ZwQueryInformationJobObject(0LL, 9LL);
        KiUnstackDetachProcess(&v246);
        *(_OWORD *)&v207[2] = v243;
        v207[1] = (HANDLE)v244;
        v84 = v208;
        if ( (v249 & 0x200000) != 0 )
          v84 = v257;
        v208 = v84;
        v85 = v207[4];
        if ( (v249 & 0x200) != 0 )
          v85 = (HANDLE)*((_QWORD *)&v255 + 1);
        v207[4] = v85;
        *(__m256i *)v6 = *(__m256i *)&v207[1];
        *(_QWORD *)(v6 + 32) = v208;
        if ( a5 )
          *a5 = 40;
      }
      else
      {
        LODWORD(v9) = -1073741394;
      }
      goto LABEL_316;
    case 70:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_BYTE *)v6 = *((int *)Object + 280) < 0;
      goto LABEL_160;
    case 71:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v132 = result;
      i = result;
      if ( result < 0 )
        return result;
      v101 = Object;
      v142 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( !v142 )
        goto LABEL_365;
      LOBYTE(v9) = (*(_BYTE *)(v142 + 44) & 0x10) != 0;
      *(_DWORD *)v6 = v9;
LABEL_555:
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v101 + 139);
      ObfDereferenceObjectWithTag(v101, 0x79517350u);
      return v132;
    case 72:
      return PsIumGetOnDemandDebugChallenge(Handle, v6, (unsigned int)v5, a5);
    case 73:
      if ( (_DWORD)v5 != 3 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        p_Lock = &KeGetCurrentThread()->ApcState.Process->Header.Lock;
        Object = p_Lock;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        p_Lock = Object;
      }
      NoChildProcessRestrictedPolicy = PspGetNoChildProcessRestrictedPolicy(p_Lock);
      *(_WORD *)v6 = 0;
      *(_BYTE *)(v6 + 2) = 0;
      v147 = NoChildProcessRestrictedPolicy - 1;
      if ( !v147 )
        goto LABEL_624;
      v148 = v147 - 1;
      if ( v148 )
      {
        if ( v148 == 1 )
          *(_BYTE *)(v6 + 2) = 1;
      }
      else
      {
        *(_BYTE *)(v6 + 1) = 1;
LABEL_624:
        *(_BYTE *)v6 = 1;
      }
      if ( a5 )
        *a5 = 3;
      if ( Handle == (HANDLE)-1LL )
        return v9;
LABEL_628:
      ObfDereferenceObjectWithTag(p_Lock, 0x79517350u);
      return 0;
    case 74:
      if ( (_DWORD)v5 != 1 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_BYTE *)v6 = (*((_DWORD *)Object + 543) & 0x200) != 0;
      goto LABEL_160;
    case 75:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      if ( *((_QWORD *)Object + 280) )
        LODWORD(v9) = qword_140C37D70;
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      goto LABEL_160;
    case 76:
      memset(v258, 0, sizeof(v258));
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v80 = result;
      if ( result < 0 )
        return result;
      v81 = Object;
      PsQueryProcessEnergyValues(Object, v258);
      v149 = 432LL;
      if ( (unsigned int)v5 <= 0x1B0 )
        v149 = (unsigned int)v5;
      memmove((void *)v6, v258, v149);
      if ( a5 )
        *a5 = 432;
      goto LABEL_687;
    case 77:
      v241 = 0LL;
      v242 = 0;
      if ( (_DWORD)v5 != 12 )
        return -1073741820;
      ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      if ( !ExtensionTable )
        return -1073741822;
      v151 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( v151 >= 0 )
      {
        v152 = *(__int64 (__fastcall **)(PVOID, __int64 *))(ExtensionTable + 16);
        v153 = Object;
        v151 = v152(Object, &v241);
        if ( v151 >= 0 )
        {
          *(_QWORD *)v6 = v241;
          *(_DWORD *)(v6 + 8) = v242;
          if ( a5 )
            *a5 = 12;
          v151 = 0;
          i = 0;
        }
        ObfDereferenceObjectWithTag(v153, 0x79517350u);
      }
      ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspBamExtensionHost);
      return v151;
    case 79:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( Handle == (HANDLE)-1LL )
      {
        v154 = &KeGetCurrentThread()->ApcState.Process->Header.LockNV;
        Object = v154;
      }
      else
      {
        result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v154 = Object;
      }
      *(_DWORD *)v6 = 0;
      v155 = 0;
      if ( (v154[628] & 0x4000) != 0 )
      {
        v155 = 1;
        *(_DWORD *)v6 = 1;
      }
      if ( (v154[628] & 0x8000) != 0 )
        *(_DWORD *)v6 = v155 | 2;
      *(_DWORD *)(v6 + 4) = v154[602];
      if ( a5 )
        *a5 = 8;
      if ( Handle == (HANDLE)-1LL )
        return v9;
      ObfDereferenceObjectWithTag(v154, 0x79517350u);
      return 0;
    case 81:
      if ( PreviousMode )
        return -1073741790;
      if ( (_DWORD)v5 != 48 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result >= 0 )
      {
        v138 = Object;
        DeviceMapInformation = PspAllocateAndQueryProcessNotificationChannel(v190, Object, v6);
        if ( DeviceMapInformation >= 0 && a5 )
        {
          *a5 = 48;
          ObfDereferenceObjectWithTag(v138, 0x79517350u);
          return DeviceMapInformation;
        }
        else
        {
LABEL_573:
          ObfDereferenceObjectWithTag(v138, 0x79517350u);
          return DeviceMapInformation;
        }
      }
      return result;
    case 82:
      memset(v258, 0, 144);
      if ( (unsigned int)v5 < 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      p_Lock = Object;
      PoQueryProcessEnergyTrackingState(Object, v258);
      if ( (unsigned int)v5 >= 0x90 )
        LODWORD(v5) = 144;
      memmove((void *)v6, v258, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_628;
    case 84:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      v81 = Object;
      v156 = *((_QWORD *)Object + 124);
      if ( v156 )
      {
        *(_QWORD *)&v258[0] = 0LL;
        memset(&v258[1], 0, 88);
        *((_QWORD *)&v258[0] + 1) = v156;
        v80 = VslpEnterIumSecureMode(2u, 61, 0, (__int64)v258);
LABEL_687:
        ObfDereferenceObjectWithTag(v81, 0x79517350u);
        return v80;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741790;
      }
    case 85:
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      ProcessTelemetryCoverage = EtwQueryProcessTelemetryCoverage(Object, v6, (unsigned int)v5, a5);
LABEL_158:
      ExecuteOptions = ProcessTelemetryCoverage;
LABEL_159:
      v41 = Object;
      goto LABEL_160;
    case 87:
    case 96:
      if ( a2 == 87 && !(_DWORD)v5 || a2 == 96 && (unsigned int)v5 < 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      v157 = result;
      if ( result >= 0 )
      {
        v158 = Object;
        *(_BYTE *)v6 = HIBYTE(*((_DWORD *)Object + 280)) & 3;
        if ( a2 == 96 )
          *(_DWORD *)v6 |= (v158[543] & 0x100000 | v158[543] & 0x80000 | ((v158[543] & 0x10000000 | (v158[543] >> 2) & 0x8000000u) >> 6)) >> 17;
        ObfDereferenceObjectWithTag(v158, 0x79517350u);
        return v157;
      }
      return result;
    case 88:
      v229 = 0LL;
      v230 = 0LL;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      i = result;
      if ( result < 0 )
        return result;
      v210 = 0LL;
      v211 = 0LL;
      v212 = 0LL;
      v214 = 0LL;
      v160 = (__int64)v190;
      --v190->KernelApcDisable;
      v161 = Object;
      ExAcquirePushLockSharedEx((ULONG_PTR)Object + 1080, 0LL);
      v162 = v161[292] >> 61;
      if ( (v162 == 3 || v162 == 4)
        && (v212 = v161[292] & 0x1FFFFFFFFFFFFFFFLL, v210 = v161[291], v211 = v210 - v161[288], v162 == 3) )
      {
        v163 = v214 | 0x200;
      }
      else
      {
        v163 = v214;
      }
      LODWORD(v214) = (v163 & 0xFFFFFF00 | *((_BYTE *)v161 + 2171) & 7 | (2 * (*((_BYTE *)v161 + 2171) & 0x38))) ^ ((v163 & 0xFF00 | *((_BYTE *)v161 + 2171) & 7 | (unsigned __int16)(2 * (*((_BYTE *)v161 + 2171) & 0x38))) ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v161 + 543) << 6)) & 0x100;
      if ( _InterlockedCompareExchange64(v161 + 135, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v161 + 135);
      KeAbPostRelease((ULONG_PTR)(v161 + 135));
      KeLeaveCriticalRegionThread(v160);
      p_Lock = Object;
      PsGetProcessDeepFreezeStats(Object, &v229);
      v209 = v229;
      v213 = v230;
      if ( !v211 )
        v211 = v229 - p_Lock[288];
      if ( !v212 )
        v212 = *((_QWORD *)&v229 + 1) - p_Lock[289] - v230;
      if ( (unsigned int)v5 >= 0x38 )
        LODWORD(v5) = 56;
      memmove((void *)v6, &v209, (unsigned int)v5);
      if ( a5 )
        *a5 = v5;
      i = 0;
      goto LABEL_628;
    case 89:
      v207[0] = 0LL;
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      if ( PreviousMode )
      {
        if ( v6 < 0x7FFFFFFF0000LL )
          v14 = v6;
        *(_QWORD *)v14 = *(_QWORD *)v14;
      }
      v159 = KeGetCurrentThread()->ApcState.Process;
      if ( Handle != (HANDLE)-1LL || v159 != CurrentThread->Process )
        return -1073741790;
      result = ObOpenObjectByPointer(
                 (PVOID)v159[1].Affinity.StaticBitmap[17],
                 0,
                 0LL,
                 5u,
                 MmSectionObjectType,
                 PreviousMode,
                 v207);
      if ( result >= 0 )
      {
        *(HANDLE *)v6 = v207[0];
        if ( a5 )
          *a5 = 8;
      }
      return result;
    case 92:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      ExecuteOptions = result;
      if ( result < 0 )
        return result;
      v41 = Object;
      *(_QWORD *)v6 = *((_QWORD *)Object + 287);
      if ( a5 )
        *a5 = 8;
LABEL_160:
      ObfDereferenceObjectWithTag(v41, 0x79517350u);
      return ExecuteOptions;
    case 94:
      if ( (_DWORD)v5 != 8 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      i = result;
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 280) & 0x8000) != 0 )
      {
        _InterlockedOr(v168, 0);
        *(_QWORD *)v6 = *((_QWORD *)Object + 316);
        if ( a5 )
          *a5 = 8;
        i = 0;
LABEL_316:
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return v9;
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741700;
      }
    case 97:
      if ( (_DWORD)v5 == 8 )
      {
        if ( Handle == (HANDLE)-1LL )
        {
          v164 = KeGetCurrentThread()->ApcState.Process;
          if ( v164[1].Affinity.StaticBitmap[24] )
          {
            v165 = 0LL;
            v166 = (__int64 *)v164[1].Affinity.StaticBitmap[30];
            if ( v166 )
              v165 = *v166;
            if ( v165 )
            {
              if ( (*(_DWORD *)(v165 + 1140) & 1) != 0 )
                LODWORD(v195) = 1;
            }
            else
            {
              v167 = v195;
              if ( (*(_BYTE *)(v164[1].Affinity.StaticBitmap[24] + 1984) & 1) != 0 )
                v167 = 1;
              LODWORD(v195) = v167;
            }
          }
          *(_QWORD *)v6 = v195;
          if ( a5 )
            *a5 = 8;
          return v9;
        }
        else
        {
          return -1073741811;
        }
      }
      else
      {
        if ( a5 )
          *a5 = 8;
        return -1073741820;
      }
    case 106:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      *(_DWORD *)v6 = 16;
      if ( a5 )
        *a5 = 4;
      return 0;
    case 109:
      if ( (_DWORD)v5 != 4 )
        return -1073741820;
      result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x79517350u, (__int64)&Object, 0LL, 0LL);
      if ( result < 0 )
        return result;
      if ( !PsIsCurrentThreadInServerSilo(v51, v50) )
      {
        EffectiveServerSilo = PsGetEffectiveServerSilo(*((_QWORD *)Object + 162));
        if ( EffectiveServerSilo )
          LODWORD(v9) = *(_DWORD *)(EffectiveServerSilo + 1452);
      }
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_DWORD *)v6 = v9;
      if ( a5 )
        *a5 = 4;
      return 0;
    default:
      return -1073741821;
  }
  switch ( v111 )
  {
    case 1:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x40) == 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 628) & 0x10) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 0x20) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 628) & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      goto LABEL_548;
    case 2:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v117 = *((_DWORD *)Object + 628);
      if ( (v117 & 0x100) != 0 )
      {
        v118 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v117 & 0x800) == 0 )
          goto LABEL_436;
        v118 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v118;
LABEL_436:
      if ( (*((_DWORD *)Object + 628) & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_548;
    case 3:
      i = 0;
      v112 = ObReferenceProcessHandleTable((struct _EX_RUNDOWN_REF *)Object);
      if ( v112 )
      {
        ExQueryHandleExceptionsPermanency(v112, &v174, &v175);
        *(_DWORD *)(v6 + 4) = 0;
        if ( v174 )
          *(_DWORD *)(v6 + 4) |= 1u;
        if ( v175 )
          *(_DWORD *)(v6 + 4) |= 2u;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
      }
      else
      {
        i = -1073741558;
      }
      goto LABEL_548;
    case 4:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v113 = *((_DWORD *)Object + 628);
      if ( (v113 & 0x1000) != 0 )
      {
        v114 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v113 & 0x2000) == 0 )
          goto LABEL_424;
        v114 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v114;
LABEL_424:
      if ( !(unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() )
        goto LABEL_548;
      v115 = *((_DWORD *)Object + 732);
      if ( (v115 & 2) != 0 )
      {
        v116 = *(_DWORD *)(v6 + 4) | 4;
      }
      else
      {
        if ( (v115 & 4) == 0 )
          goto LABEL_548;
        v116 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v116;
      goto LABEL_548;
    case 6:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      goto LABEL_548;
    case 7:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 628) & 2) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 628) & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x2000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x4000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_548;
    case 8:
      i = 0;
      PsQueryProcessSignatureMitigationPolicy(Object, &v192, v14, 0x140000000uLL);
      *(_DWORD *)(v6 + 4) = v192;
      goto LABEL_548;
    case 9:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v119 = *((_DWORD *)Object + 628);
      if ( (v119 & 0x10000) != 0 )
      {
        v120 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v119 & 0x20000) == 0 )
          goto LABEL_548;
        v120 = *(_DWORD *)(v6 + 4) | 2;
      }
      *(_DWORD *)(v6 + 4) = v120;
      goto LABEL_548;
    case 10:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      v121 = *((_DWORD *)Object + 628);
      if ( (v121 & 0x80000) != 0 )
      {
        v122 = *(_DWORD *)(v6 + 4) | 1;
      }
      else
      {
        if ( (v121 & 0x100000) == 0 )
          goto LABEL_467;
        v122 = *(_DWORD *)(v6 + 4) | 8;
      }
      *(_DWORD *)(v6 + 4) = v122;
LABEL_467:
      v123 = *((_DWORD *)Object + 628);
      if ( (v123 & 0x200000) != 0 )
      {
        v124 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        if ( (v123 & 0x400000) == 0 )
          goto LABEL_472;
        v124 = *(_DWORD *)(v6 + 4) | 0x10;
      }
      *(_DWORD *)(v6 + 4) = v124;
LABEL_472:
      if ( (*((_DWORD *)Object + 628) & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      goto LABEL_548;
    case 11:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 4) = PsGetWin32KFilterSet() & 0xF | *(_DWORD *)(v6 + 4) & 0xFFFFFFF0;
      goto LABEL_548;
    case 12:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 629) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 629) & 4) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x400) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      if ( (*((_DWORD *)Object + 629) & 0x10) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x40u;
      if ( (*((_DWORD *)Object + 629) & 0x40) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x100u;
      if ( (*((_DWORD *)Object + 629) & 0x100) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x400u;
      if ( (*((_DWORD *)Object + 629) & 2) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 8) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x800) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x20u;
      if ( (*((_DWORD *)Object + 629) & 0x20) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x80u;
      if ( (*((_DWORD *)Object + 629) & 0x80u) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      if ( (*((_DWORD *)Object + 629) & 0x200) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x800u;
      goto LABEL_548;
    case 13:
      i = 0;
      v125 = PspGetNoChildProcessRestrictedPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v126 = v125 - 1;
      if ( !v126 )
        goto LABEL_506;
      v127 = v126 - 1;
      if ( v127 )
      {
        if ( v127 != 1 )
          goto LABEL_548;
        v128 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        *(_DWORD *)(v6 + 4) |= 4u;
LABEL_506:
        v128 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v128;
      goto LABEL_548;
    case 14:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 628) & 0x40000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( *((int *)Object + 628) < 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 0x1000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x2000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 732) & 1) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      goto LABEL_548;
    case 15:
      i = 0;
      *(_DWORD *)(v6 + 4) = 0;
      if ( (*((_DWORD *)Object + 629) & 0x4000) != 0 )
        *(_DWORD *)(v6 + 4) |= 1u;
      if ( (*((_DWORD *)Object + 629) & 0x8000) != 0 )
        *(_DWORD *)(v6 + 4) |= 2u;
      if ( (*((_DWORD *)Object + 629) & 0x20000) != 0 )
        *(_DWORD *)(v6 + 4) |= 4u;
      if ( (*((_DWORD *)Object + 629) & 0x40000) != 0 )
        *(_DWORD *)(v6 + 4) |= 8u;
      if ( (*((_DWORD *)Object + 629) & 0x100000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x10u;
      if ( (*((_DWORD *)Object + 629) & 0x200000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x20u;
      if ( (*((_DWORD *)Object + 629) & 0x400000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x40u;
      if ( (*((_DWORD *)Object + 629) & 0x800000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x80u;
      if ( (*((_DWORD *)Object + 629) & 0x40000000) != 0 )
        *(_DWORD *)(v6 + 4) |= 0x100u;
      if ( *((int *)Object + 629) < 0 )
        *(_DWORD *)(v6 + 4) |= 0x200u;
      goto LABEL_548;
    case 16:
      i = 0;
      RedirectionTrustPolicy = PspGetRedirectionTrustPolicy(Object);
      *(_DWORD *)(v6 + 4) = 0;
      v130 = RedirectionTrustPolicy - 1;
      if ( v130 )
      {
        if ( v130 != 1 )
          goto LABEL_548;
        v131 = *(_DWORD *)(v6 + 4) | 2;
      }
      else
      {
        v131 = *(_DWORD *)(v6 + 4) | 1;
      }
      *(_DWORD *)(v6 + 4) = v131;
LABEL_548:
      if ( Handle != (HANDLE)-1LL )
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
      return i;
    default:
      i = -1073741637;
      goto LABEL_548;
  }
}
