/*
 * XREFs of MiDeleteHardwareAccelerators @ 0x140652540
 * Callers:
 *     MiShutdownSystem @ 0x140AA8A00 (MiShutdownSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiWakeLargePageWaiters @ 0x14064DA54 (MiWakeLargePageWaiters.c)
 *     MiWakeAllZeroConductors @ 0x140653030 (MiWakeAllZeroConductors.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void MiDeleteHardwareAccelerators()
{
  unsigned __int64 v0; // rdi
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // rbx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  int v15; // eax
  _DWORD *v16; // r8

  v0 = ExAcquireSpinLockExclusive(&dword_140C694A0);
  byte_140C69494 = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C694A0);
  v4 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v0 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v4 = (unsigned int)(v0 + 1);
      v1 = -1LL << ((unsigned __int8)v0 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)v1;
      v8 = (v7 & SchedulerAssist[5]) == 0;
      v2 = (unsigned int)v7 & SchedulerAssist[5];
      SchedulerAssist[5] = v2;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v0);
  MiWakeAllZeroConductors(v4, v1, v2, SchedulerAssist);
  ExAcquireSpinLockExclusive(&dword_140C694A0);
  v9 = qword_140C69480;
  if ( qword_140C69480 != &qword_140C69480 )
  {
    do
    {
      v10 = *(_QWORD *)v9;
      if ( v9[12] )
      {
        v9[13] |= 1u;
      }
      else
      {
        v11 = (_QWORD *)*((_QWORD *)v9 + 1);
        if ( *(_DWORD **)(v10 + 8) != v9 || (_DWORD *)*v11 != v9 )
          __fastfail(3u);
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        v12 = *(_QWORD *)(qword_140C65720 + 376LL * (unsigned int)v9[6] + 368);
        --dword_140C69490;
        --*(_WORD *)(v12 + 10);
        --*(_WORD *)(v12 + 16);
        MiWakeLargePageWaiters(*((_QWORD **)v9 + 5));
        ExFreePoolWithTag(v9, 0);
      }
      v9 = (_DWORD *)v10;
    }
    while ( (PVOID *)v10 != &qword_140C69480 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C694A0);
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && (unsigned __int8)v0 <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v0 + 1));
      v16 = v14->SchedulerAssist;
      v8 = (v15 & v16[5]) == 0;
      v16[5] &= v15;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  __writecr8(v0);
}
