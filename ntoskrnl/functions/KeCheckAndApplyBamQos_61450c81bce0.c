__int64 __fastcall KeCheckAndApplyBamQos(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *SchedulerAssist; // r8
  unsigned int *v5; // rdi
  int v6; // ebp
  char v7; // al
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v11; // r8
  int v12; // ett
  __int16 v13; // [rsp+20h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( KeHeteroSystemQos )
  {
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v5 = (unsigned int *)(a1 + 236);
    result = (unsigned __int8)*(_DWORD *)(a1 + 236);
    if ( (unsigned __int8)*(_DWORD *)(a2 + 512) != (_DWORD)result )
    {
      v6 = *(_DWORD *)(a1 + 236) & 0x300;
      v7 = PoSetProcessorQoS(a1);
      v8 = *v5;
      v9 = v7 ? v8 & 0xFFFFFCFF : v8 & 0xFFFFFCFF | 0x100;
      *v5 = v9;
      result = v6 != 0;
      if ( (_DWORD)result != ((v9 & 0x300) != 0) )
        result = KeUpdatePendingQosRequest(a1);
    }
    if ( (v13 & 0x200) != 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = CurrentPrcb->SchedulerAssist;
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
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      _enable();
    }
  }
  return result;
}
