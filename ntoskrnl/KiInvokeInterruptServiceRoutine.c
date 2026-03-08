/*
 * XREFs of KiInvokeInterruptServiceRoutine @ 0x14039E8DC
 * Callers:
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140250530 (EtwGetKernelTraceTimestamp.c)
 *     KiSetTimerEx @ 0x140250670 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140250B60 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 *     PerfInfoLogInterrupt @ 0x1402CD5F0 (PerfInfoLogInterrupt.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

bool __fastcall KiInvokeInterruptServiceRoutine(__int64 a1, unsigned __int8 CurrentIrql, int a3)
{
  unsigned __int64 v6; // rsi
  char v7; // r14
  bool v8; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v10; // al
  unsigned __int8 v11; // r14
  _DWORD *SchedulerAssist; // r10
  int v14; // r8d
  __int64 v15; // rax
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  char v21; // [rsp+31h] [rbp-CFh]
  __int128 Object; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v23; // [rsp+48h] [rbp-B8h]
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+64h] [rbp-9Ch]
  int v26; // [rsp+6Ch] [rbp-94h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  void *v28; // [rsp+78h] [rbp-88h]
  __int128 *p_Object; // [rsp+80h] [rbp-80h]
  __int64 v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  struct _KTIMER v33; // [rsp+A0h] [rbp-60h] BYREF
  _OWORD v34[2]; // [rsp+E0h] [rbp-20h] BYREF

  v25 = 0LL;
  v26 = 0;
  v30 = 0LL;
  v31 = 0LL;
  memset(v34, 0, sizeof(v34));
  Object = 0LL;
  v23 = 0LL;
  memset(&v33, 0, sizeof(v33));
  v6 = *(unsigned __int8 *)(a1 + 93);
  v21 = 0;
  v7 = 1;
  v8 = 0;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v6 - 2) <= 0xDu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          if ( CurrentIrql == (_BYTE)v6 )
            v14 = 1 << v6;
          else
            v14 = (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v6 + 1)) - 1) & 0xFFFFFFFC;
          SchedulerAssist[5] |= v14;
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 72);
    if ( v15 == -3 || v15 == -1 )
      v7 = 0;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
    v8 = (WORD2(PerfGlobalGroupMask) & 0x4000) != 0;
    if ( (_BYTE)KdDebuggerEnabled && KiPassiveWatchdogTimeout )
    {
      *((_QWORD *)&v23 + 1) = a1;
      *(_QWORD *)&v23 = (char *)&Object + 8;
      LOWORD(Object) = 1;
      *((_QWORD *)&Object + 1) = (char *)&Object + 8;
      BYTE2(Object) = 6;
      v33.Header.WaitListHead.Blink = &v33.Header.WaitListHead;
      DWORD1(Object) = 0;
      v33.Header.WaitListHead.Flink = &v33.Header.WaitListHead;
      v28 = &KiPassiveIsrWatchdog;
      p_Object = &Object;
      v33.Header.Type = 8;
      v33.Header.SignalState = 0;
      v33.DueTime.QuadPart = 0LL;
      v33.Period = 0;
      v33.Processor = 0;
      v24 = 275;
      v32 = 0LL;
      v27 = 0LL;
      KiSetTimerEx((__int64)&v33, -10000000LL * KiPassiveWatchdogTimeout, 0, 0, (__int64)&v24);
      v21 = 1;
    }
    v7 = 1;
  }
  *(_QWORD *)(a1 + 152) = KeGetCurrentThread();
  if ( v8 )
    EtwGetKernelTraceTimestamp((__int64)v34, 536887296LL);
  v10 = KiCallInterruptServiceRoutine(a1, v7);
  v11 = v10;
  if ( v8 )
    PerfInfoLogInterrupt(a1, (a3 << 8) | v10, (__int64)v34);
  if ( v21 && !KeCancelTimer(&v33) )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 152) = 0LL;
  if ( (_BYTE)v6 )
  {
    if ( CurrentIrql != (_BYTE)v6 )
    {
      if ( KiIrqlFlags )
      {
        v16 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = CurrentPrcb->SchedulerAssist;
          v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v20 = (v19 & v18[5]) == 0;
          v18[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v11 == 1;
}
