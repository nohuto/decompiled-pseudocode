/*
 * XREFs of MiLockOwnedProtoPage @ 0x1402871A0
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiLockProtoPoolPage @ 0x140283CA0 (MiLockProtoPoolPage.c)
 *     MiFinishHardFault @ 0x140284200 (MiFinishHardFault.c)
 *     MiRelockProtoPoolPage @ 0x1402A2F78 (MiRelockProtoPoolPage.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140229800 (MiWriteValidPteVolatile.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403C8140 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403C8170 (HvlNotifyLongSpinWait.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall MiLockOwnedProtoPage(__int64 CurrentIrql, unsigned __int8 a2)
{
  volatile signed __int64 *v2; // rdi
  volatile signed __int64 *v3; // r14
  char v4; // al
  __int64 v5; // rsi
  unsigned __int64 i; // rbp
  unsigned __int64 result; // rax
  unsigned int v8; // ebx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // edx
  bool v12; // zf

  v2 = (volatile signed __int64 *)(CurrentIrql + 24);
  v3 = (volatile signed __int64 *)(*(_QWORD *)(CurrentIrql + 8) | 0x8000000000000000uLL);
  v4 = *(_BYTE *)(CurrentIrql + 34);
  v5 = CurrentIrql;
  for ( i = a2; (v4 & 0x20) != 0; v4 = *(_BYTE *)(v5 + 34) )
  {
    _InterlockedAnd64(v2, 0x7FFFFFFFFFFFFFFFuLL);
    if ( (_BYTE)i != 17 )
    {
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0
          && (unsigned __int8)CurrentIrql <= 0xFu
          && (unsigned __int8)i <= 0xFu
          && (unsigned __int8)CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          CurrentIrql = (unsigned int)(i + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
          v12 = (v11 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(i);
    }
    v8 = 0;
    while ( (*(_BYTE *)(v5 + 34) & 0x20) != 0 )
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql) )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    MiLockPageInline(v5);
  }
  *(_BYTE *)(v5 + 34) = v4 | 0x20;
  result = (unsigned __int64)*v2 >> 62;
  if ( (*v2 & 0x4000000000000000LL) == 0 && (*(_BYTE *)v3 & 0x20) == 0 )
    result = MiWriteValidPteVolatile(v3, 1, 0);
  _InterlockedAnd64(v2, 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
