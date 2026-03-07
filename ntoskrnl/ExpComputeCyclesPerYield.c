__int64 ExpComputeCyclesPerYield()
{
  volatile signed __int32 *SchedulerAssist; // rcx
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v5; // r8
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  __int16 v10; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v1 = 256LL;
  v2 = __rdtsc();
  do
  {
    _mm_pause();
    --v1;
  }
  while ( v1 );
  v3 = __rdtsc();
  if ( (v10 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      _m_prefetchw(v5);
      v8 = *v5;
      do
      {
        v9 = v8;
        v8 = _InterlockedCompareExchange(v5, v8 & 0xFFDFFFFF, v8);
      }
      while ( v9 != v8 );
      if ( (v8 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  result = 0xFFFFLL;
  v7 = (v3 - v2) >> 8;
  if ( v7 <= 0xFFFF )
  {
    result = v7;
    if ( !v7 )
      return 1LL;
  }
  return result;
}
