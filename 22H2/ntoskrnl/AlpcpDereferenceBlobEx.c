/*
 * XREFs of AlpcpDereferenceBlobEx @ 0x1405E9FC0
 * Callers:
 *     NtSecureConnectPort @ 0x1405DDC90 (NtSecureConnectPort.c)
 *     AlpcMessageCleanupProcedure @ 0x1405DE260 (AlpcMessageCleanupProcedure.c)
 *     AlpcpFlushResourcesPort @ 0x1405E220C (AlpcpFlushResourcesPort.c)
 *     AlpcpFlushCancelQueue @ 0x1405E262C (AlpcpFlushCancelQueue.c)
 *     AlpcpDeletePort @ 0x1405E2D20 (AlpcpDeletePort.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1405E2F90 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1405E39F0 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     AlpcpLookupMessage @ 0x1405E6870 (AlpcpLookupMessage.c)
 *     AlpcpExposeAttributes @ 0x1405E8380 (AlpcpExposeAttributes.c)
 *     AlpcpExposeHandleAttribute @ 0x1405E89F0 (AlpcpExposeHandleAttribute.c)
 *     NtAlpcDeleteSecurityContext @ 0x1405EAC90 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpCleanupProcessViews @ 0x1406142CC (AlpcpCleanupProcessViews.c)
 *     AlpcViewDestroyProcedure @ 0x14061E250 (AlpcViewDestroyProcedure.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x140664DFC (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x140665890 (AlpcConnectionDestroyProcedure.c)
 *     AlpcMessageDestroyProcedure @ 0x14066C2E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x14067C218 (AlpcpExposeViewAttribute.c)
 *     NtAlpcDeleteSectionView @ 0x140681B70 (NtAlpcDeleteSectionView.c)
 *     NtAlpcDeletePortSection @ 0x140684EE0 (NtAlpcDeletePortSection.c)
 *     AlpcRegionDestroyProcedure @ 0x140685C80 (AlpcRegionDestroyProcedure.c)
 *     AlpcpCreateReserve @ 0x140693ED4 (AlpcpCreateReserve.c)
 *     AlpcpReleaseViewAttribute @ 0x140697744 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCreateSecurityContext @ 0x1406D93AC (AlpcpCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x1406D9604 (AlpcpCaptureSecurityAttributeInternal.c)
 *     AlpcpCreateView @ 0x1406D9900 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1406DAC6C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1406DADA8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpDeleteView @ 0x1406DB348 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x1406DB380 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcCreateSectionView @ 0x1406FFC00 (NtAlpcCreateSectionView.c)
 *     AlpcpCreateSectionView @ 0x1406FFE28 (AlpcpCreateSectionView.c)
 *     NtAlpcCreatePortSection @ 0x140701AE0 (NtAlpcCreatePortSection.c)
 *     AlpcpCreateSection @ 0x140701CAC (AlpcpCreateSection.c)
 *     AlpcpDereferenceView @ 0x1408C1BF4 (AlpcpDereferenceView.c)
 *     AlpcCreateSecurityContext @ 0x1408C2310 (AlpcCreateSecurityContext.c)
 *     NtAlpcRevokeSecurityContext @ 0x1408C27C0 (NtAlpcRevokeSecurityContext.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408C34C0 (NtAlpcDeleteResourceReserve.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C35C0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpDereferenceBlobEx(ULONG_PTR BugCheckParameter2, int a2)
{
  signed __int64 BugCheckParameter4; // rax
  __int64 v4; // rdi
  void *v5; // rcx

  BugCheckParameter4 = -a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 24), -a2);
  if ( BugCheckParameter4 <= 0 )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x21uLL, BugCheckParameter4);
    v4 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (**)(void))(v4 + 24))();
    if ( (*(int (__fastcall **)(ULONG_PTR))(v4 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(
          (PNPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v4 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v5 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v4 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v4 + 8) + 7))(v5);
        else
          ExFreePoolWithTag(v5, *(_DWORD *)(v4 + 4));
      }
    }
  }
}
