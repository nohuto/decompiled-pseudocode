/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C
 * Callers:
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402053F0 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     ExpDeleteTimer @ 0x14025FA00 (ExpDeleteTimer.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140266BAC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     PfLockSharedTryAcquire @ 0x14026E1F4 (PfLockSharedTryAcquire.c)
 *     FsRtlReleaseEofLock @ 0x14026F300 (FsRtlReleaseEofLock.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140279990 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x14029FCC0 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1402CAAE0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     FsRtlCheckOplockEx2 @ 0x1402D44D0 (FsRtlCheckOplockEx2.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1402E0CD0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402E51D0 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlAcquireEofLock @ 0x1402EE090 (FsRtlAcquireEofLock.c)
 *     MiLockAddressSpaceToo @ 0x1403168D0 (MiLockAddressSpaceToo.c)
 *     FlushLookUpTableBucket @ 0x14036D0F0 (FlushLookUpTableBucket.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     MiTryLockVad @ 0x1403818A8 (MiTryLockVad.c)
 *     ExpSaAllocatorAllocate @ 0x140390ECC (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14039133C (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140393C54 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140393E5C (ExpSaPageGroupFreeMemory.c)
 *     IopProcessIoTracking @ 0x1405081DC (IopProcessIoTracking.c)
 *     MiProcessTransitionHeatBatch @ 0x14055FD3C (MiProcessTransitionHeatBatch.c)
 *     ExGetWakeTimerList @ 0x1405B6088 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x1405B71C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x1405B7E40 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x1405B8270 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x1405B8DB4 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA41C (ExpSaPageGroupDescriptorFree.c)
 *     WheaInitialize @ 0x140A6305C (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140A6AE74 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x140A915EC (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14025A0AC (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  int v7; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1152);
  v7 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  v5 = a2;
  v6 = v2;
  v8 = &v5;
  v10 = 0;
  v9 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v3 + 2160), (int)&v8, 1, 0x20000200u, 1348, 5249538);
}
