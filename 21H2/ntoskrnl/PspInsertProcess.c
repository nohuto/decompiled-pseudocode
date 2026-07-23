/*
 * XREFs of PspInsertProcess @ 0x1406971A0
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     PspUnlockProcessExclusive @ 0x14024A0C8 (PspUnlockProcessExclusive.c)
 *     PspUnlockProcessListExclusive @ 0x140285280 (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140285664 (PspLockProcessListExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     PspValidateJobAffinityState @ 0x140615DFC (PspValidateJobAffinityState.c)
 *     SeCreateAccessStateEx @ 0x1406566F0 (SeCreateAccessStateEx.c)
 *     ObCheckRefTraceProcess @ 0x140697404 (ObCheckRefTraceProcess.c)
 *     DbgkCopyProcessDebugPort @ 0x14069744C (DbgkCopyProcessDebugPort.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406981E0 (SeAuditingWithTokenForSubcategory.c)
 *     PspImplicitAssignProcessToJob @ 0x1406F519C (PspImplicitAssignProcessToJob.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     SeAuditProcessCreation @ 0x1407BCD28 (SeAuditProcessCreation.c)
 *     PspDeleteObjectAccessState @ 0x14090A23C (PspDeleteObjectAccessState.c)
 */

__int64 __fastcall PspInsertProcess(
        char *Object,
        struct _KPROCESS *a2,
        ACCESS_MASK a3,
        unsigned int a4,
        HANDLE Handle,
        char a6,
        __int64 a7,
        PACCESS_STATE AccessState)
{
  struct _KTHREAD *CurrentThread; // r14
  struct _DMA_ADAPTER *v11; // rbp
  _KPROCESS *Process; // r13
  int inserted; // edi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int v17; // ebp
  struct _KPROCESS *v18; // rdx
  struct _ACCESS_STATE *v19; // rsi
  __int64 v20; // rcx
  NTSTATUS v22; // eax
  PVOID v23; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK v24; // [rsp+90h] [rbp+18h]

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  Process = CurrentThread->ApcState.Process;
  *(_DWORD *)(*((_QWORD *)Object + 174) + 40LL) = *((_DWORD *)Object + 272);
  if ( (unsigned __int8)SeAuditingWithTokenForSubcategory(134LL) )
    SeAuditProcessCreation((PEPROCESS)Object);
  if ( !a2
    || !a2[1].Affinity.Bitmap[16]
    || (inserted = PspImplicitAssignProcessToJob(a2[1].Affinity.Bitmap[16], Object, a4), inserted >= 0) )
  {
    PspLockProcessListExclusive((__int64)CurrentThread);
    v15 = (_QWORD *)qword_140C1E258;
    v16 = Object + 1096;
    if ( *(__int64 **)qword_140C1E258 != &PsActiveProcessHead )
      __fastfail(3u);
    *((_QWORD *)Object + 138) = qword_140C1E258;
    *v16 = &PsActiveProcessHead;
    *v15 = v16;
    qword_140C1E258 = (__int64)(Object + 1096);
    *((_QWORD *)Object + 287) = ++PspProcessSequenceNumber;
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( (Process[1].DirectoryTableBase & 0x800000000LL) != 0 )
    {
      inserted = -1073741558;
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
               inserted = v22,
               v22 >= 0) )
    {
      inserted = DbgkCopyProcessDebugPort((ULONG_PTR)Object);
      if ( v11 )
        HalPutDmaAdapter(v11);
      if ( inserted >= 0 )
      {
        v17 = 0;
        if ( !a2 || (v18 = PsInitialSystemProcess, a2 != PsInitialSystemProcess) )
        {
          if ( (a6 & 2) != 0 )
          {
            v18 = (struct _KPROCESS *)Object;
            v17 = 1;
          }
          else
          {
            v18 = Process;
          }
        }
        v19 = AccessState;
        inserted = SeCreateAccessStateEx(
                     0LL,
                     v18,
                     AccessState,
                     &AccessState[1].OperationID,
                     v24,
                     (GENERIC_MAPPING *)((char *)PsProcessType + 76));
        if ( inserted >= 0 )
        {
          ObfReferenceObjectWithTag(Object, 0x72437350u);
          inserted = ObInsertObjectEx((PADAPTER_OBJECT)Object, v19, v17, 0LL, 0LL);
          if ( inserted >= 0 )
          {
            ObfDereferenceObjectWithTag(Object, 0x72437350u);
            v20 = *((_QWORD *)Object + 162);
            if ( !v20 )
            {
              _InterlockedOr((volatile signed __int32 *)Object + 281, 0x4000000u);
              goto LABEL_20;
            }
            inserted = PspValidateJobAffinityState(v20, (__int64)Object);
            if ( inserted >= 0 )
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
  return (unsigned int)inserted;
}
