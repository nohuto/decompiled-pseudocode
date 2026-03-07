_QWORD *__fastcall KiAbEntryFreeAndEnableInterrupts(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 v8; // rbx
  struct _KPRCB *v9; // rcx
  signed __int32 *v10; // r8
  _QWORD *result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett

  if ( *(__int64 *)a1 < 0 )
  {
    *(_BYTE *)a1 |= 2u;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v16 = *SchedulerAssist;
      do
      {
        v17 = v16;
        v16 = _InterlockedCompareExchange(SchedulerAssist, v16 & 0xFFDFFFFF, v16);
      }
      while ( v17 != v16 );
      if ( (v16 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    KiAbEntryRemoveFromTree(a1);
    _disable();
  }
  v8 = *(unsigned int *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  if ( a4 )
    *(_BYTE *)(a2 + 792) |= 1 << *(_BYTE *)(a1 + 16);
  v9 = KeGetCurrentPrcb();
  v10 = (signed __int32 *)v9->SchedulerAssist;
  if ( v10 )
  {
    _m_prefetchw(v10);
    v12 = *v10;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(v10, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v9);
  }
  _enable();
  result = a5;
  if ( a5 )
  {
    *a5 = v8;
  }
  else if ( (_DWORD)v8 )
  {
    return (_QWORD *)KiAbThreadRemoveBoostsSlow(a2);
  }
  return result;
}
