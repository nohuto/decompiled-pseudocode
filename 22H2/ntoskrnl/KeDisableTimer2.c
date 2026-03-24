/*
 * XREFs of KeDisableTimer2 @ 0x140348C40
 * Callers:
 *     ExDeleteTimer @ 0x140348920 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x140578790 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x1406F0400 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x1408E7DD0 (PopThermalZoneRemove.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140229340 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KiRemoveTimer2 @ 0x14024AD50 (KiRemoveTimer2.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402F1D90 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14030654C (EtwTraceTimedEvent.c)
 *     KiUpdateTimer2Flags @ 0x140348E54 (KiUpdateTimer2Flags.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x140348EF0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x140348F1C (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KeGenericProcessorCallback @ 0x14035C6D8 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiTraceCancelTimer2 @ 0x140523A04 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v6; // r15
  __int64 v7; // r14
  char v8; // r13
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  char updated; // si
  char v14; // r15
  __int64 v16; // r8
  __int64 v17; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v21; // r8
  int v22; // eax
  bool v23; // zf
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  unsigned __int64 v28; // rbx
  char v29; // al
  char v30; // [rsp+30h] [rbp-D0h]
  char v33; // [rsp+34h] [rbp-CCh]
  unsigned int v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  _OWORD v40[2]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v41[44]; // [rsp+90h] [rbp-70h] BYREF

  memset(v41, 0, 0xA8uLL);
  v34 = 32;
  v37 = 0LL;
  v6 = 0LL;
  v38 = 0LL;
  v7 = 0LL;
  v39 = 0LL;
  memset(v40, 0, sizeof(v40));
  v35 = 0LL;
  v30 = 0;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v8 = 1;
    v35 = *(_QWORD *)(a1 + 96);
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
  }
  else
  {
    v8 = 0;
  }
  if ( a4 )
  {
    v16 = *a4;
    v17 = a4[1];
    if ( v8 && v16 )
    {
      LOBYTE(v39) = 8;
      v37 = v16;
      v38 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever));
    }
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever);
    v7 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v17 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v33 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v33 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v6;
      *(_QWORD *)(a1 + 120) = v7;
    }
    if ( !a2 )
      goto LABEL_11;
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1, v12, v10);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        if ( v8 )
          EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v40, 1073872896LL, v10, v11);
        updated = KiUpdateTimer2Flags(a1, v34);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v21 = CurrentPrcb->SchedulerAssist;
              v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v23 = (v22 & v21[5]) == 0;
              v21[5] &= v22;
              if ( v23 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        v14 = a3;
        if ( a3 && !updated )
        {
          v41[0] = 1310721;
          memset(&v41[1], 0, 0xA4uLL);
          KeAddProcessorAffinityEx(v41, KiClockTimerOwner);
          KeGenericProcessorCallback(v41, xHalTimerWatchdogStop, 0LL, 2LL);
        }
        goto LABEL_17;
      }
      v34 = 36;
    }
    v30 = 1;
    goto LABEL_11;
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v24 = KeGetCurrentIrql();
      if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
      {
        v25 = KeGetCurrentPrcb();
        v26 = v25->SchedulerAssist;
        v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v23 = (v27 & v26[5]) == 0;
        v26[5] &= v27;
        if ( v23 )
          KiRemoveSystemWorkPriorityKick(v25);
      }
    }
  }
  __writecr8(CurrentIrql);
  updated = 0;
  v14 = a3;
LABEL_17:
  if ( v8 && !v33 )
  {
    v28 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v35 ^ KiWaitNever, KiWaitNever));
    if ( v30 )
      KiTraceCancelTimer2(a1, v28);
    v29 = v39;
    v36 = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v28 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( a2 )
    {
      v29 = v39 | 1;
      LOBYTE(v39) = v39 | 1;
    }
    if ( v14 )
    {
      v29 |= 2u;
      LOBYTE(v39) = v29;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)&v36, 32, 0x400E02u, (__int64)v40);
    }
    else
    {
      LOBYTE(v39) = v29 | 4;
      EtwTraceTimedEvent(0xF6Bu, 0x40020000u, (__int64)&v36, 32, 0x602u, (__int64)v40);
    }
  }
  return v30;
}
