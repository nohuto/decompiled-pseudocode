char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v3; // rdi
  char v4; // al
  unsigned int v6; // eax
  char v7; // si
  __int64 RescheduleContextEntryForPrcb; // rax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r9
  _DWORD *v13; // r11
  char v14; // r10
  unsigned int v15; // r10d
  _DWORD *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v19; // zf
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  __int64 v24; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v26[84]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = *(unsigned __int8 *)(a2 + 390);
  v4 = *(_BYTE *)(a2 + 112);
  v24 = 0LL;
  if ( (v4 & 0x38) != 0 )
  {
    if ( (v4 & 0x18) != 0 )
    {
      if ( (v4 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v25 = 0LL;
      v7 = 0;
      memset(v26, 0, sizeof(v26));
      KiAcquirePrcbLocksForIsolationUnit(a1, 0LL, &v24);
      if ( !*(_QWORD *)(a1 + 16) )
      {
        KiStartRescheduleContext(v26, &v24, 0LL);
        RescheduleContextEntryForPrcb = KiFindRescheduleContextEntryForPrcb(v26, a1);
        LOBYTE(v9) = 1;
        KiAdjustRescheduleContextEntryForThreadRemoval(RescheduleContextEntryForPrcb, v10, 0LL, v9, v24, v25);
        if ( (v14 & 2) != 0 )
        {
          LOBYTE(v11) = v26[0];
          v15 = 0;
          if ( LOBYTE(v26[0]) )
          {
            do
            {
              v16 = &v26[10 * v15 + 4];
              if ( v16 != v13 )
              {
                LOBYTE(v12) = 1;
                KiAdjustRescheduleContextEntryForThreadRemoval(v16, v11, 0LL, v12, v24, v25);
                LOBYTE(v11) = v26[0];
              }
              ++v15;
            }
            while ( v15 < (unsigned __int8)v11 );
          }
          v26[1] = 0;
        }
        KiSearchForNewThreadsForRescheduleContext(v26, (__int64)&v25);
        v7 = KiCommitRescheduleContext(v26, a1, 0LL, &v25);
      }
      KiReleasePrcbLocksForIsolationUnit(&v24);
      if ( v7 )
      {
        KiCompleteRescheduleContext(v26, a1);
        KiFlushSoftwareInterruptBatch(a1 + 12760);
      }
      LOBYTE(v6) = KiProcessDeferredReadyList(a1, (__int64)&v25, v3);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2);
      LOBYTE(v6) = KiDeliverApc(0LL, 0LL, 0LL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v6) = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v6) = v6 - 2;
          if ( (unsigned __int8)v6 <= 0xDu )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
            v6 = SchedulerAssist[5] & 0xFFFF0001;
            SchedulerAssist[5] = v6;
            if ( v19 )
              LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else if ( a3 )
  {
    LOBYTE(a2) = v3;
    LOBYTE(v6) = KiCheckForThreadDispatch(a1, a2);
  }
  else
  {
    LOBYTE(v6) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        v19 = (v6 & v22[5]) == 0;
        v22[5] &= v6;
        if ( v19 )
          LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v3);
  }
  return v6;
}
