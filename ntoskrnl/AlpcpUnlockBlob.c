/*
 * XREFs of AlpcpUnlockBlob @ 0x1407CDB50
 * Callers:
 *     AlpcSectionDeleteProcedure @ 0x1406A04A0 (AlpcSectionDeleteProcedure.c)
 *     AlpcpCreateSectionView @ 0x1406A050C (AlpcpCreateSectionView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406A07CC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCreateView @ 0x1406A0978 (AlpcpCreateView.c)
 *     AlpcViewDestroyProcedure @ 0x1406A2290 (AlpcViewDestroyProcedure.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1406D4A10 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x140714E74 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x140715128 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpUnlockMessage @ 0x140716BD8 (AlpcpUnlockMessage.c)
 *     AlpcpQueryRemoteView @ 0x140774F54 (AlpcpQueryRemoteView.c)
 *     AlpcpExposeViewAttribute @ 0x14077E6DC (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x140782200 (AlpcRegionDestroyProcedure.c)
 *     AlpcpMapLegacyPortView @ 0x1407829D0 (AlpcpMapLegacyPortView.c)
 *     AlpcpReleaseViewAttribute @ 0x14078CD78 (AlpcpReleaseViewAttribute.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14079A3A0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1407C9EE0 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407CBD90 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessage @ 0x1407CCD50 (AlpcpReceiveMessage.c)
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407CF500 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpForceUnlinkSecureView @ 0x1409764EC (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v1; // dl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rbp
  void *v6; // rcx

  v1 = *(_BYTE *)(BugCheckParameter2 - 32);
  if ( (v1 & 1) != 0
    && (v3 = *(__int16 *)(BugCheckParameter2 - 30),
        *(_BYTE *)(BugCheckParameter2 - 32) = v1 & 0xFE,
        *(_WORD *)(BugCheckParameter2 - 30) = 0,
        0x10000 - v3 > 0)
    && (BugCheckParameter4 = v3
                           - 0x10000
                           + _InterlockedExchangeAdd64(
                               (volatile signed __int64 *)(BugCheckParameter2 - 24),
                               v3 - 0x10000),
        BugCheckParameter4 <= 0) )
  {
    if ( BugCheckParameter4 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
    v5 = AlpcpRegisteredTypes[*(unsigned __int8 *)(BugCheckParameter2 - 31)];
    (*(void (__fastcall **)(ULONG_PTR))(v5 + 24))(BugCheckParameter2);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
    if ( (*(int (__fastcall **)(ULONG_PTR))(v5 + 40))(BugCheckParameter2) >= 0 )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 - 32) & 2) != 0 )
      {
        ExFreeToNPagedLookasideList(
          (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides + *(unsigned int *)(v5 + 8),
          (PVOID)(BugCheckParameter2 - 48));
      }
      else
      {
        v6 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v5 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v6);
        else
          ExFreePoolWithTag(v6, *(_DWORD *)(v5 + 4));
      }
    }
  }
  else if ( BugCheckParameter2 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
