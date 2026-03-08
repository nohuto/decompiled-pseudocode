/*
 * XREFs of PsGetJobSilo @ 0x1402B60C0
 * Callers:
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140735A88 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x140A6F7DC (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A6FB9C (VrpHandleIoctlModifyFlags.c)
 * Callees:
 *     PspGetJobSilo @ 0x1402B60F4 (PspGetJobSilo.c)
 */

__int64 __fastcall PsGetJobSilo(__int64 a1)
{
  __int64 JobSilo; // rax
  __int64 *v2; // rdx

  if ( !a1 )
    return 3221225485LL;
  JobSilo = PspGetJobSilo(a1);
  if ( !JobSilo )
    return 3221226761LL;
  *v2 = JobSilo;
  return 0LL;
}
