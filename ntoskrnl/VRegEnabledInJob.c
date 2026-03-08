/*
 * XREFs of VRegEnabledInJob @ 0x140736F40
 * Callers:
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x140736DF0 (VrpIoctlDeviceDispatch.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x1402992F0 (PdcCreateWatchdogAroundClientCall.c)
 *     PsGetPermanentSiloContext @ 0x1402B6120 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x14067FE00 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  __int64 CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = (__int64)PsGetCurrentSilo();
  v3 = PdcCreateWatchdogAroundClientCall();
  if ( CurrentSilo == v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext(CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == v3 )
      return 0LL;
  }
  return 1LL;
}
