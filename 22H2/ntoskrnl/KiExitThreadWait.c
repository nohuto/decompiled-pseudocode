/*
 * XREFs of KiExitThreadWait @ 0x140341340
 * Callers:
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x140341258 (KiFastExitThreadWait.c)
 *     KiSatisfyThreadWait @ 0x140522A34 (KiSatisfyThreadWait.c)
 * Callees:
 *     KiProcessDeferredReadyList @ 0x140230540 (KiProcessDeferredReadyList.c)
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1402568EC (KiSelectNextThread.c)
 *     KiCheckForThreadDispatch @ 0x1403413C4 (KiCheckForThreadDispatch.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiExitThreadWait(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  char v6; // al
  unsigned int v7; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  int v10; // eax
  _DWORD *v11; // rcx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  _DWORD *v14; // rdx
  int v15; // eax
  struct _KPRCB *v16; // rcx
  _DWORD *v17; // rdx
  bool v18; // zf
  struct _KPRCB *v19; // r10
  _DWORD *v20; // r9
  int v22; // [rsp+48h] [rbp+10h] BYREF
  __int64 v23; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 390);
  v6 = *(_BYTE *)(a2 + 112);
  if ( (v6 & 0x38) != 0 )
  {
    if ( (v6 & 0x18) != 0 )
    {
      if ( (v6 & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xCu);
      v23 = 0LL;
      CurrentPrcb = KeGetCurrentPrcb();
      v22 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v10 = SchedulerAssist[6];
            SchedulerAssist[6] = v10 + 1;
            if ( v10 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v11 = CurrentPrcb->SchedulerAssist;
        if ( v11 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v12 = v11[6] - 1;
            v11[6] = v12;
            if ( !v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v22, a2, a3, a4);
        while ( *(_QWORD *)(a1 + 48) );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        KiSelectNextThread((struct _KPRCB *)a1, (__int64)&v23);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      if ( v14 )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v15 = v14[6] - 1;
          v14[6] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(v13);
        }
      }
      LOBYTE(v7) = KiProcessDeferredReadyList(a1, (__int64)&v23, v4);
    }
    else
    {
      LOBYTE(a2) = 1;
      KiCheckForThreadDispatch(a1, a2);
      KiDeliverApc(0, 0, 0LL);
      LOBYTE(v7) = KiIrqlFlags;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          LOBYTE(v7) = KeGetCurrentIrql() - 2;
          if ( (unsigned __int8)v7 <= 0xDu )
          {
            v16 = KeGetCurrentPrcb();
            v17 = v16->SchedulerAssist;
            v18 = (v17[5] & 0xFFFF0001) == 0;
            v7 = v17[5] & 0xFFFF0001;
            v17[5] = v7;
            if ( v18 )
              LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v16);
          }
        }
      }
      __writecr8(0LL);
    }
  }
  else if ( (_BYTE)a3 )
  {
    LOBYTE(a2) = *(_BYTE *)(a2 + 390);
    LOBYTE(v7) = KiCheckForThreadDispatch(a1, a2);
  }
  else
  {
    LOBYTE(v7) = KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v7) = KeGetCurrentIrql();
        if ( (unsigned __int8)v7 <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)v7 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = v19->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
          v18 = (v7 & v20[5]) == 0;
          v20[5] &= v7;
          if ( v18 )
            LOBYTE(v7) = KiRemoveSystemWorkPriorityKick(v19);
        }
      }
    }
    __writecr8(v4);
  }
  return v7;
}
