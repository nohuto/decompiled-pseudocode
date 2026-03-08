/*
 * XREFs of PsGetPermanentSiloContext @ 0x1402B6120
 * Callers:
 *     CmpParseKey @ 0x1406E7480 (CmpParseKey.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     CmGetRootKeyObjectForSilo @ 0x140735E40 (CmGetRootKeyObjectForSilo.c)
 *     CmpGetOrCreateContextForSiloNoRef @ 0x1407361AC (CmpGetOrCreateContextForSiloNoRef.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140736258 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140736830 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x140736B44 (VrpHandleIoctlCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x140736F40 (VRegEnabledInJob.c)
 *     CmLockKeyForWrite @ 0x140845EFC (CmLockKeyForWrite.c)
 *     ObInitServerSilo @ 0x14085264C (ObInitServerSilo.c)
 *     PspDeleteExternalServerSiloState @ 0x1409A9DE8 (PspDeleteExternalServerSiloState.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140A6F45C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlModifyFlags @ 0x140A6FB9C (VrpHandleIoctlModifyFlags.c)
 *     ObGetSiloRootDirectoryPath @ 0x140A711B4 (ObGetSiloRootDirectoryPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetPermanentSiloContext(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1520);
  else
    v3 = qword_140D49ED0;
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
