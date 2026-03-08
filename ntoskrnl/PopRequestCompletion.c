/*
 * XREFs of PopRequestCompletion @ 0x1402BB410
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopPepDeviceWaitWake @ 0x1402B8FC8 (PopPepDeviceWaitWake.c)
 *     PopFxNotifyPreDIrpCompletion @ 0x1402BA43C (PopFxNotifyPreDIrpCompletion.c)
 *     PopHandleDevicePowerIrpCompletion @ 0x1402BB4F0 (PopHandleDevicePowerIrpCompletion.c)
 *     PopFreeIrp @ 0x1402BB5E8 (PopFreeIrp.c)
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140584B8C (PopDirectedDripsStartDisengageTimer.c)
 *     PopUpdateWakeSource @ 0x14058C278 (PopUpdateWakeSource.c)
 */

__int64 __fastcall PopRequestCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  char v5; // r14
  IRP *v6; // rsi
  void (__fastcall *v7)(_QWORD, __int64, _QWORD, _QWORD, IO_STATUS_BLOCK *); // rax
  int *v8; // rbp
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx

  v3 = *(_QWORD *)(a3 + 200);
  v5 = *(_BYTE *)(a3 + 184);
  v6 = (IRP *)a2;
  if ( v3 && v5 == 2 )
    PopFxNotifyPreDIrpCompletion(v3, a2, *(_DWORD *)(a2 + 48));
  v7 = *(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, IO_STATUS_BLOCK *))(a3 + 216);
  v8 = (int *)&v6->IoStatus.0;
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
    if ( *v8 >= 0 )
    {
      if ( *(_BYTE *)(a3 + 240) )
        PopUpdateWakeSource(*(PVOID *)(a3 + 24));
      if ( *v8 >= 0 )
      {
        v11 = *(_QWORD *)(a3 + 24);
        if ( v11 )
        {
          v12 = *(_QWORD *)(*(_QWORD *)(v11 + 312) + 40LL);
          if ( v12 )
          {
            if ( (*(_DWORD *)(v12 + 760) & 0x30000) != 0 )
              PopDirectedDripsStartDisengageTimer(0LL);
          }
        }
      }
    }
    if ( v3 )
    {
      PopPepDeviceWaitWake(*(_QWORD *)(v3 + 56), 1, v10);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 244), 0xFFFFFFFF) == 1 )
        KeSetEvent((PRKEVENT)(v3 + 248), 0, 0);
    }
    PopFreeIrp(v6);
  }
  return 3221225494LL;
}
