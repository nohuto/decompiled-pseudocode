/*
 * XREFs of MiReadyToZeroNextLargePage @ 0x140274AB0
 * Callers:
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiSelectBestZeroingProcessor @ 0x140274D20 (MiSelectBestZeroingProcessor.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiReadyToZeroNextLargePage(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  __int64 v5; // r14
  KIRQL v6; // al
  int v7; // ebp
  unsigned __int64 v8; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int64 v14; // rbx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8
  PVOID Object[2]; // [rsp+40h] [rbp-98h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+50h] [rbp-88h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  *a2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 168) + 48LL);
  Object[0] = (PVOID)(v5 + 104);
  Object[1] = (PVOID)(a1 + 144);
  while ( (*(_DWORD *)(a1 + 136) & 2) != 0 )
  {
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 200) + 23160LL));
    v7 = *(_DWORD *)(a1 + 136);
    v8 = v6;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 200) + 23160LL));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
    if ( (v7 & 2) == 0 )
      break;
    *a2 = 1;
    if ( !KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray) )
      goto LABEL_16;
  }
  if ( *((_DWORD *)Object[0] + 1) )
  {
LABEL_16:
    v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 200) + 23160LL));
    *(_DWORD *)(a1 + 136) |= 4u;
    if ( *((_DWORD *)Object[0] + 1) )
      KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread());
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)(v2 + 200) + 23160LL));
    if ( KiIrqlFlags )
    {
      v15 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v14 <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
        v18 = v16->SchedulerAssist;
        v13 = (v17 & v18[5]) == 0;
        v18[5] &= v17;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
    __writecr8(v14);
    return 0LL;
  }
  else
  {
    while ( *(_DWORD *)(v5 + 16480) || dword_140C69560 )
    {
      if ( !KeWaitForSingleObject(Object[0], WrFreePage, 0, 0, (PLARGE_INTEGER)&MiFiveSeconds) )
        goto LABEL_16;
    }
    MiSelectBestZeroingProcessor(v2, a1);
    return 1LL;
  }
}
