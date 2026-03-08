/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140597038
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x140584CA0 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopUpdatePowerButtonHoldState(char a1)
{
  KIRQL v2; // al
  int v3; // r10d
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&PopPowerButtonHold);
  v3 = 0;
  v4 = v2;
  v5 = 1LL << ((dword_140C39C24 + dword_140C39C28) & 0x3F);
  if ( a1 )
  {
    qword_140C39C30 |= v5;
    v3 = 1;
    ++dword_140C39C28;
  }
  else
  {
    qword_140C39C30 &= ~v5;
    ++dword_140C39C24;
  }
  if ( v3 != (xmmword_140C39D98 & 1) )
  {
    if ( a1 )
    {
      ++DWORD1(xmmword_140C39D98);
      LODWORD(xmmword_140C39D98) = xmmword_140C39D98 | 1;
    }
    else
    {
      LODWORD(xmmword_140C39D98) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140C39D70, CriticalWorkQueue);
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopPowerButtonHold);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v4 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
      v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
