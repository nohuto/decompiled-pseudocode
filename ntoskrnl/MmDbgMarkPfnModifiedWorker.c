/*
 * XREFs of MmDbgMarkPfnModifiedWorker @ 0x1403A4834
 * Callers:
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14032D790 (MiCaptureDirtyBitToPfn.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void MmDbgMarkPfnModifiedWorker()
{
  __int64 v0; // rdi
  __int64 *v1; // r14
  __int64 v2; // rsi
  __int64 v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf

  v0 = 0LL;
  v1 = qword_140C67CD8;
  do
  {
    v2 = *v1;
    if ( (*v1 & 1) != 0 )
    {
      _InterlockedAnd64(&qword_140C67CD8[v0], 0LL);
      v3 = v2 - 1;
      v4 = (unsigned __int8)MiLockPageInline(v3);
      v5 = MiCaptureDirtyBitToPfn(v3);
      MiRemoveLockedPageChargeAndDecRef(v3);
      v6 = *(_QWORD *)(qword_140C67048 + 8 * ((*(_QWORD *)(v3 + 40) >> 43) & 0x3FFLL));
      _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v11 = (v10 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v10;
          if ( v11 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(v4);
      if ( v5 )
        MiReleasePageFileInfo(v6, v5, 0);
    }
    v0 = (unsigned int)(v0 + 1);
    ++v1;
  }
  while ( (unsigned int)v0 < 0x20 );
}
