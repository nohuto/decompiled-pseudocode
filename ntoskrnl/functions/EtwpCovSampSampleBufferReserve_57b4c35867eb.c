__int64 __fastcall EtwpCovSampSampleBufferReserve(__int64 a1, __int16 a2, PSLIST_ENTRY *a3)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // r12
  PSLIST_ENTRY v8; // rsi
  __int64 v9; // rdi
  PSLIST_ENTRY v10; // rbx
  __int64 v11; // r14
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  _DWORD *v15; // r9
  bool v16; // zf
  unsigned __int8 v17; // cl
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  PSLIST_ENTRY v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  unsigned __int16 v28; // [rsp+78h] [rbp+50h]

  v4 = (unsigned int)*(_QWORD *)(a1 + 8);
  v5 = ((unsigned int)v4 >> 13) & 0x3FFFF;
  _BitScanReverse(&v6, v5);
  v7 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v6 - 2) + 8LL * (v5 ^ (1 << v6)) + 8)
     + 8 * ((v4 >> 4) & 0x1FF);
  v28 = 7 - ((a2 + 7) & 7) + a2 + 8;
  while ( (unsigned int)EtwpCovSampTryAcquireBufferLock((PKSPIN_LOCK)v9) )
  {
    v10 = *(PSLIST_ENTRY *)(v9 + 8);
    if ( v10 )
      goto LABEL_7;
    if ( v8 )
    {
      if ( !*(_DWORD *)(v9 + 120) )
      {
        KxReleaseSpinLock((volatile signed __int64 *)v9);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v16 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
            SchedulerAssist[5] &= 0xFFFF0001;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(0LL);
        goto LABEL_41;
      }
      *(_QWORD *)(v9 + 8) = v8;
      v10 = v8;
      v8 = 0LL;
LABEL_7:
      v11 = *((int *)&v10[3].Next + 3);
      v12 = v11 + v28;
      if ( v12 <= SLODWORD(v10[4].Next) )
      {
        *((_DWORD *)&v10[3].Next + 3) = v12;
        ++*((_DWORD *)&v10[3].Next + 2);
        if ( _InterlockedIncrement64((volatile signed __int64 *)&v10[3]) <= 1 )
          __fastfail(0xEu);
        KxReleaseSpinLock((volatile signed __int64 *)v9);
        if ( KiIrqlFlags )
        {
          v24 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v24 <= 0xFu && v24 >= 2u )
          {
            v25 = KeGetCurrentPrcb();
            v26 = v25->SchedulerAssist;
            v16 = (v26[5] & 0xFFFF0001) == 0;
            v26[5] &= 0xFFFF0001;
            if ( v16 )
              KiRemoveSystemWorkPriorityKick(v25);
          }
        }
        __writecr8(0LL);
        v7 = (__int64)&v10[4].Next + v11 + 8;
        *(_WORD *)(v7 + 4) = v28;
        *(_DWORD *)v7 = v11;
        *a3 = v10;
        break;
      }
      *(_QWORD *)(v9 + 8) = 0LL;
      KxReleaseSpinLock((volatile signed __int64 *)v9);
      if ( KiIrqlFlags )
      {
        v13 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = (v15[5] & 0xFFFF0001) == 0;
          v15[5] &= 0xFFFF0001;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v14);
        }
      }
      __writecr8(0LL);
      EtwpCovSampSampleBufferDecRef(a1, v10);
    }
    else
    {
      KxReleaseSpinLock((volatile signed __int64 *)v9);
      if ( KiIrqlFlags )
      {
        v17 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && v17 >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          v19 = v18->SchedulerAssist;
          v16 = (v19[5] & 0xFFFF0001) == 0;
          v19[5] &= 0xFFFF0001;
          if ( v16 )
            KiRemoveSystemWorkPriorityKick(v18);
        }
      }
      __writecr8(0LL);
      v20 = EtwpCovSampLookasidePop(a1, a1 + 880);
      v8 = v20;
      if ( !v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 316));
        return v7;
      }
      *((_DWORD *)&v20[3].Next + 3) = 0;
      *((_DWORD *)&v20[3].Next + 2) = 0;
      v20[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( !v8 )
    return v7;
LABEL_41:
  EtwpCovSampSampleBufferDecRef(a1, v8);
  return v7;
}
