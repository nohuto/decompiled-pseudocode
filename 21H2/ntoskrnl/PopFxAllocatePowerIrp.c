/*
 * XREFs of PopFxAllocatePowerIrp @ 0x140399B60
 * Callers:
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 * Callees:
 *     KeResetEvent @ 0x140269BE0 (KeResetEvent.c)
 *     IoAcquireRemoveLockEx @ 0x140281C90 (IoAcquireRemoveLockEx.c)
 *     PopFxAddLogEntry @ 0x140282184 (PopFxAddLogEntry.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  KIRQL v11; // al
  __int64 v12; // rdi
  unsigned __int64 v13; // r13
  NTSTATUS v14; // esi
  signed __int32 v16; // edx
  char v17; // al
  unsigned int v18; // edx
  signed __int32 v19; // r8d
  unsigned int v20; // edx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v23; // eax
  _DWORD *SchedulerAssist; // r8
  bool v25; // zf
  volatile LONG *SpinLocka; // [rsp+98h] [rbp+40h]

  SpinLocka = (volatile LONG *)(a1 + 88);
  *(_QWORD *)SpinLock = 0LL;
  *a7 = 0LL;
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v12 = *(_QWORD *)(a1 + 80);
  v13 = v11;
  if ( v12 )
  {
    if ( a6 )
    {
      v14 = 0;
    }
    else
    {
      v14 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v12 + 240), 0LL, &Src, 1u, 0x20u);
      if ( v14 < 0 )
        goto LABEL_3;
    }
    _m_prefetchw((const void *)(v12 + 32));
    v16 = _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x10;
    _m_prefetchw((const void *)(v12 + 32));
    v17 = _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0);
    if ( v16 )
    {
      if ( (v17 & 0x20) != 0
        && (_m_prefetchw((const void *)(v12 + 32)),
            v18 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) >> 8) & 1,
            _m_prefetchw((const void *)(v12 + 32)),
            v18 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) >> 9) & 1)) )
      {
        v14 = -1073741670;
      }
      else
      {
        _m_prefetchw((const void *)(v12 + 32));
        v19 = _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x200;
        _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x20u);
        _InterlockedXor((volatile signed __int32 *)(v12 + 32), 0x200u);
        v14 = 259;
        *(_QWORD *)((v19 != 0 ? 520LL : 512LL) + v12) = a2;
        *(_DWORD *)((v19 != 0 ? 4 : 0) + v12 + 528) = a3;
        *(_QWORD *)((v19 != 0 ? 8 : 0) + v12 + 536) = a4;
        *(_QWORD *)((v19 != 0 ? 8 : 0) + v12 + 552) = a5;
      }
    }
    else if ( (v17 & 0x10) == 0 )
    {
      _m_prefetchw((const void *)(v12 + 32));
      if ( (_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) & 0x20) != 0 )
      {
        if ( a6 )
        {
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0);
          _InterlockedXor((volatile signed __int32 *)(v12 + 32), 0x100u);
          _m_prefetchw((const void *)(v12 + 32));
          v20 = ((unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) >> 8) & 1;
          _m_prefetchw((const void *)(v12 + 32));
          if ( v20 == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 0) >> 9) & 1) )
            _InterlockedAnd((volatile signed __int32 *)(v12 + 32), 0xFFFFFFDF);
          _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u);
          v14 = 0;
          *a7 = *(_QWORD *)(v12 + 16);
          *(_QWORD *)SpinLock = *(_QWORD *)(v12 + 24);
        }
        else
        {
          v14 = -1073741670;
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 244), 0xFFFFFFFF) == 1 )
          KeSetEvent((PRKEVENT)(v12 + 248), 0, 0);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(v12 + 32), 0x10u);
        KeResetEvent((PRKEVENT)(v12 + 568));
        v14 = 0;
        *a7 = *(_QWORD *)(v12 + 16);
        *(_QWORD *)SpinLock = *(_QWORD *)(v12 + 24);
      }
    }
  }
  else
  {
    v14 = -1073741130;
  }
LABEL_3:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLocka);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = (v23 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v23;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  if ( v12 )
    PopFxAddLogEntry(*(_QWORD *)(v12 + 48), 0, 21, v14);
  return (unsigned int)v14;
}
