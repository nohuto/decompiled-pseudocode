/*
 * XREFs of SeQueryUserSidToken @ 0x14071E204
 * Callers:
 *     AlpcpPortQueryConnectedSidInfo @ 0x1405DD3F8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpQuerySidToken @ 0x1405E3454 (AlpcpQuerySidToken.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1405F758C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PiDqOpenUserObjectRegKey @ 0x140607838 (PiDqOpenUserObjectRegKey.c)
 *     PspAssignProcessQuotaBlock @ 0x14060BFA4 (PspAssignProcessQuotaBlock.c)
 *     CmpGetVirtualizationID @ 0x140667EC4 (CmpGetVirtualizationID.c)
 *     CmpLogHiveFileInaccessible @ 0x14066A9C4 (CmpLogHiveFileInaccessible.c)
 *     ExpWnfQueryCurrentUserSID @ 0x14069FE04 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A0CC4 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCheckConnectionSecurity @ 0x1406CE284 (AlpcpCheckConnectionSecurity.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14071EC0C (EtwpGetSidExtendedHeaderItem.c)
 *     PiDqSameUserHive @ 0x1408A4D28 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9E50 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x14071E2B0 (RtlCopySid.c)
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
