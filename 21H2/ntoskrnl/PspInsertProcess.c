/*
 * XREFs of PspInsertProcess @ 0x14066D0AC
 * Callers:
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140831810 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x14085DACC (PspCreateProcess.c)
 * Callees:
 *     PspUnlockProcessListExclusive @ 0x140203428 (PspUnlockProcessListExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     PspInheritSyscallProvider @ 0x1406598AC (PspInheritSyscallProvider.c)
 *     ObCheckRefTraceProcess @ 0x14066D3F8 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14066D440 (DbgkCopyProcessDebugPort.c)
 *     PspImplicitAssignProcessToJob @ 0x140682900 (PspImplicitAssignProcessToJob.c)
 *     PspValidateJobAffinityState @ 0x1406DAEBC (PspValidateJobAffinityState.c)
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14079D560 (SeAuditingWithTokenForSubcategory.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     SeAuditProcessCreation @ 0x140847BB4 (SeAuditProcessCreation.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        __int64 a2,
        int a3,
        int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r15
  PVOID v11; // r14
  _KPROCESS *Process; // r13
  int inserted; // esi
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  NTSTATUS v16; // eax
  int v17; // r14d
  int v18; // edx
  struct _ACCESS_STATE *v19; // rbp
  __int64 v20; // rcx
  PVOID v22; // [rsp+88h] [rbp+10h] BYREF
  int v23; // [rsp+90h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+20h]

  v24 = a4;
  v23 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(133LL) )
    SeAuditProcessCreation(Object, a7);
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 1296) )
    {
      inserted = PspImplicitAssignProcessToJob(*(PVOID *)(a2 + 1296));
      if ( inserted < 0 )
        goto LABEL_26;
    }
    inserted = PspInheritSyscallProvider(Object, a2);
    if ( inserted < 0 )
      goto LABEL_26;
  }
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v14 = (_QWORD *)qword_140C1BF88;
  v15 = Object + 1096;
  if ( *(__int64 **)qword_140C1BF88 != &PsActiveProcessHead )
    __fastfail(3u);
  *((_QWORD *)Object + 138) = qword_140C1BF88;
  *v15 = &PsActiveProcessHead;
  *v14 = v15;
  qword_140C1BF88 = (__int64)(Object + 1096);
  *((_QWORD *)Object + 287) = ++PspProcessSequenceNumber;
  PspUnlockProcessListExclusive((__int64)CurrentThread);
  if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
  {
    inserted = -1073741558;
LABEL_26:
    if ( (a6 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(Object + 1080);
      KeAbPostRelease((ULONG_PTR)(Object + 1080));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    return (unsigned int)inserted;
  }
  if ( Handle )
  {
    v22 = 0LL;
    v16 = ObReferenceObjectByHandle(Handle, 2u, DbgkDebugObjectType, KeGetCurrentThread()->PreviousMode, &v22, 0LL);
    v11 = v22;
    inserted = v16;
    if ( v16 < 0 )
      goto LABEL_26;
  }
  inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
  if ( v11 )
    ObfDereferenceObject(v11);
  if ( inserted < 0 )
    goto LABEL_26;
  v17 = 0;
  if ( !a2 || (v18 = (int)PsInitialSystemProcess, (PEPROCESS)a2 != PsInitialSystemProcess) )
  {
    if ( (a6 & 2) != 0 )
    {
      v18 = (int)Object;
      v17 = 1;
    }
    else
    {
      v18 = (int)Process;
    }
  }
  v19 = AccessState;
  inserted = SeCreateAccessStateEx(
               0,
               v18,
               (_DWORD)AccessState,
               (int)AccessState + 160,
               v23,
               (__int64)PsProcessType + 76);
  if ( inserted < 0 )
    goto LABEL_26;
  ObfReferenceObjectWithTag(Object, 0x72437350u);
  inserted = ObInsertObjectEx(Object, v19, v17, 0LL, 0LL);
  if ( inserted < 0 )
  {
LABEL_25:
    SepDeleteAccessState((__int64)v19);
    SeReleaseSubjectContext(&v19->SubjectSecurityContext);
    goto LABEL_26;
  }
  ObfDereferenceObjectWithTag(Object, 0x72437350u);
  v20 = *((_QWORD *)Object + 162);
  if ( v20 )
  {
    inserted = PspValidateJobAffinityState(v20, Object);
    if ( inserted < 0 )
      goto LABEL_25;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
  }
  ObCheckRefTraceProcess(Object);
  if ( (a6 & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(Object + 1080);
    KeAbPostRelease((ULONG_PTR)(Object + 1080));
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  return 0LL;
}
