/*
 * XREFs of PopFxAllocatePowerIrp @ 0x1402BAC6C
 * Callers:
 *     PopAllocateIrp @ 0x1402BA774 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x140305F80 (IoAcquireRemoveLockEx.c)
 *     PopFxAddLogEntry @ 0x140306584 (PopFxAddLogEntry.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7,
        PEX_SPIN_LOCK SpinLock)
{
  KIRQL v12; // al
  __int64 v13; // rdi
  unsigned __int64 v14; // r12
  NTSTATUS v15; // esi
  signed __int32 v16; // edx
  char v17; // al
  unsigned int v18; // edx
  __int16 v19; // ax
  _BOOL8 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  bool v27; // zf
  volatile LONG *SpinLocka; // [rsp+98h] [rbp+40h]

  SpinLocka = (volatile LONG *)(a1 + 88);
  *(_QWORD *)SpinLock = 0LL;
  *a7 = 0LL;
  v12 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v13 = *(_QWORD *)(a1 + 80);
  v14 = v12;
  if ( !v13 )
  {
    v15 = -1073741130;
    goto LABEL_19;
  }
  v15 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v13 + 240), 0LL, &Src, 1u, 0x20u);
  if ( v15 < 0 )
    goto LABEL_19;
  _m_prefetchw((const void *)(v13 + 32));
  v16 = _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) & 0x10;
  _m_prefetchw((const void *)(v13 + 32));
  v17 = _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0);
  if ( v16 )
  {
    if ( (v17 & 0x20) == 0
      || (_m_prefetchw((const void *)(v13 + 32)),
          v18 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 8) & 1,
          _m_prefetchw((const void *)(v13 + 32)),
          v18 != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 9) & 1)) )
    {
LABEL_7:
      _m_prefetchw((const void *)(v13 + 32));
      v19 = _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0);
      _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v13 + 32), 0x200u);
      v15 = 259;
      v20 = (v19 & 0x200) != 0;
      *(_QWORD *)(v13 + 8 * v20 + 512) = a2;
      *(_DWORD *)(v13 + 4 * v20 + 528) = a3;
      *(_QWORD *)(v13 + 8 * v20 + 536) = a4;
      *(_QWORD *)(v13 + 8 * v20 + 552) = a5;
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  if ( (v17 & 0x10) != 0 )
    goto LABEL_17;
  if ( !a6 )
  {
    _m_prefetchw((const void *)(v13 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) & 0x20) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v13 + 568));
      v15 = 0;
      *a7 = *(_QWORD *)(v13 + 16);
      *(_QWORD *)SpinLock = *(_QWORD *)(v13 + 24);
      goto LABEL_19;
    }
    _m_prefetchw((const void *)(v13 + 32));
    v22 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 8) & 1;
    _m_prefetchw((const void *)(v13 + 32));
    if ( v22 != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 9) & 1) )
      goto LABEL_7;
LABEL_16:
    v15 = -1073741670;
LABEL_17:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 244), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(v13 + 248), 0, 0);
    goto LABEL_19;
  }
  _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0);
  _InterlockedXor((volatile signed __int32 *)(v13 + 32), 0x100u);
  _m_prefetchw((const void *)(v13 + 32));
  v21 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 8) & 1;
  _m_prefetchw((const void *)(v13 + 32));
  if ( v21 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 0) >> 9) & 1) )
    _InterlockedAnd((volatile signed __int32 *)(v13 + 32), 0xFFFFFFDF);
  _InterlockedOr((volatile signed __int32 *)(v13 + 32), 0x10u);
  v15 = 0;
  *a7 = *(_QWORD *)(v13 + 16);
  *(_QWORD *)SpinLock = *(_QWORD *)(v13 + 24);
LABEL_19:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v14 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = (v25 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v25;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v14);
  if ( v13 )
    PopFxAddLogEntry(*(_QWORD *)(v13 + 48), 0LL, 21LL, v15);
  return (unsigned int)v15;
}
