unsigned __int64 KiSetPageAttributesTable()
{
  int v0; // r8d
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v2; // di
  unsigned int v3; // ecx
  unsigned __int64 result; // rax
  char v5; // dl
  int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v8; // r8
  int v9; // ett
  unsigned __int64 v10; // [rsp+20h] [rbp-28h]
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-8h]

  v0 = 0;
  v10 = 0x7010600070106LL;
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
  if ( SchedulerAssist )
    _InterlockedOr(SchedulerAssist, 0x200000u);
  v2 = (v12 & 0x200) != 0;
  v3 = 0;
  v11 = __readmsr(0x277u);
  result = 0LL;
  do
  {
    v5 = *((_BYTE *)&v11 + result);
    if ( v5 == 6 )
    {
      if ( *((_BYTE *)&v10 + result) != 6 )
      {
        v6 = 2;
LABEL_17:
        __wbinvd();
        goto LABEL_14;
      }
    }
    else if ( v5 != *((_BYTE *)&v10 + result) )
    {
      v0 |= 1u;
    }
    ++v3;
    ++result;
  }
  while ( v3 < 8 );
  if ( !v0 )
    goto LABEL_9;
  v6 = v0 & 2;
  if ( (v0 & 2) != 0 )
    goto LABEL_17;
LABEL_14:
  KeFlushCurrentTbImmediately();
  __writemsr(0x277u, v10);
  if ( v6 )
    __wbinvd();
  result = KeFlushCurrentTbImmediately();
LABEL_9:
  if ( v2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      _m_prefetchw(v8);
      LODWORD(result) = *v8;
      do
      {
        v9 = result;
        result = (unsigned int)_InterlockedCompareExchange(v8, result & 0xFFDFFFFF, result);
      }
      while ( v9 != (_DWORD)result );
      if ( (result & 0x200000) != 0 )
        result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
  }
  return result;
}
