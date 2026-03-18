/*
 * XREFs of VRegEnabledInJob @ 0x1406928FC
 * Callers:
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140691898 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpIoctlDeviceDispatch @ 0x140692780 (VrpIoctlDeviceDispatch.c)
 *     VrpRegistryCallback @ 0x140780EF0 (VrpRegistryCallback.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1409262FC (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 * Callees:
 *     HalSystemVectorDispatchEntry @ 0x140203DC0 (HalSystemVectorDispatchEntry.c)
 *     PsGetPermanentSiloContext @ 0x140211FA0 (PsGetPermanentSiloContext.c)
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     PsGetParentSilo @ 0x1407FC3C0 (PsGetParentSilo.c)
 */

__int64 __fastcall VRegEnabledInJob(unsigned __int64 *a1)
{
  struct _LIST_ENTRY *CurrentSilo; // rbx
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentSilo = PsGetCurrentSilo();
  v3 = HalSystemVectorDispatchEntry();
  if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
    return 0LL;
  while ( (int)PsGetPermanentSiloContext((__int64)CurrentSilo, VrpSiloContextSlot, a1) < 0 )
  {
    CurrentSilo = (struct _LIST_ENTRY *)PsGetParentSilo(CurrentSilo, v5, v6, v7);
    if ( CurrentSilo == (struct _LIST_ENTRY *)v3 )
      return 0LL;
  }
  return 1LL;
}
