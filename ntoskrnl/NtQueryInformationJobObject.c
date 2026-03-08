/*
 * XREFs of NtQueryInformationJobObject @ 0x1406F9480
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloServiceSessionId @ 0x1402456C0 (PsGetServerSiloServiceSessionId.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeIsSingleGroupAffinityEx @ 0x1402943B0 (KeIsSingleGroupAffinityEx.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PspGetJobSilo @ 0x1402B60F4 (PspGetJobSilo.c)
 *     MmQueryApiSetSchema @ 0x1402F3614 (MmQueryApiSetSchema.c)
 *     PsGetJobServerSilo @ 0x140302E10 (PsGetJobServerSilo.c)
 *     PsIsHostSilo @ 0x14030F2E0 (PsIsHostSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage @ 0x14040BA70 (Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PspIsSiloInServerSilo @ 0x1405A14DC (PspIsSiloInServerSilo.c)
 *     PsGetParentSilo @ 0x14067FE00 (PsGetParentSilo.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406F8924 (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryJobIoAttribution @ 0x1406F894C (PspQueryJobIoAttribution.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x1406F90B8 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x1406F91EC (PspQueryJobHierarchyProcessIdList.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x1406FAE20 (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJobListShared @ 0x1406FB768 (PspUnlockJobListShared.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FBFC0 (PspLockJobShared.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 *     PspRateControlLimitFlag @ 0x1406FC1A0 (PspRateControlLimitFlag.c)
 *     PspLockJobMemoryLimitsShared @ 0x1406FC318 (PspLockJobMemoryLimitsShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1406FC344 (PspUnlockJobMemoryLimitsShared.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406FEF4C (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406FEF74 (PspNotificationLimitRateControlToleranceField.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1407512E4 (PspAllocateAndQueryNotificationChannel.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     PspQueryRateControlHistory @ 0x1407E8B5C (PspQueryRateControlHistory.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409AF690 (PspQueryJobHierarchyInterferenceCount.c)
 *     EtwTraceJobSetQuery @ 0x1409E28AC (EtwTraceJobSetQuery.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQueryInformationJobObject(
        ULONG_PTR a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int *a5)
{
  __int64 v5; // rbx
  unsigned __int64 v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdx
  int v10; // r12d
  bool v11; // zf
  struct _KTHREAD *CurrentThread; // r9
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rcx
  char *v16; // rbx
  char *v17; // rcx
  char *v18; // r15
  signed int JobIoAttribution; // esi
  unsigned int *v20; // r12
  void *v21; // r13
  unsigned int v22; // r13d
  int v23; // r14d
  unsigned __int16 v24; // r9
  _QWORD *v25; // rcx
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // dx
  __int16 v28; // r8
  int v29; // ecx
  __int64 v30; // rax
  int v31; // r9d
  unsigned int v32; // edx
  int v33; // ecx
  int v34; // eax
  unsigned int v35; // esi
  __int64 v36; // rax
  _OWORD *v37; // rcx
  int *v38; // rdx
  _OWORD *v39; // rcx
  _OWORD *v40; // rdx
  int v41; // r14d
  _BYTE *v42; // rdx
  _QWORD *v43; // r8
  unsigned __int16 v44; // cx
  unsigned __int16 v45; // ax
  unsigned int v46; // eax
  __int64 ParentSilo; // rsi
  _DWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // edx
  _DWORD *v56; // rax
  int v57; // edx
  int *v58; // r8
  _BYTE *v59; // r9
  int v60; // ecx
  _BYTE *v61; // r9
  int i; // edx
  int v63; // edx
  int v64; // r15d
  int *v65; // rsi
  __int64 v66; // r8
  __int64 v67; // rdx
  int v68; // eax
  _DWORD *v69; // rdx
  int v70; // edx
  _QWORD *v71; // rcx
  __int64 v72; // rax
  struct _KTHREAD *v73; // rsi
  __int64 v74; // rcx
  __int64 v75; // rdx
  _DWORD *v76; // r8
  _DWORD *v77; // rax
  __int64 v78; // r8
  _DWORD *v79; // rax
  _DWORD *v80; // r8
  int v81; // edx
  __int64 v82; // rcx
  int v83; // edx
  int v84; // eax
  __int64 JobSilo; // rax
  unsigned __int16 v86; // dx
  int v87; // r13d
  int v88; // r13d
  int v89; // r13d
  int v90; // r13d
  int v91; // r13d
  int v92; // r13d
  int v93; // r13d
  int v94; // r13d
  unsigned int v95; // ecx
  int v96; // eax
  unsigned int v97; // ecx
  int v98; // eax
  __int64 v99; // rdx
  char v100; // al
  __int64 v101; // rax
  const void **ServerSiloGlobals; // rax
  size_t v103; // r8
  __int64 v104; // rsi
  __int64 v105; // rcx
  char v106; // [rsp+40h] [rbp-9D8h]
  int v108; // [rsp+58h] [rbp-9C0h] BYREF
  char v109; // [rsp+5Ch] [rbp-9BCh] BYREF
  bool v110; // [rsp+5Dh] [rbp-9BBh] BYREF
  bool v111; // [rsp+5Eh] [rbp-9BAh] BYREF
  char PreviousMode; // [rsp+5Fh] [rbp-9B9h]
  struct _KTHREAD *v113; // [rsp+60h] [rbp-9B8h]
  unsigned int v114; // [rsp+68h] [rbp-9B0h]
  int v115; // [rsp+6Ch] [rbp-9ACh] BYREF
  unsigned int v116; // [rsp+70h] [rbp-9A8h] BYREF
  PVOID Object; // [rsp+78h] [rbp-9A0h] BYREF
  __int64 v118; // [rsp+80h] [rbp-998h] BYREF
  size_t Size; // [rsp+88h] [rbp-990h]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-988h]
  unsigned int *v121; // [rsp+98h] [rbp-980h] BYREF
  int v122; // [rsp+A0h] [rbp-978h] BYREF
  int v123; // [rsp+A4h] [rbp-974h] BYREF
  int v124; // [rsp+A8h] [rbp-970h] BYREF
  int v125; // [rsp+ACh] [rbp-96Ch] BYREF
  unsigned __int64 v126; // [rsp+B0h] [rbp-968h]
  unsigned __int64 v127; // [rsp+B8h] [rbp-960h] BYREF
  unsigned __int64 v128; // [rsp+C0h] [rbp-958h] BYREF
  int v129; // [rsp+C8h] [rbp-950h] BYREF
  __int64 v130; // [rsp+D0h] [rbp-948h] BYREF
  __int64 v131; // [rsp+D8h] [rbp-940h] BYREF
  __int64 v132; // [rsp+E0h] [rbp-938h] BYREF
  __int64 v133; // [rsp+E8h] [rbp-930h] BYREF
  __int64 v134; // [rsp+F0h] [rbp-928h] BYREF
  PVOID P; // [rsp+F8h] [rbp-920h]
  __int128 v136; // [rsp+100h] [rbp-918h] BYREF
  __int128 v137; // [rsp+110h] [rbp-908h]
  _QWORD v138[14]; // [rsp+120h] [rbp-8F8h] BYREF
  __int128 v139; // [rsp+190h] [rbp-888h] BYREF
  __int128 v140; // [rsp+1A0h] [rbp-878h] BYREF
  __int128 v141; // [rsp+1B0h] [rbp-868h] BYREF
  _OWORD v142[5]; // [rsp+1C0h] [rbp-858h] BYREF
  __int128 v143; // [rsp+210h] [rbp-808h] BYREF
  __int128 v144; // [rsp+220h] [rbp-7F8h]
  __int128 v145; // [rsp+230h] [rbp-7E8h]
  __int128 v146; // [rsp+240h] [rbp-7D8h] BYREF
  __int128 v147; // [rsp+250h] [rbp-7C8h]
  __int128 v148; // [rsp+260h] [rbp-7B8h]
  __int64 v149; // [rsp+270h] [rbp-7A8h]
  _BYTE v150[40]; // [rsp+278h] [rbp-7A0h] BYREF
  __int128 v151; // [rsp+2A0h] [rbp-778h] BYREF
  __int128 v152; // [rsp+2B0h] [rbp-768h]
  int v153; // [rsp+2C0h] [rbp-758h]
  __int128 v154; // [rsp+2C8h] [rbp-750h] BYREF
  _QWORD v155[10]; // [rsp+2E0h] [rbp-738h] BYREF
  _QWORD v156[12]; // [rsp+330h] [rbp-6E8h] BYREF
  _QWORD v157[20]; // [rsp+390h] [rbp-688h] BYREF
  _BYTE v158[80]; // [rsp+430h] [rbp-5E8h] BYREF
  _BYTE v159[64]; // [rsp+480h] [rbp-598h] BYREF
  _WORD v160[136]; // [rsp+4C0h] [rbp-558h] BYREF
  _QWORD v161[56]; // [rsp+5D0h] [rbp-448h] BYREF
  _BYTE v162[512]; // [rsp+790h] [rbp-288h] BYREF
  _WORD Src[2]; // [rsp+990h] [rbp-88h] BYREF
  int v164; // [rsp+994h] [rbp-84h]
  __int64 v165; // [rsp+9B0h] [rbp-68h]

  v5 = a4;
  v114 = a4;
  v7 = a2;
  BugCheckParameter1 = a1;
  v126 = a3;
  v121 = a5;
  memset(v161, 0, sizeof(v161));
  memset(v160, 0, 0x108uLL);
  v110 = 0;
  v128 = 0LL;
  v127 = 0LL;
  v123 = 0;
  v131 = 0LL;
  v124 = 0;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0;
  v154 = 0LL;
  v130 = 0LL;
  v122 = 0;
  v133 = 0LL;
  memset(v157, 0, 0x98uLL);
  v139 = 0LL;
  LOWORD(v115) = 0;
  memset(v158, 0, 0x44uLL);
  Object = 0LL;
  v129 = 0;
  memset(v138, 0, 0x68uLL);
  memset(v155, 0, sizeof(v155));
  memset(v156, 0, 0x58uLL);
  memset(v150, 0, sizeof(v150));
  v141 = 0LL;
  memset(v142, 0, 0x48uLL);
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v125 = 0;
  v134 = 0LL;
  v164 = 0;
  v132 = 0LL;
  memset(v159, 0, sizeof(v159));
  v140 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v118 = 0LL;
  v109 = 0;
  v111 = 0;
  if ( (unsigned int)(v7 - 1) > 0x30 )
    return 3221225475LL;
  switch ( (_DWORD)v7 )
  {
    case 9:
      if ( (_DWORD)v5 == 144 || (_DWORD)v5 == 152 )
        goto LABEL_20;
      return 3221225476LL;
    case 0xC:
      v13 = v5 - 48;
      goto LABEL_33;
    case 0xD:
      v13 = v5 - 80;
LABEL_33:
      v11 = (v13 & 0xFFFFFFF7) == 0;
      goto LABEL_19;
    case 0x13:
      if ( (_DWORD)v5 == 432 )
        goto LABEL_20;
      v11 = (_DWORD)v5 == 448;
      goto LABEL_19;
    case 0x14:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_20;
      v11 = (_DWORD)v5 == 64;
      goto LABEL_19;
    case 0x1C:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_20;
      v11 = (_DWORD)v5 == 40;
      goto LABEL_19;
    case 0x1E:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_20;
      v11 = (_DWORD)v5 == 36;
LABEL_19:
      if ( !v11 )
        return 3221225476LL;
LABEL_20:
      v108 = v5;
      v8 = v5;
      goto LABEL_21;
    case 0x2B:
      if ( (_DWORD)v5 == 1 )
      {
        v10 = 1;
        v8 = 1;
        v108 = 1;
        goto LABEL_22;
      }
      return 3221225476LL;
  }
  v8 = dword_140A7816C[v7];
  v108 = v8;
  if ( (_DWORD)v5 != v8 )
  {
    if ( (unsigned int)v7 <= 0x25 )
    {
      v9 = 0x2080004828LL;
      if ( _bittest64(&v9, v7) )
      {
        if ( (unsigned int)v5 >= v8 )
          goto LABEL_20;
      }
    }
    return 3221225476LL;
  }
LABEL_21:
  v10 = 1;
LABEL_22:
  LODWORD(Size) = v8;
  CurrentThread = KeGetCurrentThread();
  v113 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((dword_140A7809C[v7] - 1) & (unsigned int)a3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a3 + v5 > 0x7FFFFFFF0000LL || a3 + v5 < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v15 = 0x7FFFFFFF0000LL;
    }
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a5;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v16 = (char *)Object;
    goto LABEL_51;
  }
  v17 = (char *)CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[16];
  Object = v17;
  v16 = v17;
  if ( v17 )
  {
    ObfReferenceObjectWithTag(v17, 0x79517350u);
LABEL_51:
    CurrentThread = v113;
    goto LABEL_52;
  }
  if ( (((_DWORD)v7 - 31) & 0xFFFFFFF7) != 0 )
    return 3221225506LL;
LABEL_52:
  v116 = v8;
  v106 = 0;
  v18 = 0LL;
  JobIoAttribution = 0;
  if ( (int)v7 > 21 )
  {
    if ( (int)v7 > 37 )
    {
      v87 = v7 - 38;
      if ( v87 )
      {
        v88 = v87 - 1;
        if ( !v88 )
        {
          if ( v16 )
          {
            PsGetJobServerSilo((__int64)v16, &v118);
            v101 = v118;
          }
          else
          {
            v101 = PdcCreateWatchdogAroundClientCall();
          }
          ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(v101);
          v21 = (void *)a3;
          memmove((void *)a3, ServerSiloGlobals[165], v103);
          v106 = 1;
          v20 = a5;
          goto LABEL_260;
        }
        v89 = v88 - 3;
        if ( !v89 )
        {
          memset(v158, 0, 0x48uLL);
          PspLockJobShared(v16, v113);
          JobIoAttribution = PspQueryJobIoAttribution((__int64)v16, (__int64)v158);
          PspUnlockJob(v16, v113);
          v18 = v158;
          goto LABEL_258;
        }
        v90 = v89 - 1;
        if ( !v90 )
        {
          JobIoAttribution = 0;
          v99 = *((_QWORD *)v16 + 222);
          if ( v99 )
          {
            v100 = v109;
            if ( v99 != -1 )
              v100 = 1;
            v109 = v100;
          }
          v18 = &v109;
          goto LABEL_258;
        }
        v91 = v90 - 1;
        if ( !v91 )
        {
          v154 = *((_OWORD *)v16 + 92);
          v18 = (char *)&v154;
          goto LABEL_257;
        }
        v92 = v91 - 2;
        if ( !v92 )
        {
          PspLockJobShared(v16, CurrentThread);
          v133 = *((_QWORD *)v16 + 224);
          PspUnlockJob(v16, v113);
          v18 = (char *)&v133;
          goto LABEL_257;
        }
        v93 = v92 - 1;
        if ( !v93 )
        {
          v111 = (*((_DWORD *)v16 + 385) & 2) != 0;
          v18 = (char *)&v111;
          goto LABEL_257;
        }
        v94 = v93 - 1;
        if ( !v94 )
        {
          PspLockJobShared(v16, CurrentThread);
          v97 = *((_DWORD *)v16 + 268);
          v98 = v128;
          if ( v97 < 5 )
            v98 = 1;
          v128 = __PAIR64__(v97, v98);
          PspUnlockJob(v16, v113);
          v18 = (char *)&v128;
          goto LABEL_257;
        }
        if ( v94 == 1 )
        {
          PspLockJobShared(v16, CurrentThread);
          v95 = *((_DWORD *)v16 + 270);
          v96 = v127;
          if ( v95 < 8 )
            v96 = 1;
          v127 = __PAIR64__(v95, v96);
          PspUnlockJob(v16, v113);
          v18 = (char *)&v127;
          goto LABEL_257;
        }
        goto LABEL_232;
      }
      PsGetJobServerSilo((__int64)v16, &v118);
      v104 = v118;
      if ( !PsIsHostSilo(v118) )
      {
        v105 = *(_QWORD *)(v104 + 1488);
        *(_QWORD *)((char *)&v136 + 4) = *(_QWORD *)(v105 + 1304);
        BYTE12(v136) = *(_BYTE *)(v105 + 1368);
        if ( PreviousMode )
        {
          v137 = 0LL;
        }
        else
        {
          v118 = 0LL;
          MmQueryApiSetSchema(&v118, &v121);
          *(_QWORD *)&v137 = *((_QWORD *)PsGetServerSiloGlobals(v104) + 130);
          *((_QWORD *)&v137 + 1) = *(_QWORD *)v118;
        }
        LODWORD(v136) = PsGetServerSiloServiceSessionId(v104);
        v18 = (char *)&v136;
        goto LABEL_257;
      }
    }
    else
    {
      switch ( (_DWORD)v7 )
      {
        case 0x25:
          JobSilo = PspGetJobSilo((__int64)v16);
          if ( JobSilo )
          {
            P = 0LL;
            JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v134);
            if ( JobIoAttribution >= 0 )
            {
              v106 = 1;
              v86 = v134;
              v8 = (unsigned __int16)v134 + 16;
              v108 = v8;
              if ( v8 > v114 )
              {
                JobIoAttribution = -1073741789;
                v21 = (void *)a3;
                v20 = a5;
              }
              else
              {
                v21 = (void *)a3;
                *(_WORD *)a3 = v134;
                *(_WORD *)(a3 + 2) = v86;
                *(_QWORD *)(a3 + 8) = a3 + 16;
                memmove((void *)(a3 + 16), P, v86);
                v20 = a5;
                if ( a5 )
                  *a5 = v8;
              }
              ExFreePoolWithTag(P, 0);
              goto LABEL_260;
            }
            goto LABEL_258;
          }
          break;
        case 0x1A:
          v21 = (void *)a3;
          JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v16);
          if ( JobIoAttribution < 0 )
          {
            v84 = 0;
          }
          else
          {
            v106 = 1;
            v84 = 8;
          }
          v116 = v84;
          goto LABEL_72;
        case 0x1C:
          *(_OWORD *)&v150[24] = 0LL;
          PspLockJobMemoryLimitsShared(v16, CurrentThread);
          *(_QWORD *)&v150[8] = *((_QWORD *)v16 + 88) << 12;
          *(_QWORD *)v150 = *((_QWORD *)v16 + 149) << 12;
          *(_QWORD *)&v150[16] = *((_QWORD *)v16 + 194) << 12;
          v16 = (char *)Object;
          PspUnlockJobMemoryLimitsShared(Object, v113);
          v18 = v150;
          goto LABEL_257;
        case 0x1D:
          v132 = *((_QWORD *)v16 + 194);
          v18 = (char *)&v132;
          v16 = (char *)Object;
          goto LABEL_257;
        case 0x1E:
          v151 = *((_OWORD *)v16 + 91);
          if ( v114 == 36 )
          {
            v152 = *((_OWORD *)v16 + 92);
            v153 = *((_DWORD *)v16 + 363);
          }
          v18 = (char *)&v151;
          goto LABEL_257;
        case 0x1F:
          JobIoAttribution = -1073741822;
          goto LABEL_258;
        case 0x20:
          PspLockJobShared(v16, CurrentThread);
          v82 = *((_QWORD *)v16 + 191);
          if ( v82 )
          {
            DWORD2(v141) = 1;
            v83 = *(_DWORD *)(v82 + 48);
            if ( (v83 & 1) != 0 )
            {
              v10 = 3;
              DWORD2(v141) = 3;
              *(_QWORD *)&v141 = *(_QWORD *)(v82 + 40);
            }
            if ( (v83 & 2) != 0 )
            {
              DWORD2(v141) = v10 | 4;
              BYTE12(v141) = *(_BYTE *)(v82 + 64);
            }
          }
          PspUnlockJob(v16, v113);
          v18 = (char *)&v141;
          goto LABEL_257;
        case 0x21:
          goto LABEL_191;
        case 0x22:
          goto LABEL_150;
        case 0x24:
          if ( (*((_DWORD *)v16 + 384) & 0x40000000) != 0 )
          {
            LODWORD(v140) = *((_DWORD *)v16 + 363);
            ParentSilo = PsGetParentSilo((__int64)v16);
            if ( PsIsHostSilo(ParentSilo) )
              DWORD1(v140) = 0;
            else
              DWORD1(v140) = *(_DWORD *)(ParentSilo + 1452);
            DWORD2(v140) = *((_DWORD *)v16 + 360);
            BYTE12(v140) = PspIsSiloInServerSilo((__int64)v16);
            v18 = (char *)&v140;
            goto LABEL_257;
          }
          break;
        default:
LABEL_232:
          JobIoAttribution = -1073741821;
          goto LABEL_258;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_258;
  }
  if ( (_DWORD)v7 == 21 )
  {
    v110 = (*((_DWORD *)v16 + 384) & 0x400) != 0;
    v18 = (char *)&v110;
    goto LABEL_257;
  }
  if ( (int)v7 > 11 )
  {
    if ( (_DWORD)v7 != 12 )
    {
      if ( (_DWORD)v7 != 13 )
      {
        if ( (_DWORD)v7 != 14 )
        {
          switch ( (_DWORD)v7 )
          {
            case 0xF:
              PspLockJobShared(v16, CurrentThread);
              v30 = *((_QWORD *)v16 + 153);
              if ( v30 )
              {
                v31 = *(_DWORD *)(v30 + 40);
                if ( (v31 & 0x40) == 0 )
                {
                  HIDWORD(v130) = *(_DWORD *)(v30 + 44);
                  v32 = ((v31 & 4 | 2u) >> 1) | 4;
                  if ( (v31 & 1) == 0 )
                    v32 = (v31 & 4 | 2u) >> 1;
                  v33 = v32 | 8;
                  if ( (v31 & 2) == 0 )
                    v33 = v32;
                  v34 = v33 | 0x10;
                  if ( (v31 & 0x20) == 0 )
                    v34 = v33;
                  LODWORD(v130) = v34;
                }
              }
              PspUnlockJob(v16, v113);
              v18 = (char *)&v130;
              goto LABEL_257;
            case 0x10:
              v124 = *((_DWORD *)v16 + 272);
              v18 = (char *)&v124;
              goto LABEL_257;
            case 0x11:
              v131 = *((_QWORD *)v16 + 71);
              v18 = (char *)&v131;
              goto LABEL_257;
            case 0x12:
              LODWORD(v139) = 7;
              WORD3(v139) = 0;
              PspLockJobShared(v16, CurrentThread);
              v29 = *((_DWORD *)v16 + 384);
              BYTE4(v139) = (v29 & 0x200) != 0;
              BYTE5(v139) = (v29 & 0x80000) != 0;
              if ( (unsigned int)Feature_Servicing_BypassGraphicsFreezeNotification__private_IsEnabledDeviceUsage() )
                LODWORD(v139) = ((unsigned __int8)~(unsigned __int8)*((_DWORD *)v16 + 385) ^ 7) & 8 ^ 7;
              *((_QWORD *)&v139 + 1) = *((_QWORD *)v16 + 146);
              PspUnlockJob(v16, v113);
              v18 = (char *)&v139;
              goto LABEL_257;
          }
          if ( (_DWORD)v7 != 19 )
          {
            JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v16, v159);
            v21 = (void *)a3;
            v20 = a5;
            if ( JobIoAttribution >= 0 )
            {
              v18 = v159;
              JobIoAttribution = 0;
            }
            goto LABEL_260;
          }
          goto LABEL_101;
        }
        if ( a5 )
        {
          v35 = v114;
          if ( (v114 & 0xF) == 0 )
          {
            PspLockJobShared(v16, CurrentThread);
            v36 = 2LL;
            if ( (*((_DWORD *)v16 + 64) & 0x10) != 0 )
            {
              v39 = v16 + 264;
              v40 = v160;
              do
              {
                *v40 = *v39;
                v40[1] = v39[1];
                v40[2] = v39[2];
                v40[3] = v39[3];
                v40[4] = v39[4];
                v40[5] = v39[5];
                v40[6] = v39[6];
                v40 += 8;
                *(v40 - 1) = v39[7];
                v39 += 8;
                --v36;
              }
              while ( v36 );
              *(_QWORD *)v40 = *(_QWORD *)v39;
            }
            else
            {
              v37 = v160;
              v38 = KeActiveProcessors;
              do
              {
                *v37 = *(_OWORD *)v38;
                v37[1] = *((_OWORD *)v38 + 1);
                v37[2] = *((_OWORD *)v38 + 2);
                v37[3] = *((_OWORD *)v38 + 3);
                v37[4] = *((_OWORD *)v38 + 4);
                v37[5] = *((_OWORD *)v38 + 5);
                v37[6] = *((_OWORD *)v38 + 6);
                v37 += 8;
                *(v37 - 1) = *((_OWORD *)v38 + 7);
                v38 += 32;
                --v36;
              }
              while ( v36 );
              *(_QWORD *)v37 = *(_QWORD *)v38;
            }
            PspUnlockJob(v16, v113);
            v41 = v160[0];
            memset(v162, 0, 16LL * v160[0]);
            if ( (_WORD)v41 )
            {
              v42 = v162;
              v43 = &v160[4];
              v44 = 0;
              v45 = v115;
              do
              {
                *((_WORD *)v42 + 4) = v45;
                *(_QWORD *)v42 = *v43;
                v45 = ++v44;
                ++v43;
                v42 += 16;
              }
              while ( v44 < (unsigned __int16)v41 );
            }
            v46 = 16 * v41;
            v116 = v46;
            v8 = 16 * v41;
            if ( v35 < v46 )
              v8 = v35;
            v108 = v8;
            JobIoAttribution = v35 < v46 ? 0xC0000023 : 0;
            v106 = 1;
            v21 = (void *)a3;
            memmove((void *)a3, v162, v8);
            v20 = a5;
            goto LABEL_260;
          }
        }
        goto LABEL_90;
      }
LABEL_150:
      LOWORD(v108) = 0;
      BYTE2(v108) = 0;
      PspQueryJobHierarchyAccountingInformation(v16);
      v138[1] = v161[9];
      v138[3] = v161[10];
      v138[5] = v161[0];
      PspLockJobExclusive(v16, v113);
      if ( (*((_DWORD *)v16 + 384) & 0x4008) != 0x4008 )
      {
        _InterlockedAnd((volatile signed __int32 *)v16 + 384, 0xFFFFFFFB);
        v16 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 1248), 0LL);
      v138[7] = *((_QWORD *)v16 + 149) << 12;
      PspUnlockJobMemoryLimitsShared(v16, 0LL);
      v48 = (_DWORD *)*((_QWORD *)v16 + 150);
      if ( v48 )
      {
        LODWORD(v138[0]) = *v48;
        HIDWORD(v138[0]) = *(_DWORD *)(*((_QWORD *)v16 + 150) + 4LL);
        v49 = (_QWORD *)*((_QWORD *)v16 + 150);
        v50 = v49[9];
        if ( !v50 )
          v50 = v49[1];
        v138[2] = v50;
        v51 = v49[10];
        if ( !v51 )
          v51 = v49[2];
        v138[4] = v51;
        v52 = v49[11];
        if ( !v52 )
          v52 = v49[3];
        v138[6] = v52;
        v53 = v49[12];
        if ( !v53 )
          v53 = v49[4];
        v138[10] = v53 << 12;
        v54 = v49[13];
        if ( !v54 )
          v54 = v49[5];
        v138[8] = v54 << 12;
        v55 = 0;
        do
        {
          v56 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v138, v55);
          v60 = v58[16];
          if ( v60 )
            *v59 = 1;
          else
            v60 = *v58;
          *v56 = v60;
          v55 = v57 + 1;
          v61 = v59 + 1;
        }
        while ( v55 < 3 );
      }
      else
      {
        v138[0] = 0LL;
        v138[2] = 0LL;
        v138[4] = 0LL;
        v138[6] = 0LL;
        v138[10] = 0LL;
        v138[8] = 0LL;
        for ( i = 0; i < 3; i = v63 + 1 )
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v138, i) = 0;
      }
      v64 = 0;
      v65 = &v108;
      v66 = 60LL;
      v118 = 60LL;
      do
      {
        v67 = *((_QWORD *)v16 + 150);
        if ( v67 && (v68 = PspRateControlLimitFlag((unsigned int)v64, v67, v66, v61), (v68 & *v69) != 0) )
          v70 = *(_DWORD *)((char *)v69 + v66);
        else
          v70 = 1;
        v115 = v70;
        LOBYTE(v66) = *(_BYTE *)v65;
        PspQueryRateControlHistory((_DWORD)v16, v70, v66, (unsigned int)&v125, v64);
        if ( v64 )
        {
          if ( v64 == 1 )
            v71 = &v138[11];
          else
            v71 = &v138[9];
        }
        else
        {
          v71 = &v138[12];
        }
        *(_DWORD *)v71 = v125;
        ++v64;
        v66 = v118 + 4;
        v118 += 4LL;
        v65 = (int *)((char *)v65 + 1);
      }
      while ( v64 < 3 );
      v72 = *((_QWORD *)v16 + 150);
      v73 = v113;
      if ( v72 )
      {
        *(_DWORD *)(v72 + 4) = 0;
        memset((void *)(*((_QWORD *)v16 + 150) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v16, v73);
      if ( v114 == 88 )
      {
        v156[1] = v138[1];
        v156[2] = v138[2];
        v156[3] = v138[3];
        v156[4] = v138[4];
        v156[5] = v138[5];
        v156[6] = v138[6];
        v156[7] = v138[7];
        v156[8] = v138[10];
        v156[9] = v138[8];
        v156[10] = v138[9];
        v156[0] = v138[0] & 0x27820400278204LL;
        v18 = (char *)v156;
      }
      else if ( v114 == 80 )
      {
        v155[1] = v138[1];
        v155[2] = v138[2];
        v155[3] = v138[3];
        v155[4] = v138[4];
        v155[5] = v138[5];
        v155[6] = v138[6];
        v155[7] = v138[7];
        v155[8] = v138[8];
        v155[9] = v138[9];
        v155[0] = v138[0] & 0x7020400070204LL;
        v18 = (char *)v155;
      }
      else
      {
        v18 = (char *)v138;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v16, v7, (unsigned int)v138, (unsigned int)&v115, 0, 1830);
      goto LABEL_258;
    }
LABEL_191:
    PspLockJobShared(v16, CurrentThread);
    v74 = *((_QWORD *)v16 + 150);
    if ( v74 )
    {
      DWORD2(v142[2]) = *(_DWORD *)v74;
      v142[0] = *(_OWORD *)(v74 + 8);
      *(_QWORD *)&v142[1] = *(_QWORD *)(v74 + 24);
      *(_QWORD *)&v142[3] = *(_QWORD *)(v74 + 32) << 12;
      *((_QWORD *)&v142[1] + 1) = *(_QWORD *)(v74 + 40) << 12;
      v75 = 0LL;
      v76 = (_DWORD *)(v74 + 60);
      do
      {
        v77 = (_DWORD *)PspNotificationLimitRateControlToleranceField(v142, v75, v76);
        *v77 = *(_DWORD *)(v78 - 12);
        v79 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField(v142);
        *v79 = *v80;
        v75 = (unsigned int)(v81 + 1);
        v76 = v80 + 1;
      }
      while ( (int)v75 < 3 );
    }
    PspUnlockJob(v16, v113);
    if ( v114 == 48 )
    {
      v143 = v142[0];
      v144 = v142[1];
      *(_QWORD *)&v145 = *(_QWORD *)&v142[2];
      *((_QWORD *)&v145 + 1) = DWORD2(v142[2]) & 0x70204LL;
      v18 = (char *)&v143;
    }
    else if ( v114 == 56 )
    {
      v146 = v142[0];
      *(_QWORD *)&v147 = *(_QWORD *)&v142[1];
      *((_QWORD *)&v147 + 1) = *(_QWORD *)&v142[3];
      v148 = *(_OWORD *)((char *)&v142[1] + 8);
      v149 = DWORD2(v142[2]) & 0x278204LL;
      v18 = (char *)&v146;
    }
    else
    {
      v18 = (char *)v142;
    }
    goto LABEL_257;
  }
  switch ( (_DWORD)v7 )
  {
    case 0xB:
      if ( a5 )
      {
        v22 = v114;
        if ( (v114 & 1) == 0 )
        {
          PspLockJobShared(v16, CurrentThread);
          v23 = 0;
          v24 = *((_WORD *)v16 + 132);
          if ( v24 )
          {
            v25 = v16 + 272;
            v26 = 0;
            v27 = 0;
            v28 = v115;
            do
            {
              if ( *v25 )
              {
                Src[v23++] = v28;
                v26 = v27;
              }
              v28 = ++v26;
              ++v25;
              v27 = v26;
            }
            while ( v26 < v24 );
          }
          PspUnlockJob(v16, v113);
          v8 = 2 * v23;
          v116 = v8;
          v106 = 1;
          JobIoAttribution = v22 < v8 ? 0xC0000023 : 0;
          if ( v8 > v22 )
            v8 = Size;
          LODWORD(Size) = v8;
          v21 = (void *)a3;
          memmove((void *)a3, Src, v8);
          v20 = a5;
          goto LABEL_260;
        }
      }
LABEL_90:
      JobIoAttribution = -1073741811;
LABEL_258:
      v20 = a5;
      goto LABEL_259;
    case 1:
      goto LABEL_101;
    case 2:
      goto LABEL_73;
  }
  if ( (_DWORD)v7 != 3 )
  {
    switch ( (_DWORD)v7 )
    {
      case 4:
        PspLockJobShared(v16, CurrentThread);
        v123 = *((_DWORD *)v16 + 136);
        PspUnlockJob(v16, v113);
        v18 = (char *)&v123;
        goto LABEL_257;
      case 5:
        v165 = 0LL;
        v106 = 1;
        *(_OWORD *)a3 = 0LL;
        *(_OWORD *)(a3 + 16) = 0LL;
        *(_QWORD *)(a3 + 32) = v165;
        v20 = a5;
LABEL_259:
        v21 = (void *)a3;
        goto LABEL_260;
      case 6:
        v122 = *((_DWORD *)v16 + 137);
        v18 = (char *)&v122;
        goto LABEL_257;
    }
    if ( (_DWORD)v7 != 8 )
    {
      if ( (_DWORD)v7 != 9 )
      {
        if ( (_DWORD)v7 == 10 )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
          PspUnlockJobListShared(v113);
          v18 = (char *)&v129;
LABEL_257:
          JobIoAttribution = 0;
          goto LABEL_258;
        }
        goto LABEL_232;
      }
LABEL_73:
      PspLockJobShared(v16, CurrentThread);
      v157[3] = *((_QWORD *)v16 + 30);
      v157[4] = *((_QWORD *)v16 + 31);
      LODWORD(v157[5]) = *((_DWORD *)v16 + 65);
      LODWORD(v157[7]) = (unsigned __int8)v16[1085];
      HIDWORD(v157[7]) = *((_DWORD *)v16 + 145);
      if ( (unsigned int)KeIsSingleGroupAffinityEx((unsigned __int16 *)v16 + 132, (unsigned __int16 *)&v115) )
        v157[6] = *(_QWORD *)&v16[8 * (unsigned __int16)v115 + 272];
      else
        v157[6] = 0LL;
      v157[0] = *((_QWORD *)v16 + 28);
      v157[1] = *((_QWORD *)v16 + 29);
      LODWORD(v157[2]) = (PspGetJobLimitInformationValidFlags(v7, v114) | 0x7FFF) & *((_DWORD *)v16 + 64);
      if ( (_DWORD)v7 == 9 )
      {
        ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 1248), 0LL);
        v157[14] = *((_QWORD *)v16 + 84) << 12;
        v157[15] = *((_QWORD *)v16 + 85) << 12;
        v157[17] = *((_QWORD *)v16 + 88) << 12;
        v157[18] = *((_QWORD *)v16 + 86) << 12;
        PspUnlockJobMemoryLimitsShared(v16, 0LL);
        PspUnlockJob(v16, v113);
        v157[16] = *((_QWORD *)v16 + 87) << 12;
      }
      else
      {
        PspUnlockJob(v16, v113);
      }
      v18 = (char *)v157;
      goto LABEL_257;
    }
LABEL_101:
    PspQueryJobHierarchyAccountingInformation(v16);
    v18 = (char *)v161;
    goto LABEL_257;
  }
  v116 = 0;
  v21 = (void *)a3;
  JobIoAttribution = PspQueryJobHierarchyProcessIdList(v16, (_DWORD *)a3, v114, &v116);
  v106 = 1;
LABEL_72:
  v20 = a5;
LABEL_260:
  if ( v16 )
    ObfDereferenceObjectWithTag(v16, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v106 )
    memmove(v21, v18, v8);
  if ( v20 )
    *v20 = v116;
  return (unsigned int)JobIoAttribution;
}
