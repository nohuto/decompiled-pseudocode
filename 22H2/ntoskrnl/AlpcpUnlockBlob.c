/*
 * XREFs of AlpcpUnlockBlob @ 0x1405E7880
 * Callers:
 *     AlpcpQueryRemoteView @ 0x1405DDA24 (AlpcpQueryRemoteView.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x1405E4440 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E6EE0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpExposeAttributes @ 0x1405E8380 (AlpcpExposeAttributes.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1405E9A10 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpUnlockMessage @ 0x1405E9ECC (AlpcpUnlockMessage.c)
 *     AlpcViewDestroyProcedure @ 0x14061E250 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttribute @ 0x14067C218 (AlpcpExposeViewAttribute.c)
 *     AlpcRegionDestroyProcedure @ 0x140685C80 (AlpcRegionDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x14068C560 (AlpcSectionDeleteProcedure.c)
 *     AlpcpReleaseViewAttribute @ 0x140697744 (AlpcpReleaseViewAttribute.c)
 *     AlpcpCreateView @ 0x1406D9900 (AlpcpCreateView.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1406DA940 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x1406DAC6C (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpPrepareViewForDelivery @ 0x1406DADA8 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpMapLegacyPortView @ 0x1406FFA18 (AlpcpMapLegacyPortView.c)
 *     AlpcpCreateSectionView @ 0x1406FFE28 (AlpcpCreateSectionView.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14076FFB0 (AlpcpMapLegacyPortRemoteView.c)
 *     AlpcpForceUnlinkSecureView @ 0x1408C35C0 (AlpcpForceUnlinkSecureView.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall AlpcpUnlockBlob(ULONG_PTR BugCheckParameter2)
{
  char v1; // dl
  int v3; // eax
  signed __int64 BugCheckParameter4; // rcx
  __int64 v5; // rsi
  _SLIST_HEADER *v6; // rcx
  void *v7; // rcx

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
        v6 = &AlpcpLookasides + 8 * (unsigned __int64)*(unsigned int *)(v5 + 8);
        ++*((_DWORD *)&v6[1].HeaderX64 + 3);
        if ( LOWORD(v6->Alignment) >= LOWORD(v6[1].Alignment) )
        {
          ++LODWORD(v6[2].Alignment);
          ((void (__fastcall *)(ULONG_PTR))v6[3].Region)(BugCheckParameter2 - 48);
        }
        else
        {
          RtlpInterlockedPushEntrySList(v6, (PSLIST_ENTRY)(BugCheckParameter2 - 48));
        }
      }
      else
      {
        v7 = (void *)(BugCheckParameter2 - 48);
        if ( *(_QWORD *)(v5 + 48) )
          (*((void (__fastcall **)(void *))&AlpcpLookasides + 16 * (unsigned __int64)*(unsigned int *)(v5 + 8) + 7))(v7);
        else
          ExFreePoolWithTag(v7, *(_DWORD *)(v5 + 4));
      }
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 - 16));
    KeAbPostRelease(BugCheckParameter2 - 16);
  }
}
