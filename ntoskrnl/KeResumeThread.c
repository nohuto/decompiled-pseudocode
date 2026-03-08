/*
 * XREFs of KeResumeThread @ 0x140354130
 * Callers:
 *     PsMultiResumeProcess @ 0x1402FF188 (PsMultiResumeProcess.c)
 *     PsMultiResumeThread @ 0x140354658 (PsMultiResumeThread.c)
 *     KeAlertResumeThread @ 0x14056C6FC (KeAlertResumeThread.c)
 * Callees:
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r15
  volatile signed __int32 *v6; // r14
  unsigned int v7; // eax
  unsigned int v8; // esi
  char v9; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v12; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v12) = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v12;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile signed __int32 *)(a1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v7 = *(char *)(a1 + 644);
  v8 = v7;
  if ( a2 > v7 )
    a2 = *(char *)(a1 + 644);
  if ( a2 )
  {
    if ( (_BYTE)v7 )
    {
      v9 = v7 - a2;
      *(_BYTE *)(a1 + 644) = v9;
      if ( !v9 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
        KiResumeThread(a1, (__int64)CurrentPrcb, 0LL);
    }
  }
  _InterlockedAnd(v6, 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v8;
}
