/*
 * XREFs of NtSetInformationThread @ 0x1406D8E90
 * Callers:
 *     <none>
 * Callees:
 *     PsSetPagePriorityThread @ 0x14020AA94 (PsSetPagePriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KeIsEmptyAffinityEx @ 0x140237C30 (KeIsEmptyAffinityEx.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     MmGetMinWsPagePriority @ 0x140242D60 (MmGetMinWsPagePriority.c)
 *     PspRevertContainerImpersonation @ 0x140248164 (PspRevertContainerImpersonation.c)
 *     IoThreadToProcess @ 0x140248470 (IoThreadToProcess.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14025D790 (ExAcquireResourceSharedLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetProcessServerSilo @ 0x1402637E0 (PsGetProcessServerSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeVerifyGroupAffinity @ 0x140290374 (KeVerifyGroupAffinity.c)
 *     PsGetEffectiveServerSilo @ 0x140294DF0 (PsGetEffectiveServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     KeSetUserAffinityThread @ 0x1402B0FA0 (KeSetUserAffinityThread.c)
 *     KeIsSubsetAffinityEx @ 0x1402B13D0 (KeIsSubsetAffinityEx.c)
 *     KeQueryPrimaryGroupProcess @ 0x1402FA680 (KeQueryPrimaryGroupProcess.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1403579A4 (PsSetIoPriorityThread.c)
 *     MmGetDefaultPagePriority @ 0x14035B470 (MmGetDefaultPagePriority.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 *     KeSetThreadChargeOnlySchedulingGroup @ 0x140369DE4 (KeSetThreadChargeOnlySchedulingGroup.c)
 *     KeUpdateThreadCpuSets @ 0x140399998 (KeUpdateThreadCpuSets.c)
 *     KeSetIdealProcessorThread @ 0x1403C9190 (KeSetIdealProcessorThread.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x1403C91E4 (KeSetIdealProcessorThreadByNumber.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14056CAC4 (KeSetUserHeteroCpuPolicyThread.c)
 *     KeDisableProfiling @ 0x1405719BC (KeDisableProfiling.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     PsGetProcessSilo @ 0x1405A18F0 (PsGetProcessSilo.c)
 *     PsGetNextProcessThread @ 0x1406A8E30 (PsGetNextProcessThread.c)
 *     PsImpersonateClient @ 0x1406DA310 (PsImpersonateClient.c)
 *     PspThreadFromTicket @ 0x1406DBA1C (PspThreadFromTicket.c)
 *     RtlTestProtectedAccess @ 0x14070C7FC (RtlTestProtectedAccess.c)
 *     PspWow64SetContextThread @ 0x14077C1CC (PspWow64SetContextThread.c)
 *     PspSetThreadPpmPolicy @ 0x14077DB40 (PspSetThreadPpmPolicy.c)
 *     SeCheckPrivilegedObject @ 0x1407913D4 (SeCheckPrivilegedObject.c)
 *     PspIsSiloInSilo @ 0x140796550 (PspIsSiloInSilo.c)
 *     KeSetDisableBoostThread @ 0x14079C68C (KeSetDisableBoostThread.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 *     EtwTraceThreadSetName @ 0x1407EB604 (EtwTraceThreadSetName.c)
 *     PspWriteTebIdealProcessor @ 0x1407ED78C (PspWriteTebIdealProcessor.c)
 *     KeEnableProfiling @ 0x140971DE0 (KeEnableProfiling.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  size_t v4; // r14
  struct _LIST_ENTRY *v7; // rbx
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v10; // r15d
  __int64 v11; // rax
  NTSTATUS result; // eax
  struct _KTHREAD *v13; // rax
  KPROCESSOR_MODE v14; // r9
  PVOID v15; // rdi
  HANDLE v16; // rdi
  NTSTATUS v17; // esi
  int v18; // edi
  PETHREAD v19; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rax
  LONG v24; // edx
  NTSTATUS v25; // r14d
  int v26; // edi
  PETHREAD v27; // rcx
  ULONG v28; // edx
  LONG v29; // edi
  NTSTATUS v30; // esi
  PETHREAD v31; // rbx
  void *v32; // r15
  __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // di
  __int64 Pool2; // rax
  PETHREAD v38; // rdi
  PETHREAD v39; // rbx
  unsigned int v40; // edi
  PETHREAD v41; // rbx
  UCHAR v42; // di
  PETHREAD v43; // rbx
  NTSTATUS v44; // edi
  int v45; // edx
  unsigned int v46; // r15d
  NTSTATUS v47; // r13d
  PETHREAD v48; // rdi
  __int64 v49; // rsi
  struct _EX_RUNDOWN_REF *v50; // rdx
  _QWORD *NextProcessThread; // rax
  struct _EX_RUNDOWN_REF *v52; // rdi
  unsigned __int64 Count; // rcx
  __int64 v54; // rax
  _WORD *v55; // rdx
  char v56; // r8
  unsigned __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // rdx
  __int16 v61; // r8
  KPRIORITY v62; // edi
  _KPROCESS *v63; // r14
  unsigned __int64 v64; // rax
  char *v65; // rdi
  PETHREAD v66; // rdi
  NTSTATUS v67; // ebx
  unsigned int v68; // edi
  PETHREAD v69; // rcx
  __int64 v70; // rdi
  PETHREAD v71; // rsi
  _KPROCESS *v72; // r15
  struct _KTHREAD *v73; // rcx
  int v74; // edi
  int v75; // esi
  NTSTATUS v76; // edi
  PVOID v77; // rcx
  char v78; // di
  int IsSubsetAffinity; // eax
  unsigned __int64 v80; // rcx
  PETHREAD v81; // rdi
  NTSTATUS v82; // ebx
  __int64 v83; // rdx
  unsigned int v84; // edi
  int v85; // edi
  __int64 v86; // rdx
  int v87; // edi
  struct _KTHREAD *v88; // rax
  struct _LIST_ENTRY *v89; // rax
  struct _LIST_ENTRY *v90; // rdi
  PEPROCESS v91; // rsi
  char IsSiloInSilo; // al
  struct _LIST_ENTRY *v93; // rcx
  __int64 EffectiveServerSilo; // rbx
  __int64 ProcessServerSilo; // rax
  KPROCESSOR_MODE v96; // [rsp+40h] [rbp-3A8h]
  PETHREAD Thread; // [rsp+48h] [rbp-3A0h] BYREF
  NTSTATUS v98; // [rsp+50h] [rbp-398h]
  ULONG_PTR BugCheckParameter1; // [rsp+58h] [rbp-390h]
  char v100; // [rsp+60h] [rbp-388h]
  char v101; // [rsp+61h] [rbp-387h]
  char v102; // [rsp+62h] [rbp-386h]
  __int16 v103[2]; // [rsp+68h] [rbp-380h] BYREF
  struct _PROCESSOR_NUMBER v104; // [rsp+6Ch] [rbp-37Ch] BYREF
  char v105; // [rsp+70h] [rbp-378h]
  LONG Increment; // [rsp+74h] [rbp-374h]
  void *v107; // [rsp+78h] [rbp-370h]
  PVOID v108; // [rsp+80h] [rbp-368h] BYREF
  struct _KTHREAD *v109; // [rsp+88h] [rbp-360h]
  int v110; // [rsp+90h] [rbp-358h]
  PVOID Object[2]; // [rsp+98h] [rbp-350h] BYREF
  unsigned int v112; // [rsp+A8h] [rbp-340h]
  PVOID P; // [rsp+B0h] [rbp-338h]
  __int128 v114; // [rsp+B8h] [rbp-330h] BYREF
  __int128 v115; // [rsp+C8h] [rbp-320h]
  unsigned __int64 v116; // [rsp+D8h] [rbp-310h]
  PVOID v117; // [rsp+E0h] [rbp-308h] BYREF
  ULONG_PTR v118; // [rsp+E8h] [rbp-300h]
  HANDLE v119; // [rsp+F0h] [rbp-2F8h] BYREF
  unsigned __int64 v120; // [rsp+F8h] [rbp-2F0h]
  void *Src[2]; // [rsp+100h] [rbp-2E8h]
  int v122; // [rsp+110h] [rbp-2D8h]
  int v123; // [rsp+114h] [rbp-2D4h]
  int v124; // [rsp+118h] [rbp-2D0h]
  unsigned int v125; // [rsp+11Ch] [rbp-2CCh]
  unsigned int v126; // [rsp+120h] [rbp-2C8h]
  int v127; // [rsp+124h] [rbp-2C4h]
  int v128; // [rsp+130h] [rbp-2B8h]
  int v129; // [rsp+134h] [rbp-2B4h]
  HANDLE Handle; // [rsp+148h] [rbp-2A0h]
  int v131; // [rsp+150h] [rbp-298h]
  unsigned int v132; // [rsp+154h] [rbp-294h]
  __m128i v133; // [rsp+160h] [rbp-288h]
  int v134; // [rsp+170h] [rbp-278h]
  __int64 v135; // [rsp+178h] [rbp-270h]
  HANDLE v136; // [rsp+180h] [rbp-268h]
  _QWORD v137[34]; // [rsp+190h] [rbp-258h] BYREF
  char v138[256]; // [rsp+2A0h] [rbp-148h] BYREF

  v4 = ThreadInformationLength;
  BugCheckParameter1 = (ULONG_PTR)ThreadHandle;
  v7 = 0LL;
  Thread = 0LL;
  v114 = 0LL;
  memset(v137, 0, 0x108uLL);
  v103[0] = 0;
  v110 = 0;
  v112 = 0;
  v108 = 0LL;
  v120 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v104 = 0;
  v117 = 0LL;
  *(_OWORD *)Src = 0LL;
  v119 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v109 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v96 = PreviousMode;
  if ( PreviousMode )
  {
    if ( ThreadInformationClass < ThreadEnableAlignmentFaultFixup && ThreadInformationClass >= ThreadImpersonationToken
      || ThreadInformationClass >= (ThreadSuspendCount|ThreadAffinityMask)
      && ThreadInformationClass < (ThreadCounterProfiling|ThreadIsIoPending) )
    {
LABEL_4:
      v10 = 3;
      v11 = 3LL;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadAffinityMask:
        case ThreadGroupInformation:
        case ThreadCpuAccountingInformation:
        case ThreadCpuAccountingInformation|ThreadAffinityMask:
        case ThreadCounterProfiling|ThreadIsIoPending:
          v11 = 7LL;
          v10 = 3;
          break;
        case ThreadEnableAlignmentFaultFixup:
        case ThreadCounterProfiling:
          v11 = 0LL;
          v10 = 3;
          break;
        default:
          goto LABEL_4;
      }
    }
    if ( (_DWORD)v4 )
    {
      if ( ((unsigned __int64)ThreadInformation & v11) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + v4 > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + v4 < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  if ( ThreadInformationClass == ThreadImpersonationToken )
  {
    if ( (_DWORD)v4 == 8 )
    {
      Handle = *(HANDLE *)ThreadInformation;
      result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
      if ( result >= 0 )
      {
        v13 = KeGetCurrentThread();
        if ( Handle )
        {
          v14 = v13->PreviousMode;
          Object[0] = 0LL;
          LODWORD(v7) = ObReferenceObjectByHandle(Handle, 4u, (POBJECT_TYPE)SeTokenObjectType, v14, Object, 0LL);
          if ( (int)v7 >= 0 )
          {
            v15 = Object[0];
            if ( *((_DWORD *)Object[0] + 48) == 2 )
            {
              LODWORD(v7) = PsImpersonateClient(
                              Thread,
                              Object[0],
                              0,
                              0,
                              *((SECURITY_IMPERSONATION_LEVEL *)Object[0] + 49));
              ObfDereferenceObject(v15);
            }
            else
            {
              ObfDereferenceObject(Object[0]);
              LODWORD(v7) = -1073741656;
            }
          }
        }
        else
        {
          PsImpersonateClient(Thread, 0LL, 0, 0, SecurityImpersonation);
        }
LABEL_21:
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        return (int)v7;
      }
      return result;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != (ThreadCounterProfiling|ThreadAmILastThread) )
  {
    switch ( ThreadInformationClass )
    {
      case ThreadPriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v134 = *(_DWORD *)ThreadInformation;
        v62 = v134;
        if ( (unsigned int)(v134 - 1) > 0x1E )
          return -1073741811;
        if ( v134 >= 16
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 1024LL) )
        {
          return -1073741727;
        }
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        KeSetPriorityThread(Thread, v62);
        goto LABEL_50;
      case ThreadBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v18 = *(_DWORD *)ThreadInformation;
        Increment = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        v19 = Thread;
        Process = Thread->Process;
        v21 = (unsigned int)(v18 + 16);
        if ( (unsigned int)v21 > 0x20 || (v22 = 0x10007C001LL, !_bittest64(&v22, v21)) )
        {
          if ( CurrentThread->ApcState.Process != (_KPROCESS *)*((_QWORD *)PsGetServerSiloGlobals(0LL) + 110)
            && HIBYTE(Process[1].ActiveProcessors.StaticBitmap[0]) != 4 )
          {
            v25 = -1073741811;
LABEL_43:
            ObfDereferenceObjectWithTag(v19, 0x79517350u);
            return v25;
          }
        }
        v23 = (_DWORD *)Process[1].Affinity.StaticBitmap[16];
        v108 = v23;
        if ( v23 && (v23[260] & 0x20) != 0 && HIBYTE(Process[1].ActiveProcessors.StaticBitmap[0]) != 4 )
        {
          v24 = Increment;
          if ( Increment > 0 )
          {
            v19 = Thread;
            goto LABEL_42;
          }
        }
        else
        {
          v24 = Increment;
        }
        v19 = Thread;
        KeSetBasePriorityThread(Thread, v24);
LABEL_42:
        v25 = v98;
        goto LABEL_43;
      case ThreadAffinityMask:
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        *(_QWORD *)&v114 = *(_QWORD *)ThreadInformation;
        v70 = v114;
        if ( !(_QWORD)v114 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v71 = Thread;
          v72 = Thread->Process;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v72[1].ProfileListHead.Blink) )
          {
            if ( !KiSetLegacyAffinityThread((__int64)v71, v70) )
              LODWORD(v7) = -1073741811;
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v72[1].ProfileListHead.Blink);
          }
          else
          {
            LODWORD(v7) = -1073741558;
          }
          ObfDereferenceObjectWithTag(v71, 0x79517350u);
          return (int)v7;
        }
        return result;
      case ThreadEnableAlignmentFaultFixup:
        if ( (_DWORD)v4 != 1 )
          return -1073741820;
        v78 = *(_BYTE *)ThreadInformation;
        v105 = *(_BYTE *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v78 )
          _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        else
          _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 2u);
        goto LABEL_50;
      case ThreadQuerySetWin32StartAddress:
        return -1073741811;
      case ThreadZeroTlsCell:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v46 = *(_DWORD *)ThreadInformation;
        v110 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v47 = result;
        v98 = result;
        if ( result < 0 )
          return result;
        v48 = Thread;
        ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( v48 != v109 )
          return -1073741811;
        v49 = (__int64)v48->Process;
        v109 = (struct _KTHREAD *)v49;
        v50 = 0LL;
        while ( 2 )
        {
          NextProcessThread = PsGetNextProcessThread(v49, v50);
          Thread = (PETHREAD)NextProcessThread;
          v52 = (struct _EX_RUNDOWN_REF *)NextProcessThread;
          if ( !NextProcessThread )
            return v47;
          if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextProcessThread + 169) )
            goto LABEL_123;
          Count = v52[30].Count;
          if ( !Count )
            goto LABEL_153;
          v54 = *(_QWORD *)(v49 + 1408);
          if ( v54 )
          {
            v55 = (_WORD *)(v49 + 2412);
            v61 = *(_WORD *)(v49 + 2412);
            if ( v61 == 332 || v61 == 452 )
            {
              v56 = 1;
              goto LABEL_128;
            }
          }
          else
          {
            v55 = (_WORD *)(v49 + 2412);
          }
          v56 = 0;
LABEL_128:
          v102 = v56;
          v57 = Count + 0x2000;
          if ( !v56 )
            v57 = 0LL;
          if ( v46 >= 0x40 )
          {
            if ( v46 < 0x440 )
            {
              if ( v54 && (*v55 == 332 || *v55 == 452) )
              {
                if ( v57 )
                {
                  v60 = *(unsigned int *)(v57 + 3988);
                  if ( (_DWORD)v60 )
                    *(_DWORD *)(v60 + 4LL * (v46 - 64)) = 0;
                }
              }
              else
              {
                v58 = *(_QWORD *)(Count + 6016);
                v135 = v58;
                if ( v58 )
                {
                  v59 = v58 + 8LL * (v46 - 64);
                  if ( v59 >= 0x7FFFFFFF0000LL )
                    v59 = 0x7FFFFFFF0000LL;
                  *(_QWORD *)v59 = 0LL;
                }
              }
            }
          }
          else if ( v54 && (*v55 == 332 || *v55 == 452) )
          {
            if ( v57 )
              *(_DWORD *)(v57 + 4LL * v46 + 3600) = 0;
          }
          else
          {
            *(_QWORD *)(Count + 8LL * v46 + 5248) = 0LL;
          }
LABEL_153:
          ExReleaseRundownProtection_0(v52 + 169);
LABEL_123:
          v50 = v52;
          continue;
        }
      case ThreadIdealProcessor:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v112 = *(_DWORD *)ThreadInformation;
        v42 = v112;
        if ( v112 > 0x40 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v43 = Thread;
        v44 = KeSetIdealProcessorThread(Thread, v42);
        if ( (v43->MiscFlags & 0x400) == 0 )
          PspWriteTebIdealProcessor(CurrentThread, v43);
LABEL_107:
        ObfDereferenceObjectWithTag(v43, 0x79517350u);
        return v44;
      case ThreadPriorityBoost:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v75 = *(_DWORD *)ThreadInformation;
        v122 = v75;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v76 = result;
        if ( result >= 0 )
        {
          KeSetDisableBoostThread(Thread, v75 != 0);
          ObfDereferenceObjectWithTag(v77, 0x79517350u);
          return v76;
        }
        return result;
      case ThreadSetTlsArrayAddress:
        return -1073741822;
      case ThreadHideFromDebugger:
        if ( (_DWORD)v4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 4u);
        goto LABEL_176;
      case ThreadBreakOnTermination:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v74 = *(_DWORD *)ThreadInformation;
        v123 = *(_DWORD *)ThreadInformation;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v74 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x20u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFFFFFDF);
        goto LABEL_50;
      case ThreadSwitchLegacyState:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v27 = Thread;
        Thread->NpxState |= MEMORY[0xFFFFF780000003D8] | 3LL;
        goto LABEL_51;
      case ThreadIoPriority:
        if ( (((_DWORD)v4 - 4) & 0xFFFFFFFB) != 0 )
          return -1073741820;
        if ( (_DWORD)v4 == 4 )
        {
          v40 = *(_DWORD *)ThreadInformation;
          v124 = *(_DWORD *)ThreadInformation;
          LOBYTE(ThreadInformation) = 0;
        }
        else
        {
          v120 = *(_QWORD *)ThreadInformation;
          v40 = v120;
          ThreadInformation = (PVOID)HIDWORD(v120);
        }
        if ( v40 >= 4 )
          return -1073741811;
        if ( v40 >= 3
          && !(unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))SeCheckPrivilegedObject)(
                                 SeIncreaseBasePriorityPrivilege,
                                 BugCheckParameter1,
                                 32LL) )
        {
          return -1073741727;
        }
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v41 = Thread;
          if ( (_BYTE)ThreadInformation == 1 && ((*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7) < (int)v40 )
            IoBoostThreadIoPriority((volatile signed __int64 *)&Thread->Header.Lock, v40, 0);
          PsSetIoPriorityThread((__int64)v41, v40);
          ObfDereferenceObjectWithTag(v41, 0x79517350u);
          return 0;
        }
        return result;
      case ThreadPagePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v126 = *(_DWORD *)ThreadInformation;
        v26 = v126;
        if ( v126 > (unsigned int)MmGetDefaultPagePriority() || v126 < (unsigned int)MmGetMinWsPagePriority() )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        PsSetPagePriorityThread((__int64)Thread, v26);
        goto LABEL_50;
      case ThreadActualBasePriority:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        Increment = *(_DWORD *)ThreadInformation;
        v29 = Increment;
        if ( (unsigned int)(Increment - 1) > 0x1E )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v30 = result;
        if ( result >= 0 )
        {
          v31 = Thread;
          if ( v29 < 16
            || HIBYTE(Thread->Process[1].ActiveProcessors.StaticBitmap[0]) == 4
            || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, v96) )
          {
            KeSetActualBasePriorityThread((ULONG_PTR)v31, v29);
          }
          else
          {
            v30 = -1073741727;
          }
          ObfDereferenceObjectWithTag(v31, 0x79517350u);
          return v30;
        }
        return result;
      case ThreadWow64Context:
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v66 = Thread;
          if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
          {
            v67 = PspWow64SetContextThread(v66);
            ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v66[1].WaitStatus);
            ObfDereferenceObjectWithTag(v66, 0x79517350u);
            return v67;
          }
          else
          {
            ObfDereferenceObjectWithTag(v66, 0x79517350u);
            return -1073741749;
          }
        }
        return result;
      case ThreadGroupInformation:
        if ( (_DWORD)v4 != 16 )
          return -1073741820;
        v114 = *(_OWORD *)ThreadInformation;
        if ( !KeVerifyGroupAffinity((__int64)&v114, 1) )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        LODWORD(v137[0]) = 2097153;
        memset((char *)v137 + 4, 0, 0x104uLL);
        if ( !WORD4(v114) )
          goto LABEL_166;
        if ( WORD1(v137[0]) > WORD4(v114) )
        {
          LOWORD(v137[0]) = WORD4(v114) + 1;
LABEL_166:
          v137[WORD4(v114) + 1] |= v114;
        }
        v63 = Thread->Process;
        --CurrentThread->KernelApcDisable;
        ExAcquirePushLockSharedEx((ULONG_PTR)&v63[1], 0LL);
        v64 = v63[1].Affinity.StaticBitmap[16];
        v108 = (PVOID)v64;
        v65 = (char *)v64;
        if ( v64
          && (ExAcquireResourceSharedLite((PERESOURCE)(v64 + 56), 1u), (*((_DWORD *)v65 + 260) & 0x10) != 0)
          && (IsSubsetAffinity = KeIsSubsetAffinityEx((unsigned __int16 *)v137, (unsigned __int16 *)v65 + 356)) == 0 )
        {
          v98 = -1073741823;
        }
        else
        {
          KeSetUserAffinityThread((__int64)Thread, (unsigned __int16 *)v137);
          KeQueryPrimaryGroupProcess((__int64)v63, v103);
          v98 = 0;
          if ( !(unsigned int)KeIsEmptyAffinityEx(v137) )
          {
            v98 = 0;
            if ( v103[0] != WORD4(v114) )
            {
              _interlockedbittestandset((volatile signed __int32 *)&v63->632, 0xCu);
              v98 = 0;
              v65 = (char *)v108;
            }
          }
        }
        if ( v65 )
          ExReleaseResourceLite((PERESOURCE)(v65 + 56));
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v63[1].Header.Lock, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&v63[1].Header.Lock);
        KeAbPostRelease((ULONG_PTR)&v63[1]);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_176;
      case ThreadCounterProfiling:
        if ( (_DWORD)v4 != 24 )
          return -1073741820;
        v115 = *(_OWORD *)ThreadInformation;
        v116 = *((_QWORD *)ThreadInformation + 2);
        v80 = v116;
        if ( (v116 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v116 >= 0x7FFFFFFF0000LL )
          v80 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v80 = *(_BYTE *)v80;
        *(_BYTE *)(v80 + 447) = *(_BYTE *)(v80 + 447);
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v81 = Thread;
          if ( Thread == KeGetCurrentThread() )
          {
            if ( HIDWORD(v115) )
              v82 = KeEnableProfiling(Thread, DWORD2(v115), v115, v116);
            else
              v82 = KeDisableProfiling((__int64)Thread, v116);
          }
          else
          {
            v82 = -1073741637;
          }
          ObfDereferenceObjectWithTag(v81, 0x79517350u);
          return v82;
        }
        return result;
      case ThreadIdealProcessorEx:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v104 = *(struct _PROCESSOR_NUMBER *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        v43 = Thread;
        v44 = KeSetIdealProcessorThreadByNumber(Thread, &v104, &v104);
        if ( v44 >= 0 )
        {
          if ( (v43->MiscFlags & 0x400) == 0 )
            PspWriteTebIdealProcessor(CurrentThread, v43);
          *(struct _PROCESSOR_NUMBER *)ThreadInformation = v104;
        }
        goto LABEL_107;
      case ThreadCpuAccountingInformation:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v136 = *(HANDLE *)ThreadInformation;
        if ( v136 )
        {
          result = ObpReferenceObjectByHandleWithTag((ULONG_PTR)v136, 0x79517350u, (__int64)&v117, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v7 = (struct _LIST_ENTRY *)v117;
          v83 = *((_QWORD *)v117 + 4);
          if ( !v83 )
          {
            ObfDereferenceObjectWithTag(v117, 0x79517350u);
            return -1073740715;
          }
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, v83) )
          {
            ObfDereferenceObjectWithTag(v7, 0x79517350u);
            return -1073740714;
          }
        }
        else
        {
          if ( !KeSetThreadChargeOnlySchedulingGroup((__int64)CurrentThread, 0LL) )
            return -1073740713;
          ObfDereferenceObject(CurrentThread[1].ApcState.ApcListHead[1].Flink);
        }
        CurrentThread[1].ApcState.ApcListHead[1].Flink = v7;
        return 0;
      case ThreadCounterProfiling|ThreadAffinityMask:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v84 = MEMORY[4];
        v131 = MEMORY[4];
        if ( MEMORY[4] > 8u )
          return -1073741811;
        v17 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( v17 < 0 )
          return v17;
        KeSetUserHeteroCpuPolicyThread((__int64)Thread, v84);
        goto LABEL_32;
      case ThreadCpuAccountingInformation|ThreadAffinityMask:
        v101 = 0;
        v32 = 0LL;
        v107 = 0LL;
        P = 0LL;
        v100 = 0;
        if ( (_DWORD)v4 == 16 )
        {
          v25 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
          v98 = v25;
          if ( v25 < 0 )
            goto LABEL_82;
          v101 = 1;
          if ( v96 )
          {
            v133 = 0LL;
            v33 = 0x7FFFFFFF0000LL;
            if ( (unsigned __int64)ThreadInformation < 0x7FFFFFFF0000LL )
              v33 = (__int64)ThreadInformation;
            v133.m128i_i32[0] = *(_DWORD *)v33;
            v34 = *(_QWORD *)(v33 + 8);
            v133.m128i_i64[1] = v34;
            *(__m128i *)Src = v133;
            v35 = _mm_cvtsi128_si32(v133);
            if ( v35 )
            {
              if ( (v34 & 1) != 0 )
                ExRaiseDatatypeMisalignment();
              if ( v34 + v35 > 0x7FFFFFFF0000LL || v35 + v34 < v34 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v25 = v98;
            v32 = v107;
          }
          else
          {
            *(_OWORD *)Src = *(_OWORD *)ThreadInformation;
          }
          v36 = (unsigned __int16)Src[0];
          if ( ((__int64)Src[0] & 1) != 0 || LOWORD(Src[0]) > WORD1(Src[0]) )
          {
            v25 = -1073741811;
          }
          else
          {
            Pool2 = ExAllocatePool2(64LL, LOWORD(Src[0]) + 16LL, 1833855060LL);
            v32 = (void *)Pool2;
            v107 = (void *)Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2 + 16;
              *(_WORD *)Pool2 = v36;
              *(_WORD *)(Pool2 + 2) = v36;
              memmove((void *)(Pool2 + 16), Src[1], v36);
              --CurrentThread->KernelApcDisable;
              v38 = Thread;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
              v100 = 1;
              P = *(PVOID *)&v38[1].WaitBlockFill11[160];
              *(_QWORD *)&v38[1].WaitBlockFill11[160] = v32;
              v32 = 0LL;
              v107 = 0LL;
              EtwTraceThreadSetName(v38);
              goto LABEL_82;
            }
            v25 = -1073741670;
          }
        }
        else
        {
          v25 = -1073741820;
        }
        v98 = v25;
LABEL_82:
        if ( v100 )
        {
          v39 = Thread;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)&v39[1].WaitBlockList);
          KeAbPostRelease((ULONG_PTR)&v39[1].WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v25 = v98;
          v32 = v107;
        }
        if ( v101 )
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
        if ( P )
          ExFreePoolWithTag(P, 0x6D4E6854u);
        if ( v32 )
          ExFreePoolWithTag(v32, 0x6D4E6854u);
        return v25;
      case ThreadSuspendCount|ThreadAffinityMask:
        if ( (v4 & 7) != 0 || (unsigned int)v4 > 0x100 )
          return -1073741820;
        memmove(v138, ThreadInformation, v4);
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        LODWORD(v7) = KeSetSelectedCpuSetsThread((__int64)Thread, (unsigned int)v4 >> 3, v138);
        goto LABEL_21;
      case ThreadDynamicCodePolicyInfo:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v127 = *(_DWORD *)ThreadInformation;
        if ( v127 == 1 )
        {
          if ( ((__int64)CurrentThread->Process[2].ReadyListHead.Blink & 0x200) == 0 )
            return -1073741790;
          _InterlockedOr((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x40000u);
        }
        else
        {
          if ( v127 )
            return -1073741811;
          _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFFFBFFFF);
        }
        return 0;
      case ThreadDynamicCodePolicyInfo|ThreadTimes:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v85 = *(_DWORD *)ThreadInformation;
        v128 = *(_DWORD *)ThreadInformation;
        if ( !PreviousMode )
          goto LABEL_293;
        if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
          return -1073741727;
        LOBYTE(v86) = 81;
        if ( !(unsigned __int8)RtlTestProtectedAccess(BYTE2(CurrentThread->Process[2].Header.WaitListHead.Flink), v86) )
          return -1073741790;
LABEL_293:
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result >= 0 )
        {
          if ( v85 )
            _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x80000u);
          else
            _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFF7FFFF);
LABEL_176:
          ObfDereferenceObjectWithTag(Thread, 0x79517350u);
          return v98;
        }
        return result;
      case ThreadDynamicCodePolicyInfo|ThreadAffinityMask:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v87 = *(_DWORD *)ThreadInformation;
        v129 = *(_DWORD *)ThreadInformation;
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        v98 = result;
        if ( result < 0 )
          return result;
        if ( v87 )
          _InterlockedOr((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0x200000u);
        else
          _InterlockedAnd((volatile signed __int32 *)&Thread[1].SwapListEntry + 2, 0xFFDFFFFF);
        goto LABEL_176;
      case ThreadSubsystemInformation|ThreadPriority:
        if ( BugCheckParameter1 != -2LL )
          return -1073741811;
        if ( (_DWORD)v4 != 8 )
          return -1073741820;
        v118 = *(_QWORD *)ThreadInformation;
        v88 = KeGetCurrentThread();
        if ( v118 )
        {
          Thread = v88;
          if ( v88[1].WaitBlock[3].WaitListEntry.Blink != (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          result = ObpReferenceObjectByHandleWithTag(v118, 0x6D497350u, (__int64)&v108, 0LL, 0LL);
          if ( result < 0 )
            return result;
          v90 = (struct _LIST_ENTRY *)v108;
          if ( (*((_DWORD *)v108 + 385) & 2) == 0 )
          {
            ObfDereferenceObjectWithTag(v108, 0x6D497350u);
            return -1073741811;
          }
          v91 = IoThreadToProcess(Thread);
          PsGetProcessSilo((__int64)v91);
          IsSiloInSilo = PspIsSiloInSilo(v90);
          v93 = v90;
          if ( !IsSiloInSilo
            || (EffectiveServerSilo = PsGetEffectiveServerSilo((__int64)v90),
                ProcessServerSilo = PsGetProcessServerSilo((__int64)v91),
                v93 = v90,
                ProcessServerSilo != EffectiveServerSilo) )
          {
            ObfDereferenceObjectWithTag(v93, 0x6D497350u);
            return -1073741811;
          }
          PsAttachSiloToCurrentThread(v90);
        }
        else
        {
          if ( v88[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
            return -1073741811;
          v89 = PsAttachSiloToCurrentThread((struct _LIST_ENTRY *)0xFFFFFFFFFFFFFFFDLL);
          v28 = 1833530192;
          v27 = (PETHREAD)v89;
LABEL_52:
          ObfDereferenceObjectWithTag(v27, v28);
        }
        return 0;
      case ThreadCounterProfiling|ThreadIsIoPending:
        return -1073741637;
      case ThreadIdealProcessorEx|ThreadIsIoPending:
        if ( (_DWORD)v4 != 12 )
          return -1073741820;
        Object[0] = *(PVOID *)ThreadInformation;
        v45 = *((_DWORD *)ThreadInformation + 2);
        if ( LODWORD(Object[0]) != 1 || (HIDWORD(Object[0]) & 0xFFFFFFFE) != 0 || (~HIDWORD(Object[0]) & v45) != 0 )
          return -1073741811;
        if ( (BYTE4(Object[0]) & 1) != 0 )
        {
          if ( (v45 & 1) != 0 )
            v10 = 8;
        }
        else
        {
          v10 = 0;
        }
        result = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result < 0 )
          return result;
        PspSetThreadPpmPolicy(Thread, v10);
LABEL_50:
        v27 = Thread;
LABEL_51:
        v28 = 2035381072;
        goto LABEL_52;
      case ThreadCpuAccountingInformation|ThreadIsIoPending:
        if ( BugCheckParameter1 != -2LL || PreviousMode )
          return -1073741790;
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        v125 = *(_DWORD *)ThreadInformation;
        if ( v125 >= 2 )
          return -1073741811;
        v73 = KeGetCurrentThread();
        *((_DWORD *)&v73[1].SwapListEntry + 3) ^= (*((_DWORD *)&v73[1].SwapListEntry + 3) ^ (v125 << 11)) & 0x800;
        KeUpdateThreadCpuSets((__int64)v73);
        return 0;
      case ThreadIdealProcessorEx|ThreadIsTerminated:
        if ( (_DWORD)v4 != 4 )
          return -1073741820;
        if ( BugCheckParameter1 != -2LL )
          return -1073741790;
        v132 = *(_DWORD *)ThreadInformation;
        v68 = v132;
        if ( v132 > 1 )
          return -1073741811;
        result = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
        if ( result >= 0 )
        {
          v69 = Thread;
          *((_DWORD *)&Thread[1].SwapListEntry + 3) ^= (*((_DWORD *)&Thread[1].SwapListEntry + 3) ^ (v68 << 12)) & 0x1000;
          ObfDereferenceObjectWithTag(v69, 0x79517350u);
          return 0;
        }
        return result;
      default:
        return -1073741821;
    }
  }
  if ( BugCheckParameter1 != -2LL )
    return -1073741811;
  if ( (_DWORD)v4 != 8 )
    return -1073741820;
  v16 = *(HANDLE *)ThreadInformation;
  v119 = *(HANDLE *)ThreadInformation;
  v17 = ObpReferenceObjectByHandleWithTag(0xFFFFFFFFFFFFFFFEuLL, 0x79517350u, (__int64)&Thread, 0LL, 0LL);
  if ( v17 >= 0 )
  {
    Object[0] = 0LL;
    if ( v16 )
    {
      v17 = PspThreadFromTicket(&v119, Object);
      if ( v17 >= 0 )
      {
        PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
        PsImpersonateContainerOfThread((__int64)Object[0]);
        ObfDereferenceObject(Object[0]);
      }
    }
    else
    {
      PspRevertContainerImpersonation((ULONG_PTR)CurrentThread);
    }
LABEL_32:
    ObfDereferenceObjectWithTag(Thread, 0x79517350u);
  }
  return v17;
}
