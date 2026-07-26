/*
 * XREFs of ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C00210D4
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012CDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 *     ?ndisInitializePeriodicReceives@@YAHXZ @ 0x1C01441F0 (-ndisInitializePeriodicReceives@@YAHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C00043E0 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C0005AC0 (NdisReleaseRWLock.c)
 *     ndisCreateReceiveWorkerThreadPool @ 0x1C0028EA8 (ndisCreateReceiveWorkerThreadPool.c)
 *     ndisKillReceiveWorkerThreadPool @ 0x1C00A37F4 (ndisKillReceiveWorkerThreadPool.c)
 *     ndisSwitchMiniportReceiveFunction @ 0x1C00A4940 (ndisSwitchMiniportReceiveFunction.c)
 *     ndisTracePeriodicRcvOnOff @ 0x1C00A4AB0 (ndisTracePeriodicRcvOnOff.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisConfigurePeriodicReceives(struct _NDIS_SET_RECEIVE_RATE *a1)
{
  __int64 v2; // rdx
  int v3; // ecx
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
  ndisWaitForKernelObject(&ndisPeriodicReceivesMutex);
  if ( a1 )
  {
    if ( *((_DWORD *)a1 + 1) == -1 )
    {
      if ( byte_1C00E50C1 == 1 )
      {
        NdisAcquireRWLockWrite(Lock, &LockState, 0);
        qword_1C00E50E8 = 0LL;
        dword_1C00E50C4 = -1;
        if ( dword_1C00E50CC )
          byte_1C00E50C1 = 0;
        ndisSwitchMiniportReceiveFunction(7LL);
        NdisReleaseRWLock(Lock, &LockState);
        if ( dword_1C00E50CC )
          ndisKillReceiveWorkerThreadPool();
      }
    }
    else if ( byte_1C00E50C1 || !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      if ( BYTE2(dword_1C00E7198) )
      {
        LOBYTE(v2) = 1;
        ndisTracePeriodicRcvOnOff(0LL, v2, *((unsigned int *)a1 + 1), qword_1C00E50E8);
      }
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      v3 = dword_1C00E50C4;
      qword_1C00E50E8 = *((_QWORD *)a1 + 1);
      dword_1C00E50C4 = *((_DWORD *)a1 + 1);
      byte_1C00E50C1 = 1;
      if ( v3 == -1 )
        ndisSwitchMiniportReceiveFunction(6LL);
      goto LABEL_5;
    }
  }
  else
  {
    qword_1C00E50E8 = 0LL;
    dword_1C00E50C4 = -1;
    if ( !dword_1C00E50CC && !(unsigned int)ndisCreateReceiveWorkerThreadPool() )
    {
      NdisAcquireRWLockWrite(Lock, &LockState, 0);
      byte_1C00E50C1 = 1;
LABEL_5:
      NdisReleaseRWLock(Lock, &LockState);
    }
  }
  KeReleaseMutex(&ndisPeriodicReceivesMutex, 0);
}
