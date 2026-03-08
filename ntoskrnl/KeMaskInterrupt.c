/*
 * XREFs of KeMaskInterrupt @ 0x14028E5A8
 * Callers:
 *     KeDisconnectInterrupt @ 0x14028E38C (KeDisconnectInterrupt.c)
 *     IopMaskInterrupt @ 0x1403AE79C (IopMaskInterrupt.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KeRemoveQueueDpcEx @ 0x14028DB50 (KeRemoveQueueDpcEx.c)
 *     KiAcquireInterruptConnectLock @ 0x14028FEA0 (KiAcquireInterruptConnectLock.c)
 *     KiIsInterruptTypeSecondary @ 0x140290340 (KiIsInterruptTypeSecondary.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402AA110 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetTargetProcessorDpcEx @ 0x1403007C0 (KeSetTargetProcessorDpcEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x1403644D0 (KeGetProcessorNumberFromIndex.c)
 *     KiMaskInterruptInternal @ 0x1403AEACC (KiMaskInterruptInternal.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiMaskSecondaryInterruptInternal @ 0x14056F638 (KiMaskSecondaryInterruptInternal.c)
 */

__int64 __fastcall KeMaskInterrupt(__int64 *a1, unsigned __int8 a2, __int64 a3, struct _KDPC *a4)
{
  char IsInterruptTypeSecondary; // al
  NTSTATUS ProcessorNumberFromIndex; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r14
  unsigned __int8 CurrentIrql; // si
  unsigned int Number; // edx
  unsigned __int8 v15; // cl
  __int64 v16; // r8
  char v17; // r12
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rdx
  unsigned __int8 v21; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  __int64 v26; // rsi
  unsigned __int8 v27; // al
  unsigned __int8 v28; // di
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  unsigned __int8 v32[4]; // [rsp+30h] [rbp-20h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-1Ch] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-18h] BYREF

  PreviousAffinity = 0LL;
  v32[0] = 0;
  ProcNumber = 0;
  IsInterruptTypeSecondary = KiIsInterruptTypeSecondary(a3);
  ProcessorNumberFromIndex = 0;
  LOBYTE(v10) = 0;
  if ( a2 )
  {
    while ( 1 )
    {
      v11 = a1[(unsigned __int8)v10];
      _m_prefetchw((const void *)(v11 + 104));
      if ( (_InterlockedOr((volatile signed __int32 *)(v11 + 104), 1u) & 1) != 0 )
        break;
      LOBYTE(v10) = v10 + 1;
      if ( (unsigned __int8)v10 >= a2 )
        goto LABEL_4;
    }
    return (unsigned int)-2147483611;
  }
LABEL_4:
  if ( *(_DWORD *)(a3 + 8) )
    return 0LL;
  v12 = *(unsigned int *)(a3 + 64);
  if ( IsInterruptTypeSecondary != 0 )
  {
    ProcessorNumberFromIndex = KiMaskSecondaryInterruptInternal(*(unsigned int *)(*a1 + 88), (unsigned int)v12, v10);
LABEL_15:
    if ( ProcessorNumberFromIndex == 296 )
      return 0;
    return (unsigned int)ProcessorNumberFromIndex;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v20) = 0x8000;
    else
      v20 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    SchedulerAssist[5] |= v20;
  }
  Number = KeGetPcr()->Prcb.Number;
  v15 = 0;
  v32[0] = CurrentIrql;
  if ( a2 )
  {
    while ( 1 )
    {
      v16 = a1[v15];
      if ( *(_DWORD *)(v16 + 96) == Number )
        break;
      if ( ++v15 >= a2 )
      {
        v17 = 0;
        goto LABEL_13;
      }
    }
    ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v16 + 88), (unsigned int)v12);
    v17 = 1;
  }
  else
  {
    v17 = 0;
  }
LABEL_13:
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v23 = CurrentPrcb->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v25 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  if ( v17 )
    goto LABEL_15;
  v26 = *a1;
  if ( KeGetCurrentIrql() < 2u )
  {
    KiAcquireInterruptConnectLock(*(unsigned int *)(v26 + 96), v32, &PreviousAffinity);
    ProcessorNumberFromIndex = KiMaskInterruptInternal(*(unsigned int *)(v26 + 88), (unsigned int)v12);
    if ( KiIrqlFlags && (v27 = KeGetCurrentIrql(), (KiIrqlFlags & 1) != 0) && v27 <= 0xFu )
    {
      v28 = v32[0];
      if ( v32[0] <= 0xFu && v27 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v28 = v32[0];
        v31 = ~(unsigned __int16)(-1LL << (v32[0] + 1));
        v25 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    else
    {
      v28 = v32[0];
    }
    __writecr8(v28);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_15;
  }
  if ( a4 )
  {
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(*(_DWORD *)(v26 + 96), &ProcNumber);
    if ( ProcessorNumberFromIndex >= 0 )
    {
      KeRemoveQueueDpcEx((__int64)a4, 0);
      a4->TargetInfoAsUlong = 275;
      a4->DeferredRoutine = (PKDEFERRED_ROUTINE)KiMaskInterruptDpc;
      a4->DeferredContext = 0LL;
      a4->DpcData = 0LL;
      a4->ProcessorHistory = 0LL;
      ProcessorNumberFromIndex = KeSetTargetProcessorDpcEx(a4, &ProcNumber);
      if ( ProcessorNumberFromIndex >= 0 )
        KiInsertQueueDpc((ULONG_PTR)a4, *(unsigned int *)(v26 + 88), v12, 0LL, 0);
    }
    goto LABEL_15;
  }
  return (unsigned int)-1073741811;
}
