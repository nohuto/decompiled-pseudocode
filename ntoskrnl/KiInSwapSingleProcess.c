/*
 * XREFs of KiInSwapSingleProcess @ 0x1402C0868
 * Callers:
 *     KeReadyThread @ 0x140238CF8 (KeReadyThread.c)
 *     KiAttachProcess @ 0x14030E080 (KiAttachProcess.c)
 * Callees:
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KiRequestProcessInSwap @ 0x1402C0908 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInSwapSingleProcess(ULONG_PTR a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // rsi
  char v6; // bp
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v11; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // edx
  bool v14; // zf

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  if ( (*(_DWORD *)(a2 + 840) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v4;
      KiSwapThread(a1, (__int64)CurrentPrcb, 0LL, v7);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
    {
      v11 = KeGetCurrentPrcb();
      SchedulerAssist = v11->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(v11);
    }
  }
  __writecr8(v4);
  return v6;
}
