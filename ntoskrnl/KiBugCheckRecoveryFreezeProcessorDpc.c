/*
 * XREFs of KiBugCheckRecoveryFreezeProcessorDpc @ 0x140578570
 * Callers:
 *     <none>
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiBugCheckRecoveryFreezeProcessorDpc()
{
  volatile signed __int32 *SchedulerAssist; // rcx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v2; // r9
  __int64 v3; // rdx
  unsigned __int8 v4; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v6; // r8
  int v7; // eax
  bool v8; // zf
  __int64 result; // rax
  struct _KPRCB *v10; // rcx
  _DWORD *v11; // r8
  int v12; // ett
  __int16 v13; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v2 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 15 )
      LODWORD(v3) = 0x8000;
    else
      v3 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    v2[5] |= v3;
  }
  _InterlockedIncrement(&KiFreezeInDpcCount);
  while ( KiFreezeInDpc )
    _mm_pause();
  if ( KiIrqlFlags )
  {
    v4 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v6 = CurrentPrcb->SchedulerAssist;
      v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v8 = (v7 & v6[5]) == 0;
      v6[5] &= v7;
      if ( v8 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( (v13 & 0x200) != 0 )
  {
    v10 = KeGetCurrentPrcb();
    v11 = v10->SchedulerAssist;
    if ( v11 )
    {
      _m_prefetchw(v11);
      LODWORD(result) = *v11;
      do
      {
        v12 = result;
        result = (unsigned int)_InterlockedCompareExchange(v11, result & 0xFFDFFFFF, result);
      }
      while ( v12 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v10);
    }
    _enable();
  }
  return result;
}
