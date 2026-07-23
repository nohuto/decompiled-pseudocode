/*
 * XREFs of VRegEnabledInJob @ 0x1405D5B40
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x1405D3110 (VrpIoctlDeviceDispatch.c)
 *     VrpShouldOperateOnCall @ 0x1405D4160 (VrpShouldOperateOnCall.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140251020 (HalSystemVectorDispatchEntry.c)
 *     PsGetCurrentSilo @ 0x14026A8D0 (PsGetCurrentSilo.c)
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x140905C50 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 v3; // rdi

  CurrentSilo = PsGetCurrentSilo();
  v3 = HalSystemVectorDispatchEntry();
  if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo);
    if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
      return 0LL;
  }
  return 1LL;
}
