/*
 * XREFs of PopPepReleaseActivityLink @ 0x1403565F8
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x140355DFC (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140397B04 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x1403B17EC (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x14045E4C2 (PopPepComponentSetLatency.c)
 *     PopPepCompleteComponentIdleState @ 0x1405D4C64 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetResidency @ 0x1405D4D6C (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1405D4E64 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopPepReleaseActivityLink(__int64 a1, volatile LONG *a2, char a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v11; // zf

  v4 = a4;
  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  }
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
        v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v11 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
