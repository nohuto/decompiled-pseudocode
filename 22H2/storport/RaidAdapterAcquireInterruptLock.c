/*
 * XREFs of RaidAdapterAcquireInterruptLock @ 0x1C0005A08
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005010 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     RaidAdapterAcquireStartIoLock @ 0x1C000B978 (RaidAdapterAcquireStartIoLock.c)
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 *     RaidAdapterStopAdapter @ 0x1C0013C7C (RaidAdapterStopAdapter.c)
 *     RaidAdapterRestartAdapter @ 0x1C0013D04 (RaidAdapterRestartAdapter.c)
 *     RaidBusEnumeratorGetLunList @ 0x1C0017870 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterRemoveUnit @ 0x1C0017B08 (RaidAdapterRemoveUnit.c)
 *     RaidAdapterInsertUnit @ 0x1C0018BC8 (RaidAdapterInsertUnit.c)
 *     RaidAdapterGetFirstUnit @ 0x1C002CBF4 (RaidAdapterGetFirstUnit.c)
 *     RaidAdapterReInitialize @ 0x1C002DC7C (RaidAdapterReInitialize.c)
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DED8 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterStartMiniport @ 0x1C00300D8 (RaidAdapterStartMiniport.c)
 *     StorAcquireSpinLockEx @ 0x1C0038188 (StorAcquireSpinLockEx.c)
 *     StorPortSynchronizeAccess @ 0x1C003A1D0 (StorPortSynchronizeAccess.c)
 * Callees:
 *     <none>
 */

KIRQL __fastcall RaidAdapterAcquireInterruptLock(__int64 a1)
{
  KIRQL v1; // bl
  __int64 v3; // rsi
  unsigned int i; // edi
  struct _KINTERRUPT *v6; // rcx

  v1 = 0;
  if ( *(_BYTE *)(a1 + 4513) )
  {
    v3 = *(_QWORD *)(a1 + 4496);
    v1 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 24));
    if ( *(_DWORD *)(a1 + 4480) == 2 )
    {
      for ( i = 1; i < *(_DWORD *)(v3 + 4); ++i )
        KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v3 + 48LL * i + 24));
    }
  }
  else
  {
    v6 = *(struct _KINTERRUPT **)(a1 + 696);
    if ( v6 )
      return KeAcquireInterruptSpinLock(v6);
  }
  return v1;
}
