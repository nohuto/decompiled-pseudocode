bool __fastcall ExpAcquireSpinLockDisabled(volatile signed __int32 *a1)
{
  volatile signed __int32 *SchedulerAssist; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int16 v8; // [rsp+20h] [rbp-8h]
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  while ( _interlockedbittestandset64(a1, 0LL) )
  {
    if ( (v8 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v5 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v5 )
      {
        _m_prefetchw(v5);
        v6 = *v5;
        do
        {
          v7 = v6;
          v6 = _InterlockedCompareExchange(v5, v6 & 0xFFDFFFFF, v6);
        }
        while ( v7 != v6 );
        if ( (v6 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
    do
      KeYieldProcessorEx(&v9);
    while ( *(_QWORD *)a1 );
    _disable();
  }
  return (v8 & 0x200) != 0;
}
