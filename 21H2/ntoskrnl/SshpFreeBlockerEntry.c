/*
 * XREFs of SshpFreeBlockerEntry @ 0x14057FED0
 * Callers:
 *     SshpDereferenceBlocker @ 0x140617024 (SshpDereferenceBlocker.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     SshpSetBlockerActive @ 0x14023AF30 (SshpSetBlockerActive.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SshpFreeBlockerEntry(_QWORD *P)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  KIRQL v5; // al
  int v6; // ecx
  bool v7; // zf
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  void *v13; // rcx

  v1 = (_QWORD *)P[36];
  v3 = P[35];
  v4 = v1[4];
  if ( v3 )
  {
    do
    {
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
      v6 = *((_DWORD *)P + 3);
      v7 = *(_DWORD *)(v3 + 12) == v6;
      *(_DWORD *)(v3 + 12) -= v6;
      v8 = v5;
      if ( v7 )
        SshpSetBlockerActive(v3, 0);
      KxReleaseSpinLock((PKSPIN_LOCK)v3);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v7 = (v12 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v12;
            if ( v7 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      v3 = *(_QWORD *)(v3 + 280);
    }
    while ( v3 );
    v1 = (_QWORD *)P[36];
  }
  v13 = (void *)v1[11];
  if ( v13 )
    ExFreePoolWithTag(v13, *(_DWORD *)(v4 + 24));
  ExFreePoolWithTag(v1, *(_DWORD *)(v4 + 24));
  ExFreePoolWithTag(P, *(_DWORD *)(v4 + 24));
}
