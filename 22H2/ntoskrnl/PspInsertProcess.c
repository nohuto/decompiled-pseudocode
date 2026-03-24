/*
 * XREFs of PspInsertProcess @ 0x140607B70
 * Callers:
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE380 (PspCreateProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x140251C28 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x14025200C (PspLockProcessListExclusive.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockProcessExclusive @ 0x140324DF8 (PspUnlockProcessExclusive.c)
 *     PspImplicitAssignProcessToJob @ 0x140605FB0 (PspImplicitAssignProcessToJob.c)
 *     ObCheckRefTraceProcess @ 0x140607DD4 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x140607E1C (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140608B90 (SeAuditingWithTokenForSubcategory.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     PspValidateJobAffinityState @ 0x1406998FC (PspValidateJobAffinityState.c)
 *     SeCreateAccessStateEx @ 0x1406DA6C0 (SeCreateAccessStateEx.c)
 *     SeAuditProcessCreation @ 0x1407BCD58 (SeAuditProcessCreation.c)
 *     PspDeleteObjectAccessState @ 0x14090A12C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        int a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v11; // rbp
  _KPROCESS *Process; // r13
  int AccessState; // edi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // ebp
  int v18; // edx
  __int64 v19; // rsi
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  PVOID v23; // [rsp+88h] [rbp+10h] BYREF
  int v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL, 0LL) )
    SeAuditProcessCreation((ULONG_PTR)Object);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (AccessState = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], (__int64)Object, a4), AccessState >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v15 = (_QWORD *)qword_140C1E218;
    v16 = Object + 1096;
    if ( *(__int64 **)qword_140C1E218 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 138) = qword_140C1E218;
    *v16 = &PsActiveProcessHead;
    *v15 = v16;
    qword_140C1E218 = (__int64)(Object + 1096);
    *((_QWORD *)Object + 287) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      AccessState = -1073741558;
    }
    else if ( !Handle
           || (v23 = 0LL,
               v22 = ObReferenceObjectByHandle(
                       Handle,
                       2u,
                       DbgkDebugObjectType,
                       KeGetCurrentThread()->PreviousMode,
                       &v23,
                       0LL),
               v11 = (struct _DMA_ADAPTER *)v23,
               AccessState = v22,
               v22 >= 0) )
    {
      AccessState = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v11 )
        HalPutDmaAdapter(v11);
      if ( AccessState >= 0 )
      {
        v17 = 0;
        if ( !a2 || (v18 = (int)PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
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
        v19 = a8;
        AccessState = SeCreateAccessStateEx(0, v18, a8, (int)a8 + 160, v24, (__int64)PsProcessType + 76);
        if ( AccessState >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          AccessState = ObInsertObjectEx((PADAPTER_OBJECT)Object, v17, 0LL, 0LL);
          if ( AccessState >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v20 = *((_QWORD *)Object + 162);
            if ( !v20 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
              goto LABEL_20;
            }
            AccessState = PspValidateJobAffinityState(v20, Object);
            if ( AccessState >= 0 )
            {
LABEL_20:
              ObCheckRefTraceProcess(Object);
              if ( (a6 & 1) != 0 )
                PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
              return 0LL;
            }
          }
          PspDeleteObjectAccessState(v19);
        }
      }
    }
  }
  if ( (a6 & 1) != 0 )
    PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return (unsigned int)AccessState;
}
