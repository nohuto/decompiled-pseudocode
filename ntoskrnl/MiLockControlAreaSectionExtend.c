/*
 * XREFs of MiLockControlAreaSectionExtend @ 0x1402A4EFC
 * Callers:
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeWaitForGate @ 0x1402931D8 (KeWaitForGate.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiLockControlAreaSectionExtend(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile LONG *v5; // r13
  ULONG_PTR v6; // rbp
  KIRQL v7; // al
  __int64 *v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  int v20; // eax
  _DWORD *v21; // r8

  CurrentThread = KeGetCurrentThread();
  if ( *(_DWORD *)(a2 + 8) == 16 )
    --CurrentThread->SpecialApcDisable;
  else
    --CurrentThread->KernelApcDisable;
  v5 = (volatile LONG *)(BugCheckParameter2 + 72);
  while ( 1 )
  {
    v6 = 0LL;
    v7 = ExAcquireSpinLockExclusive(v5);
    v8 = *(__int64 **)(BugCheckParameter2 + 80);
    v9 = v7;
    if ( v8 )
    {
      while ( 1 )
      {
        v11 = v8;
        if ( (*(_DWORD *)(a2 + 8) & (_DWORD)v8[1]) != 0 )
          break;
        v8 = (__int64 *)*v8;
        if ( !v8 )
          goto LABEL_5;
      }
      v12 = (__int64 *)KeAbPreAcquire(BugCheckParameter2, 0LL);
      v6 = (ULONG_PTR)v12;
      v8 = v11;
      if ( v12 )
      {
        KeAbPreWait(v12);
        v8 = v11;
      }
    }
LABEL_5:
    *(_DWORD *)(a2 + 20) = 0;
    *(_QWORD *)(a2 + 32) = a2 + 24;
    *(_QWORD *)(a2 + 24) = a2 + 24;
    *(_WORD *)(a2 + 16) = 263;
    *(_BYTE *)(a2 + 18) = 6;
    *(_QWORD *)a2 = *(_QWORD *)(BugCheckParameter2 + 80);
    *(_QWORD *)(BugCheckParameter2 + 80) = a2;
    if ( !v8 )
      break;
    ExReleaseSpinLockExclusiveFromDpcLevel(v5);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v17 = (v16 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v9);
    KeWaitForGate(a2 + 16, 18LL, 0);
    if ( v6 )
    {
      KeAbPreAcquire(BugCheckParameter2, v6);
      KeAbPostReleaseEx(BugCheckParameter2, v6);
    }
  }
  v10 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  if ( v10 )
    *(_BYTE *)(v10 + 18) = 1;
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  if ( KiIrqlFlags )
  {
    v18 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v18 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v18 >= 2u )
    {
      v19 = KeGetCurrentPrcb();
      v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v21 = v19->SchedulerAssist;
      v17 = (v20 & v21[5]) == 0;
      v21[5] &= v20;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v19);
    }
  }
  __writecr8(v9);
}
