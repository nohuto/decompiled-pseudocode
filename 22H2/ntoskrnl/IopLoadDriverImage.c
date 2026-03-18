/*
 * XREFs of IopLoadDriverImage @ 0x14035A970
 * Callers:
 *     NtLoadDriver @ 0x1407CEFA0 (NtLoadDriver.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287350 (PsIsCurrentThreadInServerSilo.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     IopLoadUnloadDriver @ 0x1407CF3E0 (IopLoadUnloadDriver.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLoadDriverImage(_OWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v4; // rax
  int v5; // edx
  void *v6; // rcx
  unsigned __int64 v7; // rdx
  void *Pool2; // rbx
  void *Src[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE WorkItem[80]; // [rsp+50h] [rbp-58h] BYREF

  *(_OWORD *)Src = 0LL;
  memset(WorkItem, 0, sizeof(WorkItem));
  if ( !a1 )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
      return 3221225569LL;
    if ( PsIsCurrentThreadInServerSilo() )
      return 0LL;
    v4 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v4 = (__int64)a1;
    v5 = *(_DWORD *)v4;
    LODWORD(Src[0]) = v5;
    v6 = *(void **)(v4 + 8);
    Src[1] = v6;
    if ( !(_WORD)v5 )
      return 3221225485LL;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = (unsigned __int64)v6 + (unsigned __int16)v5;
    if ( v7 > 0x7FFFFFFF0000LL || v7 < (unsigned __int64)v6 )
      MEMORY[0x7FFFFFFF0000] = 0;
    Pool2 = (void *)ExAllocatePool2(289LL, LOWORD(Src[0]), 844001097LL);
    memmove(Pool2, Src[1], LOWORD(Src[0]));
    Src[1] = Pool2;
  }
  else
  {
    *(_OWORD *)Src = *a1;
    Pool2 = 0LL;
  }
  WorkItem[34] = 6;
  *(_DWORD *)&WorkItem[36] = 0;
  *(_QWORD *)&WorkItem[48] = &WorkItem[40];
  *(_QWORD *)&WorkItem[40] = &WorkItem[40];
  *(_QWORD *)&WorkItem[56] = 0LL;
  *(_QWORD *)&WorkItem[64] = Src;
  if ( CurrentThread->ApcState.Process == PsInitialSystemProcess )
  {
    IopLoadUnloadDriver(WorkItem);
  }
  else
  {
    *(_QWORD *)&WorkItem[16] = IopLoadUnloadDriver;
    *(_QWORD *)&WorkItem[24] = WorkItem;
    *(_QWORD *)WorkItem = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)WorkItem, DelayedWorkQueue);
    KeWaitForSingleObject(&WorkItem[32], UserRequest, 0, 0, 0LL);
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return *(unsigned int *)&WorkItem[72];
}
