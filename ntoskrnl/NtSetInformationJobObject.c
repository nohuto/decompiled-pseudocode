/*
 * XREFs of NtSetInformationJobObject @ 0x1406FC3C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSchedulingGroupWeights @ 0x140200CE0 (KeSetSchedulingGroupWeights.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     PspHardDereferenceSiloWorker @ 0x14029432C (PspHardDereferenceSiloWorker.c)
 *     KeAddGroupAffinityEx @ 0x1402AE370 (KeAddGroupAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x1402AEC40 (KeFirstGroupAffinityEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KeSetSchedulingGroupCpuRates @ 0x1402F19B4 (KeSetSchedulingGroupCpuRates.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KeQuerySchedulingGroupReadyTime @ 0x1402F7748 (KeQuerySchedulingGroupReadyTime.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     KeQueryActiveGroupCount @ 0x1403598D0 (KeQueryActiveGroupCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcsnlen @ 0x1403D5F60 (wcsnlen.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeSetSchedulingGroupCycleNotification @ 0x14057AE40 (KeSetSchedulingGroupCycleNotification.c)
 *     PspJobIsAppSilo @ 0x1405A14F8 (PspJobIsAppSilo.c)
 *     IoAllocateMiniCompletionPacket @ 0x14068A5B0 (IoAllocateMiniCompletionPacket.c)
 *     PsChargeSharedPoolQuota @ 0x140696154 (PsChargeSharedPoolQuota.c)
 *     PsReturnSharedPoolQuota @ 0x140696A48 (PsReturnSharedPoolQuota.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406F8924 (PspGetJobLimitInformationValidFlags.c)
 *     PspUnlockJobChain @ 0x1406F8F60 (PspUnlockJobChain.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 *     PspUnlockJobConditionally @ 0x1406FB418 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1406FB448 (PspLockJobConditionally.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspRateControlLimitFlag @ 0x1406FC1A0 (PspRateControlLimitFlag.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1406FC2C4 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406FC344 (PspUnlockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsExclusive @ 0x1406FEEF4 (PspUnlockJobMemoryLimitsExclusive.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406FEF4C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406FEF74 (PspNotificationLimitRateControlToleranceField.c)
 *     PspBindProcessSessionToJob @ 0x140700678 (PspBindProcessSessionToJob.c)
 *     PspLockRootJobExclusive @ 0x14075168C (PspLockRootJobExclusive.c)
 *     PspFreezeJobTree @ 0x140751738 (PspFreezeJobTree.c)
 *     PspSetJobIoRateControl @ 0x140752E58 (PspSetJobIoRateControl.c)
 *     PspSetJobIoAttribution @ 0x1407530A0 (PspSetJobIoAttribution.c)
 *     PspIsContextAdmin @ 0x140781848 (PspIsContextAdmin.c)
 *     PspSetEnergyTrackingStateJobTree @ 0x1407818AC (PspSetEnergyTrackingStateJobTree.c)
 *     PspFreeRateControl @ 0x1407832C0 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14078330C (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1407833A8 (PspAddSchedulingGroupToJobChain.c)
 *     PspScheduleEnforcementWorker @ 0x140789F6C (PspScheduleEnforcementWorker.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     PspSetBackgroundJobTree @ 0x140796978 (PspSetBackgroundJobTree.c)
 *     PspCreateSilo @ 0x140797438 (PspCreateSilo.c)
 *     SePrivilegeCheck @ 0x1407B9710 (SePrivilegeCheck.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x1407C9AF0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1407C9D40 (SeReleaseSubjectContext.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     PspAssignSiloSystemRootPath @ 0x1409A99E0 (PspAssignSiloSystemRootPath.c)
 *     PspConvertSiloToServerSilo @ 0x1409A9C14 (PspConvertSiloToServerSilo.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1409AEE48 (PspAddProcessToWorkingSetChangeList.c)
 *     PspApplyWorkingSetLimits @ 0x1409AEF10 (PspApplyWorkingSetLimits.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x1409AF218 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspSetIoPriorityLimitJobTree @ 0x1409AFA64 (PspSetIoPriorityLimitJobTree.c)
 *     PspSetJobMemoryPartition @ 0x1409AFC84 (PspSetJobMemoryPartition.c)
 *     PspSetJobSiloThreadImpersonationPolicy @ 0x1409AFFC8 (PspSetJobSiloThreadImpersonationPolicy.c)
 *     PspSetNetRateControl @ 0x1409B0054 (PspSetNetRateControl.c)
 *     PspSetPagePriorityLimitJobTree @ 0x1409B0320 (PspSetPagePriorityLimitJobTree.c)
 *     EtwTraceJobSetQuery @ 0x1409E28AC (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ObCreateSiloRootDirectory @ 0x140A70E70 (ObCreateSiloRootDirectory.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtSetInformationJobObject(ULONG_PTR BugCheckParameter1, int a2, void *a3, unsigned int a4)
{
  size_t v4; // r14
  __int64 v5; // r13
  unsigned int v7; // ecx
  bool v8; // zf
  __m128i *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // esi
  int v15; // eax
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // r10
  PRKEVENT v21; // r14
  __int64 v22; // r9
  void *v23; // rdi
  ULONG_PTR MiniCompletionPacket; // rbx
  __int64 v25; // r9
  unsigned int v26; // ebx
  struct _ERESOURCE *p_WaitListHead; // rcx
  char v28; // bl
  unsigned int *v29; // r11
  PETHREAD v30; // rdx
  __int64 v31; // rcx
  int v32; // edx
  KPROCESSOR_MODE v33; // r14
  char v34; // al
  int v35; // ecx
  int v36; // eax
  char v37; // al
  int v38; // ecx
  __int64 v39; // rcx
  int v40; // edi
  struct _SECURITY_SUBJECT_CONTEXT *Pool2; // rdi
  ULONG v42; // edx
  struct _SECURITY_SUBJECT_CONTEXT *v43; // rcx
  BOOLEAN v44; // al
  int v45; // eax
  unsigned int v46; // edi
  char v47; // di
  unsigned __int16 Group; // ax
  __int64 v49; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v50; // rax
  struct _KEVENT *v51; // rcx
  _OWORD *v52; // rax
  __int64 v53; // r9
  char v54; // bl
  char v55; // di
  struct _LIST_ENTRY *p_Blink; // rsi
  struct _LIST_ENTRY *i; // rbx
  char *v58; // rcx
  unsigned int v59; // ecx
  unsigned int v60; // r14d
  unsigned __int16 v61; // cx
  __m128i v62; // xmm0
  unsigned __int16 epi16; // ax
  __int64 v64; // rax
  SECURITY_IMPERSONATION_LEVEL *p_ImpersonationLevel; // rdi
  BOOLEAN v66; // al
  PERESOURCE v67; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v69; // rax
  struct _KEVENT *v70; // rdx
  _OWORD *v71; // rax
  __int64 v72; // r8
  __int64 v73; // rsi
  __int64 v74; // rdi
  int v75; // eax
  __int64 v76; // r9
  unsigned int v77; // edx
  int v78; // eax
  __int32 v79; // ebx
  __int64 v80; // r9
  char v81; // bl
  bool v82; // cc
  volatile LONG Lock; // eax
  __int64 RateControl; // rax
  __int64 v85; // r8
  PRKEVENT v86; // rsi
  __int16 v87; // dx
  __int64 v88; // rax
  __int64 *v89; // rcx
  _QWORD *v90; // rbx
  int v91; // ebx
  __int64 v92; // rcx
  int v93; // r8d
  struct _ERESOURCE *v94; // rbx
  signed __int8 v95; // cf
  BOOLEAN v96; // al
  __int64 v97; // rdx
  int Silo; // eax
  BOOLEAN v99; // al
  unsigned __int64 v100; // rcx
  unsigned __int128 v101; // kr00_16
  __int64 v102; // rdx
  int v103; // edx
  int v104; // eax
  int v105; // edx
  int *v106; // r9
  int *v107; // r10
  PRKEVENT v108; // rbx
  struct _SECURITY_SUBJECT_CONTEXT *v109; // rdi
  __int64 v110; // rdi
  int v111; // esi
  __int64 v112; // rdx
  _DWORD *v113; // r8
  _DWORD *v114; // rax
  __int64 v115; // r8
  _DWORD *v116; // rax
  _DWORD *v117; // r8
  int v118; // edx
  __int64 v119; // r9
  _DWORD *v120; // rax
  struct _LIST_ENTRY *Blink; // r8
  int JobMemoryUsageNotificationViolations; // ebx
  __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int16 v126; // cx
  unsigned int v127; // eax
  _WORD *v128; // rbx
  wchar_t *v129; // rbx
  ULONG v130; // edx
  char v131; // bl
  PETHREAD v132; // rdi
  BOOLEAN v133; // al
  unsigned __int64 v134; // xmm0_8
  size_t v135; // rdi
  wchar_t *v136; // rax
  signed __int32 v137[8]; // [rsp+0h] [rbp-D08h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-CC8h]
  PRKEVENT Event; // [rsp+48h] [rbp-CC0h] BYREF
  int v140; // [rsp+50h] [rbp-CB8h]
  int v141; // [rsp+58h] [rbp-CB0h]
  __int16 v142; // [rsp+5Ch] [rbp-CACh] BYREF
  KPROCESSOR_MODE v143; // [rsp+5Eh] [rbp-CAAh]
  int v144; // [rsp+60h] [rbp-CA8h]
  _DWORD Size[3]; // [rsp+64h] [rbp-CA4h]
  unsigned __int16 v146; // [rsp+70h] [rbp-C98h]
  __int64 v147; // [rsp+78h] [rbp-C90h] BYREF
  PETHREAD Thread; // [rsp+80h] [rbp-C88h]
  PSECURITY_SUBJECT_CONTEXT v149; // [rsp+88h] [rbp-C80h]
  __int64 v150; // [rsp+90h] [rbp-C78h] BYREF
  PVOID P; // [rsp+98h] [rbp-C70h]
  __int8 v152; // [rsp+A0h] [rbp-C68h]
  __int8 v153; // [rsp+A1h] [rbp-C67h]
  __int8 v154; // [rsp+A2h] [rbp-C66h]
  unsigned __int32 v155; // [rsp+A4h] [rbp-C64h]
  int JobLimitInformationValidFlags; // [rsp+A8h] [rbp-C60h]
  __int64 v157; // [rsp+B0h] [rbp-C58h]
  __int64 v158; // [rsp+B8h] [rbp-C50h] BYREF
  unsigned int v159; // [rsp+C0h] [rbp-C48h] BYREF
  unsigned int v160; // [rsp+C4h] [rbp-C44h]
  PERESOURCE v161; // [rsp+C8h] [rbp-C40h]
  void *Src; // [rsp+D0h] [rbp-C38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-C30h] BYREF
  void *v164; // [rsp+F8h] [rbp-C10h]
  __int64 v165[2]; // [rsp+100h] [rbp-C08h] BYREF
  __int64 v166; // [rsp+110h] [rbp-BF8h] BYREF
  __int64 v167; // [rsp+118h] [rbp-BF0h] BYREF
  PVOID Object; // [rsp+120h] [rbp-BE8h] BYREF
  __m128i v169; // [rsp+128h] [rbp-BE0h] BYREF
  __int64 v170; // [rsp+138h] [rbp-BD0h] BYREF
  wchar_t *v171; // [rsp+140h] [rbp-BC8h]
  __m128i v172; // [rsp+148h] [rbp-BC0h] BYREF
  __int32 v173; // [rsp+158h] [rbp-BB0h]
  __int32 v174; // [rsp+15Ch] [rbp-BACh]
  __int64 v175; // [rsp+160h] [rbp-BA8h]
  __int64 v176; // [rsp+168h] [rbp-BA0h]
  unsigned __int8 *v177; // [rsp+170h] [rbp-B98h]
  unsigned int v178; // [rsp+178h] [rbp-B90h]
  ULONG_PTR BugCheckParameter1a[2]; // [rsp+180h] [rbp-B88h]
  PVOID v180[2]; // [rsp+190h] [rbp-B78h]
  __int128 v181; // [rsp+1A0h] [rbp-B68h] BYREF
  __int128 v182; // [rsp+1B0h] [rbp-B58h]
  __int32 v183; // [rsp+1C0h] [rbp-B48h]
  PRKEVENT v184; // [rsp+1C8h] [rbp-B40h] BYREF
  int v185; // [rsp+1D0h] [rbp-B38h]
  int v186; // [rsp+1D4h] [rbp-B34h]
  __int64 v187; // [rsp+1D8h] [rbp-B30h]
  __m128i v188; // [rsp+1E0h] [rbp-B28h]
  __m128i v189; // [rsp+1F0h] [rbp-B18h]
  __int64 v190; // [rsp+200h] [rbp-B08h]
  __int64 v191; // [rsp+208h] [rbp-B00h]
  __int64 v192; // [rsp+210h] [rbp-AF8h]
  __int64 v193; // [rsp+218h] [rbp-AF0h]
  _BYTE v194[72]; // [rsp+220h] [rbp-AE8h] BYREF
  _QWORD v195[18]; // [rsp+270h] [rbp-A98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+300h] [rbp-A08h] BYREF
  _OWORD v197[5]; // [rsp+320h] [rbp-9E8h] BYREF
  __m128i v198; // [rsp+370h] [rbp-998h] BYREF
  __int128 v199; // [rsp+380h] [rbp-988h] BYREF
  unsigned __int128 v200; // [rsp+390h] [rbp-978h]
  __int128 v201; // [rsp+3A0h] [rbp-968h]
  __int64 v202; // [rsp+3B0h] [rbp-958h]
  __int128 v203; // [rsp+3B8h] [rbp-950h] BYREF
  __int128 v204; // [rsp+3C8h] [rbp-940h]
  __int128 v205; // [rsp+3D8h] [rbp-930h]
  _QWORD v206[20]; // [rsp+3F0h] [rbp-918h] BYREF
  _QWORD v207[262]; // [rsp+490h] [rbp-878h] BYREF

  v4 = a4;
  Size[0] = a4;
  v5 = a2;
  v157 = BugCheckParameter1;
  v140 = a2;
  Src = a3;
  memset(&v207[1], 0, 0x100uLL);
  *(_OWORD *)BugCheckParameter1a = 0LL;
  v176 = 0LL;
  v175 = 0LL;
  v167 = 0LL;
  v166 = 0LL;
  v142 = 0;
  v170 = 0LL;
  memset(v206, 0, 0x98uLL);
  v198 = 0LL;
  v169 = 0LL;
  memset(v194, 0, 0x44uLL);
  Object = 0LL;
  memset(v195, 0, sizeof(v195));
  Event = 0LL;
  v159 = 0;
  memset(&v207[34], 0, 0x718uLL);
  v181 = 0LL;
  v182 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  LODWORD(v164) = 0;
  memset(v197, 0, 0x48uLL);
  v203 = 0LL;
  v204 = 0LL;
  v205 = 0LL;
  v199 = 0LL;
  v200 = 0LL;
  v201 = 0LL;
  v202 = 0LL;
  v147 = 0LL;
  memset(&RequiredPrivileges, 0, sizeof(RequiredPrivileges));
  v158 = 0LL;
  *(_OWORD *)v165 = 0LL;
  v150 = 0LL;
  v188 = 0LL;
  v189 = 0LL;
  LODWORD(v190) = 0;
  v172 = 0LL;
  *(_OWORD *)v180 = 0LL;
  if ( (unsigned int)(v5 - 1) > 0x30 )
    return 3221225475LL;
  switch ( (_DWORD)v5 )
  {
    case 9:
      if ( (_DWORD)v4 == 144 || (_DWORD)v4 == 152 )
        goto LABEL_14;
      return 3221225476LL;
    case 0xC:
      v8 = (((_DWORD)v4 - 48) & 0xFFFFFFF7) == 0;
LABEL_13:
      if ( v8 )
        goto LABEL_14;
      return 3221225476LL;
    case 0x1F:
      if ( (_DWORD)v4 == 48 || (_DWORD)v4 == 96 )
        goto LABEL_14;
      v8 = (_DWORD)v4 == 144;
      goto LABEL_13;
  }
  v7 = dword_140A7816C[v5];
  if ( (_DWORD)v4 != v7 && ((_DWORD)v5 != 11 && (_DWORD)v5 != 14 || (unsigned int)v4 < v7) )
    return 3221225476LL;
LABEL_14:
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v143 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__m128i *)Src;
    if ( (_DWORD)v4 )
    {
      if ( ((dword_140A7809C[v5] - 1) & (unsigned int)Src) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)Src + v4 > 0x7FFFFFFF0000LL || (char *)Src + v4 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    v9 = (__m128i *)Src;
  }
  if ( !BugCheckParameter1 )
    return 3221225480LL;
  v11 = 2LL;
  result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Event, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v14 = 0;
    v141 = 0;
    LOBYTE(v144) = 0;
    v177 = &Thread->WaitBlockFill11[166];
    --Thread->SpecialApcDisable;
    if ( (int)v5 <= 25 )
    {
      if ( (_DWORD)v5 == 25 )
      {
        v21 = Event;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        KeResetEvent(v21);
LABEL_324:
        ExReleaseResourceLite((PERESOURCE)&v21[2].Header.WaitListHead);
        goto LABEL_325;
      }
      if ( (int)v5 <= 14 )
      {
        if ( (_DWORD)v5 == 14 )
        {
LABEL_203:
          v149 = 0LL;
          P = 0LL;
          v59 = 16;
          if ( (_DWORD)v5 != 14 )
            v59 = 2;
          Size[0] = v59;
          if ( (unsigned int)v4 % v59 )
          {
            v14 = -1073741820;
            goto LABEL_458;
          }
          v60 = (unsigned int)v4 / v59;
          v160 = v60;
          LODWORD(v207[0]) = 2097153;
          memset((char *)v207 + 4, 0, 0x104uLL);
          v61 = KeQueryActiveGroupCount() - 1;
          LOWORD(v144) = v61;
          while ( v60 )
          {
            if ( (_DWORD)v5 == 14 )
            {
              v62 = *v9;
              v169 = v62;
              epi16 = _mm_extract_epi16(v62, 4);
              v169.m128i_i16[4] = epi16;
              v146 = epi16;
              v157 = v62.m128i_i64[0];
            }
            else
            {
              v64 = v9->m128i_u16[0];
              v146 = v64;
              if ( (unsigned __int16)v64 > v61 )
                goto LABEL_217;
              v157 = qword_140D1EFE8[v64];
              epi16 = v146;
            }
            if ( epi16 > v61 || v207[epi16 + 1] || v157 != (v157 & qword_140D1EFE8[epi16]) )
            {
LABEL_217:
              v14 = -1073741811;
              v141 = -1073741811;
              break;
            }
            KeAddGroupAffinityEx((unsigned __int16 *)v207, v146, v157);
            v60 = --v160;
            v9 = (__m128i *)((char *)Src + Size[0]);
            Src = v9;
            v14 = v141;
            v61 = v144;
          }
          v21 = Event;
          if ( v14 < 0 )
            goto LABEL_496;
          v161 = (PERESOURCE)&Event[22];
          if ( *(_QWORD *)&Event[22].Header.Lock )
            goto LABEL_223;
          Pool2 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 40LL, 1632269136LL);
          v149 = Pool2;
          if ( !Pool2 )
            goto LABEL_138;
          P = (PVOID)PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
          if ( P )
          {
            v21 = Event;
LABEL_223:
            SeCaptureSubjectContextEx(
              Thread,
              Thread->ApcState.Process,
              (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
            p_ImpersonationLevel = &SubjectContext.ImpersonationLevel;
            if ( PreviousMode )
            {
              RequiredPrivileges.PrivilegeCount = 1;
              RequiredPrivileges.Control = 1;
              RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
              RequiredPrivileges.Privilege[0].Attributes = 0;
              v66 = SePrivilegeCheck(
                      &RequiredPrivileges,
                      (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                      1);
              LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v66) & 1;
            }
            else
            {
              LODWORD(SubjectContext.ClientToken) |= 1u;
            }
            *(_QWORD *)&Size[1] = (char *)v21 + 56;
            ExAcquireResourceExclusiveLite((PERESOURCE)&v21[2].Header.WaitListHead, 1u);
            v14 = PspEnumJobsAndProcessesInJobHierarchy(
                    v21,
                    0,
                    0,
                    (int)PspSetAffinityLimitCallback,
                    (__int64)&SubjectContext,
                    1);
            v141 = v14;
            if ( v14 >= 0 )
            {
              v67 = v161;
              Flink = v161->SystemResourcesList.Flink;
              if ( v161->SystemResourcesList.Flink )
              {
                v181 = *(_OWORD *)&Flink->Blink;
                v182 = *(_OWORD *)&Flink[1].Blink;
                p_ImpersonationLevel = (SECURITY_IMPERSONATION_LEVEL *)&v181;
              }
              else
              {
                v161->SystemResourcesList.Flink = (struct _LIST_ENTRY *)v149;
                v21[22].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)P;
                v149 = 0LL;
                p_ImpersonationLevel = 0LL;
              }
              v69 = (struct _SECURITY_SUBJECT_CONTEXT *)v67->SystemResourcesList.Flink;
              *v69 = SubjectContext;
              v69[1].ClientToken = v164;
              v165[0] = (__int64)v21;
              HIDWORD(v165[1]) = v21[10].Header.WaitListHead.Blink;
              LODWORD(v165[1]) = -17;
              v70 = v21 + 11;
              v71 = v207;
              v72 = 2LL;
              do
              {
                *(_OWORD *)&v70->Header.Lock = *v71;
                *(_OWORD *)&v70->Header.WaitListHead.Blink = v71[1];
                v70[1].Header.WaitListHead = (LIST_ENTRY)v71[2];
                *(_OWORD *)&v70[2].Header.Lock = v71[3];
                *(_OWORD *)&v70[2].Header.WaitListHead.Blink = v71[4];
                v70[3].Header.WaitListHead = (LIST_ENTRY)v71[5];
                *(_OWORD *)&v70[4].Header.Lock = v71[6];
                v70 = (struct _KEVENT *)((char *)v70 + 128);
                v70[-1].Header.WaitListHead = (LIST_ENTRY)v71[7];
                v71 += 8;
                --v72;
              }
              while ( v72 );
              *(_QWORD *)&v70->Header.Lock = *(_QWORD *)v71;
              if ( (_DWORD)v5 == 14 && (unsigned int)KeIsEmptyAffinityEx(&v21[11]) )
              {
                LODWORD(v21[10].Header.WaitListHead.Blink) &= ~0x10u;
                _InterlockedAnd(&v21[64].Header.Lock, 0xFFFFFFFD);
              }
              else
              {
                LODWORD(v21[10].Header.WaitListHead.Blink) |= 0x10u;
                _InterlockedOr(&v21[64].Header.Lock, 2u);
              }
              v21 = Event;
              PspEnumJobsAndProcessesInJobHierarchy(
                Event,
                (int)PspSetJobLimitsJobPreCallback,
                0,
                (int)PspSetJobLimitsProcessCallback,
                (__int64)v165,
                5);
              v14 = v141;
            }
            ExReleaseResourceLite(*(PERESOURCE *)&Size[1]);
            if ( p_ImpersonationLevel )
              SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)p_ImpersonationLevel);
            if ( !v149 )
              goto LABEL_496;
            ExFreePoolWithTag(v149, 0x614A7350u);
            v58 = (char *)P;
            goto LABEL_241;
          }
LABEL_140:
          v42 = 1632269136;
          v43 = Pool2;
LABEL_141:
          ExFreePoolWithTag(v43, v42);
          v14 = -1073741670;
          goto LABEL_458;
        }
        if ( (_DWORD)v5 == 2 )
          goto LABEL_84;
        if ( (_DWORD)v5 != 4 )
        {
          if ( (_DWORD)v5 == 5 )
          {
            v188 = *v9;
            v189 = v9[1];
            v190 = v9[2].m128i_i64[0];
            v14 = (v188.m128i_i32[0] & 0xFFFFFFF0) != 0 ? -1073741811 : -1073741637;
LABEL_458:
            v21 = Event;
            goto LABEL_496;
          }
          if ( (_DWORD)v5 != 6 )
          {
            if ( (_DWORD)v5 != 7 )
            {
              if ( (_DWORD)v5 != 9 )
              {
                if ( (_DWORD)v5 != 11 )
                {
                  if ( (_DWORD)v5 == 12 )
                    goto LABEL_42;
LABEL_457:
                  v14 = -1073741821;
                  goto LABEL_458;
                }
                goto LABEL_203;
              }
LABEL_84:
              memmove(v206, v9, v4);
              if ( (unsigned int)v4 < 0x98 )
                memset((char *)v206 + v4, 0, 152 - v4);
              JobLimitInformationValidFlags = PspGetJobLimitInformationValidFlags(v5, v4);
              Size[0] = ~JobLimitInformationValidFlags;
              v32 = v206[2];
              if ( (~JobLimitInformationValidFlags & v206[2]) != 0 )
                goto LABEL_468;
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              v164 = 0LL;
              LODWORD(v207[66]) = v206[2];
              P = 0LL;
              *(_QWORD *)&Size[1] = 0LL;
              v149 = 0LL;
              HIDWORD(v207[66]) = (v206[2] & 8) != 0 ? LODWORD(v206[5]) : 0;
              if ( (v206[2] & 0x20) != 0 )
              {
                if ( LODWORD(v206[7]) > 6 )
                  goto LABEL_468;
                v33 = PreviousMode;
                if ( (unsigned int)(LODWORD(v206[7]) - 3) <= 1 )
                {
                  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                          SeIncreaseBasePriorityPrivilege,
                          v157,
                          2LL) & 1;
                  LOBYTE(v35) = 4 * v34;
                  v144 = v35;
                  if ( !v34 )
                  {
LABEL_91:
                    v14 = -1073741727;
                    goto LABEL_458;
                  }
                  v32 = v206[2];
                }
                BYTE5(v207[169]) = v206[7];
              }
              else
              {
                BYTE5(v207[169]) = 0;
                v33 = PreviousMode;
              }
              if ( (v32 & 0x80u) == 0 )
              {
                HIDWORD(v207[106]) = 5;
              }
              else
              {
                v36 = HIDWORD(v206[7]);
                if ( HIDWORD(v206[7]) >= 0xA )
                  goto LABEL_468;
                if ( HIDWORD(v206[7]) > 5 )
                {
                  v37 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                          SeIncreaseBasePriorityPrivilege,
                          v157,
                          2LL) & 1;
                  LOBYTE(v38) = 4 * v37;
                  v144 = v38;
                  if ( !v37 )
                    goto LABEL_91;
                  v32 = v206[2];
                  v36 = HIDWORD(v206[7]);
                }
                HIDWORD(v207[106]) = v36;
              }
              if ( (v32 & 2) != 0 )
              {
                if ( !v206[0] )
                  goto LABEL_468;
                v207[62] = v206[0];
              }
              else
              {
                v207[62] = 0LL;
              }
              if ( (v32 & 4) != 0 )
              {
                if ( !v206[1] )
                  goto LABEL_468;
                v207[63] = v206[1];
              }
              if ( (v32 & 1) != 0 )
              {
                v39 = v206[3];
                if ( !v206[3] && !v206[4]
                  || v206[3] == -1LL && v206[4] == -1LL
                  || v206[3] > v206[4]
                  || v206[3] < 0x14000uLL )
                {
                  goto LABEL_468;
                }
                if ( v206[3] > (unsigned __int64)PspMinimumWorkingSet )
                {
                  if ( !SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v33) )
                    goto LABEL_91;
                  v32 = v206[2];
                  v39 = v206[3];
                }
                v207[64] = v39;
                v207[65] = v206[4];
              }
              else
              {
                v207[64] = 0LL;
                v207[65] = 0LL;
              }
              if ( (v32 & 0x100) != 0 )
              {
                if ( v206[14] < 0x1000uLL )
                  goto LABEL_468;
                v207[118] = v206[14] >> 12;
              }
              else
              {
                v207[118] = 0LL;
              }
              if ( (v32 & 0x200) != 0 )
              {
                if ( v206[15] < 0x1000uLL )
                  goto LABEL_468;
                v207[119] = v206[15] >> 12;
              }
              else
              {
                v207[119] = 0LL;
              }
              if ( (v32 & 0x200000) != 0 )
              {
                if ( v206[18] < 0x1000uLL )
                  goto LABEL_468;
                v207[120] = v206[18] >> 12;
              }
              else
              {
                v207[120] = 0LL;
              }
              LODWORD(v207[67]) = 2097153;
              memset((char *)&v207[67] + 4, 0, 0x104uLL);
              v40 = v207[66];
              v140 = v207[66];
              v21 = Event;
              if ( (v207[66] & 0x10) == 0 )
              {
                LOBYTE(v45) = v144;
                goto LABEL_148;
              }
              if ( (Event[64].Header.LockNV & 2) == 0 && v206[6] )
              {
                if ( !*(_QWORD *)&Event[22].Header.Lock )
                {
                  Pool2 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 40LL, 1632269136LL);
                  P = Pool2;
                  if ( !Pool2 )
                    goto LABEL_138;
                  *(_QWORD *)&Size[1] = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x28uLL, 0LL);
                  if ( !*(_QWORD *)&Size[1] )
                    goto LABEL_140;
                  v21 = Event;
                  v140 = v207[66];
                  v14 = v141;
                }
                SeCaptureSubjectContextEx(
                  Thread,
                  Thread->ApcState.Process,
                  (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
                v149 = (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel;
                if ( PreviousMode )
                {
                  RequiredPrivileges.PrivilegeCount = 1;
                  RequiredPrivileges.Control = 1;
                  RequiredPrivileges.Privilege[0].Luid = SeDebugPrivilege;
                  RequiredPrivileges.Privilege[0].Attributes = 0;
                  v44 = SePrivilegeCheck(
                          &RequiredPrivileges,
                          (PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel,
                          1);
                  LODWORD(SubjectContext.ClientToken) ^= (LODWORD(SubjectContext.ClientToken) ^ v44) & 1;
                }
                else
                {
                  LODWORD(SubjectContext.ClientToken) |= 1u;
                }
                v45 = v144;
                LOBYTE(v45) = v144 | 2;
                v144 = v45;
                v40 = v140;
LABEL_148:
                PreviousMode = v45;
                ExAcquireResourceExclusiveLite((PERESOURCE)&v21[2].Header.WaitListHead, 1u);
                if ( (v40 & 4) == 0 )
                {
                  if ( (v40 & 0x40) != 0 )
                  {
                    v40 |= (__int64)v21[10].Header.WaitListHead.Blink & 4;
                    v207[63] = v21[9].Header.WaitListHead.Blink;
                  }
                  else
                  {
                    v207[63] = 0LL;
                  }
                }
                v46 = v40 & 0xFFFFFFBF;
                LODWORD(v207[66]) = v46;
                if ( (PreviousMode & 2) == 0 )
                {
                  if ( (v46 & 0x4000) != 0 && (v21[64].Header.LockNV & 2) == 0 )
                    goto LABEL_154;
LABEL_172:
                  if ( ((__int64)v21[10].Header.WaitListHead.Blink & 1) != 0 && (v207[66] & 1) == 0 )
                  {
                    _InterlockedOr(v137, 0);
                    if ( (qword_140D0C000 & 1) != 0 )
                      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&qword_140D0C000);
                    v14 = v141;
                    v21 = Event;
                  }
                  v165[0] = (__int64)v21;
                  HIDWORD(v165[1]) = v21[10].Header.WaitListHead.Blink;
                  *(_QWORD *)&v21[10].Header.Lock = v207[64];
                  v21[10].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v207[65];
                  HIDWORD(v21[10].Header.WaitListHead.Blink) = HIDWORD(v207[66]);
                  if ( (PreviousMode & 2) != 0 )
                  {
                    v51 = v21 + 11;
                    v52 = &v207[67];
                    do
                    {
                      *(_OWORD *)&v51->Header.Lock = *v52;
                      *(_OWORD *)&v51->Header.WaitListHead.Blink = v52[1];
                      v51[1].Header.WaitListHead = (LIST_ENTRY)v52[2];
                      *(_OWORD *)&v51[2].Header.Lock = v52[3];
                      *(_OWORD *)&v51[2].Header.WaitListHead.Blink = v52[4];
                      v51[3].Header.WaitListHead = (LIST_ENTRY)v52[5];
                      *(_OWORD *)&v51[4].Header.Lock = v52[6];
                      v51 = (struct _KEVENT *)((char *)v51 + 128);
                      v51[-1].Header.WaitListHead = (LIST_ENTRY)v52[7];
                      v52 += 8;
                      --v11;
                    }
                    while ( v11 );
                    *(_QWORD *)&v51->Header.Lock = *(_QWORD *)v52;
                  }
                  BYTE1(v21[45].Header.SignalState) = BYTE5(v207[169]);
                  v21[24].Header.SignalState = HIDWORD(v207[106]);
                  v21[9].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v207[62];
                  v21[9].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v207[63];
                  if ( (_DWORD)v5 == 9 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[52], 0LL);
                    LODWORD(v21[10].Header.WaitListHead.Blink) = LODWORD(v207[66]) | Size[0] & (__int64)v21[10].Header.WaitListHead.Blink;
                    *(_QWORD *)&v21[28].Header.Lock = v207[118];
                    v21[28].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v207[119];
                    v21[28].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v207[120];
                    PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v53);
                  }
                  else
                  {
                    LODWORD(v21[10].Header.WaitListHead.Blink) = LODWORD(v207[66]) | Size[0] & (__int64)v21[10].Header.WaitListHead.Blink;
                  }
                  LODWORD(v165[1]) = ~(LODWORD(v21[10].Header.WaitListHead.Blink) | HIDWORD(v165[1]));
                  if ( (v206[2] & 4) != 0 )
                  {
                    PspEnumJobsAndProcessesInJobHierarchy(
                      v21,
                      0,
                      0,
                      (int)PspSetJobTimeLimitCallback,
                      (__int64)&v21[9].Header.WaitListHead.Blink,
                      1);
                    v21[7].Header.WaitListHead.Blink = 0LL;
                    *(_QWORD *)&v21[8].Header.Lock = 0LL;
                    KeResetEvent(v21);
                  }
                  if ( ((__int64)v21[10].Header.WaitListHead.Blink & 6) != 0 )
                  {
                    _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                    v21 = Event;
                    v14 = v141;
                  }
                  v54 = v165[1];
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v21,
                    (int)PspSetJobLimitsJobPreCallback,
                    (int)PspSetJobLimitsJobPostCallback,
                    (int)PspSetJobLimitsProcessCallback,
                    (__int64)v165,
                    5);
                  v47 = PreviousMode | 1;
                  if ( (v54 & 1) != 0 )
                    v47 = PreviousMode;
                  goto LABEL_190;
                }
                if ( (v21[64].Header.LockNV & 2) != 0 )
                {
LABEL_154:
                  v14 = -1073741811;
                  v141 = -1073741811;
LABEL_155:
                  v47 = v144;
LABEL_190:
                  v55 = v47 & 1;
                  if ( v55 )
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D0C000, 0LL);
                    _InterlockedOr(&v21[64].Header.Lock, 0x100u);
                    v21 = Event;
                    p_Blink = (struct _LIST_ENTRY *)&Event[1].Header.WaitListHead.Blink;
                    for ( i = Event[1].Header.WaitListHead.Blink; i != p_Blink; i = i->Flink )
                    {
                      if ( ((__int64)i[-23].Blink & 1) == 0 )
                        PspAddProcessToWorkingSetChangeList(&i[-93].Blink);
                    }
                    v14 = v141;
                  }
                  ExReleaseResourceLite((PERESOURCE)&v21[2].Header.WaitListHead);
                  if ( v55 )
                    PspApplyWorkingSetLimits(v21);
                  if ( v149 )
                    SeReleaseSubjectContext(v149);
                  if ( !P )
                    goto LABEL_496;
                  ExFreePoolWithTag(P, 0x614A7350u);
                  v58 = *(char **)&Size[1];
LABEL_241:
                  PsReturnSharedPoolQuota(v58, 0x28uLL, 0LL);
                  goto LABEL_496;
                }
                if ( ((__int64)v21[10].Header.WaitListHead.Blink & 0x10) != 0 )
                {
                  KeFirstGroupAffinityEx((__int64)&v169, &v21[11]);
                  Group = v169.m128i_u16[4];
                }
                else
                {
                  Group = KeGetCurrentPrcb()->Group;
                  v169.m128i_i16[4] = Group;
                }
                if ( v206[6] != (qword_140D1EFE8[Group] & v206[6]) )
                {
                  v21 = Event;
                  goto LABEL_154;
                }
                if ( LOWORD(v207[67]) <= (unsigned int)v169.m128i_i16[4] )
                {
                  if ( WORD1(v207[67]) <= (unsigned int)v169.m128i_i16[4] )
                  {
LABEL_165:
                    v21 = Event;
                    v14 = PspEnumJobsAndProcessesInJobHierarchy(
                            Event,
                            0,
                            0,
                            (int)PspSetAffinityLimitCallback,
                            (__int64)&SubjectContext,
                            1);
                    v141 = v14;
                    if ( v14 < 0 )
                      goto LABEL_155;
                    v49 = *(_QWORD *)&v21[22].Header.Lock;
                    if ( v49 )
                    {
                      v181 = *(_OWORD *)(v49 + 8);
                      v182 = *(_OWORD *)(v49 + 24);
                      v149 = (PSECURITY_SUBJECT_CONTEXT)&v181;
                    }
                    else
                    {
                      *(_QWORD *)&v21[22].Header.Lock = P;
                      v21[22].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)&Size[1];
                      P = 0LL;
                      v149 = 0LL;
                    }
                    v50 = *(struct _SECURITY_SUBJECT_CONTEXT **)&v21[22].Header.Lock;
                    *v50 = SubjectContext;
                    v50[1].ClientToken = v164;
                    goto LABEL_172;
                  }
                  LOWORD(v207[67]) = v169.m128i_i16[4] + 1;
                }
                v207[v169.m128i_u16[4] + 68] |= v206[6];
                goto LABEL_165;
              }
LABEL_352:
              v14 = -1073741811;
              goto LABEL_496;
            }
            v150 = 0LL;
            *(__m128i *)BugCheckParameter1a = *v9;
            if ( !BugCheckParameter1a[1] )
            {
              v21 = Event;
              ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
              if ( v21 )
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[52], 0LL);
              v23 = *(void **)&v21[23].Header.Lock;
              *(_QWORD *)&v21[23].Header.Lock = 0LL;
              PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v22);
              ExReleaseResourceLite((PERESOURCE)&v21[2].Header.WaitListHead);
              if ( v23 )
                ObfDereferenceObjectWithTag(v23, 0x624A7350u);
              goto LABEL_496;
            }
            v14 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1a[1], 0x624A7350u, (__int64)&Object, 0LL, 0LL);
            v21 = Event;
            if ( v14 >= 0 )
            {
              if ( Event[50].Header.WaitListHead.Blink )
              {
                MiniCompletionPacket = 0LL;
              }
              else
              {
                MiniCompletionPacket = IoAllocateMiniCompletionPacket(
                                         (__int64)&PspNotificationPacketCallback,
                                         (__int64)Event);
                v150 = MiniCompletionPacket;
                if ( !MiniCompletionPacket )
                {
                  v14 = -1073741670;
                  goto LABEL_66;
                }
              }
              ExAcquireResourceExclusiveLite((PERESOURCE)&v21[2].Header.WaitListHead, 1u);
              if ( *(_QWORD *)&v21[23].Header.Lock
                || ((__int64)v21[10].Header.WaitListHead.Blink & 0x2000) != 0 && (v21[64].Header.LockNV & 1) != 0 )
              {
                ExReleaseResourceLite((PERESOURCE)&v21[2].Header.WaitListHead);
                ObfDereferenceObjectWithTag(Object, 0x624A7350u);
                v14 = -1073741811;
                MiniCompletionPacket = v150;
              }
              else
              {
                if ( v21[50].Header.WaitListHead.Blink )
                {
                  MiniCompletionPacket = v150;
                }
                else
                {
                  v21[50].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)MiniCompletionPacket;
                  MiniCompletionPacket = 0LL;
                }
                ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[52], 0LL);
                v21[23].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)BugCheckParameter1a[0];
                *(_QWORD *)&v21[23].Header.Lock = Object;
                v21[23].Header.WaitListHead.Blink = 0LL;
                PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v25);
                if ( ((__int64)v21[45].Header.WaitListHead.Flink & 0x40) != 0 )
                  PspEnumJobsAndProcessesInJobHierarchy(
                    v21,
                    0,
                    0,
                    (int)PspAssociateCompletionPortCallback,
                    (__int64)v21,
                    1);
                ExReleaseResourceLite((PERESOURCE)&v21[2].Header.WaitListHead);
              }
              goto LABEL_66;
            }
            MiniCompletionPacket = 0LL;
LABEL_66:
            if ( MiniCompletionPacket )
            {
              *(_QWORD *)(MiniCompletionPacket + 56) = 0LL;
              IopFreeMiniCompletionPacket(MiniCompletionPacket);
            }
            goto LABEL_496;
          }
          v178 = v9->m128i_i32[0];
          v26 = v178;
          v21 = Event;
          if ( v178 > 1 )
            goto LABEL_352;
          ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
          HIDWORD(v21[22].Header.WaitListHead.Blink) = v26;
          goto LABEL_70;
        }
        v155 = v9->m128i_i32[0];
        v21 = Event;
        if ( (v155 & 0xFFFFFE00) != 0 )
          goto LABEL_352;
        v28 = 8;
        PspLockJobChain((__int64)Event, (__int64)Thread, 0);
        if ( (unsigned __int8)PspDoesJobHierarchyPermitUILimits((__int64)v21) )
        {
          if ( v21[24].Header.LockNV == -2 )
          {
            v14 = -1073741790;
          }
          else
          {
            v21 = Event;
            PspBindProcessSessionToJob(Event, KeGetCurrentThread()->ApcState.Process);
            v159 = *v29;
            if ( v159 > 0xFFFFFFFD )
              goto LABEL_81;
            if ( LODWORD(v21[22].Header.WaitListHead.Blink) == v155 )
              goto LABEL_81;
            v186 = 0;
            PspUnlockJobChain((__int64)v21, (__int64)Thread, 1);
            v28 = 0;
            v184 = v21;
            v185 = 0;
            v187 = v155;
            v14 = PsInvokeWin32Callout(6LL, &v184, 1LL, &v159);
            v141 = v14;
            if ( v14 >= 0 )
            {
LABEL_81:
              LODWORD(v21[22].Header.WaitListHead.Blink) = v155;
              _InterlockedOr(&v21[64].Header.Lock, 0x10u);
              v21 = Event;
              v14 = v141;
            }
          }
        }
        else
        {
          v14 = -1073741637;
        }
        v30 = Thread;
        v31 = (__int64)v21;
        if ( v28 == 8 )
        {
LABEL_83:
          PspUnlockJobChain(v31, (__int64)v30, 0);
          goto LABEL_496;
        }
LABEL_449:
        PspUnlockJob(v31, (__int64)v30);
        goto LABEL_496;
      }
      if ( (_DWORD)v5 != 15 )
      {
        if ( (_DWORD)v5 != 16 )
        {
          if ( (_DWORD)v5 == 18 )
          {
            v198 = *v9;
            if ( v198.m128i_i32[0]
              && (v198.m128i_i32[0] & 0xFFFFFFF0) == 0
              && (!(unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage()
               || (v198.m128i_i8[0] & 1) != 0
               || (v198.m128i_i8[0] & 8) == 0) )
            {
              v21 = Event;
              v14 = PspFreezeJobTree(Event, &v198);
              if ( v14 >= 0 )
                v9->m128i_i32[0] = v198.m128i_i32[0];
              goto LABEL_496;
            }
            goto LABEL_468;
          }
          if ( (_DWORD)v5 != 21 )
          {
            switch ( (_DWORD)v5 )
            {
              case 0x16:
                LOBYTE(v142) = v9->m128i_i8[0];
                v21 = Event;
                ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                if ( (v21[64].Header.LockNV & 0x20) == 0 )
                  goto LABEL_250;
                v76 = *(_QWORD *)&v21[51].Header.Lock;
                v77 = *(_DWORD *)(v76 + 40);
                if ( (v77 & 0x40) != 0 )
                  goto LABEL_250;
                if ( (v77 & 0x21) != 0 )
                {
                  v14 = -1073741637;
                  goto LABEL_70;
                }
                if ( ((v77 >> 3) & 1) == ((_BYTE)v142 != 0) )
                  goto LABEL_250;
                *(_DWORD *)(v76 + 40) = ((_BYTE)v142 != 0 ? 8 : 0) | v77 & 0xFFFFFFF7;
                KeSetSchedulingGroupRankBias(*(_QWORD *)&v21[51].Header.Lock + 128LL, v142);
                PspEnumJobsAndProcessesInJobHierarchy(
                  v21,
                  0,
                  0,
                  (int)PspSetProcessCacheIsolationCallback,
                  (__int64)&v142,
                  1);
                break;
              case 0x17:
                if ( v9->m128i_i8[0] != 1 )
                {
                  v14 = -1073741811;
                  v141 = -1073741811;
                  v21 = Event;
                  goto LABEL_496;
                }
                v21 = Event;
                PspEnumJobsAndProcessesInJobHierarchy(
                  Event,
                  0,
                  (int)PspEnableTimerVirtualization,
                  (int)PspEnableProcessTimerVirtualization,
                  0LL,
                  0);
                goto LABEL_325;
              case 0x18:
                v73 = v9->m128i_i64[0];
                v191 = v9->m128i_i64[0];
                v21 = Event;
                ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
                if ( (v21[64].Header.LockNV & 0x20) == 0 )
                {
LABEL_250:
                  v14 = -1073741811;
LABEL_70:
                  p_WaitListHead = (struct _ERESOURCE *)&v21[2].Header.WaitListHead;
LABEL_71:
                  ExReleaseResourceLite(p_WaitListHead);
                  goto LABEL_496;
                }
                v74 = *(_QWORD *)&v21[51].Header.Lock;
                v75 = *(_DWORD *)(v74 + 40);
                if ( (v75 & 0x10) == 0 )
                {
                  *(_DWORD *)(v74 + 40) = v75 | 0x10;
                  KeInitializeDpc((PRKDPC)(v74 + 48), (PKDEFERRED_ROUTINE)PspJobCycleTimeNotificationDpcRoutine, v21);
                }
                KeSetSchedulingGroupCycleNotification(v74 + 128, v74 + 48, v73);
                break;
              default:
                goto LABEL_457;
            }
            v14 = 0;
            goto LABEL_70;
          }
          v152 = v9->m128i_i8[0];
          v21 = Event;
          v78 = PspSetBackgroundJobTree(Event);
LABEL_265:
          v14 = v78;
          if ( v78 < 0 )
            goto LABEL_496;
          goto LABEL_325;
        }
        v174 = v9->m128i_i32[0];
        v79 = v174;
        v21 = Event;
        if ( (v174 & 0xFFFFC001) != 0 )
          goto LABEL_352;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( v21 )
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[52], 0LL);
        LODWORD(v21[45].Header.WaitListHead.Flink) = v79;
        PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v80);
        goto LABEL_324;
      }
      memmove(&v166, v9, v4);
      v81 = v166;
      if ( (v166 & 0xFFFFFFE0) != 0 )
        goto LABEL_468;
      LODWORD(v147) = HIDWORD(v166);
      Size[0] = v166 & 1;
      if ( (v166 & 1) != 0 )
      {
        if ( (v166 & 2) != 0 )
        {
          if ( (v166 & 0x10) != 0 )
            goto LABEL_468;
          v82 = (unsigned int)(HIDWORD(v166) - 1) <= 8;
        }
        else if ( (v166 & 0x10) != 0 )
        {
          if ( (v166 & 4) != 0 || !WORD2(v166) || WORD2(v166) > HIWORD(v166) )
            goto LABEL_468;
          v82 = HIWORD(v166) <= 0x2710u;
        }
        else
        {
          v82 = (unsigned int)(HIDWORD(v166) - 1) <= 0x270F;
        }
        if ( !v82 )
          goto LABEL_468;
      }
      v21 = Event;
      PspLockJobChain((__int64)Event, (__int64)Thread, 0);
      Lock = v21[64].Header.Lock;
      if ( Size[0] )
      {
        if ( (Lock & 0x20) == 0 )
        {
          RateControl = PspAllocateRateControl(2LL);
          v85 = RateControl;
          if ( !RateControl )
          {
            v14 = -1073741670;
            goto LABEL_322;
          }
          *(_QWORD *)&v21[51].Header.Lock = RateControl;
LABEL_298:
          v86 = v21 + 51;
          *(_QWORD *)&Size[1] = v21 + 51;
          *(_DWORD *)(*(_QWORD *)&v21[51].Header.Lock + 40LL) = 0;
          v87 = WORD2(v166);
          *(_DWORD *)(*(_QWORD *)&v21[51].Header.Lock + 44LL) = HIDWORD(v166);
          if ( Size[0] )
          {
            if ( (v81 & 4) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL) |= 1u;
              WORD1(v147) = v87;
            }
            if ( (v81 & 2) != 0 )
            {
              *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL) |= 4u;
              HIDWORD(v147) = 0;
            }
            else
            {
              HIDWORD(v147) = 1;
              if ( (v81 & 0x14) == 0 )
                WORD1(v147) = 10000;
            }
            if ( (v81 & 8) != 0 )
              *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL) |= 2u;
            if ( (v81 & 0x10) != 0 )
              *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL) |= 0x20u;
            v88 = *(_QWORD *)&v86->Header.Lock;
            v89 = (__int64 *)(*(_QWORD *)&v86->Header.Lock + 128LL);
            if ( *(_QWORD *)&v86->Header.Lock == v85 )
            {
              *v89 = v147;
              v14 = PspAddSchedulingGroupToJobChain(v21[53].Header.WaitListHead.Blink, v21);
              v141 = v14;
              if ( v14 < 0 )
              {
                v90 = *(_QWORD **)&Size[1];
                if ( **(_QWORD **)&Size[1] )
                {
                  PspFreeRateControl(**(PVOID **)&Size[1]);
                  *v90 = 0LL;
                }
                goto LABEL_322;
              }
              _InterlockedOr(&v21[64].Header.Lock, 0x20u);
              v21 = Event;
              v86 = *(PRKEVENT *)&Size[1];
            }
            else
            {
              v150 = *(_QWORD *)&v86->Header.Lock + 128LL;
              if ( (*(_DWORD *)(v88 + 40) & 4) != 0 )
                KeSetSchedulingGroupWeights(1u, (__int64)&v150, (__int64)&v147);
              else
                KeSetSchedulingGroupCpuRates((__int64)v89, &v150, &v147);
            }
            v167 = *(_QWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL);
          }
          else
          {
            v147 = 0x327102710LL;
            *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 40LL) |= 0x40u;
            v91 = v147;
            *(_DWORD *)(*(_QWORD *)&v86->Header.Lock + 44LL) = v147;
            v150 = *(_QWORD *)&v86->Header.Lock + 128LL;
            HIBYTE(v142) = (*(_DWORD *)(v150 + 4) & 4) != 0;
            v21[51].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)((char *)v21[51].Header.WaitListHead.Blink
                                                                     + KeQuerySchedulingGroupReadyTime(v150));
            KeSetSchedulingGroupCpuRates(v92, &v150, &v147);
            HIDWORD(v167) = v91;
            if ( HIBYTE(v142) )
            {
              HIBYTE(v142) = 0;
              PspEnumJobsAndProcessesInJobHierarchy(
                v21,
                0,
                0,
                (int)PspSetProcessCacheIsolationCallback,
                (__int64)&v142 + 1,
                1);
            }
          }
          v14 = 0;
          if ( (PerfGlobalGroupMask & 0x80000) != 0 )
            EtwTraceJobSetQuery((_DWORD)v21, 15, (unsigned int)&v167, 0, 0, 1829);
LABEL_322:
          v30 = Thread;
          v31 = (__int64)v21;
          goto LABEL_83;
        }
      }
      else if ( (Lock & 0x20) == 0 )
      {
        v14 = -1073741811;
        goto LABEL_322;
      }
      v85 = 0LL;
      goto LABEL_298;
    }
    if ( (int)v5 > 42 )
    {
      if ( (_DWORD)v5 == 43 )
      {
        v193 = v9->m128i_i64[0];
        LOBYTE(v12) = PreviousMode;
        v21 = Event;
        Silo = PspSetJobMemoryPartition(Event, v12);
        goto LABEL_495;
      }
      if ( (_DWORD)v5 == 44 )
      {
        v21 = Event;
        v94 = (struct _ERESOURCE *)&Event[2].Header.WaitListHead;
        ExAcquireResourceExclusiveLite((PERESOURCE)&Event[2].Header.WaitListHead, 1u);
        if ( v21[64].Header.LockNV >= 0 )
        {
          v21[61].Header.WaitListHead = (LIST_ENTRY)*v9;
          _InterlockedOr(&v21[64].Header.Lock, 0x80000000);
          ExReleaseResourceLite(v94);
          v14 = 0;
          goto LABEL_458;
        }
        v14 = -1073741791;
LABEL_492:
        p_WaitListHead = v94;
        goto LABEL_71;
      }
      if ( (_DWORD)v5 != 45 )
      {
        if ( (_DWORD)v5 == 46 )
        {
          v170 = v9->m128i_i64[0];
          v21 = Event;
          v78 = PspSetEnergyTrackingStateJobTree(Event, (__int64)&v170);
          goto LABEL_265;
        }
        if ( (_DWORD)v5 != 47 )
        {
          if ( (_DWORD)v5 == 48 )
          {
            v176 = v9->m128i_i64[0];
            if ( (v176 & 0xFFFFFFFE) != 0 || HIDWORD(v176) >= 5 )
              goto LABEL_468;
            v21 = Event;
            PspSetIoPriorityLimitJobTree(Event);
          }
          else
          {
            if ( (_DWORD)v5 != 49 )
              goto LABEL_457;
            v175 = v9->m128i_i64[0];
            if ( (v175 & 0xFFFFFFFE) != 0 || HIDWORD(v175) >= 8 )
              goto LABEL_468;
            v21 = Event;
            if ( (v175 & 1) != 0 && !HIDWORD(v175) )
              goto LABEL_352;
            PspSetPagePriorityLimitJobTree(Event);
          }
LABEL_325:
          v14 = 0;
          goto LABEL_496;
        }
        v154 = v9->m128i_i8[0];
        if ( v154 != 1 )
          goto LABEL_468;
        v133 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
        v21 = Event;
        if ( v133 )
        {
          if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
            goto LABEL_352;
          v14 = (unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 2LL) == 0 ? 0xC0000022 : 0;
LABEL_496:
          v8 = (*(_WORD *)v177)++ == 0xFFFF;
          if ( v8 && ($C71981A45BEB2B45F82C232A7085991E *)Thread->ApcState.ApcListHead[0].Flink != &Thread->152 )
            KiCheckForKernelApcDelivery();
          if ( v14 )
          {
            if ( (PerfGlobalGroupMask & 0x80000) != 0 )
              EtwTraceJobSetQuery((_DWORD)v21, v5, 0, 0, v14, 1831);
          }
          ObfDereferenceObjectWithTag(v21, 0x79517350u);
          return (unsigned int)v14;
        }
        goto LABEL_348;
      }
      v21 = Event;
      if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
        goto LABEL_350;
      v171 = 0LL;
      v172 = *v9;
      v134 = _mm_srli_si128(v172, 8).m128i_u64[0];
      if ( !v134 || (unsigned __int16)(v172.m128i_i16[0] - 1) > 0x206u || (v172.m128i_i8[0] & 1) != 0 )
      {
        v14 = -1073741811;
        v141 = -1073741811;
        goto LABEL_496;
      }
      if ( PreviousMode == 1 )
      {
        if ( (v134 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v134 + v172.m128i_u16[0] > 0x7FFFFFFF0000LL || v134 + v172.m128i_u16[0] < v134 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v135 = v172.m128i_u16[0];
      v136 = (wchar_t *)ExAllocatePool2(256LL, v172.m128i_u16[0], 1918071632LL);
      v129 = v136;
      v171 = v136;
      if ( !v136 )
      {
        v14 = -1073741670;
        v141 = -1073741670;
        goto LABEL_496;
      }
      memmove(v136, (const void *)v134, v135);
      if ( wcsnlen(v129, v135 >> 1) == v135 >> 1 )
      {
        v172.m128i_i64[1] = (__int64)v129;
        v14 = PspAssignSiloSystemRootPath(v21, &v172);
      }
      else
      {
        v14 = -1073741811;
      }
      if ( !v129 )
        goto LABEL_496;
      v130 = 1918071632;
LABEL_438:
      ExFreePoolWithTag(v129, v130);
      goto LABEL_496;
    }
    if ( (_DWORD)v5 == 42 )
    {
      v131 = 0;
      *(__m128i *)v194 = *v9;
      *(__m128i *)&v194[16] = v9[1];
      *(__m128i *)&v194[32] = v9[2];
      *(__m128i *)&v194[48] = v9[3];
      *(_QWORD *)&v194[64] = v9[4].m128i_i64[0];
      v21 = Event;
      if ( (*(_DWORD *)v194 & 0xFFFFFFFC) != 0 || (v194[0] & 3) == 0 )
      {
        v14 = -1073741811;
      }
      else
      {
        v131 = 8;
        v132 = Thread;
        PspLockRootJobExclusive(Event, Thread, &v158);
        PspLockJobConditionally((__int64)v21, &v158);
        v14 = PspSetJobIoAttribution(v21);
        if ( v14 >= 0 )
        {
          PspUnlockJobConditionally((__int64)v21, &v158);
          PspUnlockJob(v158, (__int64)v132);
          v131 = 0;
        }
      }
      if ( v131 != 8 )
        goto LABEL_496;
      PspUnlockJobConditionally((__int64)v21, &v158);
      v30 = Thread;
      v31 = v158;
      goto LABEL_449;
    }
    if ( (_DWORD)v5 == 27 )
    {
      v21 = Event;
      if ( Event )
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&Event[52], 0LL);
      v21[29].Header.WaitListHead.Flink = 0LL;
      *(_QWORD *)&v21[29].Header.Lock = 0LL;
      PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v13);
      goto LABEL_325;
    }
    if ( (_DWORD)v5 != 31 )
    {
      switch ( (_DWORD)v5 )
      {
        case ' ':
          v21 = Event;
          Silo = PspSetNetRateControl(v9, Size[0], Event);
          break;
        case '!':
LABEL_42:
          if ( (_DWORD)v4 == 48 )
          {
            memmove(&v203, v9, v4);
            v16 = DWORD2(v205);
            v19 = *((_QWORD *)&v203 + 1);
            v20 = v203;
            v197[0] = v203;
            v17 = *((_QWORD *)&v204 + 1);
            v18 = v204;
            v197[1] = v204;
            LODWORD(v197[2]) = v205;
            *(_QWORD *)((char *)&v197[2] + 4) = *(_QWORD *)((char *)&v205 + 4);
            v15 = 459268;
            JobLimitInformationValidFlags = 459268;
          }
          else
          {
            if ( (_DWORD)v4 == 56 )
            {
              memmove(&v199, v9, v4);
              v16 = v202;
              DWORD2(v197[2]) = v202;
              v19 = *((_QWORD *)&v199 + 1);
              v20 = v199;
              v197[0] = v199;
              v100 = *((_QWORD *)&v200 + 1);
              v101 = v200;
              *(_QWORD *)&v197[3] = v101 >> 64;
              v18 = v101;
              *(_QWORD *)&v197[1] = v200;
              v17 = v201;
              *(_OWORD *)((char *)&v197[1] + 8) = v201;
              v15 = 2589188;
              JobLimitInformationValidFlags = 2589188;
              goto LABEL_358;
            }
            memmove(v197, v9, v4);
            v15 = 2064900;
            JobLimitInformationValidFlags = 2064900;
            v16 = DWORD2(v197[2]);
            v17 = *((_QWORD *)&v197[1] + 1);
            v18 = *(_QWORD *)&v197[1];
            v19 = *((_QWORD *)&v197[0] + 1);
            v20 = *(_QWORD *)&v197[0];
          }
          v100 = *(_QWORD *)&v197[3];
LABEL_358:
          if ( (~v15 & (unsigned int)v16) == 0 )
          {
            if ( (v16 & 0x8000) != 0 )
            {
              if ( v100 < 0x1000 )
                goto LABEL_468;
            }
            else
            {
              v100 = 0LL;
              *(_QWORD *)&v197[3] = 0LL;
            }
            if ( (v16 & 0x200) != 0 )
            {
              if ( v17 < 0x1000 || v17 < v100 )
                goto LABEL_468;
            }
            else
            {
              *((_QWORD *)&v197[1] + 1) = 0LL;
            }
            if ( (v16 & 4) != 0 )
            {
              if ( !v18 )
                goto LABEL_468;
            }
            else
            {
              *(_QWORD *)&v197[1] = 0LL;
            }
            if ( (v16 & 0x10000) != 0 )
            {
              if ( !v20 )
                goto LABEL_468;
            }
            else
            {
              *(_QWORD *)&v197[0] = 0LL;
            }
            if ( (v16 & 0x20000) != 0 )
            {
              if ( !v19 )
                goto LABEL_468;
            }
            else
            {
              *((_QWORD *)&v197[0] + 1) = 0LL;
            }
            v102 = 0LL;
            do
            {
              PspNotificationLimitRateControlToleranceField(v197, v102, v16);
              PspNotificationLimitRateControlToleranceIntervalField(v197);
              v104 = PspRateControlLimitFlag(v103);
              if ( (v104 & (unsigned int)v16) != 0 )
              {
                if ( !*v106 || *v106 > 3 || !*v107 || *v107 > 3 )
                  goto LABEL_468;
              }
              else
              {
                *v106 = 0;
                *v107 = 0;
                v16 = DWORD2(v197[2]);
              }
              v102 = (unsigned int)(v105 + 1);
            }
            while ( (int)v102 < 3 );
            v21 = Event;
            v108 = Event + 50;
            if ( *(_QWORD *)&Event[50].Header.Lock )
            {
              v109 = 0LL;
              *(_QWORD *)&Size[1] = 0LL;
              goto LABEL_395;
            }
            v109 = (struct _SECURITY_SUBJECT_CONTEXT *)ExAllocatePool2(256LL, 136LL, 1649046352LL);
            if ( v109 )
            {
              *(_QWORD *)&Size[1] = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, 0x88uLL, 0LL);
              v43 = v109;
              if ( !*(_QWORD *)&Size[1] )
              {
                v42 = 1649046352;
                goto LABEL_141;
              }
              memset(v109, 0, 0x88uLL);
              v21 = Event;
LABEL_395:
              v161 = (PERESOURCE)&v21[2].Header.WaitListHead;
              ExAcquireResourceExclusiveLite((PERESOURCE)&v21[2].Header.WaitListHead, 1u);
              if ( *(_QWORD *)&v108->Header.Lock )
              {
                if ( v109 )
                {
                  ExFreePoolWithTag(v109, 0x624A7350u);
                  PsReturnSharedPoolQuota(*(char **)&Size[1], 0x88uLL, 0LL);
                }
              }
              else
              {
                *(_QWORD *)&v108->Header.Lock = v109;
                v21[50].Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)&Size[1];
              }
              v110 = *(_QWORD *)&v108->Header.Lock;
              v111 = **(_DWORD **)&v108->Header.Lock;
              *(_OWORD *)(v110 + 8) = v197[0];
              *(_QWORD *)(v110 + 24) = *(_QWORD *)&v197[1];
              v112 = 0LL;
              v113 = (_DWORD *)(v110 + 60);
              do
              {
                v114 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v197, v112, v113);
                *(_DWORD *)(v115 - 12) = *v114;
                v116 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v197);
                *v117 = *v116;
                v112 = (unsigned int)(v118 + 1);
                v113 = v117 + 1;
              }
              while ( (int)v112 < 3 );
              *(_QWORD *)&Size[1] = v21 + 52;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&v21[52], 0LL);
              *(_QWORD *)(v110 + 32) = *(_QWORD *)&v197[3] >> 12;
              *(_QWORD *)(v110 + 40) = *((_QWORD *)&v197[1] + 1) >> 12;
              **(_DWORD **)&v108->Header.Lock = DWORD2(v197[2]);
              PspUnlockJobMemoryLimitsExclusive(v21, 0LL, 0LL, v119);
              if ( (**(_DWORD **)&v108->Header.Lock & 0xFFFF7DFF) != 0 )
              {
                _InterlockedAdd64(&PspJobTimeLimitsRequest, 1uLL);
                v21 = Event;
              }
              if ( v111 )
              {
                v120 = *(_DWORD **)&v108->Header.Lock;
                if ( **(_DWORD **)&v108->Header.Lock )
                {
LABEL_408:
                  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
                    EtwTraceJobSetQuery((_DWORD)v21, v5, (unsigned int)v197, 0, 0, 1829);
                  ExReleaseResourceLite(v161);
                  ExAcquirePushLockSharedEx(*(ULONG_PTR *)&Size[1], 0LL);
                  Blink = v21[64].Header.WaitListHead.Blink;
                  v21 = Event;
                  JobMemoryUsageNotificationViolations = PspGetJobMemoryUsageNotificationViolations(
                                                           (__int64)Event,
                                                           (unsigned __int64)Event[49].Header.WaitListHead.Blink,
                                                           (unsigned __int64)Event[49].Header.WaitListHead.Blink
                                                         + (unsigned __int64)Blink,
                                                           33280);
                  PspUnlockJobMemoryLimitsShared((__int64)v21, 0LL);
                  if ( JobMemoryUsageNotificationViolations )
                  {
                    PspScheduleEnforcementWorker(*(_QWORD *)&v21[54].Header.Lock, v123, v124, v125);
                    v21 = Event;
                  }
                  goto LABEL_325;
                }
              }
              else
              {
                v120 = *(_DWORD **)&v108->Header.Lock;
                if ( !**(_DWORD **)&v108->Header.Lock )
                  goto LABEL_408;
              }
              PspEnumJobsAndProcessesInJobHierarchy(
                v21,
                (int)PspSetJobNotificationCountCallback,
                0,
                0,
                (__int64)v120,
                5);
              goto LABEL_408;
            }
LABEL_138:
            v14 = -1073741670;
            goto LABEL_496;
          }
LABEL_468:
          v14 = -1073741811;
          goto LABEL_458;
        case '#':
          v21 = Event;
          Silo = PspCreateSilo(Event);
          break;
        case '%':
          v99 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v21 = Event;
          if ( !v99 )
            goto LABEL_348;
          if ( (Event[64].Header.LockNV & 0x40000000) == 0 )
            goto LABEL_350;
          if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
            goto LABEL_352;
          v183 = v9->m128i_i32[0];
          Silo = ObCreateSiloRootDirectory(v21);
          break;
        case '(':
          v96 = SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode);
          v21 = Event;
          if ( v96 )
          {
            if ( (Event[64].Header.LockNV & 0x40000000) != 0 )
            {
              if ( !(unsigned __int8)PspSetJobSiloThreadImpersonationPolicy(Event, 4LL) )
                goto LABEL_352;
              v192 = v9->m128i_i64[0];
              v153 = v9->m128i_i8[8];
              LOBYTE(v97) = PreviousMode;
              Silo = PspConvertSiloToServerSilo(v21, v97);
              break;
            }
LABEL_350:
            v14 = -1073740535;
            goto LABEL_496;
          }
LABEL_348:
          v14 = -1073741727;
          goto LABEL_496;
        case ')':
          v173 = v9->m128i_i32[0];
          v21 = Event;
          if ( !PspJobIsAppSilo((__int64)Event) || v93 != 2 )
            goto LABEL_352;
          v94 = (struct _ERESOURCE *)&v21[2].Header.WaitListHead;
          ExAcquireResourceExclusiveLite((PERESOURCE)&v21[2].Header.WaitListHead, 1u);
          if ( v21[60].Header.LockNV )
          {
            v14 = -1073740529;
          }
          else
          {
            v95 = _interlockedbittestandset(&v21[64].Header.Lock, 0x1Du);
            v21 = Event;
            if ( v95 )
            {
              v14 = 255;
            }
            else
            {
              PspHardDereferenceSiloWorker((__int64)Event);
              v14 = 0;
            }
          }
          goto LABEL_492;
        default:
          goto LABEL_457;
      }
LABEL_495:
      v14 = Silo;
      goto LABEL_496;
    }
    memmove(v195, v9, v4);
    if ( v195[3] )
    {
      v126 = v195[5];
      if ( !LOWORD(v195[5]) )
        goto LABEL_426;
      if ( (v195[3] & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v195[3] + (unsigned __int64)LOWORD(v195[5]) > 0x7FFFFFFF0000LL
        || v195[3] + (unsigned __int64)LOWORD(v195[5]) < v195[3] )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        v126 = v195[5];
      }
      if ( !v126 || (v126 & 1) != 0 )
      {
LABEL_426:
        v14 = -1073741811;
        v141 = -1073741811;
        v21 = Event;
        goto LABEL_436;
      }
      v127 = 32;
      if ( PreviousMode == 1 )
        v127 = 257;
      v180[1] = (PVOID)ExAllocatePool2(v127, v126 + 2LL, 1649046352LL);
      if ( !v180[1] )
      {
        v14 = -1073741801;
        v141 = -1073741801;
        v21 = Event;
        goto LABEL_436;
      }
      v128 = v180[1];
      memmove(v180[1], (const void *)v195[3], LOWORD(v195[5]));
      v128[(unsigned __int64)LOWORD(v195[5]) >> 1] = 0;
      v195[3] = v128;
    }
    if ( (v195[4] & 0xFFFFFFF000000000uLL) != 0 )
    {
      v14 = -1073741811;
    }
    else
    {
      if ( !v195[7] && !v195[2] && !v195[10] || (unsigned __int8)PspIsContextAdmin() )
      {
        v21 = Event;
        v14 = PspSetJobIoRateControl(Event);
        goto LABEL_436;
      }
      v14 = -1073741790;
    }
    v21 = Event;
LABEL_436:
    v129 = (wchar_t *)v180[1];
    if ( !v180[1] )
      goto LABEL_496;
    v130 = 0;
    goto LABEL_438;
  }
  return result;
}
