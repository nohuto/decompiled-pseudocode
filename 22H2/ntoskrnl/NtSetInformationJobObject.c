/*
 * XREFs of NtSetInformationJobObject @ 0x140614660
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228520 (KeIsEmptyAffinityEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     KeSetSchedulingGroupWeights @ 0x1402DDB30 (KeSetSchedulingGroupWeights.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402DDC20 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x140310E44 (KeQuerySchedulingGroupReadyTime.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14031AA38 (KeSetSchedulingGroupCycleNotification.c)
 *     KeFirstGroupAffinityEx @ 0x14031B960 (KeFirstGroupAffinityEx.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     KeQueryActiveGroupCount @ 0x1403544B0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D39D0 (wcsnlen.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     KeAddGroupAffinityEx @ 0x140513440 (KeAddGroupAffinityEx.c)
 *     PspJobIsAppSilo @ 0x140580F1C (PspJobIsAppSilo.c)
 *     PspLockWorkingSetChangeExclusiveUnsafe @ 0x140581864 (PspLockWorkingSetChangeExclusiveUnsafe.c)
 *     PspSetJobIoRateControl @ 0x1405D7F68 (PspSetJobIoRateControl.c)
 *     PspCreateSilo @ 0x1405D90DC (PspCreateSilo.c)
 *     PspBindProcessSessionToJob @ 0x1406139C8 (PspBindProcessSessionToJob.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406144E0 (PspGetJobLimitInformationValidFlags.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x140614508 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406160B4 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406160DC (PspNotificationLimitRateControlToleranceField.c)
 *     PspUnlockJobChain @ 0x140616570 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406166A0 (PspLockJobChain.c)
 *     PspLockJobConditionally @ 0x1406167C8 (PspLockJobConditionally.c)
 *     PspRateControlLimitFlag @ 0x140616ABC (PspRateControlLimitFlag.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140618450 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140618D9C (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140618DF8 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobConditionally @ 0x1406193EC (PspUnlockJobConditionally.c)
 *     PsInvokeWin32Callout @ 0x14061B5A0 (PsInvokeWin32Callout.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14063E2A0 (ObReferenceObjectByHandleWithTag.c)
 *     PspAddSchedulingGroupToJobChain @ 0x14065C6DC (PspAddSchedulingGroupToJobChain.c)
 *     IoFreeMiniCompletionPacket @ 0x14065CB10 (IoFreeMiniCompletionPacket.c)
 *     PspFreeRateControl @ 0x14065CB8C (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14065CBDC (PspAllocateRateControl.c)
 *     PspLockRootJobExclusive @ 0x14065CFF0 (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x14065D058 (PspFreezeJobTree.c)
 *     PspSetJobIoAttribution @ 0x14065D8D0 (PspSetJobIoAttribution.c)
 *     PspScheduleEnforcementWorker @ 0x14065E080 (PspScheduleEnforcementWorker.c)
 *     PspSetBackgroundJobTree @ 0x14069F420 (PspSetBackgroundJobTree.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1406A54AC (PspDoesJobHierarchyPermitUILimits.c)
 *     SePrivilegeCheck @ 0x1406CDD00 (SePrivilegeCheck.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     PsChargeSharedPoolQuota @ 0x1406D90F8 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x1406D9184 (PsReturnSharedPoolQuota.c)
 *     IoAllocateMiniCompletionPacket @ 0x1407024D0 (IoAllocateMiniCompletionPacket.c)
 *     PspIsContextAdmin @ 0x14070CE38 (PspIsContextAdmin.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x14070DE2C (PspSetEnergyTrackingStateJobTree.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckPrivilegedObject @ 0x14078DD60 (SeCheckPrivilegedObject.c)
 *     PspAssignSiloSystemRootPath @ 0x140905E50 (PspAssignSiloSystemRootPath.c)
 *     PspBeginSiloTeardown @ 0x140905F38 (PspBeginSiloTeardown.c)
 *     PspConvertSiloToServerSilo @ 0x1409060A4 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140908A10 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x140908AD4 (PspApplyWorkingSetLimits.c)
 *     PspSetJobMemoryPartition @ 0x14090958C (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x140909884 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x140909914 (PspSetNetRateControl.c)
 *     PspEnumProcessesInJobHierarchy @ 0x14090E86C (PspEnumProcessesInJobHierarchy.c)
 *     EtwTraceJobSetQuery @ 0x14093612C (EtwTraceJobSetQuery.c)
 *     ObCreateSiloRootDirectory @ 0x140980520 (ObCreateSiloRootDirectory.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength)
{
  size_t v4; // r12
  __int64 v5; // r13
  unsigned int v7; // ecx
  KPROCESSOR_MODE PreviousMode; // al
  __int64 *v9; // rdi
  ACCESS_MASK v10; // edx
  NTSTATUS result; // eax
  __int64 v12; // rdx
  int v13; // esi
  char *v14; // r14
  int v15; // ebx
  void *MiniCompletionPacket; // rbx
  PVOID v17; // rbx
  int v18; // eax
  __int64 v19; // r8
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // eax
  __int64 j; // rdx
  unsigned int v27; // edx
  int v28; // eax
  int v29; // edx
  int *v30; // r9
  int *v31; // r10
  int **v32; // rbx
  struct _ERESOURCE *v33; // rdi
  int *v34; // rdi
  int v35; // esi
  __int64 v36; // rdx
  _DWORD *v37; // r8
  _DWORD *v38; // rax
  __int64 v39; // r8
  _DWORD *v40; // rax
  _DWORD *v41; // r8
  int v42; // edx
  bool v43; // zf
  int *v44; // rax
  __int64 v45; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  __int64 v47; // rsi
  _DWORD *v48; // r9
  __int64 v49; // rdi
  int v50; // eax
  struct _ERESOURCE *v51; // rcx
  __int64 v52; // r9
  int v53; // edi
  int v54; // edx
  KPROCESSOR_MODE v55; // r14
  int v56; // eax
  int v57; // ecx
  unsigned int v58; // ecx
  _DWORD *v59; // rcx
  char *v60; // rdx
  int *v61; // rbx
  int v62; // edi
  char v63; // bl
  char v64; // di
  char v65; // di
  char v66; // bl
  PETHREAD v67; // rdi
  char v68; // bl
  int v69; // esi
  __int64 v70; // r8
  _DWORD *v71; // r9
  int v72; // eax
  __int64 RateControl; // rax
  __int64 v74; // rdx
  PVOID *v75; // rdi
  _DWORD *v76; // rax
  __int64 *v77; // rcx
  struct _ERESOURCE *v78; // rcx
  void *v79; // rdi
  __int64 v80; // r8
  _DWORD *v81; // r9
  unsigned int v82; // edx
  __int64 v83; // rdx
  int v84; // ebx
  __int64 v85; // rcx
  char v86; // bl
  unsigned int *v87; // r11
  unsigned __int16 v88; // cx
  POOL_TYPE v89; // r12d
  _WORD *v90; // rbx
  wchar_t *v91; // rbx
  struct _ERESOURCE *v92; // rbx
  int Silo; // eax
  unsigned int v94; // ecx
  unsigned int v95; // r14d
  unsigned int v96; // ebx
  char v97; // al
  int v98; // ecx
  int v99; // eax
  char v100; // al
  int v101; // ecx
  __int64 v102; // rcx
  struct _ERESOURCE *PoolWithTag; // rdi
  BOOLEAN v104; // al
  ULONG v105; // edx
  unsigned __int16 Group; // ax
  __int64 v107; // rax
  char *v108; // rsi
  char *i; // rbx
  void *v110; // rcx
  unsigned __int16 v111; // cx
  __m128i v112; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v114; // rax
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  BOOLEAN v116; // al
  PERESOURCE v117; // r12
  __int64 *v118; // rcx
  __int64 v119; // rax
  BOOLEAN v120; // al
  ULONG v121; // edx
  BOOLEAN v122; // al
  __int64 v123; // rdx
  BOOLEAN v124; // al
  unsigned __int64 v125; // xmm0_8
  size_t v126; // rdi
  wchar_t *v127; // rax
  PETHREAD v128; // rdx
  char *v129; // rcx
  int v130; // r8d
  signed __int8 v131; // cf
  signed __int32 v132[8]; // [rsp+0h] [rbp-BC8h] BYREF
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B88h]
  PVOID DeferredContext; // [rsp+48h] [rbp-B80h] BYREF
  JOBOBJECTINFOCLASS v135; // [rsp+50h] [rbp-B78h]
  int v136; // [rsp+58h] [rbp-B70h]
  char v137; // [rsp+5Ch] [rbp-B6Ch] BYREF
  _BYTE v138[3]; // [rsp+5Dh] [rbp-B6Bh] BYREF
  int v139; // [rsp+60h] [rbp-B68h]
  PVOID P; // [rsp+68h] [rbp-B60h]
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp-B58h]
  unsigned __int16 v142; // [rsp+78h] [rbp-B50h]
  __int64 v143; // [rsp+80h] [rbp-B48h] BYREF
  PETHREAD Thread; // [rsp+88h] [rbp-B40h]
  PERESOURCE Resource; // [rsp+90h] [rbp-B38h]
  PERESOURCE v146; // [rsp+98h] [rbp-B30h]
  char v147; // [rsp+A0h] [rbp-B28h]
  char v148; // [rsp+A1h] [rbp-B27h]
  char v149; // [rsp+A2h] [rbp-B26h]
  unsigned int v150; // [rsp+A4h] [rbp-B24h]
  int JobLimitInformationValidFlags; // [rsp+A8h] [rbp-B20h]
  unsigned int v152; // [rsp+ACh] [rbp-B1Ch]
  char *v153; // [rsp+B0h] [rbp-B18h] BYREF
  unsigned int v154; // [rsp+B8h] [rbp-B10h] BYREF
  unsigned int v155; // [rsp+BCh] [rbp-B0Ch]
  __int64 v156; // [rsp+C0h] [rbp-B08h] BYREF
  void *Src; // [rsp+C8h] [rbp-B00h]
  __int64 v158[2]; // [rsp+D0h] [rbp-AF8h] BYREF
  __int64 v159; // [rsp+E0h] [rbp-AE8h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-AE0h] BYREF
  __int64 v161; // [rsp+108h] [rbp-AC0h]
  __int64 v162; // [rsp+110h] [rbp-AB8h] BYREF
  PSECURITY_SUBJECT_CONTEXT v163; // [rsp+118h] [rbp-AB0h]
  int v164; // [rsp+120h] [rbp-AA8h]
  __int64 v165; // [rsp+128h] [rbp-AA0h] BYREF
  PVOID Object; // [rsp+130h] [rbp-A98h] BYREF
  __m128i v167; // [rsp+138h] [rbp-A90h] BYREF
  __int64 v168; // [rsp+148h] [rbp-A80h] BYREF
  wchar_t *v169; // [rsp+150h] [rbp-A78h]
  __m128i v170; // [rsp+158h] [rbp-A70h] BYREF
  unsigned int v171; // [rsp+168h] [rbp-A60h]
  int v172; // [rsp+16Ch] [rbp-A5Ch]
  int v173; // [rsp+170h] [rbp-A58h]
  HANDLE Handle[2]; // [rsp+178h] [rbp-A50h]
  PVOID v175[2]; // [rsp+188h] [rbp-A40h]
  __int128 v176; // [rsp+198h] [rbp-A30h] BYREF
  __int128 v177; // [rsp+1A8h] [rbp-A20h]
  int v178; // [rsp+1B8h] [rbp-A10h]
  char *v179; // [rsp+1C0h] [rbp-A08h] BYREF
  int v180; // [rsp+1C8h] [rbp-A00h]
  int v181; // [rsp+1CCh] [rbp-9FCh]
  __int64 v182; // [rsp+1D0h] [rbp-9F8h]
  __m128i v183; // [rsp+1D8h] [rbp-9F0h]
  __int128 v184; // [rsp+1E8h] [rbp-9E0h]
  __int64 v185; // [rsp+1F8h] [rbp-9D0h]
  __int64 v186; // [rsp+200h] [rbp-9C8h]
  __int64 v187; // [rsp+208h] [rbp-9C0h]
  __int64 v188; // [rsp+210h] [rbp-9B8h]
  _OWORD v189[5]; // [rsp+220h] [rbp-9A8h] BYREF
  _QWORD v190[18]; // [rsp+270h] [rbp-958h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-8C8h] BYREF
  _QWORD v192[10]; // [rsp+320h] [rbp-8A8h] BYREF
  __m128i v193; // [rsp+370h] [rbp-858h] BYREF
  __m128i v194; // [rsp+380h] [rbp-848h]
  __m128i v195; // [rsp+390h] [rbp-838h]
  __m128i v196; // [rsp+3A0h] [rbp-828h]
  __int64 v197; // [rsp+3B0h] [rbp-818h]
  _QWORD v198[20]; // [rsp+3C0h] [rbp-808h] BYREF
  __m128i v199; // [rsp+460h] [rbp-768h]
  __m128i v200; // [rsp+470h] [rbp-758h]
  __m128i v201; // [rsp+480h] [rbp-748h]
  _OWORD v202[111]; // [rsp+490h] [rbp-738h] BYREF

  v4 = JobObjectInformationLength;
  BugCheckParameter2 = (ULONG_PTR)JobObjectInformation;
  v5 = JobObjectInformationClass;
  P = JobHandle;
  v135 = JobObjectInformationClass;
  Src = JobObjectInformation;
  memset((char *)v202 + 8, 0, 0xA0uLL);
  *(_OWORD *)Handle = 0LL;
  v162 = 0LL;
  v165 = 0LL;
  v137 = 0;
  v168 = 0LL;
  memset(v198, 0, 0x98uLL);
  v193 = 0LL;
  v167 = 0LL;
  memset(v189, 0, 0x48uLL);
  Object = 0LL;
  memset(v190, 0, sizeof(v190));
  DeferredContext = 0LL;
  v154 = 0;
  memset(&v202[11], 0, 0x640uLL);
  v176 = 0LL;
  v177 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v161 = 0LL;
  memset(v192, 0, 0x48uLL);
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v194 = 0LL;
  v195 = 0LL;
  v196 = 0LL;
  v197 = 0LL;
  v143 = 0LL;
  v138[0] = 0;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v153 = 0LL;
  *(_OWORD *)v158 = 0LL;
  v156 = 0LL;
  v183 = 0LL;
  v184 = 0LL;
  v185 = 0LL;
  v170 = 0LL;
  *(_OWORD *)v175 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x2E )
    return -1073741821;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_6;
      return -1073741820;
    case 0xC:
      if ( (_DWORD)v4 == 48 )
        goto LABEL_6;
      v43 = (_DWORD)v4 == 56;
LABEL_99:
      if ( v43 )
        goto LABEL_6;
      return -1073741820;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_6;
      v43 = (_DWORD)v4 == 144;
      goto LABEL_99;
  }
  v7 = dword_14098612C[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return -1073741820;
LABEL_6:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  AccessMode = PreviousMode;
  v138[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64 *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_14098606C[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    v9 = (__int64 *)Src;
  }
  if ( !JobHandle )
    return -1073741816;
  v10 = 16;
  if ( (_DWORD)v5 != 5 )
    v10 = 2;
  result = ObReferenceObjectByHandleWithTag(
             JobHandle,
             v10,
             (POBJECT_TYPE)PsJobType,
             PreviousMode,
             0x79517350u,
             &DeferredContext,
             0LL);
  if ( result >= 0 )
  {
    v13 = 0;
    v136 = 0;
    LOBYTE(v139) = 0;
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 24 )
    {
      if ( (_DWORD)v5 == 24 )
      {
        v47 = *v9;
        v186 = *v9;
        v14 = (char *)DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( (*((_DWORD *)v14 + 330) & 0x20) != 0 )
        {
          v49 = *((_QWORD *)v14 + 126);
          v50 = *(_DWORD *)(v49 + 40);
          if ( (v50 & 0x10) == 0 )
          {
            *(_DWORD *)(v49 + 40) = v50 | 0x10;
            KeInitializeDpc((PRKDPC)(v49 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v14);
          }
          KeSetSchedulingGroupCycleNotification(v49 + 128, v49 + 48, v47, v48);
          goto LABEL_119;
        }
LABEL_380:
        v13 = -1073741811;
        goto LABEL_120;
      }
      if ( (int)v5 > 12 )
      {
        if ( (_DWORD)v5 != 14 )
        {
          if ( (_DWORD)v5 != 15 )
          {
            if ( (_DWORD)v5 != 16 )
            {
              if ( (_DWORD)v5 == 18 )
              {
                v193 = *(__m128i *)v9;
                if ( v193.m128i_i32[0] && (v193.m128i_i32[0] & 0xFFFFFFF8) == 0 )
                {
                  v14 = (char *)DeferredContext;
                  v13 = PspFreezeJobTree(DeferredContext, &v193);
                  if ( v13 >= 0 )
                    *(_DWORD *)v9 = v193.m128i_i32[0];
                  goto LABEL_35;
                }
                goto LABEL_384;
              }
              if ( (_DWORD)v5 != 21 )
              {
                if ( (_DWORD)v5 != 22 )
                {
                  if ( (_DWORD)v5 == 23 )
                  {
                    if ( *(_BYTE *)v9 != 1 )
                    {
                      v13 = -1073741811;
                      v136 = -1073741811;
                      v14 = (char *)DeferredContext;
                      goto LABEL_35;
                    }
                    v14 = (char *)DeferredContext;
                    PspEnumJobsAndProcessesInJobHierarchy(DeferredContext, 0LL, 0);
LABEL_34:
                    v13 = 0;
LABEL_35:
                    KiLeaveGuardedRegionUnsafe((__int64)Thread);
                    if ( v13 )
                    {
                      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                        EtwTraceJobSetQuery((_DWORD)v14, v5, 0, 0, v13, 1831);
                    }
                    ObfDereferenceObjectWithTag(v14, 0x79517350u);
                    return v13;
                  }
LABEL_459:
                  v13 = -1073741821;
                  goto LABEL_282;
                }
                v137 = *(_BYTE *)v9;
                v14 = (char *)DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( (*((_DWORD *)v14 + 330) & 0x20) != 0 )
                {
                  v81 = (_DWORD *)*((_QWORD *)v14 + 126);
                  v82 = v81[10];
                  if ( (v82 & 0x40) == 0 )
                  {
                    if ( (v82 & 1) != 0 || (v82 & 0x20) != 0 )
                    {
                      v13 = -1073741637;
                      goto LABEL_120;
                    }
                    if ( ((v82 >> 3) & 1) != (v137 != 0) )
                    {
                      LOBYTE(v80) = -v137;
                      v83 = (v137 != 0 ? 8 : 0) | v82 & 0xFFFFFFF7;
                      v81[10] = v83;
                      LOBYTE(v83) = v137;
                      KeSetSchedulingGroupRankBias(*((_QWORD *)v14 + 126) + 128LL, v83, v80, v81);
                      PspEnumProcessesInJobHierarchy(v14, PspSetProcessCacheIsolationCallback, &v137, 1LL);
LABEL_119:
                      v13 = 0;
LABEL_120:
                      v51 = (struct _ERESOURCE *)(v14 + 56);
LABEL_121:
                      ExReleaseResourceLite(v51);
                      goto LABEL_35;
                    }
                  }
                }
                goto LABEL_380;
              }
              v147 = *(_BYTE *)v9;
              v14 = (char *)DeferredContext;
              v18 = PspSetBackgroundJobTree(DeferredContext);
LABEL_64:
              v13 = v18;
              if ( v18 < 0 )
                goto LABEL_35;
              goto LABEL_34;
            }
            v172 = *(_DWORD *)v9;
            v15 = v172;
            v14 = (char *)DeferredContext;
            if ( (v172 & 0xFFFFC001) == 0 )
            {
              ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
              if ( v14 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
              *((_DWORD *)v14 + 219) = v15;
              PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
              goto LABEL_33;
            }
LABEL_430:
            v13 = -1073741811;
            goto LABEL_35;
          }
          memmove(&v165, v9, v4);
          v68 = v165;
          if ( (v165 & 0xFFFFFFE0) == 0 )
          {
            v69 = HIDWORD(v165);
            LODWORD(v143) = HIDWORD(v165);
            v135 = v165 & 1;
            if ( (v165 & 1) == 0 )
              goto LABEL_181;
            if ( (v165 & 2) != 0 )
            {
              if ( (v165 & 0x10) == 0 && (unsigned __int16)(WORD2(v165) - 1) <= 8u )
                goto LABEL_181;
            }
            else if ( (unsigned __int16)(WORD2(v165) - 1) <= 0x270Fu
                   && ((v165 & 0x10) == 0 || (v165 & 4) == 0 && HIWORD(v165) >= WORD2(v165) && HIWORD(v165) <= 0x2710u) )
            {
LABEL_181:
              v14 = (char *)DeferredContext;
              PspLockJobChain(DeferredContext, Thread, 0LL);
              v72 = *((_DWORD *)v14 + 330);
              if ( v135 )
              {
                if ( (v72 & 0x20) == 0 )
                {
                  RateControl = PspAllocateRateControl(2LL);
                  v74 = RateControl;
                  if ( !RateControl )
                  {
                    v13 = -1073741670;
                    goto LABEL_208;
                  }
                  *((_QWORD *)v14 + 126) = RateControl;
LABEL_193:
                  v75 = (PVOID *)(v14 + 1008);
                  *(_DWORD *)(*((_QWORD *)v14 + 126) + 40LL) = 0;
                  *(_DWORD *)(*((_QWORD *)v14 + 126) + 44LL) = v69;
                  if ( v135 )
                  {
                    if ( (v68 & 4) != 0 )
                    {
                      *((_DWORD *)*v75 + 10) |= 1u;
                      WORD1(v143) = v69;
                    }
                    if ( (v68 & 2) != 0 )
                    {
                      *((_DWORD *)*v75 + 10) |= 4u;
                      HIDWORD(v143) = 0;
                    }
                    else
                    {
                      HIDWORD(v143) = 1;
                      if ( (v68 & 0x14) == 0 )
                        WORD1(v143) = 10000;
                    }
                    if ( (v68 & 8) != 0 )
                      *((_DWORD *)*v75 + 10) |= 2u;
                    if ( (v68 & 0x10) != 0 )
                      *((_DWORD *)*v75 + 10) |= 0x20u;
                    v76 = *v75;
                    v77 = (__int64 *)((char *)*v75 + 128);
                    if ( *v75 == (PVOID)v74 )
                    {
                      *v77 = v143;
                      v13 = PspAddSchedulingGroupToJobChain(*((_QWORD *)v14 + 134), v14);
                      v136 = v13;
                      if ( v13 < 0 )
                      {
                        if ( *v75 )
                        {
                          PspFreeRateControl(*v75);
                          *v75 = 0LL;
                        }
                        goto LABEL_208;
                      }
                      _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x20u);
                      v14 = (char *)DeferredContext;
                    }
                    else
                    {
                      v156 = (__int64)*v75 + 128;
                      if ( (v76[10] & 4) != 0 )
                        KeSetSchedulingGroupWeights(1u, (__int64)&v156, (__int64)&v143);
                      else
                        KeSetSchedulingGroupCpuRates((__int64)v77, &v156, &v143);
                    }
                    v162 = *((_QWORD *)*v75 + 5);
                  }
                  else
                  {
                    v143 = 0x327102710LL;
                    *((_DWORD *)*v75 + 10) |= 0x40u;
                    v84 = v143;
                    *((_DWORD *)*v75 + 11) = v143;
                    v156 = (__int64)*v75 + 128;
                    v138[0] = (*(_DWORD *)(v156 + 4) & 4) != 0;
                    *((_QWORD *)v14 + 128) += KeQuerySchedulingGroupReadyTime(v156, v74, v70, v71);
                    KeSetSchedulingGroupCpuRates(v85, &v156, &v143);
                    HIDWORD(v162) = v84;
                    if ( v138[0] )
                    {
                      v138[0] = 0;
                      PspEnumProcessesInJobHierarchy(v14, PspSetProcessCacheIsolationCallback, v138, 1LL);
                    }
                  }
                  v13 = 0;
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v14, 15, (unsigned int)&v162, 0, 0, 1829);
LABEL_208:
                  v128 = Thread;
                  v129 = v14;
LABEL_209:
                  PspUnlockJobChain(v129, v128, 0LL);
                  goto LABEL_35;
                }
              }
              else if ( (v72 & 0x20) == 0 )
              {
                v13 = -1073741811;
                goto LABEL_208;
              }
              v74 = 0LL;
              goto LABEL_193;
            }
          }
LABEL_384:
          v13 = -1073741811;
          goto LABEL_282;
        }
LABEL_296:
        P = 0LL;
        v146 = 0LL;
        v94 = 16;
        if ( (_DWORD)v5 != 14 )
          v94 = 2;
        v152 = v94;
        v95 = (unsigned int)v4 / v94;
        if ( (unsigned int)v4 % v94 )
        {
          v13 = -1073741820;
          goto LABEL_282;
        }
        v155 = (unsigned int)v4 / v94;
        LODWORD(v202[0]) = 1310721;
        memset((char *)v202 + 4, 0, 0xA4uLL);
        v111 = KeQueryActiveGroupCount() - 1;
        LOWORD(v139) = v111;
        while ( v95 )
        {
          if ( (_DWORD)v5 == 14 )
          {
            v112 = *(__m128i *)v9;
            v167 = v112;
            epi16 = _mm_extract_epi16(v112, 4);
            v167.m128i_i16[4] = epi16;
            v142 = epi16;
            v159 = v112.m128i_i64[0];
          }
          else
          {
            v114 = *(unsigned __int16 *)v9;
            v142 = v114;
            if ( (unsigned __int16)v114 > v111 )
              goto LABEL_400;
            v159 = qword_140CFC848[v114];
            epi16 = v142;
          }
          if ( epi16 > v111 || *((_QWORD *)v202 + epi16 + 1) || v159 != (v159 & qword_140CFC848[epi16]) )
          {
LABEL_400:
            v13 = -1073741811;
            v136 = -1073741811;
            break;
          }
          KeAddGroupAffinityEx((unsigned __int16 *)v202, v142, v159);
          v95 = --v155;
          v9 = (__int64 *)((char *)Src + v152);
          Src = v9;
          v13 = v136;
          v111 = v139;
        }
        v14 = (char *)DeferredContext;
        if ( v13 < 0 )
          goto LABEL_35;
        BugCheckParameter2 = (ULONG_PTR)DeferredContext + 432;
        if ( *((_QWORD *)DeferredContext + 54) )
          goto LABEL_406;
        PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v146 = (PERESOURCE)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
          if ( v146 )
          {
            v14 = (char *)DeferredContext;
LABEL_406:
            SeCaptureSubjectContextEx(
              Thread,
              Thread->ApcState.Process,
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = &SubjectContext.ImpersonationLevel;
            if ( AccessMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v116 = SePrivilegeCheck(
                       &RequiredPrivileges,
                       (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                       1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v116) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            Resource = (PERESOURCE)(v14 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            v13 = PspEnumProcessesInJobHierarchy(v14, PspSetAffinityLimitCallback, &SubjectContext, 1LL);
            v136 = v13;
            v117 = v146;
            if ( v13 >= 0 )
            {
              v118 = (__int64 *)BugCheckParameter2;
              v119 = *(_QWORD *)BugCheckParameter2;
              if ( *(_QWORD *)BugCheckParameter2 )
              {
                v176 = *(_OWORD *)(v119 + 8);
                v177 = *(_OWORD *)(v119 + 24);
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v176;
              }
              else
              {
                *(_QWORD *)BugCheckParameter2 = P;
                *((_QWORD *)v14 + 55) = v117;
                P = 0LL;
                p_ImpersonationLevel = 0LL;
                v119 = *v118;
              }
              *(struct _SECURITY_SUBJECT_CONTEXT *)v119 = SubjectContext;
              *(_QWORD *)(v119 + 32) = v161;
              v158[0] = (__int64)v14;
              HIDWORD(v158[1]) = *((_DWORD *)v14 + 64);
              LODWORD(v158[1]) = -17;
              *(_OWORD *)(v14 + 264) = v202[0];
              *(_OWORD *)(v14 + 280) = v202[1];
              *(_OWORD *)(v14 + 296) = v202[2];
              *(_OWORD *)(v14 + 312) = v202[3];
              *(_OWORD *)(v14 + 328) = v202[4];
              *(_OWORD *)(v14 + 344) = v202[5];
              *(_OWORD *)(v14 + 360) = v202[6];
              *(_OWORD *)(v14 + 376) = v202[7];
              *(_OWORD *)(v14 + 392) = v202[8];
              *(_OWORD *)(v14 + 408) = v202[9];
              *((_QWORD *)v14 + 53) = *(_QWORD *)&v202[10];
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx((_WORD *)v14 + 132) )
              {
                *((_DWORD *)v14 + 64) &= ~0x10u;
                _InterlockedAnd((volatile signed __int32 *)v14 + 330, 0xFFFFFFFD);
              }
              else
              {
                *((_DWORD *)v14 + 64) |= 0x10u;
                _InterlockedOr((volatile signed __int32 *)v14 + 330, 2u);
              }
              v14 = (char *)DeferredContext;
              PspEnumJobsAndProcessesInJobHierarchy(DeferredContext, (__int64)v158, 5);
              v13 = v136;
            }
            ExReleaseResourceLite(Resource);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !P )
              goto LABEL_35;
            ExFreePoolWithTag(P, 0x614A7350u);
            v110 = v117;
            goto LABEL_422;
          }
          goto LABEL_346;
        }
LABEL_345:
        v13 = -1073741670;
        goto LABEL_35;
      }
      if ( (_DWORD)v5 != 12 )
      {
        if ( (_DWORD)v5 == 2 )
          goto LABEL_123;
        if ( (_DWORD)v5 != 4 )
        {
          switch ( (_DWORD)v5 )
          {
            case 5:
              v183 = *(__m128i *)v9;
              v184 = *((_OWORD *)v9 + 1);
              v185 = v9[4];
              v13 = (v183.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
              goto LABEL_282;
            case 6:
              v171 = *(_DWORD *)v9;
              v96 = v171;
              v14 = (char *)DeferredContext;
              if ( v171 <= 1 )
              {
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                *((_DWORD *)v14 + 113) = v96;
                goto LABEL_120;
              }
              goto LABEL_430;
            case 7:
              P = 0LL;
              *(_OWORD *)Handle = *(_OWORD *)v9;
              if ( !Handle[1] )
              {
                v14 = (char *)DeferredContext;
                ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
                if ( v14 )
                  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                v79 = (void *)*((_QWORD *)v14 + 57);
                *((_QWORD *)v14 + 57) = 0LL;
                PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                if ( v79 )
                  ObfDereferenceObjectWithTag(v79, 0x624A7350u);
                goto LABEL_35;
              }
              v13 = ObReferenceObjectByHandleWithTag(
                      Handle[1],
                      2u,
                      IoCompletionObjectType,
                      AccessMode,
                      0x624A7350u,
                      &Object,
                      0LL);
              v14 = (char *)DeferredContext;
              if ( v13 < 0 )
              {
                v17 = 0LL;
              }
              else
              {
                if ( *((_QWORD *)DeferredContext + 125) )
                {
                  MiniCompletionPacket = 0LL;
                  goto LABEL_47;
                }
                MiniCompletionPacket = (void *)IoAllocateMiniCompletionPacket(
                                                 &PspNotificationPacketCallback,
                                                 DeferredContext);
                P = MiniCompletionPacket;
                if ( MiniCompletionPacket )
                {
LABEL_47:
                  ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
                  if ( *((_QWORD *)v14 + 57)
                    || (*((_DWORD *)v14 + 64) & 0x2000) != 0 && (*((_DWORD *)v14 + 330) & 1) != 0 )
                  {
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                    ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                    v13 = -1073741811;
                    v17 = P;
                  }
                  else
                  {
                    if ( *((_QWORD *)v14 + 125) )
                    {
                      v17 = P;
                    }
                    else
                    {
                      *((_QWORD *)v14 + 125) = MiniCompletionPacket;
                      v17 = 0LL;
                    }
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                    *((HANDLE *)v14 + 58) = Handle[0];
                    *((_QWORD *)v14 + 57) = Object;
                    *((_QWORD *)v14 + 59) = 0LL;
                    PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                    if ( (*((_DWORD *)v14 + 219) & 0x40) != 0 )
                      PspEnumProcessesInJobHierarchy(v14, PspAssociateCompletionPortCallback, v14, 1LL);
                    ExReleaseResourceLite((PERESOURCE)(v14 + 56));
                  }
                  goto LABEL_54;
                }
                v13 = -1073741670;
                v17 = 0LL;
              }
LABEL_54:
              if ( v17 )
                IoFreeMiniCompletionPacket(v17);
              goto LABEL_35;
          }
          if ( (_DWORD)v5 != 9 )
          {
            if ( (_DWORD)v5 != 11 )
              goto LABEL_459;
            goto LABEL_296;
          }
LABEL_123:
          memmove(v198, v9, v4);
          if ( (unsigned int)v4 < 0x98 )
            memset((char *)v198 + v4, 0, 152 - v4);
          JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v5, v4);
          v53 = ~JobLimitInformationValidFlags;
          LODWORD(v146) = ~JobLimitInformationValidFlags;
          v54 = v198[2];
          if ( (~JobLimitInformationValidFlags & v198[2]) != 0 )
            goto LABEL_384;
          LODWORD(v202[27]) = v198[2];
          Resource = 0LL;
          BugCheckParameter2 = 0LL;
          v163 = 0LL;
          DWORD1(v202[27]) = (v198[2] & 8) != 0 ? LODWORD(v198[5]) : 0;
          if ( (v198[2] & 0x20) != 0 )
          {
            if ( LODWORD(v198[7]) > 6 )
              goto LABEL_384;
            v55 = AccessMode;
            if ( (unsigned int)(LODWORD(v198[7]) - 3) <= 1 )
            {
              LOBYTE(v52) = AccessMode;
              v97 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                      SeIncreaseBasePriorityPrivilege,
                      P,
                      2LL,
                      v52) & 1;
              LOBYTE(v98) = 4 * v97;
              v139 = v98;
              if ( !v97 )
                goto LABEL_315;
              v54 = v198[2];
            }
            BYTE9(v202[65]) = v198[7];
          }
          else
          {
            BYTE9(v202[65]) = 0;
            v55 = AccessMode;
          }
          if ( (v54 & 0x80u) != 0 )
          {
            v99 = HIDWORD(v198[7]);
            if ( HIDWORD(v198[7]) >= 0xA )
              goto LABEL_384;
            if ( HIDWORD(v198[7]) > 5 )
            {
              LOBYTE(v52) = v55;
              v100 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                       SeIncreaseBasePriorityPrivilege,
                       P,
                       2LL,
                       v52) & 1;
              LOBYTE(v101) = 4 * v100;
              v139 = v101;
              if ( !v100 )
                goto LABEL_315;
              v54 = v198[2];
              v99 = HIDWORD(v198[7]);
            }
            DWORD1(v202[41]) = v99;
          }
          else
          {
            DWORD1(v202[41]) = 5;
          }
          if ( (v54 & 2) != 0 )
          {
            if ( !v198[0] )
              goto LABEL_384;
            *(_QWORD *)&v202[25] = v198[0];
          }
          else
          {
            *(_QWORD *)&v202[25] = 0LL;
          }
          v152 = v54 & 4;
          if ( (v54 & 4) != 0 )
          {
            if ( !v198[1] )
              goto LABEL_384;
            *((_QWORD *)&v202[25] + 1) = v198[1];
          }
          if ( (v54 & 1) == 0 )
          {
            v202[26] = 0uLL;
            goto LABEL_135;
          }
          v102 = v198[3];
          if ( !v198[3] && !v198[4] || v198[3] == -1LL && v198[4] == -1LL || v198[3] > v198[4] || v198[3] < 0x14000uLL )
            goto LABEL_384;
          if ( v198[3] <= (unsigned __int64)PspMinimumWorkingSet )
          {
LABEL_334:
            *(_QWORD *)&v202[26] = v102;
            *((_QWORD *)&v202[26] + 1) = v198[4];
LABEL_135:
            if ( (v54 & 0x100) != 0 )
            {
              if ( v198[14] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v202[47] = v198[14] >> 12;
            }
            else
            {
              *(_QWORD *)&v202[47] = 0LL;
            }
            if ( (v54 & 0x200) != 0 )
            {
              if ( v198[15] < 0x1000uLL )
                goto LABEL_384;
              *((_QWORD *)&v202[47] + 1) = v198[15] >> 12;
            }
            else
            {
              *((_QWORD *)&v202[47] + 1) = 0LL;
            }
            if ( (v54 & 0x200000) != 0 )
            {
              if ( v198[18] < 0x1000uLL )
                goto LABEL_384;
              *(_QWORD *)&v202[48] = v198[18] >> 12;
            }
            else
            {
              *(_QWORD *)&v202[48] = 0LL;
            }
            DWORD2(v202[27]) = 1310721;
            memset((char *)&v202[27] + 12, 0, 0xA4uLL);
            v135 = v202[27];
            v14 = (char *)DeferredContext;
            if ( (v202[27] & 0x10) != 0 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 2) != 0 || !v198[6] )
                goto LABEL_430;
              if ( !*((_QWORD *)DeferredContext + 54) )
              {
                PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x614A7350u);
                Resource = PoolWithTag;
                if ( !PoolWithTag )
                  goto LABEL_345;
                BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 40LL, 0LL);
                if ( !BugCheckParameter2 )
                {
LABEL_346:
                  v105 = 1632269136;
                  v78 = PoolWithTag;
LABEL_348:
                  ExFreePoolWithTag(v78, v105);
                  v13 = -1073741670;
                  goto LABEL_282;
                }
                v14 = (char *)DeferredContext;
                v135 = v202[27];
                v13 = v136;
              }
              SeCaptureSubjectContextEx(
                Thread,
                Thread->ApcState.Process,
                (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
              v163 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
              if ( AccessMode )
              {
                RequiredPrivileges.PrivilegeCount = 1;
                RequiredPrivileges.Control = 1;
                RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                RequiredPrivileges.Privilege[0].Attributes = 0;
                v104 = SePrivilegeCheck(
                         &RequiredPrivileges,
                         (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                         1);
                LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v104) & 1;
              }
              else
              {
                LODWORD(SubjectContext.ClientToken) |= 1u;
              }
              v56 = v139;
              LOBYTE(v56) = v139 | 2;
              v139 = v56;
              v53 = (int)v146;
            }
            else
            {
              LOBYTE(v56) = v139;
            }
            AccessMode = v56;
            v146 = (PERESOURCE)(v14 + 56);
            ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
            v57 = v135;
            if ( (v135 & 4) == 0 )
            {
              if ( (v135 & 0x40) != 0 )
              {
                v57 = *((_DWORD *)v14 + 64) & 4 | v135;
                *((_QWORD *)&v202[25] + 1) = *((_QWORD *)v14 + 29);
              }
              else
              {
                *((_QWORD *)&v202[25] + 1) = 0LL;
              }
            }
            v58 = v57 & 0xFFFFFFBF;
            LODWORD(v202[27]) = v58;
            if ( (AccessMode & 2) != 0 )
            {
              if ( (*((_DWORD *)v14 + 330) & 2) == 0 )
              {
                if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
                {
                  KeFirstGroupAffinityEx((__int64)&v167, (_WORD *)v14 + 132);
                  Group = v167.m128i_u16[4];
                }
                else
                {
                  Group = KeGetCurrentPrcb()->Group;
                  v167.m128i_i16[4] = Group;
                }
                if ( v198[6] == (qword_140CFC848[Group] & v198[6]) )
                {
                  if ( WORD4(v202[27]) <= (unsigned int)v167.m128i_i16[4] )
                    WORD4(v202[27]) = v167.m128i_i16[4] + 1;
                  *((_QWORD *)&v202[28] + Group) |= v198[6];
                  v14 = (char *)DeferredContext;
                  v13 = PspEnumProcessesInJobHierarchy(
                          DeferredContext,
                          PspSetAffinityLimitCallback,
                          &SubjectContext,
                          1LL);
                  v136 = v13;
                  if ( v13 >= 0 )
                  {
                    v107 = *((_QWORD *)v14 + 54);
                    if ( v107 )
                    {
                      v176 = *(_OWORD *)(v107 + 8);
                      v177 = *(_OWORD *)(v107 + 24);
                      v163 = (PSECURITY_SUBJECT_CONTEXT)&v176;
                    }
                    else
                    {
                      *((_QWORD *)v14 + 54) = Resource;
                      *((_QWORD *)v14 + 55) = BugCheckParameter2;
                      Resource = 0LL;
                      v163 = 0LL;
                      v107 = *((_QWORD *)v14 + 54);
                    }
                    *(struct _SECURITY_SUBJECT_CONTEXT *)v107 = SubjectContext;
                    *(_QWORD *)(v107 + 32) = v161;
                    goto LABEL_148;
                  }
                }
                else
                {
                  v13 = -1073741811;
                  v136 = -1073741811;
                  v14 = (char *)DeferredContext;
                }
LABEL_356:
                v64 = v139;
LABEL_159:
                v65 = v64 & 1;
                if ( v65 )
                {
                  PspLockWorkingSetChangeExclusiveUnsafe();
                  _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x100u);
                  v14 = (char *)DeferredContext;
                  v108 = (char *)DeferredContext + 40;
                  for ( i = (char *)*((_QWORD *)DeferredContext + 5); i != v108; i = *(char **)i )
                  {
                    if ( (*((_DWORD *)i - 90) & 1) == 0 )
                      PspAddProcessToWorkingSetChangeList(i - 1480);
                  }
                  v13 = v136;
                }
                ExReleaseResourceLite(v146);
                if ( v65 )
                  PspApplyWorkingSetLimits(v14);
                if ( v163 )
                  SeReleaseSubjectContext(v163);
                if ( !Resource )
                  goto LABEL_35;
                ExFreePoolWithTag(Resource, 0x614A7350u);
                v110 = (void *)BugCheckParameter2;
LABEL_422:
                PsReturnSharedPoolQuota(v110);
                goto LABEL_35;
              }
            }
            else if ( (v58 & 0x4000) == 0 || (*((_DWORD *)v14 + 330) & 2) != 0 )
            {
LABEL_148:
              v59 = v14 + 256;
              P = v14 + 256;
              if ( (*((_DWORD *)v14 + 64) & 1) != 0 && (v202[27] & 1) == 0 )
              {
                _InterlockedOr(v132, 0);
                if ( (qword_140C13270 & 1) != 0 )
                {
                  ExfAcquireReleasePushLockExclusive(&qword_140C13270);
                  v59 = P;
                }
                v13 = v136;
                v14 = (char *)DeferredContext;
              }
              v158[0] = (__int64)v14;
              HIDWORD(v158[1]) = *v59;
              *((_OWORD *)v14 + 15) = v202[26];
              *((_DWORD *)v14 + 65) = DWORD1(v202[27]);
              if ( (AccessMode & 2) != 0 )
              {
                *(_OWORD *)(v14 + 264) = *(_OWORD *)((char *)&v202[27] + 8);
                *(_OWORD *)(v14 + 280) = *(_OWORD *)((char *)&v202[28] + 8);
                *(_OWORD *)(v14 + 296) = *(_OWORD *)((char *)&v202[29] + 8);
                *(_OWORD *)(v14 + 312) = *(_OWORD *)((char *)&v202[30] + 8);
                *(_OWORD *)(v14 + 328) = *(_OWORD *)((char *)&v202[31] + 8);
                *(_OWORD *)(v14 + 344) = *(_OWORD *)((char *)&v202[32] + 8);
                *(_OWORD *)(v14 + 360) = *(_OWORD *)((char *)&v202[33] + 8);
                *(_OWORD *)(v14 + 376) = *(_OWORD *)((char *)&v202[34] + 8);
                *(_OWORD *)(v14 + 392) = *(_OWORD *)((char *)&v202[35] + 8);
                *(_OWORD *)(v14 + 408) = *(_OWORD *)((char *)&v202[36] + 8);
                *((_QWORD *)v14 + 53) = *((_QWORD *)&v202[37] + 1);
                v59 = P;
              }
              v14[873] = BYTE9(v202[65]);
              *((_DWORD *)v14 + 121) = DWORD1(v202[41]);
              *((_OWORD *)v14 + 14) = v202[25];
              v60 = v14 + 232;
              if ( (_DWORD)v5 == 9 )
              {
                ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
                v61 = (int *)P;
                *(_DWORD *)P = LODWORD(v202[27]) | *(_DWORD *)P & v53;
                *((_OWORD *)v14 + 36) = v202[47];
                *((_QWORD *)v14 + 74) = *(_QWORD *)&v202[48];
                PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
                v62 = *v61;
                v60 = v14 + 232;
              }
              else
              {
                v62 = LODWORD(v202[27]) | *v59 & v53;
                *v59 = v62;
                v61 = (int *)P;
              }
              LODWORD(v158[1]) = ~(HIDWORD(v158[1]) | v62);
              if ( v152 )
              {
                PspEnumProcessesInJobHierarchy(v14, PspSetJobTimeLimitCallback, v60, 1LL);
                *((_QWORD *)v14 + 23) = 0LL;
                *((_QWORD *)v14 + 24) = 0LL;
                KeResetEvent((PRKEVENT)v14);
              }
              if ( (*v61 & 6) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v14 = (char *)DeferredContext;
                v13 = v136;
              }
              v63 = v158[1];
              PspEnumJobsAndProcessesInJobHierarchy(v14, (__int64)v158, 5);
              v64 = AccessMode | 1;
              if ( (v63 & 1) != 0 )
                v64 = AccessMode;
              goto LABEL_159;
            }
            v13 = -1073741811;
            v136 = -1073741811;
            goto LABEL_356;
          }
          if ( SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v55) )
          {
            v54 = v198[2];
            v102 = v198[3];
            goto LABEL_334;
          }
LABEL_315:
          v13 = -1073741727;
          goto LABEL_282;
        }
        v150 = *(_DWORD *)v9;
        if ( (v150 & 0xFFFFFF00) != 0 )
          goto LABEL_384;
        v86 = 8;
        v14 = (char *)DeferredContext;
        PspLockJobChain(DeferredContext, Thread, 0LL);
        if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)v14) )
        {
          if ( *((_DWORD *)v14 + 120) == -2 )
          {
            v13 = -1073741790;
          }
          else
          {
            v14 = (char *)DeferredContext;
            PspBindProcessSessionToJob((__int64)DeferredContext, (__int64)KeGetCurrentThread()->ApcState.Process);
            v154 = *v87;
            if ( v154 > 0xFFFFFFFD )
              goto LABEL_247;
            if ( v150 == *((_DWORD *)v14 + 112) )
              goto LABEL_247;
            v181 = 0;
            PspUnlockJobChain(v14, Thread, 1LL);
            v86 = 0;
            v179 = v14;
            v180 = 0;
            v182 = v150;
            v13 = PsInvokeWin32Callout(6LL, &v179, 1LL, &v154);
            v136 = v13;
            if ( v13 >= 0 )
            {
LABEL_247:
              *((_DWORD *)v14 + 112) = v150;
              _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x10u);
              v14 = (char *)DeferredContext;
              v13 = v136;
            }
          }
        }
        else
        {
          v13 = -1073741637;
        }
        v128 = Thread;
        v129 = v14;
        if ( (unsigned __int8)v86 >= 8u )
          goto LABEL_209;
LABEL_249:
        PspUnlockJob(v129, v128);
        goto LABEL_35;
      }
LABEL_66:
      if ( (_DWORD)v4 == 56 )
      {
        v194 = *(__m128i *)BugCheckParameter2;
        v195 = *(__m128i *)(BugCheckParameter2 + 16);
        v196 = *(__m128i *)(BugCheckParameter2 + 32);
        v197 = *(_QWORD *)(BugCheckParameter2 + 48);
        v19 = (unsigned int)v197;
        LODWORD(v192[5]) = v197;
        v20 = v194.m128i_i64[0];
        v192[0] = v194.m128i_i64[0];
        v21 = _mm_srli_si128(v194, 8).m128i_u64[0];
        v192[1] = v21;
        v22 = v195.m128i_i64[0];
        v192[2] = v195.m128i_i64[0];
        v23 = _mm_srli_si128(v195, 8).m128i_u64[0];
        v192[6] = v23;
        v24 = v196.m128i_i64[0];
        v192[3] = v196.m128i_i64[0];
        v192[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v196, 12)), _mm_cvtsi128_si32(_mm_srli_si128(v196, 8)));
        v25 = 2589188;
        JobLimitInformationValidFlags = 2589188;
      }
      else
      {
        if ( (_DWORD)v4 == 48 )
        {
          v199 = *(__m128i *)BugCheckParameter2;
          v200 = *(__m128i *)(BugCheckParameter2 + 16);
          v201 = *(__m128i *)(BugCheckParameter2 + 32);
          v19 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v201, 8));
          LODWORD(v192[5]) = v19;
          v20 = v199.m128i_i64[0];
          v192[0] = v199.m128i_i64[0];
          v21 = _mm_srli_si128(v199, 8).m128i_u64[0];
          v192[1] = v21;
          v22 = v200.m128i_i64[0];
          v192[2] = v200.m128i_i64[0];
          v24 = _mm_srli_si128(v200, 8).m128i_u64[0];
          v192[3] = v24;
          v192[4] = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_si128(v201, 4)), _mm_cvtsi128_si32(v201));
          v25 = 459268;
          JobLimitInformationValidFlags = 459268;
        }
        else
        {
          memmove(v192, v9, v4);
          v25 = 2064900;
          JobLimitInformationValidFlags = 2064900;
          v19 = LODWORD(v192[5]);
          v24 = v192[3];
          v22 = v192[2];
          v21 = v192[1];
          v20 = v192[0];
        }
        v23 = v192[6];
      }
      if ( (~v25 & (unsigned int)v19) != 0 )
        goto LABEL_384;
      if ( (v19 & 0x8000) != 0 )
      {
        if ( v23 < 0x1000 )
          goto LABEL_384;
      }
      else
      {
        v23 = 0LL;
        v192[6] = 0LL;
      }
      if ( (v19 & 0x200) != 0 )
      {
        if ( v24 < 0x1000 || v24 < v23 )
          goto LABEL_384;
      }
      else
      {
        v192[3] = 0LL;
      }
      if ( (v19 & 4) != 0 )
      {
        if ( !v22 )
          goto LABEL_384;
      }
      else
      {
        v192[2] = 0LL;
      }
      if ( (v19 & 0x10000) != 0 )
      {
        if ( !v20 )
          goto LABEL_384;
      }
      else
      {
        v192[0] = 0LL;
      }
      if ( (v19 & 0x20000) != 0 )
      {
        if ( !v21 )
          goto LABEL_384;
      }
      else
      {
        v192[1] = 0LL;
      }
      for ( j = 0LL; (int)j < 3; j = (unsigned int)(v29 + 1) )
      {
        PspNotificationLimitRateControlToleranceField(v192, j, v19);
        PspNotificationLimitRateControlToleranceIntervalField(v192);
        v28 = PspRateControlLimitFlag(v27);
        if ( (v28 & (unsigned int)v19) != 0 )
        {
          if ( !*v30 || *v30 > 3 || !*v31 || *v31 > 3 )
            goto LABEL_384;
        }
        else
        {
          *v30 = 0;
          *v31 = 0;
          v19 = LODWORD(v192[5]);
        }
      }
      v14 = (char *)DeferredContext;
      v32 = (int **)((char *)DeferredContext + 984);
      if ( *((_QWORD *)DeferredContext + 123) )
      {
        v33 = 0LL;
        BugCheckParameter2 = 0LL;
      }
      else
      {
        v33 = (struct _ERESOURCE *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x624A7350u);
        if ( !v33 )
          goto LABEL_345;
        BugCheckParameter2 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 136LL, 0LL);
        v78 = v33;
        if ( !BugCheckParameter2 )
        {
          v105 = 1649046352;
          goto LABEL_348;
        }
        memset(v33, 0, 0x88uLL);
        v14 = (char *)DeferredContext;
      }
      Resource = (PERESOURCE)(v14 + 56);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
      if ( *v32 )
      {
        if ( v33 )
        {
          ExFreePoolWithTag(v33, 0x624A7350u);
          PsReturnSharedPoolQuota((PVOID)BugCheckParameter2);
        }
      }
      else
      {
        *v32 = (int *)v33;
        *((_QWORD *)v14 + 124) = BugCheckParameter2;
      }
      v34 = *v32;
      v35 = **v32;
      *((_QWORD *)v34 + 1) = v192[0];
      *((_QWORD *)v34 + 2) = v192[1];
      *((_QWORD *)v34 + 3) = v192[2];
      v36 = 0LL;
      v37 = v34 + 15;
      while ( (int)v36 < 3 )
      {
        v38 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v192, v36, v37);
        *(_DWORD *)(v39 - 12) = *v38;
        v40 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v192);
        *v41 = *v40;
        v36 = (unsigned int)(v42 + 1);
        v37 = v41 + 1;
      }
      BugCheckParameter2 = (ULONG_PTR)(v14 + 1032);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 1032), 0LL);
      *((_QWORD *)v34 + 4) = v192[6] >> 12;
      *((_QWORD *)v34 + 5) = v192[3] >> 12;
      **v32 = v192[5];
      PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
      if ( (**v32 & 0xFFFF7DFF) != 0 )
      {
        _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
        v14 = (char *)DeferredContext;
      }
      if ( v35 )
      {
        v44 = *v32;
        if ( **v32 )
        {
LABEL_105:
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v14, v5, (unsigned int)v192, 0, 0, 1829);
          ExReleaseResourceLite(Resource);
          ExAcquirePushLockSharedEx(BugCheckParameter2, 0LL);
          v45 = *((_QWORD *)v14 + 167);
          v14 = (char *)DeferredContext;
          JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                   DeferredContext,
                                                   *((_QWORD *)DeferredContext + 122),
                                                   *((_QWORD *)DeferredContext + 122) + v45,
                                                   33280LL);
          PspUnlockJobMemoryLimitsShared(v14, 0LL);
          if ( JobMemoryUsageNotificationViolations )
          {
            PspScheduleEnforcementWorker(*((_QWORD *)v14 + 135));
            v14 = (char *)DeferredContext;
          }
          goto LABEL_34;
        }
      }
      else
      {
        v44 = *v32;
        if ( !**v32 )
          goto LABEL_105;
      }
      PspEnumJobsAndProcessesInJobHierarchy(v14, (__int64)v44, 5);
      goto LABEL_105;
    }
    if ( (int)v5 > 40 )
    {
      if ( (_DWORD)v5 == 41 )
      {
        v178 = *(_DWORD *)v9;
        v14 = (char *)DeferredContext;
        if ( !PspJobIsAppSilo((__int64)DeferredContext) || v130 != 2 )
          goto LABEL_430;
        v92 = (struct _ERESOURCE *)(v14 + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)(v14 + 56), 1u);
        if ( *((_DWORD *)v14 + 306) )
        {
          v13 = -1073740529;
        }
        else
        {
          v131 = _interlockedbittestandset((volatile signed __int32 *)v14 + 330, 0x1Du);
          v14 = (char *)DeferredContext;
          if ( v131 )
          {
            v13 = 255;
          }
          else
          {
            PspBeginSiloTeardown(DeferredContext);
            v13 = 0;
          }
        }
        goto LABEL_481;
      }
      if ( (_DWORD)v5 == 42 )
      {
        v66 = 0;
        v189[0] = *(_OWORD *)v9;
        v189[1] = *((_OWORD *)v9 + 1);
        v189[2] = *((_OWORD *)v9 + 2);
        v189[3] = *((_OWORD *)v9 + 3);
        *(_QWORD *)&v189[4] = v9[8];
        if ( (v189[0] & 0xFFFFFFFC) != 0 || (v189[0] & 3) == 0 )
        {
          v13 = -1073741811;
          v14 = (char *)DeferredContext;
        }
        else
        {
          v66 = 8;
          v67 = Thread;
          v14 = (char *)DeferredContext;
          PspLockRootJobExclusive(DeferredContext, Thread, &v153);
          PspLockJobConditionally(v14, &v153);
          v13 = PspSetJobIoAttribution(v14);
          if ( v13 >= 0 )
          {
            PspUnlockJobConditionally(v14, &v153);
            PspUnlockJob(v153, v67);
            v66 = 0;
          }
        }
        if ( (unsigned __int8)v66 < 8u )
          goto LABEL_35;
        PspUnlockJobConditionally(v14, &v153);
        v128 = Thread;
        v129 = v153;
        goto LABEL_249;
      }
      if ( (_DWORD)v5 != 43 )
      {
        if ( (_DWORD)v5 != 44 )
        {
          if ( (_DWORD)v5 != 45 )
          {
            if ( (_DWORD)v5 == 46 )
            {
              v168 = *v9;
              v14 = (char *)DeferredContext;
              v18 = PspSetEnergyTrackingStateJobTree(DeferredContext, (__int64)&v168);
              goto LABEL_64;
            }
            if ( (_DWORD)v5 != 47 )
              goto LABEL_459;
            v149 = *(_BYTE *)v9;
            if ( v149 != 1 )
              goto LABEL_384;
            v124 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
            v14 = (char *)DeferredContext;
            if ( v124 )
            {
              if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
              {
                v13 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 2LL) == 0
                    ? 0xC0000022
                    : 0;
                goto LABEL_35;
              }
              goto LABEL_430;
            }
LABEL_428:
            v13 = -1073741727;
            goto LABEL_35;
          }
          v14 = (char *)DeferredContext;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) != 0 )
          {
            v169 = 0LL;
            v170 = *(__m128i *)v9;
            v125 = _mm_srli_si128(v170, 8).m128i_u64[0];
            if ( !v125 || (unsigned __int16)(v170.m128i_i16[0] - 1) > 0x206u || (v170.m128i_i8[0] & 1) != 0 )
            {
              v13 = -1073741811;
              v136 = -1073741811;
              goto LABEL_35;
            }
            if ( AccessMode == 1 )
            {
              if ( (v125 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v125 + v170.m128i_u16[0] > 0x7FFFFFFF0000LL || v125 + v170.m128i_u16[0] < v125 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v126 = v170.m128i_u16[0];
            v127 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v170.m128i_u16[0], 0x72537350u);
            v91 = v127;
            v169 = v127;
            if ( !v127 )
            {
              v13 = -1073741670;
              v136 = -1073741670;
              goto LABEL_35;
            }
            memmove(v127, (const void *)v125, v126);
            if ( wcsnlen(v91, v126 >> 1) == v126 >> 1 )
            {
              v170.m128i_i64[1] = (__int64)v91;
              v13 = PspAssignSiloSystemRootPath(v14, &v170);
            }
            else
            {
              v13 = -1073741811;
            }
            if ( !v91 )
              goto LABEL_35;
            v121 = 1918071632;
            goto LABEL_446;
          }
LABEL_429:
          v13 = -1073740535;
          goto LABEL_35;
        }
        v14 = (char *)DeferredContext;
        v92 = (struct _ERESOURCE *)((char *)DeferredContext + 56);
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        if ( *((int *)v14 + 330) >= 0 )
        {
          *(_OWORD *)(v14 + 1256) = *(_OWORD *)v9;
          _InterlockedOr((volatile signed __int32 *)v14 + 330, 0x80000000);
          ExReleaseResourceLite(v92);
          v13 = 0;
LABEL_282:
          v14 = (char *)DeferredContext;
          goto LABEL_35;
        }
        v13 = -1073741791;
LABEL_481:
        v51 = v92;
        goto LABEL_121;
      }
      v188 = *v9;
      LOBYTE(v12) = AccessMode;
      v14 = (char *)DeferredContext;
      Silo = PspSetJobMemoryPartition(DeferredContext, v12);
LABEL_287:
      v13 = Silo;
      goto LABEL_35;
    }
    switch ( (_DWORD)v5 )
    {
      case 0x28:
        v122 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
        v14 = (char *)DeferredContext;
        if ( !v122 )
          goto LABEL_428;
        if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
          goto LABEL_429;
        if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
          goto LABEL_430;
        v187 = *v9;
        v148 = *((_BYTE *)v9 + 8);
        LOBYTE(v123) = AccessMode;
        Silo = PspConvertSiloToServerSilo(v14, v123);
        goto LABEL_287;
      case 0x19:
        v14 = (char *)DeferredContext;
        ExAcquireResourceExclusiveLite((PERESOURCE)((char *)DeferredContext + 56), 1u);
        KeResetEvent((PRKEVENT)v14);
LABEL_33:
        ExReleaseResourceLite((PERESOURCE)(v14 + 56));
        goto LABEL_34;
      case 0x1B:
        v14 = (char *)DeferredContext;
        if ( DeferredContext )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)DeferredContext + 1032, 0LL);
        *((_QWORD *)v14 + 76) = 0LL;
        *((_QWORD *)v14 + 75) = 0LL;
        PspUnlockJobMemoryLimitsExclusive((__int64)v14, 0LL, 0LL);
        goto LABEL_34;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          v14 = (char *)DeferredContext;
          Silo = PspSetNetRateControl(v9, (unsigned int)v4, DeferredContext);
          break;
        case '!':
          goto LABEL_66;
        case '#':
          v14 = (char *)DeferredContext;
          Silo = PspCreateSilo((__int64)DeferredContext, v12);
          break;
        case '%':
          v120 = SeSinglePrivilegeCheck(SeTcbPrivilege, AccessMode);
          v14 = (char *)DeferredContext;
          if ( !v120 )
            goto LABEL_428;
          if ( (*((_DWORD *)DeferredContext + 330) & 0x40000000) == 0 )
            goto LABEL_429;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(DeferredContext, 4LL) )
            goto LABEL_430;
          v173 = *(_DWORD *)v9;
          Silo = ObCreateSiloRootDirectory(v14);
          break;
        default:
          goto LABEL_459;
      }
      goto LABEL_287;
    }
    memmove(v190, v9, v4);
    if ( v190[3] )
    {
      v88 = v190[5];
      v89 = PagedPool;
      if ( !LOWORD(v190[5]) )
        goto LABEL_267;
      if ( (v190[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v190[3] + (unsigned __int64)LOWORD(v190[5]) > 0x7FFFFFFF0000LL
        || v190[3] + (unsigned __int64)LOWORD(v190[5]) < v190[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v88 = v190[5];
      }
      if ( !v88 || (v88 & 1) != 0 )
      {
LABEL_267:
        v13 = -1073741811;
        v136 = -1073741811;
        v14 = (char *)DeferredContext;
        goto LABEL_278;
      }
      v164 = 1;
      if ( AccessMode == 1 )
        v89 = 9;
      v164 = v89;
      v175[1] = ExAllocatePoolWithQuotaTag(v89, v88 + 2LL, 0x624A7350u);
      if ( !v175[1] )
      {
        v13 = -1073741801;
        v136 = -1073741801;
        v14 = (char *)DeferredContext;
LABEL_278:
        v91 = (wchar_t *)v175[1];
        if ( !v175[1] )
          goto LABEL_35;
        v121 = 0;
LABEL_446:
        ExFreePoolWithTag(v91, v121);
        goto LABEL_35;
      }
      v90 = v175[1];
      memmove(v175[1], (const void *)v190[3], LOWORD(v190[5]));
      v90[(unsigned __int64)LOWORD(v190[5]) >> 1] = 0;
      v190[3] = v90;
    }
    if ( (v190[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      if ( !v190[10] && !v190[7] && !v190[2] || (unsigned __int8)PspIsContextAdmin() )
      {
        v14 = (char *)DeferredContext;
        v13 = PspSetJobIoRateControl((volatile signed __int64 *)DeferredContext, (__int64)v190);
        goto LABEL_278;
      }
      v13 = -1073741790;
    }
    v14 = (char *)DeferredContext;
    goto LABEL_278;
  }
  return result;
}
