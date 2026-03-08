/*
 * XREFs of KdRegisterDebuggerDataBlock @ 0x140AAE5A4
 * Callers:
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KdRegisterDebuggerDataBlock(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbx
  __int64 *v4; // rax
  __int64 *v5; // rax
  char result; // al
  __int64 *v7; // rcx
  unsigned __int8 v8; // al
  struct _KPRCB *v9; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v16; // edx

  v3 = KeAcquireSpinLockRaiseToDpc(&KdpDataSpinLock);
  v4 = (__int64 *)KdpDebuggerDataListHead;
  do
  {
    if ( v4 == &KdpDebuggerDataListHead )
    {
      *(_DWORD *)(a2 + 16) = 1195525195;
      *(_DWORD *)(a2 + 20) = 928;
      v5 = (__int64 *)qword_140C56B88;
      if ( *(__int64 **)qword_140C56B88 != &KdpDebuggerDataListHead )
        __fastfail(3u);
      *(_QWORD *)a2 = &KdpDebuggerDataListHead;
      *(_QWORD *)(a2 + 8) = v5;
      *v5 = a2;
      qword_140C56B88 = a2;
      KxReleaseSpinLock((volatile signed __int64 *)&KdpDataSpinLock);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v12 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      result = 1;
      goto LABEL_6;
    }
    v7 = v4;
    v4 = (__int64 *)*v4;
  }
  while ( v7 != (__int64 *)a2 && *((_DWORD *)v7 + 4) != 1195525195 );
  KxReleaseSpinLock((volatile signed __int64 *)&KdpDataSpinLock);
  if ( KiIrqlFlags )
  {
    v8 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v8 >= 2u )
    {
      v9 = KeGetCurrentPrcb();
      v10 = v9->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v12 = (v11 & v10[5]) == 0;
      v10[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
  }
  result = 0;
LABEL_6:
  __writecr8(v3);
  return result;
}
