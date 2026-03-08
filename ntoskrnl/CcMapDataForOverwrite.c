/*
 * XREFs of CcMapDataForOverwrite @ 0x140242228
 * Callers:
 *     CcPreparePinWrite @ 0x1406B6780 (CcPreparePinWrite.c)
 * Callees:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     CcMapDataCommon @ 0x1406B6954 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, unsigned int a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v6; // r13d
  struct _KTHREAD *CurrentThread; // r14
  __int64 v8; // rbx
  unsigned int v9; // r15d
  unsigned __int64 *v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // eax
  __int64 result; // rax
  unsigned __int8 OldIrql; // bl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // [rsp+30h] [rbp-78h]
  __int64 v22; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-68h]
  struct _KTHREAD *v24; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  int v26; // [rsp+B0h] [rbp+8h]
  char v27; // [rsp+C0h] [rbp+18h] BYREF
  _QWORD *v28; // [rsp+C8h] [rbp+20h]

  v28 = a4;
  v26 = a1;
  v6 = (int)a2;
  v22 = 0LL;
  v21 = (a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v24 = CurrentThread;
  v27 = 1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( (*(_DWORD *)(v8 + 152) & 0x20000) == 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v8 + 536) + 768LL), &LockHandle);
    *(_DWORD *)(v8 + 152) |= 0x20000u;
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v20 = (v19 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
  v9 = BYTE4(CurrentThread[1].Queue) + 2 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v10 = a5;
  CcMapDataCommon(v26, v6, a3, 1, (__int64)&v22, (__int64)a5);
  v11 = *v10;
  v23 = v11;
  v12 = v21;
  while ( v12 )
  {
    v27 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    v13 = v12 - 1;
    v12 = v13;
    if ( v13 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      if ( v13 > 0xF )
        v13 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v13;
    }
    MmCheckCachedPageStates(v11, 1LL, 5, &v27);
    if ( !v27 )
      MmCheckCachedPageStates(v11, 1LL, 4, 0LL);
    v11 += 4096LL;
    v23 = v11;
  }
  BYTE4(CurrentThread[1].Queue) = v9 & 1;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v9 >> 1;
  __addgsdword(0x8490u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  result = v22;
  *v28 = v22;
  return result;
}
