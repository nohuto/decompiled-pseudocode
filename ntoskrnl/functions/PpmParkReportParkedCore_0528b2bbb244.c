char __fastcall PpmParkReportParkedCore(__int64 a1)
{
  int v2; // edi
  int v3; // edx
  volatile signed __int32 *SchedulerAssist; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v6; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  __int16 v10; // [rsp+20h] [rbp-8h]

  v2 = KeCheckProcessorAffinityEx((unsigned __int16 *)&PpmParkNewSoftParkingMask, *(_DWORD *)(a1 + 36));
  KeTransitionProcessorParkState(a1, (v2 != 0) + 1);
  v3 = *(_DWORD *)(a1 + 36);
  *(_BYTE *)(a1 + 34060) = 1;
  KeInterlockedSetProcessorAffinityEx((__int64)PpmPerfCoreParkingMask, v3);
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  *(_QWORD *)(a1 + 11680) = *(unsigned int *)(a1 + 33088);
  if ( (v10 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v6 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( v6 )
    {
      _m_prefetchw(v6);
      v7 = *v6;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(v6, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  if ( v2 )
  {
    KeInterlockedSetProcessorAffinityEx((__int64)PpmParkSoftParkingMask, *(_DWORD *)(a1 + 36));
    *(_BYTE *)(a1 + 33659) = 1;
  }
  return PpmEventCoreParkingStateChangeEx(a1, v2 != 0);
}
