unsigned __int64 __fastcall IopTimerDispatch(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  int v8; // r14d
  unsigned __int64 result; // rax
  unsigned __int64 v10; // rsi
  unsigned int v11; // r15d
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v13; // r12
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  _DWORD v17[72]; // [rsp+0h] [rbp-1E8h] BYREF
  unsigned int *v18; // [rsp+120h] [rbp-C8h]
  _WORD v19[45]; // [rsp+130h] [rbp-B8h] BYREF
  _DWORD *v20; // [rsp+190h] [rbp-58h]
  _OWORD v21[2]; // [rsp+198h] [rbp-50h] BYREF

  v20 = v17;
  v18 = a2;
  v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
  v17[33] = DWORD2(PerfGlobalGroupMask) & 0x800000;
  memset(v19, 0, sizeof(v19));
  result = ((__int64)a2 >> 47) + 1;
  if ( result > 1 )
  {
    v17[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    *(_QWORD *)&v19[41] = a3;
    *(_QWORD *)&v19[5] = __ROL8__(a2, a3);
    *(_QWORD *)&v19[33] = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    result = KiCustomAccessRoutine1(a2);
  }
  if ( *a2 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
    v11 = *a2;
    for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v11; i = i->Flink )
    {
      if ( WORD1(i[-1].Blink) )
      {
        v13 = i + 1;
        if ( v8 )
        {
          memset(v21, 0, sizeof(v21));
          EtwGetKernelTraceTimestamp((__int64)v21, 1082130432LL);
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v13->Flink)(i[2].Flink, i[1].Blink);
          EtwTraceTimedEvent(3910, 0x40800000u, (__int64)&i[1], 8, 4196866, (__int64)v21);
        }
        else
        {
          ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v13->Flink)(i[2].Flink, i[1].Blink);
        }
        --v11;
      }
    }
    result = KxReleaseSpinLock((volatile signed __int64 *)&IopTimerLock);
    if ( KiIrqlFlags )
    {
      result = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0
        && (unsigned __int8)result <= 0xFu
        && (unsigned __int8)v10 <= 0xFu
        && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v10 + 1));
        v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v16 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v10);
  }
  return result;
}
