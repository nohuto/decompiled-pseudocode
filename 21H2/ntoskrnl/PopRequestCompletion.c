/*
 * XREFs of PopRequestCompletion @ 0x1403A4B90
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1403A4CC0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFreeIrp @ 0x1403A4DCC (PopFreeIrp.c)
 *     PopDiagTraceIrpFinish @ 0x1403A5020 (PopDiagTraceIrpFinish.c)
 *     PopPepDeviceWaitWake @ 0x1403B1230 (PopPepDeviceWaitWake.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1403B5584 (PopFxNotifyPreDIrpCompletion.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x1405C9E88 (PopDirectedDripsStartDisengageTimer.c)
 *     PopUpdateWakeSource @ 0x1405CFED4 (PopUpdateWakeSource.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, IRP *a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // bp
  IRP *v6; // rsi
  void (__fastcall *v7)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *); // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 184);
  v6 = a2;
  if ( v3 && v5 == 2 )
    PopFxNotifyPreDIrpCompletion(v3);
  v7 = *(void (__fastcall **)(_QWORD, IRP *, _QWORD, _QWORD, IO_STATUS_BLOCK *))(a3 + 216);
  if ( v7 )
  {
    LOBYTE(a2) = v5;
    v7(*(_QWORD *)(a3 + 232), a2, *(unsigned int *)(a3 + 192), *(_QWORD *)(a3 + 224), &v6->IoStatus);
  }
  if ( v5 )
  {
    PopHandleDevicePowerIrpCompletion(a3);
  }
  else
  {
    PopDiagTraceIrpFinish(v6);
    if ( v6->IoStatus.Status >= 0 )
    {
      if ( !*(_BYTE *)(a3 + 240) || (PopUpdateWakeSource(*(PVOID *)(a3 + 24)), v6->IoStatus.Status >= 0) )
      {
        v10 = *(_QWORD *)(a3 + 24);
        if ( v10 )
        {
          v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
          if ( v11 )
          {
            if ( (*(_DWORD *)(v11 + 760) & 0x30000) != 0 )
              PopDirectedDripsStartDisengageTimer(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      LOBYTE(v9) = 1;
      PopPepDeviceWaitWake(*(_QWORD *)(v3 + 56), v9);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 248), 0, 0);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
