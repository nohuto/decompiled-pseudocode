__int64 __fastcall RtlpFcWriteHighLowHigh(__int64 a1, __int64 a2)
{
  volatile signed __int32 *SchedulerAssist; // r9
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v5; // r8
  int v6; // ett
  __int16 v7; // [rsp+20h] [rbp-8h]

  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  result = HIDWORD(a2);
  *(_DWORD *)(a1 + 8) = HIDWORD(a2);
  *(_QWORD *)a1 = a2;
  if ( (v7 & 0x200) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v5 = CurrentPrcb->SchedulerAssist;
    if ( v5 )
    {
      _m_prefetchw(v5);
      LODWORD(result) = *v5;
      do
      {
        v6 = result;
        result = (unsigned int)_InterlockedCompareExchange(v5, result & 0xFFDFFFFF, result);
      }
      while ( v6 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
  }
  return result;
}
