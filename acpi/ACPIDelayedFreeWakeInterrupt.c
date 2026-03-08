/*
 * XREFs of ACPIDelayedFreeWakeInterrupt @ 0x1C0044668
 * Callers:
 *     ACPIAssociateWakeInterrupt @ 0x1C004431C (ACPIAssociateWakeInterrupt.c)
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00449F0 (ACPIFreeWaitWakePowerRequest.c)
 * Callees:
 *     ACPIFindWakeInterruptForVector @ 0x1C00449AC (ACPIFindWakeInterruptForVector.c)
 *     OSPowerTryAcquireWakeInterruptChangeStateLock @ 0x1C0046320 (OSPowerTryAcquireWakeInterruptChangeStateLock.c)
 */

void __fastcall ACPIDelayedFreeWakeInterrupt(unsigned int a1, __int64 a2)
{
  KIRQL v4; // si
  _DWORD *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rax
  _QWORD *v8; // rcx
  _IO_DISCONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-18h] BYREF
  PVOID Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  *(_QWORD *)&Parameters.Version = 0LL;
  LODWORD(Parameters.ConnectionContext.Generic) = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( (int)ACPIFindWakeInterruptForVector(a1, a2, &Entry) >= 0 )
  {
    v5 = Entry;
    if ( !*((_DWORD *)Entry + 22) )
    {
      if ( *((_DWORD *)Entry + 14) != 5 )
      {
        if ( !(unsigned __int8)OSPowerTryAcquireWakeInterruptChangeStateLock(Entry) )
          goto LABEL_10;
        v5[14] = 1;
        KeReleaseSpinLock(&AcpiPowerLock, v4);
        Parameters.Version = 1;
        Parameters.ConnectionContext.Generic = (PVOID)*((_QWORD *)v5 + 6);
        IoDisconnectInterruptEx(&Parameters);
        v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
        v5[14] = 5;
        v4 = v6;
        KeSetEvent((PRKEVENT)(v5 + 16), 0, 0);
      }
      if ( !v5[22] )
      {
        v7 = *(_QWORD *)v5;
        if ( *(_DWORD **)(*(_QWORD *)v5 + 8LL) != v5 || (v8 = (_QWORD *)*((_QWORD *)v5 + 1), (_DWORD *)*v8 != v5) )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        *((_QWORD *)v5 + 1) = v5;
        *(_QWORD *)v5 = v5;
        ExFreeToNPagedLookasideList(&WakeInterruptLookAsideList, v5);
      }
    }
  }
LABEL_10:
  KeReleaseSpinLock(&AcpiPowerLock, v4);
}
