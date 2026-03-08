/*
 * XREFs of EtwpLockUnlockBufferList @ 0x140205E34
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x14069310C (EtwpFlushActiveBuffers.c)
 *     EtwpBufferingModeFlush @ 0x1408A3088 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140201D54 (ExfAcquireReleasePushLockExclusive.c)
 *     KeTestSpinLock @ 0x1402053F0 (KeTestSpinLock.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall EtwpLockUnlockBufferList(__int64 a1)
{
  KSPIN_LOCK *v1; // rbx
  KSPIN_LOCK v2; // rax
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v5; // rdx
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  signed __int32 v12[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 696);
  if ( *(_DWORD *)(a1 + 300) == 1 )
  {
    _InterlockedOr(v12, 0);
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
      LOBYTE(v2) = ExfAcquireReleasePushLockExclusive(a1 + 696);
  }
  else
  {
    LOBYTE(v2) = KeTestSpinLock((PKSPIN_LOCK)(a1 + 696));
    if ( !(_BYTE)v2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 15 )
          LODWORD(v5) = 0x8000;
        else
          v5 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v5;
      }
      KxAcquireSpinLock(v1);
      KxReleaseSpinLock(v1);
      if ( KiIrqlFlags )
      {
        v6 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return v2;
}
