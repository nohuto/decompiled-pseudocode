char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  char v11; // cl
  __int64 SchedulerAssist; // r9
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int8 CurrentIrql; // si
  unsigned int v16; // r15d
  char v17; // r14
  char updated; // r15
  char v19; // r12
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  bool v25; // zf
  unsigned __int8 v26; // cl
  struct _KPRCB *v27; // r9
  _DWORD *v28; // r8
  int v29; // eax
  unsigned __int64 v30; // rdi
  char v31; // al
  char v32; // [rsp+30h] [rbp-D0h]
  char v33; // [rsp+31h] [rbp-CFh]
  char v36; // [rsp+35h] [rbp-CBh]
  unsigned int v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  _OWORD v42[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v43[68]; // [rsp+80h] [rbp-80h] BYREF

  memset(v43, 0, 0x108uLL);
  v6 = 0LL;
  v37 = 32;
  v39 = 0LL;
  v7 = 0LL;
  v40 = 0LL;
  v8 = 0LL;
  v9 = 1LL;
  v41 = 0LL;
  memset(v42, 0, sizeof(v42));
  v32 = 0;
  v10 = 0LL;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    v11 = 1;
    v39 = 0LL;
    v40 = 0LL;
    v41 = 0LL;
  }
  else
  {
    v11 = 0;
  }
  v33 = v11;
  SchedulerAssist = 0x7E35C6C7F3DD7277LL;
  if ( a4 )
  {
    v13 = *a4;
    v14 = a4[1];
    if ( v11 && v13 )
    {
      LOBYTE(v41) = 8;
      v39 = v13;
      v40 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v14), KiWaitNever));
    }
    v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v13), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ v14), KiWaitNever);
    v9 = 1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (__int64)KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      v9 = 4LL;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    v6 = (unsigned int)v9 | *(_DWORD *)(SchedulerAssist + 20);
    *(_DWORD *)(SchedulerAssist + 20) = v6;
  }
  v36 = KiAcquireTimer2LockUnlessDisabled(a1, v9, v6, SchedulerAssist);
  if ( !v36 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v8;
      *(_QWORD *)(a1 + 120) = v10;
    }
    if ( !a2 )
      goto LABEL_13;
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_13:
        v16 = 6;
LABEL_14:
        v17 = v33;
        if ( v33 )
          EtwGetKernelTraceTimestamp(v42, 1073872896LL);
        updated = KiUpdateTimer2Flags(a1, v37, v16);
        if ( KiIrqlFlags )
        {
          v21 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
        v19 = a3;
        if ( a3 && !updated )
        {
          v43[0] = 2097153;
          memset(&v43[1], 0, 0x104uLL);
          KeAddProcessorAffinityEx(v43, (unsigned int)KiClockTimerOwner);
          KeGenericProcessorCallback(v43, xHalTimerWatchdogStop, 0LL, 2LL);
        }
        goto LABEL_20;
      }
      v37 = 36;
    }
    v32 = 1;
    v16 = 4;
    goto LABEL_14;
  }
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v25 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v25 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(CurrentIrql);
  v17 = v33;
  updated = 0;
  v19 = a3;
LABEL_20:
  if ( v17 && !v36 )
  {
    v30 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(KiWaitNever ^ v7, KiWaitNever));
    if ( v32 )
      KiTraceCancelTimer2(a1, v30);
    v31 = v41;
    v38 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v30 ^ _byteswap_uint64(KiWaitAlways ^ a1), KiWaitNever));
    if ( a2 )
    {
      v31 = v41 | 1;
      LOBYTE(v41) = v41 | 1;
    }
    if ( v19 )
    {
      v31 |= 2u;
      LOBYTE(v41) = v31;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v38, 32, 4197890, (__int64)v42);
    }
    else
    {
      LOBYTE(v41) = v31 | 4;
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)&v38, 32, 1538, (__int64)v42);
    }
  }
  return v32;
}
