/*
 * XREFs of PcisuppWriteIntLine @ 0x1C009A378
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C009D040 (IrqArbCommitAllocation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PcisuppWriteIntLine(__int64 a1, char a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx

  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(&PciRouteInterfaceLock, 1u);
  v5 = 0;
  if ( InterruptRouting )
  {
    LOBYTE(v4) = a2;
    (*((void (__fastcall **)(__int64, __int64))InterruptRouting + 6))(a1, v4);
  }
  else
  {
    v5 = -1073741823;
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
  return v5;
}
