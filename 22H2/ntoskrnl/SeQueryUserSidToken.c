/*
 * XREFs of SeQueryUserSidToken @ 0x1406544B4
 * Callers:
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1406107B4 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611674 (EtwQueryProcessTelemetryInfo.c)
 *     ExpGetProcessInformation @ 0x14063E980 (ExpGetProcessInformation.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x140654EBC (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406616E8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpQuerySidToken @ 0x140664404 (AlpcpQuerySidToken.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14067CCB4 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PiDqOpenUserObjectRegKey @ 0x14068C868 (PiDqOpenUserObjectRegKey.c)
 *     PspAssignProcessQuotaBlock @ 0x140690864 (PspAssignProcessQuotaBlock.c)
 *     CmpGetVirtualizationID @ 0x1406EBA84 (CmpGetVirtualizationID.c)
 *     CmpLogHiveFileInaccessible @ 0x1406F00E4 (CmpLogHiveFileInaccessible.c)
 *     PiDqSameUserHive @ 0x1408A4C18 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9D40 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140654560 (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
