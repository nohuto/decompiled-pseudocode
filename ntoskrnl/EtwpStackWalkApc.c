void __fastcall EtwpStackWalkApc(__int64 a1, _QWORD *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 *v14; // r9
  __int64 v15; // rax
  signed __int32 v16[8]; // [rsp+0h] [rbp-278h] BYREF
  __int64 v17; // [rsp+40h] [rbp-238h]
  int v18; // [rsp+48h] [rbp-230h]
  __int64 v19; // [rsp+50h] [rbp-228h]
  __int64 v20; // [rsp+58h] [rbp-220h]
  __int64 v21; // [rsp+60h] [rbp-218h]
  __int64 v22; // [rsp+68h] [rbp-210h]
  __int16 v23; // [rsp+70h] [rbp-208h]
  __int64 v24; // [rsp+78h] [rbp-200h]
  __int64 v25; // [rsp+80h] [rbp-1F8h]
  _QWORD v26[54]; // [rsp+90h] [rbp-1E8h] BYREF

  memset(v26, 0, 0x1A8uLL);
  CurrentThread = KeGetCurrentThread();
  v7 = *a3;
  *a2 = 0LL;
  _InterlockedOr(v16, 0);
  if ( !*(_DWORD *)(v7 + 320) )
  {
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 912));
    KxReleaseSpinLock((volatile signed __int64 *)(v7 + 912));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v8);
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
  {
    v14 = (__int64 *)(a1 + 128);
    if ( *(_BYTE *)(a1 + 136) )
    {
      v15 = *v14;
      v25 = 0LL;
      v24 = 0LL;
      v23 = 0;
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
      v18 = 0;
      v26[10] = v15;
      v17 = 0LL;
      *(GUID *)&v26[5] = EventTracingProvGuid;
      v26[49] = *(_QWORD *)(v7 + 1096);
      LOWORD(v15) = *(_WORD *)v7;
      v26[18] = -1LL;
      HIWORD(v26[16]) = v15;
      LODWORD(v26[16]) = 1;
      LODWORD(v26[17]) = 68;
      BYTE4(v26[16]) = -1;
      v26[19] = 0LL;
      EtwpEventWriteFull(
        (__int64)v26,
        1u,
        0,
        0,
        (__int64)ETW_EVENT_USER_STACK_TRACE,
        0,
        0,
        0LL,
        0LL,
        0,
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        0LL,
        0LL);
    }
    else
    {
      EtwpTraceStackWalk(v7, 4096LL, CurrentThread, v14);
    }
  }
  EtwpFinalizePendingApc((unsigned int *)v7, a1);
}
