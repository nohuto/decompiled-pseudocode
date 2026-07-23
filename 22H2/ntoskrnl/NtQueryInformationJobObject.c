/*
 * XREFs of NtQueryInformationJobObject @ 0x140616CE0
 * Callers:
 *     <none>
 * Callees:
 *     PspGetJobSilo @ 0x140200084 (PspGetJobSilo.c)
 *     PsGetJobServerSilo @ 0x140201820 (PsGetJobServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x140252678 (PsGetServerSiloGlobals.c)
 *     HalSystemVectorDispatchEntry @ 0x1402526A0 (HalSystemVectorDispatchEntry.c)
 *     KeIsSingleGroupAffinityEx @ 0x140252EF0 (KeIsSingleGroupAffinityEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     PsGetServerSiloServiceSessionId @ 0x14032D5C0 (PsGetServerSiloServiceSessionId.c)
 *     MmQueryApiSetSchema @ 0x140372738 (MmQueryApiSetSchema.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspIsSiloInServerSilo @ 0x140580F00 (PspIsSiloInServerSilo.c)
 *     PspGetJobLimitInformationValidFlags @ 0x1406144E0 (PspGetJobLimitInformationValidFlags.c)
 *     PspQueryJobHierarchyProcessIdList @ 0x140614560 (PspQueryJobHierarchyProcessIdList.c)
 *     PspNotificationLimitRateControlToleranceIntervalField @ 0x1406160B4 (PspNotificationLimitRateControlToleranceIntervalField.c)
 *     PspNotificationLimitRateControlToleranceField @ 0x1406160DC (PspNotificationLimitRateControlToleranceField.c)
 *     PspLimitViolationRateControlToleranceLimitField @ 0x140616104 (PspLimitViolationRateControlToleranceLimitField.c)
 *     PspQueryRateControlHistory @ 0x14061623C (PspQueryRateControlHistory.c)
 *     PspRateControlLimitFlag @ 0x140616ABC (PspRateControlLimitFlag.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140617BCC (PspQueryJobHierarchyAccountingInformation.c)
 *     PspUnlockJob @ 0x140618B90 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140618BD4 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140618BFC (PspLockJobShared.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140618D9C (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140618E4C (PspLockJobMemoryLimitsShared.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14063E320 (ObpReferenceObjectByHandleWithTag.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14065CC90 (PspAllocateAndQueryNotificationChannel.c)
 *     PspQueryJobIoAttribution @ 0x14065DC60 (PspQueryJobIoAttribution.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     PsGetParentSilo @ 0x140905B40 (PsGetParentSilo.c)
 *     PspQueryJobHierarchyInterferenceCount @ 0x1409090A0 (PspQueryJobHierarchyInterferenceCount.c)
 *     PspUnlockJobListShared @ 0x140909D18 (PspUnlockJobListShared.c)
 *     EtwTraceJobSetQuery @ 0x14093612C (EtwTraceJobSetQuery.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098085C (ObGetSiloRootDirectoryPath.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobObjectInformationClass,
        PVOID JobObjectInformation,
        ULONG JobObjectInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // rbx
  __int32 v8; // edx
  ULONG v9; // r14d
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // r9
  __int64 v12; // rcx
  NTSTATUS result; // eax
  char *v14; // rbx
  bool *v15; // r12
  NTSTATUS JobIoAttribution; // esi
  PULONG v17; // r15
  PVOID v18; // r13
  bool v19; // zf
  char *v20; // rcx
  int v21; // eax
  _DWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int i; // edx
  _DWORD *v30; // rax
  int v31; // edx
  int *v32; // r8
  _BYTE *v33; // r9
  int v34; // ecx
  int v35; // r12d
  char *p_Size_4; // rsi
  int v37; // eax
  _DWORD *v38; // rdx
  __int64 v39; // r8
  int v40; // edx
  _QWORD *v41; // rcx
  __int64 v42; // rax
  struct _KTHREAD *v43; // rsi
  __int64 v44; // rcx
  int k; // edx
  _DWORD *v46; // rax
  __int64 v47; // r8
  int v48; // edx
  _DWORD *v49; // rax
  _DWORD *v50; // r8
  int v51; // edx
  __int32 v52; // r13d
  __int32 v53; // r13d
  __int32 v54; // r13d
  int v55; // r13d
  __int64 v56; // rax
  int v57; // r8d
  int j; // edx
  int v59; // edx
  __int64 v60; // rsi
  ULONG v61; // r13d
  int v62; // r14d
  unsigned __int16 v63; // r8
  _QWORD *v64; // rdx
  unsigned __int16 v65; // cx
  int v66; // ecx
  unsigned int v67; // edx
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // r13d
  __int16 *v71; // rax
  int v72; // esi
  _BYTE *v73; // rcx
  _QWORD *v74; // r8
  unsigned __int16 v75; // dx
  unsigned int v76; // eax
  __int64 v77; // rcx
  int v78; // edx
  int v79; // eax
  __int64 ParentSilo; // rsi
  int v81; // r13d
  int v82; // r13d
  int v83; // r13d
  char v84; // al
  __int64 v85; // rax
  const void **ServerSiloGlobals; // rax
  size_t v87; // r8
  __int64 v88; // rcx
  __int64 JobSilo; // rax
  unsigned __int16 v90; // dx
  char v91; // [rsp+40h] [rbp-8D8h]
  char v93; // [rsp+58h] [rbp-8C0h] BYREF
  int v94; // [rsp+5Ch] [rbp-8BCh]
  bool v95; // [rsp+60h] [rbp-8B8h] BYREF
  bool v96; // [rsp+61h] [rbp-8B7h] BYREF
  char PreviousMode; // [rsp+62h] [rbp-8B6h]
  unsigned __int16 v98; // [rsp+64h] [rbp-8B4h] BYREF
  ULONG v99; // [rsp+68h] [rbp-8B0h]
  struct _KTHREAD *v100; // [rsp+70h] [rbp-8A8h]
  ULONG v101; // [rsp+78h] [rbp-8A0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-898h] BYREF
  ULONG Size; // [rsp+88h] [rbp-890h]
  __int16 Size_4; // [rsp+8Ch] [rbp-88Ch] BYREF
  char Size_6; // [rsp+8Eh] [rbp-88Ah]
  ULONG_PTR BugCheckParameter1; // [rsp+90h] [rbp-888h]
  __int64 v107; // [rsp+98h] [rbp-880h] BYREF
  int v108; // [rsp+A0h] [rbp-878h] BYREF
  int v109; // [rsp+A4h] [rbp-874h] BYREF
  int v110; // [rsp+A8h] [rbp-870h] BYREF
  int v111; // [rsp+ACh] [rbp-86Ch] BYREF
  int v112; // [rsp+B0h] [rbp-868h] BYREF
  PVOID v113; // [rsp+B8h] [rbp-860h]
  PULONG v114; // [rsp+C0h] [rbp-858h]
  int v115; // [rsp+C8h] [rbp-850h] BYREF
  __int64 v116; // [rsp+D0h] [rbp-848h] BYREF
  __int64 v117; // [rsp+D8h] [rbp-840h] BYREF
  __int64 v118; // [rsp+E0h] [rbp-838h] BYREF
  __int64 v119; // [rsp+E8h] [rbp-830h] BYREF
  _QWORD *v120; // [rsp+F0h] [rbp-828h] BYREF
  __int64 v121; // [rsp+F8h] [rbp-820h] BYREF
  PVOID P; // [rsp+100h] [rbp-818h]
  __int128 v123; // [rsp+108h] [rbp-810h] BYREF
  __int128 v124; // [rsp+118h] [rbp-800h]
  __int64 v125[5]; // [rsp+128h] [rbp-7F0h] BYREF
  __int64 v126; // [rsp+150h] [rbp-7C8h]
  _QWORD v127[14]; // [rsp+160h] [rbp-7B8h] BYREF
  __int128 v128; // [rsp+1D0h] [rbp-748h] BYREF
  __int128 v129; // [rsp+1E0h] [rbp-738h] BYREF
  __int128 v130; // [rsp+1F0h] [rbp-728h] BYREF
  _OWORD v131[5]; // [rsp+200h] [rbp-718h] BYREF
  __int128 v132; // [rsp+250h] [rbp-6C8h] BYREF
  __int128 v133; // [rsp+260h] [rbp-6B8h]
  __int128 v134; // [rsp+270h] [rbp-6A8h]
  __int128 v135; // [rsp+280h] [rbp-698h] BYREF
  __int128 v136; // [rsp+290h] [rbp-688h]
  __int128 v137; // [rsp+2A0h] [rbp-678h]
  __int64 v138; // [rsp+2B0h] [rbp-668h]
  _BYTE v139[40]; // [rsp+2B8h] [rbp-660h] BYREF
  __int128 v140; // [rsp+2E0h] [rbp-638h] BYREF
  __int128 v141; // [rsp+2F0h] [rbp-628h]
  int v142; // [rsp+300h] [rbp-618h]
  __int128 v143; // [rsp+308h] [rbp-610h] BYREF
  _QWORD v144[10]; // [rsp+320h] [rbp-5F8h] BYREF
  _QWORD v145[12]; // [rsp+370h] [rbp-5A8h] BYREF
  _QWORD v146[20]; // [rsp+3D0h] [rbp-548h] BYREF
  _BYTE v147[64]; // [rsp+470h] [rbp-4A8h] BYREF
  _OWORD v148[16]; // [rsp+4B0h] [rbp-468h] BYREF
  _QWORD Src[56]; // [rsp+5B0h] [rbp-368h] BYREF
  _BYTE v150[320]; // [rsp+770h] [rbp-1A8h] BYREF
  _WORD v151[20]; // [rsp+8B0h] [rbp-68h] BYREF

  v5 = JobObjectInformationLength;
  v99 = JobObjectInformationLength;
  BugCheckParameter1 = (ULONG_PTR)JobHandle;
  v113 = JobObjectInformation;
  v114 = ReturnLength;
  memset(Src, 0, sizeof(Src));
  memset(&v148[5], 0, 0xA8uLL);
  v95 = 0;
  v109 = 0;
  v117 = 0LL;
  v110 = 0;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  v143 = 0LL;
  v116 = 0LL;
  v108 = 0;
  v119 = 0LL;
  memset(v146, 0, 0x98uLL);
  v128 = 0LL;
  v98 = 0;
  memset(v148, 0, 0x48uLL);
  Object = 0LL;
  v115 = 0;
  memset(v127, 0, 0x68uLL);
  memset(v144, 0, sizeof(v144));
  memset(v145, 0, 0x58uLL);
  memset(v139, 0, sizeof(v139));
  v129 = 0LL;
  memset(v131, 0, 0x48uLL);
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v138 = 0LL;
  v111 = 0;
  v121 = 0LL;
  v118 = 0LL;
  memset(v147, 0, sizeof(v147));
  v130 = 0LL;
  v123 = 0LL;
  v124 = 0LL;
  v107 = 0LL;
  v93 = 0;
  v96 = 0;
  v8 = JobObjectInformationClass - 1;
  if ( (unsigned int)(JobObjectInformationClass - 1) > 0x2E )
    return -1073741821;
  switch ( JobObjectInformationClass )
  {
    case JobObjectExtendedLimitInformation:
      if ( (_DWORD)v5 == 144 || (_DWORD)v5 == 152 )
        goto LABEL_7;
      return -1073741820;
    case JobObjectNotificationLimitInformation:
      if ( (_DWORD)v5 == 48 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 56;
      goto LABEL_87;
    case JobObjectLimitViolationInformation:
      if ( (_DWORD)v5 == 80 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 88;
LABEL_87:
      if ( v19 )
        goto LABEL_7;
      return -1073741820;
    case JobObjectExtendedAccountingInformation:
      if ( (_DWORD)v5 == 432 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 448;
      goto LABEL_87;
    case JobObjectWakeInformation:
      if ( (_DWORD)v5 == 40 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 64;
      goto LABEL_87;
    case JobObjectMemoryUsageInformation:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 40;
      goto LABEL_87;
    case JobObjectContainerId:
      if ( (_DWORD)v5 == 16 )
        goto LABEL_7;
      v19 = (_DWORD)v5 == 36;
      goto LABEL_87;
  }
  if ( JobObjectInformationClass != JobObjectMemoryPartitionInformation )
  {
    v9 = PspJobInfoLengths[v8];
    v94 = v9;
    if ( (_DWORD)v5 == v9 )
      goto LABEL_8;
    if ( (JobObjectInformationClass == JobObjectBasicProcessIdList
       || JobObjectInformationClass == JobObjectSecurityLimitInformation
       || JobObjectInformationClass == JobObjectGroupInformation
       || JobObjectInformationClass == JobObjectGroupInformationEx
       || JobObjectInformationClass == JobObjectIoRateControlInformation
       || JobObjectInformationClass == JobObjectSiloRootDirectory)
      && (unsigned int)v5 >= v9 )
    {
LABEL_7:
      v94 = v5;
      v9 = v5;
LABEL_8:
      v10 = 1;
      goto LABEL_9;
    }
    return -1073741820;
  }
  if ( (_DWORD)v5 != 1 )
    return -1073741820;
  v10 = 1;
  v9 = 1;
  v94 = 1;
LABEL_9:
  Size = v9;
  CurrentThread = KeGetCurrentThread();
  v100 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (_DWORD)v5 )
    {
      if ( ((PspJobInfoAlign[v8] - 1) & (unsigned int)JobObjectInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)JobObjectInformation + v5 > 0x7FFFFFFF0000LL
        || (char *)JobObjectInformation + v5 < JobObjectInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  if ( BugCheckParameter1 )
  {
    result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Object, 0LL, 0LL);
    if ( result < 0 )
      return result;
    v14 = (char *)Object;
    goto LABEL_24;
  }
  v20 = (char *)CurrentThread->ApcState.Process[1].Affinity.Bitmap[16];
  Object = v20;
  v14 = v20;
  if ( v20 )
  {
    ObfReferenceObjectWithTag(v20, 0x79517350u);
LABEL_24:
    CurrentThread = v100;
    goto LABEL_25;
  }
  if ( ((JobObjectInformationClass - 31) & 0xFFFFFFF7) != 0 )
    return -1073741790;
LABEL_25:
  v101 = v9;
  v91 = 0;
  v15 = 0LL;
  JobIoAttribution = 0;
  if ( JobObjectInformationClass > JobObjectWakeInformation )
  {
    if ( JobObjectInformationClass > JobObjectSiloBasicInformation )
    {
      v52 = JobObjectInformationClass - 37;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( !v54 )
          {
            if ( v14 )
            {
              PsGetJobServerSilo((__int64)v14, &v107);
              v85 = v107;
            }
            else
            {
              v85 = HalSystemVectorDispatchEntry();
            }
            ServerSiloGlobals = (const void **)PsGetServerSiloGlobals(v85);
            v18 = JobObjectInformation;
            memmove(JobObjectInformation, ServerSiloGlobals[141], v87);
            v91 = 1;
            v17 = ReturnLength;
            goto LABEL_39;
          }
          v55 = v54 - 3;
          if ( !v55 )
          {
            PspLockJobShared(v14, CurrentThread);
            JobIoAttribution = PspQueryJobIoAttribution(v14, v148);
            PspUnlockJob(v14, v100);
            v15 = (bool *)v148;
            goto LABEL_37;
          }
          v81 = v55 - 1;
          if ( !v81 )
          {
            JobIoAttribution = 0;
            v84 = v93;
            if ( (unsigned __int64)(*((_QWORD *)v14 + 195) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
              v84 = 1;
            v93 = v84;
            v15 = (bool *)&v93;
            goto LABEL_37;
          }
          v82 = v81 - 1;
          if ( !v82 )
          {
            v143 = *(_OWORD *)(v14 + 1256);
            v15 = (bool *)&v143;
            goto LABEL_36;
          }
          v83 = v82 - 2;
          if ( !v83 )
          {
            PspLockJobShared(v14, CurrentThread);
            v119 = *((_QWORD *)v14 + 197);
            PspUnlockJob(v14, v100);
            v15 = (bool *)&v119;
            goto LABEL_36;
          }
          if ( v83 == 1 )
          {
            v96 = (*((_DWORD *)v14 + 331) & 2) != 0;
            v15 = &v96;
            goto LABEL_36;
          }
          goto LABEL_212;
        }
        PsGetJobServerSilo((__int64)v14, &v107);
        v60 = v107;
        if ( !PsIsHostSilo(v107) )
        {
          v88 = *(_QWORD *)(v60 + 1272);
          *(_QWORD *)((char *)&v123 + 4) = *(_QWORD *)(v88 + 1112);
          BYTE12(v123) = *(_BYTE *)(v88 + 1176);
          if ( PreviousMode )
          {
            v124 = 0LL;
          }
          else
          {
            v120 = 0LL;
            MmQueryApiSetSchema(&v120, v125);
            *(_QWORD *)&v124 = *((_QWORD *)PsGetServerSiloGlobals(v60) + 130);
            *((_QWORD *)&v124 + 1) = *v120;
          }
          LODWORD(v123) = PsGetServerSiloServiceSessionId(v60);
          JobIoAttribution = 0;
          v15 = (bool *)&v123;
          goto LABEL_37;
        }
      }
      else
      {
        JobSilo = PspGetJobSilo((__int64)v14);
        if ( JobSilo )
        {
          P = 0LL;
          JobIoAttribution = ObGetSiloRootDirectoryPath(JobSilo, &v121);
          if ( JobIoAttribution >= 0 )
          {
            v91 = 1;
            v90 = v121;
            v9 = (unsigned __int16)v121 + 16;
            v94 = v9;
            if ( v9 > v99 )
            {
              JobIoAttribution = -1073741789;
              v18 = JobObjectInformation;
              v17 = ReturnLength;
            }
            else
            {
              v18 = JobObjectInformation;
              *(_WORD *)JobObjectInformation = v121;
              *((_WORD *)JobObjectInformation + 1) = v90;
              *((_QWORD *)JobObjectInformation + 1) = (char *)JobObjectInformation + 16;
              memmove((char *)JobObjectInformation + 16, P, v90);
              v17 = ReturnLength;
              if ( ReturnLength )
                *ReturnLength = v9;
            }
            ExFreePoolWithTag(P, 0);
            goto LABEL_39;
          }
          goto LABEL_37;
        }
      }
    }
    else
    {
      if ( JobObjectInformationClass != JobObjectSiloBasicInformation )
      {
        switch ( JobObjectInformationClass )
        {
          case JobObjectBackgroundInformation:
            v95 = (*((_DWORD *)v14 + 330) & 0x400) != 0;
            v15 = &v95;
            goto LABEL_36;
          case JobObjectInterferenceInformation:
            v18 = JobObjectInformation;
            JobIoAttribution = PspQueryJobHierarchyInterferenceCount(v14);
            if ( JobIoAttribution < 0 )
            {
              v79 = 0;
            }
            else
            {
              v91 = 1;
              v79 = 8;
            }
            v101 = v79;
            goto LABEL_61;
          case JobObjectMemoryUsageInformation:
            *(_OWORD *)&v139[24] = 0LL;
            PspLockJobMemoryLimitsShared(v14, CurrentThread);
            *(_QWORD *)&v139[8] = *((_QWORD *)v14 + 76) << 12;
            *(_QWORD *)v139 = *((_QWORD *)v14 + 122) << 12;
            *(_QWORD *)&v139[16] = *((_QWORD *)v14 + 167) << 12;
            v14 = (char *)Object;
            PspUnlockJobMemoryLimitsShared(Object, v100);
            v15 = v139;
            goto LABEL_36;
          case JobObjectSharedCommit:
            v118 = *((_QWORD *)v14 + 167);
            v15 = (bool *)&v118;
            JobIoAttribution = 0;
            v14 = (char *)Object;
            goto LABEL_37;
          case JobObjectContainerId:
            v140 = *(_OWORD *)(v14 + 1240);
            if ( v99 == 36 )
            {
              v141 = *(_OWORD *)(v14 + 1256);
              v142 = *((_DWORD *)v14 + 309);
            }
            v15 = (bool *)&v140;
            goto LABEL_36;
          case JobObjectIoRateControlInformation:
            JobIoAttribution = -1073741822;
            goto LABEL_37;
          case JobObjectNetRateControlInformation:
            PspLockJobShared(v14, CurrentThread);
            v77 = *((_QWORD *)v14 + 164);
            if ( v77 )
            {
              DWORD2(v129) = 1;
              v78 = *(_DWORD *)(v77 + 48);
              if ( (v78 & 1) != 0 )
              {
                v10 = 3;
                DWORD2(v129) = 3;
                *(_QWORD *)&v129 = *(_QWORD *)(v77 + 40);
              }
              if ( (v78 & 2) != 0 )
              {
                DWORD2(v129) = v10 | 4;
                BYTE12(v129) = *(_BYTE *)(v77 + 64);
              }
            }
            PspUnlockJob(v14, v100);
            v15 = (bool *)&v129;
            goto LABEL_36;
          case JobObjectNotificationLimitInformation2:
            goto LABEL_124;
          case JobObjectLimitViolationInformation2:
            goto LABEL_93;
        }
        goto LABEL_212;
      }
      if ( (*((_DWORD *)v14 + 330) & 0x40000000) != 0 )
      {
        LODWORD(v130) = *((_DWORD *)v14 + 309);
        ParentSilo = PsGetParentSilo(v14);
        if ( PsIsHostSilo(ParentSilo) )
          DWORD1(v130) = 0;
        else
          DWORD1(v130) = *(_DWORD *)(ParentSilo + 1236);
        DWORD2(v130) = *((_DWORD *)v14 + 306);
        BYTE12(v130) = PspIsSiloInServerSilo((__int64)v14);
        v15 = (bool *)&v130;
        goto LABEL_36;
      }
    }
    JobIoAttribution = -1073740535;
    goto LABEL_37;
  }
  if ( JobObjectInformationClass == JobObjectWakeInformation )
  {
    JobIoAttribution = PspAllocateAndQueryNotificationChannel(CurrentThread, v14, v147);
    v18 = JobObjectInformation;
    v17 = ReturnLength;
    if ( JobIoAttribution >= 0 )
    {
      v15 = v147;
      JobIoAttribution = 0;
    }
    goto LABEL_39;
  }
  if ( JobObjectInformationClass > JobObjectGroupInformation )
  {
    if ( JobObjectInformationClass != JobObjectNotificationLimitInformation )
    {
      if ( JobObjectInformationClass != JobObjectLimitViolationInformation )
      {
        if ( JobObjectInformationClass != JobObjectGroupInformationEx )
        {
          switch ( JobObjectInformationClass )
          {
            case JobObjectCpuRateControlInformation:
              PspLockJobShared(v14, CurrentThread);
              v56 = *((_QWORD *)v14 + 126);
              if ( v56 )
              {
                v57 = *(_DWORD *)(v56 + 40);
                if ( (v57 & 0x40) == 0 )
                {
                  HIDWORD(v116) = *(_DWORD *)(v56 + 44);
                  v67 = ((v57 & 4 | 2u) >> 1) | 4;
                  if ( (v57 & 1) == 0 )
                    v67 = (v57 & 4 | 2u) >> 1;
                  v68 = v67 | 8;
                  if ( (v57 & 2) == 0 )
                    v68 = v67;
                  v69 = v68 | 0x10;
                  if ( (v57 & 0x20) == 0 )
                    v69 = v68;
                  LODWORD(v116) = v69;
                }
              }
              PspUnlockJob(v14, v100);
              v15 = (bool *)&v116;
              goto LABEL_36;
            case JobObjectCompletionFilter:
              v110 = *((_DWORD *)v14 + 219);
              v15 = (bool *)&v110;
              goto LABEL_36;
            case JobObjectCompletionCounter:
              v117 = *((_QWORD *)v14 + 59);
              v15 = (bool *)&v117;
              goto LABEL_36;
            case JobObjectFreezeInformation:
              LODWORD(v128) = 7;
              WORD3(v128) = 0;
              PspLockJobShared(v14, CurrentThread);
              v66 = *((_DWORD *)v14 + 330);
              BYTE4(v128) = (v66 & 0x200) != 0;
              BYTE5(v128) = (v66 & 0x80000) != 0;
              *((_QWORD *)&v128 + 1) = *((_QWORD *)v14 + 119);
              PspUnlockJob(v14, v100);
              v15 = (bool *)&v128;
              goto LABEL_36;
          }
          goto LABEL_35;
        }
        if ( ReturnLength )
        {
          v70 = v99;
          if ( (v99 & 0xF) == 0 )
          {
            PspLockJobShared(v14, CurrentThread);
            if ( (*((_DWORD *)v14 + 64) & 0x10) != 0 )
              v71 = (__int16 *)(v14 + 264);
            else
              v71 = KeActiveProcessors;
            v148[5] = *(_OWORD *)v71;
            v148[6] = *((_OWORD *)v71 + 1);
            v148[7] = *((_OWORD *)v71 + 2);
            v148[8] = *((_OWORD *)v71 + 3);
            v148[9] = *((_OWORD *)v71 + 4);
            v148[10] = *((_OWORD *)v71 + 5);
            v148[11] = *((_OWORD *)v71 + 6);
            v148[12] = *((_OWORD *)v71 + 7);
            v148[13] = *((_OWORD *)v71 + 8);
            v148[14] = *((_OWORD *)v71 + 9);
            *(_QWORD *)&v148[15] = *((_QWORD *)v71 + 20);
            PspUnlockJob(v14, v100);
            v72 = LOWORD(v148[5]);
            memset(v150, 0, 16LL * LOWORD(v148[5]));
            if ( (_WORD)v72 )
            {
              v73 = v150;
              v74 = (_QWORD *)&v148[5] + 1;
              v75 = v98;
              do
              {
                *((_WORD *)v73 + 4) = v75;
                *(_QWORD *)v73 = *v74;
                ++v75;
                ++v74;
                v73 += 16;
              }
              while ( v75 < (unsigned __int16)v72 );
            }
            v76 = 16 * v72;
            v101 = v76;
            JobIoAttribution = v70 < 16 * v72 ? 0xC0000023 : 0;
            v9 = v70;
            if ( v70 >= v76 )
              v9 = v76;
            Size = v9;
            v91 = 1;
            v18 = JobObjectInformation;
            memmove(JobObjectInformation, v150, v9);
            v17 = ReturnLength;
            goto LABEL_39;
          }
        }
LABEL_188:
        JobIoAttribution = -1073741811;
        goto LABEL_37;
      }
LABEL_93:
      v127[9] = 0LL;
      *(_OWORD *)&v127[11] = 0LL;
      Size_4 = 0;
      Size_6 = 0;
      PspQueryJobHierarchyAccountingInformation(v14);
      v127[1] = Src[9];
      v127[3] = Src[10];
      v127[5] = Src[0];
      PspLockJobExclusive(v14, v100);
      v21 = *((_DWORD *)v14 + 330);
      if ( (v21 & 8) == 0 || (v21 & 0x4000) == 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)v14 + 330, 0xFFFFFFFB);
        v14 = (char *)Object;
      }
      ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 1032), 0LL);
      v127[7] = *((_QWORD *)v14 + 122) << 12;
      PspUnlockJobMemoryLimitsShared(v14, 0LL);
      v22 = (_DWORD *)*((_QWORD *)v14 + 123);
      if ( v22 )
      {
        LODWORD(v127[0]) = *v22;
        HIDWORD(v127[0]) = *(_DWORD *)(*((_QWORD *)v14 + 123) + 4LL);
        v23 = (_QWORD *)*((_QWORD *)v14 + 123);
        v24 = v23[9];
        if ( !v24 )
          v24 = v23[1];
        v127[2] = v24;
        v25 = v23[10];
        if ( !v25 )
          v25 = v23[2];
        v127[4] = v25;
        v26 = v23[11];
        if ( !v26 )
          v26 = v23[3];
        v127[6] = v26;
        v27 = v23[12];
        if ( !v27 )
          v27 = v23[4];
        v127[10] = v27 << 12;
        v28 = v23[13];
        if ( !v28 )
          v28 = v23[5];
        v127[8] = v28 << 12;
        for ( i = 0; i < 3; i = v31 + 1 )
        {
          v30 = (_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v127, i);
          v34 = v32[16];
          if ( v34 )
            *v33 = 1;
          else
            v34 = *v32;
          *v30 = v34;
        }
      }
      else
      {
        v127[0] = 0LL;
        v127[2] = 0LL;
        v127[4] = 0LL;
        v127[6] = 0LL;
        v127[10] = 0LL;
        v127[8] = 0LL;
        for ( j = 0; j < 3; j = v59 + 1 )
          *(_DWORD *)PspLimitViolationRateControlToleranceLimitField((__int64)v127, j) = 0;
      }
      v35 = 0;
      p_Size_4 = (char *)&Size_4;
      v107 = 60LL;
      do
      {
        if ( *((_QWORD *)v14 + 123) && (v37 = PspRateControlLimitFlag(v35), (v37 & *v38) != 0) )
          v40 = *(_DWORD *)((char *)v38 + v39);
        else
          v40 = 1;
        v112 = v40;
        PspQueryRateControlHistory((__int64)v14, v40, *p_Size_4, &v111, v35);
        if ( v35 )
        {
          if ( v35 == 1 )
            v41 = &v127[11];
          else
            v41 = &v127[9];
        }
        else
        {
          v41 = &v127[12];
        }
        *(_DWORD *)v41 = v111;
        ++v35;
        v107 += 4LL;
        ++p_Size_4;
      }
      while ( v35 < 3 );
      v42 = *((_QWORD *)v14 + 123);
      v43 = v100;
      if ( v42 )
      {
        *(_DWORD *)(v42 + 4) = 0;
        memset((void *)(*((_QWORD *)v14 + 123) + 72LL), 0, 0x40uLL);
      }
      PspUnlockJob(v14, v43);
      if ( v99 == 88 )
      {
        v145[1] = v127[1];
        v145[2] = v127[2];
        v145[3] = v127[3];
        v145[4] = v127[4];
        v145[5] = v127[5];
        v145[6] = v127[6];
        v145[7] = v127[7];
        v145[8] = v127[10];
        v145[9] = v127[8];
        v145[10] = v127[9];
        v145[0] = v127[0] & 0x27820400278204LL;
        v15 = (bool *)v145;
      }
      else if ( v99 == 80 )
      {
        v144[1] = v127[1];
        v144[2] = v127[2];
        v144[3] = v127[3];
        v144[4] = v127[4];
        v144[5] = v127[5];
        v144[6] = v127[6];
        v144[7] = v127[7];
        v144[8] = v127[8];
        v144[9] = v127[9];
        v144[0] = v127[0] & 0x7020400070204LL;
        v15 = (bool *)v144;
      }
      else
      {
        v15 = (bool *)v127;
      }
      JobIoAttribution = 0;
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery((_DWORD)v14, JobObjectInformationClass, (unsigned int)v127, (unsigned int)&v112, 0, 1830);
      goto LABEL_37;
    }
LABEL_124:
    PspLockJobShared(v14, CurrentThread);
    v44 = *((_QWORD *)v14 + 123);
    if ( v44 )
    {
      DWORD2(v131[2]) = *(_DWORD *)v44;
      v131[0] = *(_OWORD *)(v44 + 8);
      *(_QWORD *)&v131[1] = *(_QWORD *)(v44 + 24);
      *(_QWORD *)&v131[3] = *(_QWORD *)(v44 + 32) << 12;
      *((_QWORD *)&v131[1] + 1) = *(_QWORD *)(v44 + 40) << 12;
      for ( k = 0; k < 3; k = v51 + 1 )
      {
        v46 = (_DWORD *)PspNotificationLimitRateControlToleranceField((__int64)v131, k);
        *v46 = *(_DWORD *)(v47 - 12);
        v49 = (_DWORD *)PspNotificationLimitRateControlToleranceIntervalField((__int64)v131, v48);
        *v49 = *v50;
      }
    }
    PspUnlockJob(v14, v100);
    if ( v99 == 56 )
    {
      v135 = v131[0];
      *(_QWORD *)&v136 = *(_QWORD *)&v131[1];
      *((_QWORD *)&v136 + 1) = *(_QWORD *)&v131[3];
      v137 = *(_OWORD *)((char *)&v131[1] + 8);
      v138 = DWORD2(v131[2]) & 0x278204LL;
      v15 = (bool *)&v135;
    }
    else if ( v99 == 48 )
    {
      v132 = v131[0];
      v133 = v131[1];
      *(_QWORD *)&v134 = *(_QWORD *)&v131[2];
      *((_QWORD *)&v134 + 1) = DWORD2(v131[2]) & 0x70204LL;
      v15 = (bool *)&v132;
    }
    else
    {
      v15 = (bool *)v131;
    }
    goto LABEL_36;
  }
  if ( JobObjectInformationClass == JobObjectGroupInformation )
  {
    if ( ReturnLength )
    {
      v61 = v99;
      if ( (v99 & 1) == 0 )
      {
        PspLockJobShared(v14, CurrentThread);
        v62 = 0;
        v63 = *((_WORD *)v14 + 132);
        if ( v63 )
        {
          v64 = v14 + 272;
          v65 = v98;
          do
          {
            if ( *v64 )
              v151[v62++] = v65;
            ++v65;
            ++v64;
          }
          while ( v65 < v63 );
        }
        PspUnlockJob(v14, v100);
        v9 = 2 * v62;
        v101 = v9;
        v91 = 1;
        JobIoAttribution = v61 < v9 ? 0xC0000023 : 0;
        if ( v9 > v61 )
          v9 = Size;
        Size = v9;
        v18 = JobObjectInformation;
        memmove(JobObjectInformation, v151, v9);
        v17 = ReturnLength;
        goto LABEL_39;
      }
    }
    goto LABEL_188;
  }
  if ( JobObjectInformationClass != JobObjectBasicAccountingInformation )
  {
    switch ( JobObjectInformationClass )
    {
      case JobObjectBasicLimitInformation:
LABEL_78:
        PspLockJobShared(v14, CurrentThread);
        v146[3] = *((_QWORD *)v14 + 30);
        v146[4] = *((_QWORD *)v14 + 31);
        LODWORD(v146[5]) = *((_DWORD *)v14 + 65);
        LODWORD(v146[7]) = (unsigned __int8)v14[873];
        HIDWORD(v146[7]) = *((_DWORD *)v14 + 121);
        if ( KeIsSingleGroupAffinityEx((unsigned __int16 *)v14 + 132, &v98) )
          v146[6] = *(_QWORD *)&v14[8 * v98 + 272];
        else
          v146[6] = 0LL;
        v146[0] = *((_QWORD *)v14 + 28);
        v146[1] = *((_QWORD *)v14 + 29);
        LODWORD(v146[2]) = (PspGetJobLimitInformationValidFlags(JobObjectInformationClass, v99) | 0x7FFF) & *((_DWORD *)v14 + 64);
        if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        {
          ExAcquirePushLockSharedEx((ULONG_PTR)(v14 + 1032), 0LL);
          v146[14] = *((_QWORD *)v14 + 72) << 12;
          v146[15] = *((_QWORD *)v14 + 73) << 12;
          v146[17] = *((_QWORD *)v14 + 76) << 12;
          v146[18] = *((_QWORD *)v14 + 74) << 12;
          PspUnlockJobMemoryLimitsShared(v14, 0LL);
          PspUnlockJob(v14, v100);
          v146[16] = *((_QWORD *)v14 + 75) << 12;
        }
        else
        {
          PspUnlockJob(v14, v100);
        }
        JobIoAttribution = 0;
        v15 = (bool *)v146;
        goto LABEL_37;
      case JobObjectBasicProcessIdList:
        v101 = 0;
        v18 = JobObjectInformation;
        JobIoAttribution = PspQueryJobHierarchyProcessIdList(v14, JobObjectInformation, v99, &v101);
        v91 = 1;
LABEL_61:
        v17 = ReturnLength;
        goto LABEL_39;
      case JobObjectBasicUIRestrictions:
        PspLockJobShared(v14, CurrentThread);
        v109 = *((_DWORD *)v14 + 112);
        PspUnlockJob(v14, v100);
        v15 = (bool *)&v109;
        goto LABEL_36;
      case JobObjectSecurityLimitInformation:
        v126 = 0LL;
        v91 = 1;
        *(_OWORD *)JobObjectInformation = 0LL;
        *((_OWORD *)JobObjectInformation + 1) = 0LL;
        *((_QWORD *)JobObjectInformation + 4) = v126;
        v17 = ReturnLength;
        goto LABEL_38;
      case JobObjectEndOfJobTimeInformation:
        v108 = *((_DWORD *)v14 + 113);
        v15 = (bool *)&v108;
        goto LABEL_36;
    }
    if ( JobObjectInformationClass != JobObjectBasicAndIoAccountingInformation )
    {
      if ( JobObjectInformationClass == JobObjectExtendedLimitInformation )
        goto LABEL_78;
      if ( JobObjectInformationClass == JobObjectJobSetInformation )
      {
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
        PspUnlockJobListShared(v100);
        v15 = (bool *)&v115;
        goto LABEL_36;
      }
LABEL_212:
      JobIoAttribution = -1073741821;
      goto LABEL_37;
    }
  }
LABEL_35:
  PspQueryJobHierarchyAccountingInformation(v14);
  v15 = (bool *)Src;
LABEL_36:
  JobIoAttribution = 0;
LABEL_37:
  v17 = ReturnLength;
LABEL_38:
  v18 = JobObjectInformation;
LABEL_39:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x79517350u);
  if ( JobIoAttribution >= 0 && !v91 )
    memmove(v18, v15, v9);
  if ( v17 )
    *v17 = v101;
  return JobIoAttribution;
}
