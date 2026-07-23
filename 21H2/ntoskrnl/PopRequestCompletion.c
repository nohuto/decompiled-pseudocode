/*
 * XREFs of PopRequestCompletion @ 0x14037A450
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     PopFreeIrp @ 0x14037A5CC (PopFreeIrp.c)
 *     PopDiagTraceIrpFinish @ 0x14037A6C4 (PopDiagTraceIrpFinish.c)
 *     PopDequeueQuerySetIrp @ 0x14039829C (PopDequeueQuerySetIrp.c)
 *     PopDiagTraceFxDevicePowerState @ 0x14039FF3C (PopDiagTraceFxDevicePowerState.c)
 *     PopPepDeviceDState @ 0x1403A0370 (PopPepDeviceDState.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403A5D54 (PopFxNotifyPreDIrpCompletion.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140568D8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopUpdateWakeSource @ 0x14056F29C (PopUpdateWakeSource.c)
 *     PopPepDeviceWaitWake @ 0x1405747B0 (PopPepDeviceWaitWake.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // bp
  IRP *v6; // rsi
  char v7; // r14
  void (__fastcall *v8)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *); // rax
  __int64 v9; // r8
  __int64 v11; // rdx
  int Status; // eax
  __int64 v13; // rax
  __int64 v14; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 209);
  v6 = a2;
  v7 = *(_BYTE *)(a3 + 184);
  if ( v3 && v7 == 2 )
    PopFxNotifyPreDIrpCompletion(v3);
  v8 = *(void (__fastcall **)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *))(a3 + 216);
  if ( v8 )
  {
    LOBYTE(a2) = v7;
    v8(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224), &v6->IoStatus);
  }
  if ( v7 )
  {
    PopDequeueQuerySetIrp(v6);
    if ( v3 && *(_BYTE *)(a3 + 184) == 2 && *(_DWORD *)(a3 + 188) == 1 && v5 )
    {
      if ( *(_DWORD *)(a3 + 192) == 1 )
      {
        _m_prefetchw((const void *)(v3 + 32));
        if ( (_InterlockedAnd((volatile signed __int32 *)(v3 + 32), 0xFFFFFFFD) & 2) != 0 )
        {
LABEL_16:
          LOBYTE(v9) = 1;
          PopPepDeviceDState(*(_QWORD *)(v3 + 56), *(unsigned int *)(a3 + 192), v9, *(unsigned int *)(a3 + 248));
          PopDiagTraceFxDevicePowerState(*(_QWORD *)(v3 + 48), *(unsigned int *)(a3 + 192));
          goto LABEL_6;
        }
        v5 = 0;
      }
      if ( v5 )
        goto LABEL_16;
    }
  }
  else
  {
    PopDiagTraceIrpFinish(v6);
    Status = v6->IoStatus.Status;
    if ( Status >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
      {
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
        Status = v6->IoStatus.Status;
      }
      if ( Status >= 0 )
      {
        v13 = *(_QWORD *)(a3 + 24);
        v14 = v13 ? *(_QWORD *)(*(_QWORD *)(v13 + 312) + 40LL) : 0LL;
        if ( v14 && (*(_DWORD *)(v14 + 760) & 0x30000) != 0 )
          PopDirectedDripsStartDisengageTimer(0LL);
      }
    }
    if ( v3 )
    {
      LOBYTE(v11) = 1;
      PopPepDeviceWaitWake(*(_QWORD *)(v3 + 56), v11);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 248), 0, 0);
    }
  }
LABEL_6:
  PopFreeIrp(v6);
  return 3221225494LL;
}
