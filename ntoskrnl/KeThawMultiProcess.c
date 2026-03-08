/*
 * XREFs of KeThawMultiProcess @ 0x140356058
 * Callers:
 *     PsThawMultiProcess @ 0x1402FFE80 (PsThawMultiProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KiThawSingleThread @ 0x140355DCC (KiThawSingleThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeThawMultiProcess(__int64 a1, char a2, unsigned int a3)
{
  _QWORD **v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r12
  volatile LONG *v8; // r15
  unsigned int v9; // edx
  unsigned int v10; // ebp
  __int64 v11; // rdx
  char v12; // r11
  _QWORD *i; // rax
  _QWORD *j; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v17; // rax
  unsigned int v18; // ecx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf

  v4 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v17) = 4;
    if ( CurrentIrql != 2 )
      v17 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v17;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v9 = *(_DWORD *)(a1 + 888);
  v10 = v9 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
    v11 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(a1 + 632) & 0x10) != 0 )
    {
      for ( i = *v4; i != v4; i = (_QWORD *)*i )
        *(i - 64) += v11;
    }
    if ( !v12 )
    {
LABEL_8:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( KiIrqlFlags )
      {
        v19 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v23 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
      __writecr8(CurrentIrql);
      return v10;
    }
  }
  else
  {
    v18 = 0;
    if ( a3 <= v9 )
      v18 = v9 - a3;
    *(_DWORD *)(a1 + 888) = v18;
    if ( !v9 || v18 )
      goto LABEL_8;
  }
  for ( j = *v4; j != v4; j = (_QWORD *)*j )
    KiThawSingleThread((__int64)CurrentPrcb, (__int64)(j - 95), 0, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v10;
}
