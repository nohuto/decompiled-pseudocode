/*
 * XREFs of PopUpdatePowerButtonHoldState @ 0x140578D94
 * Callers:
 *     PoSetPowerButtonHoldState @ 0x140568E90 (PoSetPowerButtonHoldState.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
  v5 = 1LL << ((dword_140C20924 + dword_140C20928) & 0x3F);
  if ( a1 )
  {
    qword_140C20930 |= v5;
    v3 = 1;
    ++dword_140C20928;
  }
  else
  {
    qword_140C20930 &= ~v5;
    ++dword_140C20924;
  }
  if ( v3 != (qword_140C208B8 & 1) )
  {
    if ( a1 )
    {
      ++HIDWORD(qword_140C208B8);
      LODWORD(qword_140C208B8) = qword_140C208B8 | 1;
    }
    else
    {
      LODWORD(qword_140C208B8) = 0;
    }
    PopQueueWorkItem((__int64)&unk_140C20890, CriticalWorkQueue);
  }
  KxReleaseSpinLock(&PopPowerButtonHold);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
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
  }
  __writecr8(v4);
  return result;
}
