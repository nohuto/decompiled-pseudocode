/*
 * XREFs of PsIsThreadInSilo @ 0x14031C6B8
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x14077A578 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x14077ACF8 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14077B278 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14077B6E0 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A7215C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A724DC (VrpHandleIoctlGetVirtualRootKey.c)
 * Callees:
 *     PsIsProcessInSilo @ 0x140289ECC (PsIsProcessInSilo.c)
 *     PspIsSiloInSilo @ 0x1407E5990 (PspIsSiloInSilo.c)
 */

char __fastcall PsIsThreadInSilo(__int64 a1, __int64 a2)
{
  if ( !a2 )
    return 1;
  if ( *(_QWORD *)(a1 + 1624) == -3LL )
    return PsIsProcessInSilo(*(struct _KPROCESS **)(a1 + 544), a2);
  return (unsigned __int8)PspIsSiloInSilo(*(_QWORD *)(a1 + 1624)) != 0;
}
