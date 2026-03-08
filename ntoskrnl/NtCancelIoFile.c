/*
 * XREFs of NtCancelIoFile @ 0x14076FE10
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x14023EBCC (IopReferenceFileObject.c)
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IoCancelIrp @ 0x1402E4F50 (IoCancelIrp.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall NtCancelIoFile(void *a1, unsigned __int64 a2)
{
  char v4; // r15
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r8
  __int64 v7; // rcx
  __int64 result; // rax
  struct _KTHREAD *v9; // rax
  unsigned __int8 CurrentIrql; // si
  unsigned int *p_SystemCallNumber; // rdi
  unsigned int *i; // rbx
  PVOID v13; // rbx
  char v14; // bl
  unsigned __int8 v15; // si
  unsigned int *j; // rcx
  unsigned __int8 v17; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v20; // edx
  bool v21; // zf
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  LARGE_INTEGER Interval; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v7 = a2;
    *(_DWORD *)v7 = *(_DWORD *)v7;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = KeGetCurrentThread();
    ++v9->OtherOperationCount;
    __incgsdword(0x2EE4u);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    p_SystemCallNumber = &CurrentThread[1].SystemCallNumber;
    for ( i = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != i; i = *(unsigned int **)i )
    {
      if ( *((PVOID *)i + 20) == Object )
      {
        v4 = 1;
        IoCancelIrp((PIRP)(i - 8));
      }
    }
    if ( KiIrqlFlags )
    {
      v17 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v21 = (v20 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v20;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    if ( v4 )
    {
      Interval.QuadPart = -100000LL;
      while ( 2 )
      {
        v14 = 0;
        v15 = KeGetCurrentIrql();
        __writecr8(1uLL);
        for ( j = *(unsigned int **)p_SystemCallNumber; p_SystemCallNumber != j; j = *(unsigned int **)j )
        {
          if ( *((PVOID *)j + 20) == Object )
          {
            v14 = 1;
            break;
          }
        }
        if ( KiIrqlFlags )
        {
          v22 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && v15 <= 0xFu && v22 >= 2u )
          {
            v23 = KeGetCurrentPrcb();
            v24 = v23->SchedulerAssist;
            v25 = ~(unsigned __int16)(-1LL << (v15 + 1));
            v21 = (v25 & v24[5]) == 0;
            v24[5] &= v25;
            if ( v21 )
              KiRemoveSystemWorkPriorityKick((__int64)v23);
          }
        }
        __writecr8(v15);
        if ( v14 )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          continue;
        }
        break;
      }
    }
    v13 = Object;
    IopCancelIrpsInFileObjectList(
      (__int64)Object,
      (__int64)KeGetCurrentThread()->ApcState.Process,
      0LL,
      (__int64)KeGetCurrentThread(),
      1,
      0);
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 8) = 0LL;
    ObfDereferenceObject(v13);
    return 0LL;
  }
  return result;
}
