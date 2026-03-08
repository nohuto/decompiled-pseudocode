/*
 * XREFs of MiUnlockPagedAddress @ 0x1402EE5C4
 * Callers:
 *     MiFreeCombinePool @ 0x1402EE540 (MiFreeCombinePool.c)
 *     MiFreeClonePool @ 0x14066213C (MiFreeClonePool.c)
 *     MiLockPagedRange @ 0x14072601C (MiLockPagedRange.c)
 *     MiFreePatchTableProtos @ 0x140A3427C (MiFreePatchTableProtos.c)
 *     MiFreeCloneDescriptor @ 0x140A46394 (MiFreeCloneDescriptor.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140286264 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlockPagedAddress(unsigned __int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v7; // zf
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v1 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v8) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v2 = (unsigned __int8)MiLockPageInline(v1);
  MiRemoveLockedPageChargeAndDecRef(v1);
  _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v7 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  return result;
}
