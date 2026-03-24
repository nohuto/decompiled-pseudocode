/*
 * XREFs of PsGetPermanentSiloContext @ 0x14035FF90
 * Callers:
 *     CmGetRootKeyObjectForSilo @ 0x1405D263C (CmGetRootKeyObjectForSilo.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405D29EC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     ObpLookupObjectName @ 0x1406F3F20 (ObpLookupObjectName.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x140715BF8 (CmpGetOrCreateContextForSiloNoRef.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x140715CC0 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmLockKeyForWrite @ 0x1407C2FF0 (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x1407C90E0 (ObInitServerSilo.c)
 *     CmCleanupServerSiloState @ 0x1408733DC (CmCleanupServerSiloState.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14088289C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140882F4C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x14098080C (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1304);
  else
    v3 = qword_140D24990;
  *a3 = 0LL;
  if ( a2 >= 0x20 )
  {
    a2 -= 32;
    if ( a2 >= 0x100 )
      return 3221225485LL;
    v3 = *(_QWORD *)(v3 + 512);
    if ( !v3 )
      return 3221226021LL;
  }
  v4 = *(_QWORD *)(v3 + 16LL * a2 + 8);
  if ( (v4 & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
    return 3221226021LL;
  if ( (v4 & 1) == 0 )
    return 3221225659LL;
  *a3 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
  return 0LL;
}
