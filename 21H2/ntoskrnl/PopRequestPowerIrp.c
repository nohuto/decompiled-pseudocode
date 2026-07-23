/*
 * XREFs of PopRequestPowerIrp @ 0x14036DED0
 * Callers:
 *     PopScanIdleList @ 0x14026EAB8 (PopScanIdleList.c)
 *     PoRequestPowerIrp @ 0x14036DEA0 (PoRequestPowerIrp.c)
 *     PopFxReleasePowerIrp @ 0x1403A4E64 (PopFxReleasePowerIrp.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopAllocateIrp @ 0x14036E0F0 (PopAllocateIrp.c)
 *     IofCallDriverSpecifyReturn @ 0x14036E510 (IofCallDriverSpecifyReturn.c)
 *     PopDiagTraceIrpStart @ 0x14036E594 (PopDiagTraceIrpStart.c)
 *     PopMapInternalActionToIrpAction @ 0x14038359C (PopMapInternalActionToIrpAction.c)
 *     PopQueueQuerySetIrp @ 0x140398494 (PopQueueQuerySetIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x1403A0664 (PopFxGetDeviceDStateReason.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPepDeviceWaitWake @ 0x1405747B0 (PopPepDeviceWaitWake.c)
 *     PopLogNotifyDevice @ 0x140576D0C (PopLogNotifyDevice.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, PIRP Irp)
{
  volatile __int64 *p_Type; // r14
  char v11; // cl
  __int64 result; // rax
  __int64 v13; // r8
  IRP *v14; // rdi
  __int64 v15; // rsi
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  KIRQL v23; // al
  unsigned __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v28; // eax
  bool v29; // zf
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]

  p_Type = (volatile __int64 *)&Irp->Type;
  v30 = 0LL;
  if ( Irp )
    _InterlockedExchange64((volatile __int64 *)&Irp->Type, 0LL);
  Irp = 0LL;
  if ( !a2 )
    goto LABEL_21;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  v11 = 1;
  if ( !(_BYTE)PopCurrentBroadcast )
LABEL_21:
    v11 = 0;
  result = PopAllocateIrp(a1, a3, v11, a6, a4, a5, (__int64)&Irp, (__int64)&v30);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v14 = Irp;
    if ( Irp )
    {
      v15 = v30;
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&PopRequestCompletion;
      CurrentStackLocation[-1].Context = (PVOID)v15;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v14);
        v14 = Irp;
        v15 = v30;
      }
      v18 = p_CurrentStackLocation->CurrentStackLocation;
      if ( a2 )
      {
        v18[-1].Parameters.Create.Options = 1;
        v18[-1].Parameters.Read.ByteOffset.LowPart = a3;
        if ( (_BYTE)PopCurrentBroadcast && (!*(_QWORD *)(v15 + 200) || (unsigned int)PopFxGetDeviceDStateReason() == 1) )
        {
          LOBYTE(v13) = 1;
          v18[-1].Parameters.Create.EaLength = PopMapInternalActionToIrpAction(
                                                 DWORD2(PopCurrentBroadcast),
                                                 WORD2(PopCurrentBroadcast) >> 12,
                                                 v13);
          v18[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
        }
        v19 = *(_QWORD *)(v15 + 200);
        if ( v19 && a2 == 2 )
        {
          if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v19 + 824), 0, 0) & 0x20) != 0 )
          {
            _m_prefetchw((const void *)(v19 + 32));
            if ( (_InterlockedOr((volatile signed __int32 *)(v19 + 32), 0) & 0x2000) != 0 )
            {
              v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 1152));
              *(_DWORD *)(v19 + 1180) |= 1u;
              v24 = v23;
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 1160));
              KxReleaseSpinLock((PKSPIN_LOCK)(v19 + 1152));
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql <= 0xFu && (unsigned __int8)v24 <= 0xFu && CurrentIrql >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v28 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v24 + 1));
                    v29 = (v28 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v28;
                    if ( v29 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                }
              }
              __writecr8(v24);
            }
          }
          v14 = Irp;
        }
        if ( (xmmword_140CFC490 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v14);
        PopQueueQuerySetIrp(v14);
      }
      else
      {
        v20 = *(_QWORD *)(v15 + 200);
        if ( v20 )
        {
          _m_prefetchw((const void *)(v20 + 32));
          v21 = _InterlockedOr((volatile signed __int32 *)(v20 + 32), 0);
          v22 = v30;
          v21 &= 1u;
          *(_BYTE *)(v30 + 208) = v21;
          v21 ^= 1u;
          *(_BYTE *)(v22 + 209) = v21;
          p_CurrentStackLocation = *(union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 **)(v15 + 200);
          if ( v21 )
          {
            PopPepDeviceWaitWake(p_CurrentStackLocation[7].CurrentStackLocation, 0LL);
          }
          else
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)&p_CurrentStackLocation[30] + 1, 0xFFFFFFFF) == 1 )
              KeSetEvent((PRKEVENT)&p_CurrentStackLocation[31], 0, 0);
            *(_QWORD *)(v15 + 200) = 0LL;
          }
          v14 = Irp;
        }
        v18[-1].Parameters.Read.Length = a3;
        PopDiagTraceIrpStart(p_CurrentStackLocation, v14);
        IofCallDriverSpecifyReturn(v18[-1].DeviceObject, v14, retaddr);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
