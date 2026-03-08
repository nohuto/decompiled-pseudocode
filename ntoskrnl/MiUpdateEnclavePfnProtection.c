/*
 * XREFs of MiUpdateEnclavePfnProtection @ 0x14064652C
 * Callers:
 *     MiProtectEnclavePages @ 0x140645C9C (MiProtectEnclavePages.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A33B0 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUpdateEnclavePfnProtection(__int64 a1, int a2)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v4 = (unsigned __int8)MiLockPageInline(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(a1 + 16) ^= (*(_DWORD *)(a1 + 16) ^ (32 * a2)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
      v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v8 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v4);
  return result;
}
