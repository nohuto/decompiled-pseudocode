/*
 * XREFs of SeQueryUserSidToken @ 0x140706E24
 * Callers:
 *     AlpcpCheckConnectionSecurity @ 0x1405DEB24 (AlpcpCheckConnectionSecurity.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140610354 (ExpWnfQueryCurrentUserSID.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140611214 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpQuerySidToken @ 0x14062D3C4 (AlpcpQuerySidToken.c)
 *     CmpGetVirtualizationID @ 0x140672C94 (CmpGetVirtualizationID.c)
 *     CmpLogHiveFileInaccessible @ 0x1406772F4 (CmpLogHiveFileInaccessible.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406823B8 (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140698894 (PopEtGetProcessSidAndPackageIdentity.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406A98B8 (PiDqOpenUserObjectRegKey.c)
 *     PspAssignProcessQuotaBlock @ 0x1406AD8B4 (PspAssignProcessQuotaBlock.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14070782C (EtwpGetSidExtendedHeaderItem.c)
 *     PiDqSameUserHive @ 0x1408A4BC8 (PiDqSameUserHive.c)
 *     MiFindProcessImageHotPatchRecord @ 0x1408C9CF0 (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140706ED0 (RtlCopySid.c)
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
