__int64 __fastcall MiPreparePhysicalPagesMdlForFree(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v2; // r14
  _DWORD *v3; // r8
  unsigned __int64 v4; // rcx
  _QWORD *v5; // r10
  unsigned __int64 v6; // r9
  __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int8 v13; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // edx
  bool v17; // zf
  unsigned __int8 v18; // cl
  _DWORD *v19; // r9
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  __int64 result; // rax
  int v26; // [rsp+50h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 44) = 0;
  v2 = (_QWORD *)(a1 + 48);
  v3 = (_DWORD *)(a1 + 40);
  if ( a2 != 1 )
  {
    v4 = (unsigned __int64)(unsigned int)*v3 >> 12;
    v5 = &v2[a2 * v4];
    do
    {
      --v4;
      v5 -= a2;
      v6 = 1LL;
      for ( *v5 = v2[v4]; v6 < a2; ++v6 )
        v5[v6] = v5[v6 - 1] + 1LL;
    }
    while ( v4 );
    *v3 *= (_DWORD)a2;
  }
  v7 = 0LL;
  v8 = (unsigned __int64)(unsigned int)*v3 >> 12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v11) = 4;
    else
      v11 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v11;
  }
  for ( ; v8; --v8 )
  {
    v12 = 48LL * *v2 - 0x220000000000LL;
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(__int64 *)(v12 + 24) < 0 );
    }
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(v12 + 24) & 0x8000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (++v7 & 0x3F) == 0 && KeShouldYieldProcessor() )
    {
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
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      v18 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v18 <= 0xFu )
      {
        v19 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v18 == 2 )
          LODWORD(v20) = 4;
        else
          v20 = (-1LL << (v18 + 1)) & 4;
        v19[5] |= v20;
      }
    }
    ++v2;
  }
  if ( KiIrqlFlags )
  {
    v21 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
    {
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v24 & v23[5]) == 0;
      v23[5] &= v24;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v22);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
