__int64 KiSetAddressPolicy()
{
  volatile signed __int32 *SchedulerAssist; // rdx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v3; // r8
  int v4; // ett
  __int16 v5; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  result = KxSetAddressPolicy();
  if ( (v5 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v3 = CurrentPrcb->SchedulerAssist;
    if ( v3 )
    {
      _m_prefetchw(v3);
      LODWORD(result) = *v3;
      do
      {
        v4 = result;
        result = (unsigned int)_InterlockedCompareExchange(v3, result & 0xFFDFFFFF, result);
      }
      while ( v4 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
