/*
 * XREFs of MiInitializeLargeNonPagedPoolLeafFrames @ 0x1402E5F48
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140330100 (MiLinkPoolCommitChain.c)
 * Callees:
 *     MiSetPfnPteFrame @ 0x14028A310 (MiSetPfnPteFrame.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInitializeLargeNonPagedPoolLeafFrames(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  char v6; // cl
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v11; // zf

  v3 = 48 * a2 - 0x220000000000LL;
  v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((((((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v5 = MiLockPageInline(v3);
  v6 = *(_BYTE *)(v3 + 34) & 0xFE;
  *(_QWORD *)(v3 + 8) = a1;
  v7 = v5;
  *(_BYTE *)(v3 + 34) = v6 | 6;
  *(_QWORD *)v3 = 0LL;
  MiSetPfnPteFrame(v3, v4);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v11 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v11 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v7);
  return result;
}
