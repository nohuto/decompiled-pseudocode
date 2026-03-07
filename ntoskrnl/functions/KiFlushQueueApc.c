_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  __int64 v2; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // rax
  _DWORD *v22; // r9
  int v23; // edx
  int v24; // [rsp+48h] [rbp+10h] BYREF
  int v25; // [rsp+50h] [rbp+18h] BYREF

  v2 = a2;
  if ( a2 == 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      LODWORD(v7) = 4;
      if ( CurrentIrql != 2 )
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *(_QWORD *)(a1 + 64) );
    }
    if ( *(_QWORD *)(a1 + 168) == a1 + 168 )
    {
      *(_QWORD *)(a1 + 64) = 0LL;
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      return 0LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16LL * a2 + 152) == a1 + 16LL * a2 + 152 )
      return 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v18 = KeGetCurrentPrcb()->SchedulerAssist;
      v19 = 4;
      if ( CurrentIrql != 2 )
        v19 = (-1LL << (CurrentIrql + 1)) & 4;
      v18[5] |= v19;
    }
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(_QWORD *)(a1 + 64) );
    }
  }
  v8 = (_QWORD *)(16 * v2 + a1 + 152);
  v9 = a1;
  v10 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
    v10 = 0LL;
  }
  else
  {
    v11 = (_QWORD *)v8[1];
    if ( (_QWORD *)v10[1] != v8 || (_QWORD *)*v11 != v8 )
      __fastfail(3u);
    *v11 = v10;
    v10[1] = v11;
    v12 = v10;
    do
    {
      *((_BYTE *)v12 + 66) = 0;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 != v10 );
    v8[1] = v8;
    *v8 = v8;
  }
  *(_QWORD *)(v9 + 64) = 0LL;
  if ( KiIrqlFlags )
  {
    v20 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
    {
      v21 = KeGetCurrentPrcb();
      v22 = v21->SchedulerAssist;
      v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v23 & v22[5]) == 0;
      v22[5] &= v23;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(v21);
    }
  }
  __writecr8(CurrentIrql);
  return v10;
}
