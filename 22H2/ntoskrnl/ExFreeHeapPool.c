/*
 * XREFs of ExFreeHeapPool @ 0x1402C2150
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     ExDeleteResourceLite @ 0x140275720 (ExDeleteResourceLite.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1402DB910 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExGetSessionPoolTagInfo @ 0x1402EBDBC (ExGetSessionPoolTagInfo.c)
 *     ExFreeCacheAwareRundownProtection @ 0x1402F7BD0 (ExFreeCacheAwareRundownProtection.c)
 *     ExFreePoolEx @ 0x140316F40 (ExFreePoolEx.c)
 *     ExpFinalizeTimerDeletion @ 0x1403218F0 (ExpFinalizeTimerDeletion.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403916E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExFreeAutoExpandPushLock @ 0x140391E00 (ExFreeAutoExpandPushLock.c)
 *     BiWasFirmwareModified @ 0x14039ADCC (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14039BE84 (BgpFwAllocateMemory.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1403A76C0 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1403A7BB4 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1403A8028 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     AdtpCleanupParameterAllocations @ 0x1403C0224 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1403C0314 (AdtpPackageParameters.c)
 *     ExFreeCacheAwarePushLock @ 0x1405B3D70 (ExFreeCacheAwarePushLock.c)
 *     ExGetWakeTimerList @ 0x1405B6088 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x1405B864C (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x1405B8A78 (ExpPrepareNewSvmDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x1405B9A40 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x1405BA3D4 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA41C (ExpSaPageGroupDescriptorFree.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA840 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAAD0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     WheapFreeErrorRecord @ 0x1405BB9E8 (WheapFreeErrorRecord.c)
 *     WheapFreeDriverPacketBuffer @ 0x1405BC2AC (WheapFreeDriverPacketBuffer.c)
 *     WheaPersistBadPageToBcd @ 0x1405BC690 (WheaPersistBadPageToBcd.c)
 *     ApiSetReleaseSchema @ 0x1405BE4C8 (ApiSetReleaseSchema.c)
 *     ApiSetComposeSchema @ 0x1405BE4E0 (ApiSetComposeSchema.c)
 *     sub_1405BFC50 @ 0x1405BFC50 (sub_1405BFC50.c)
 *     sub_1405C022C @ 0x1405C022C (sub_1405C022C.c)
 *     AdtpBuildAccessReasonAuditString @ 0x1405C22BC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1405C2834 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x1405C3294 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1405C3AC0 (BiLogFileOwnerProcess.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405C3DB4 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C3F1C (BiSpacesUpdatePhysicalDevicePath.c)
 *     _SafeReallocBlob @ 0x1405CA99C (_SafeReallocBlob.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     CcInitializeCacheManager @ 0x140A3C5E8 (CcInitializeCacheManager.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6378C (WheapInitializeErrorSourceTable.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140A94C98 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A951A8 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x140A955E8 (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140A957E8 (SbpStartLanman.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
 *     PspReturnQuota @ 0x1402C2010 (PspReturnQuota.c)
 *     RtlpHpFreeHeap @ 0x1402C2790 (RtlpHpFreeHeap.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402C2A00 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402FABD0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpQueryVA @ 0x1402FE5C0 (RtlpHpQueryVA.c)
 *     ExpRemovePoolTrackerExpansion @ 0x14030F6D0 (ExpRemovePoolTrackerExpansion.c)
 *     ExpHpIsSpecialPoolHeap @ 0x1403CD64C (ExpHpIsSpecialPoolHeap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x140515A3C (KeCheckForTimer.c)
 *     VerifierFreeTrackedPool @ 0x1405A1BE0 (VerifierFreeTrackedPool.c)
 *     EtwTracePool @ 0x1405A7C04 (EtwTracePool.c)
 *     ExpCheckForResource @ 0x1405B5564 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5CFC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x1405B6988 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x1405B6F04 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA020 (ExpFreeHeapSpecialPool.c)
 *     VfFreePoolNotification @ 0x1409E0084 (VfFreePoolNotification.c)
 */

PSLIST_ENTRY __fastcall ExFreeHeapPool(ULONG_PTR BugCheckParameter2)
{
  char v2; // al
  int v3; // eax
  __int64 v4; // rcx
  ULONG_PTR v5; // rax
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  ULONG_PTR v8; // rdi
  unsigned int v9; // r15d
  int v10; // r13d
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  struct _KPROCESS *v24; // r14
  ULONG v25; // edx
  __int64 v26; // rcx
  int v27; // eax
  unsigned int v28; // r14d
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v31; // rcx
  int v32; // ett
  __int64 v33; // r9
  volatile signed __int32 *v34; // r10
  unsigned __int64 v35; // r11
  int v36; // r15d
  unsigned int v37; // r8d
  __int64 v38; // rcx
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  _QWORD *HeapManager; // rax
  __int64 v42; // rax
  int v43; // ecx
  _DWORD *v44; // rcx
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r9
  _DWORD *v51; // r8
  int v52; // eax
  bool v53; // zf
  __int128 v54; // [rsp+30h] [rbp-88h]
  __int128 v55; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v56[2]; // [rsp+50h] [rbp-68h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+0h]
  int v58; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v59; // [rsp+C8h] [rbp+10h] BYREF
  int v60; // [rsp+D0h] [rbp+18h]
  int v61; // [rsp+D4h] [rbp+1Ch]
  __int64 v62; // [rsp+D8h] [rbp+20h]

  v62 = 0LL;
  if ( BugCheckParameter2 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    v2 = 5;
  else
    v2 = 3;
  v54 = 0LL;
  *(_WORD *)((char *)&v54 + 1) = 1;
  LOBYTE(v54) = v2;
  v56[1] = v54;
  if ( (_WORD)BugCheckParameter2 )
  {
    v3 = 0;
LABEL_6:
    v4 = v3;
    v60 = 0x100000;
    v61 = 0x1000000;
    v5 = BugCheckParameter2 & ~((unsigned int)*(&v60 + v3) - 1LL);
    v6 = (RtlpHpHeapGlobals ^ v5 ^ *(_QWORD *)(v5 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v4 - 256;
    goto LABEL_7;
  }
  v55 = v54;
  HeapManager = RtlpHpEnvGetHeapManager(&v55);
  v42 = RtlCSparseBitmapBitmaskRead(HeapManager + 2, 2 * ((BugCheckParameter2 - HeapManager[1]) >> 20));
  if ( v42 )
  {
    v3 = v42 - 1;
    if ( v3 != 2 )
      goto LABEL_6;
  }
  v59 = 0LL;
  v58 = 0;
  v56[0] = v54;
  RtlpHpQueryVA(BugCheckParameter2, v56, &v59, &v58);
  v6 = *v59;
LABEL_7:
  if ( !v6 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, BugCheckParameter2, 0LL);
  if ( !ExpSpecialAllocations || !(unsigned int)ExpHpIsSpecialPoolHeap(v6) )
  {
    if ( (BugCheckParameter2 & 0xFFF) != 0 )
    {
      v7 = *(_BYTE *)(BugCheckParameter2 - 13);
      v8 = BugCheckParameter2 - 16;
      if ( (v7 & 4) != 0 )
      {
        v8 += -16LL * (unsigned __int8)*(_WORD *)v8;
        *(_BYTE *)(v8 + 3) |= 4u;
        v7 = *(_BYTE *)(v8 + 3);
      }
      v9 = *(_DWORD *)(v8 + 4);
      v10 = v8 + 16;
      v11 = v7;
      if ( (v7 & 8) != 0 )
      {
        v24 = (struct _KPROCESS *)(v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
        if ( v24 )
        {
          if ( (unsigned __int64)v24 < 0xFFFF800000000000uLL || (v24->Header.Type & 0x7F) != 3 )
            KeBugCheckEx(
              0xC2u,
              0xDuLL,
              v8 + 16,
              *(unsigned int *)(v8 + 4),
              v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
          v25 = *(_DWORD *)(v8 + 4);
          if ( v24 != PsInitialSystemProcess )
          {
            PspReturnQuota(
              *(char **)((v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8)) + 0x568),
              v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8),
              v7 & 1,
              16LL * (unsigned __int8)*(_WORD *)(v8 + 2));
            v25 = *(_DWORD *)(v8 + 4);
          }
          ObDereferenceObjectDeferDeleteWithTag(v24, v25);
        }
      }
      v12 = 16LL * (unsigned __int8)*(_WORD *)(v8 + 2);
      goto LABEL_14;
    }
    if ( BugCheckParameter2 >= 0xFFFF800000000000uLL )
    {
      v27 = (unsigned __int8)byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256];
      if ( v27 == 1 )
      {
        v28 = 33;
LABEL_49:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
        {
          SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
          SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
        }
        else
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v31 = CurrentPrcb->SchedulerAssist;
          if ( v31 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v31[6];
              v31[6] = v46 + 1;
              if ( v46 == -1 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          _m_prefetchw(&ExpLargePoolTableLock);
          v32 = ExpLargePoolTableLock & 0x7FFFFFFF;
          if ( v32 != _InterlockedCompareExchange(
                        &ExpLargePoolTableLock,
                        (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                        ExpLargePoolTableLock & 0x7FFFFFFF) )
          {
            v44 = CurrentPrcb->SchedulerAssist;
            if ( v44 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v47 = v44[6] - 1;
                v44[6] = v47;
                if ( !v47 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
            ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql);
          }
        }
        if ( (v28 & 0x20) != 0 )
        {
          v33 = *(_QWORD *)(qword_140C4DDE0 + 992);
          v34 = (volatile signed __int32 *)(qword_140C4DDE0 + 864);
          v35 = *(_QWORD *)(qword_140C4DDE0 + 1000);
        }
        else
        {
          v33 = PoolBigPageTable;
          v34 = &ExpPoolBigEntriesInUse;
          v35 = PoolBigPageTableSize;
        }
LABEL_55:
        v36 = 1;
        v37 = (((40543 * (unsigned __int64)(unsigned int)(BugCheckParameter2 >> 12)) >> 32) ^ (40543
                                                                                             * (BugCheckParameter2 >> 12))) & (v35 - 1);
        while ( *(_QWORD *)(v33 + 24LL * v37) != BugCheckParameter2 )
        {
          if ( ++v37 >= v35 )
          {
            if ( !v36 )
            {
LABEL_96:
              if ( v28
                || v33 != PoolBigPageTable
                || (unsigned int)MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process) == -1
                || (v33 = *(_QWORD *)(qword_140C4DDE0 + 992),
                    v34 = (volatile signed __int32 *)(qword_140C4DDE0 + 864),
                    v35 = *(_QWORD *)(qword_140C4DDE0 + 1000),
                    !v33)
                || !v35 )
              {
                KeBugCheckEx(0x19u, 0x22uLL, BugCheckParameter2, v28, 0LL);
              }
              goto LABEL_55;
            }
            v37 = 0;
            v36 = 0;
          }
        }
        v38 = v33 + 24LL * v37;
        if ( !v38 )
          goto LABEL_96;
        v9 = *(_DWORD *)(v38 + 8);
        v12 = *(_QWORD *)(v38 + 16);
        v11 = (*(_DWORD *)(v38 + 12) >> 8) & 0xFFF;
        _InterlockedDecrement(v34);
        _InterlockedIncrement64((volatile signed __int64 *)v38);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
        }
        else
        {
          _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
          _InterlockedDecrement(&ExpLargePoolTableLock);
        }
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        if ( v40 )
        {
          if ( v39->NestingLevel <= 1u )
          {
            v48 = v40[6] - 1;
            v40[6] = v48;
            if ( !v48 )
              KiRemoveSystemWorkPriorityKick(v39);
          }
        }
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v49 = KeGetCurrentIrql();
            if ( v49 <= 0xFu && CurrentIrql <= 0xFu && v49 >= 2u )
            {
              v50 = KeGetCurrentPrcb();
              v51 = v50->SchedulerAssist;
              v52 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v53 = (v52 & v51[5]) == 0;
              v51[5] &= v52;
              if ( v53 )
                KiRemoveSystemWorkPriorityKick(v50);
            }
          }
        }
        __writecr8(CurrentIrql);
        v8 = BugCheckParameter2;
        v10 = BugCheckParameter2;
LABEL_14:
        if ( (ExpPoolFlags & 0x207) != 0 )
        {
          if ( (ExpPoolFlags & 0x200) != 0 && !v11 )
            ExpCheckForLookaside(v8, v12);
          if ( (ExpPoolFlags & 1) != 0 )
            KeCheckForTimer(v8);
          if ( (ExpPoolFlags & 4) != 0 )
            ExpCheckForResource(v8, v12);
          if ( (ExpPoolFlags & 2) != 0 )
            ExpCheckForWorker(v8);
        }
        if ( (ExpPoolFlags & 0x10) != 0 )
          VfFreePoolNotification(v8, v12);
        if ( v9 == PoolHitTag )
          __debugbreak();
        v13 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          v13 = EtwTracePool(3618, v11, v9, v10, v12);
        if ( (v11 & 0x20) != 0 )
        {
          v15 = ExpSessionPoolTrackTable;
          v14 = ExpSessionPoolTrackTableMask;
        }
        else
        {
          LODWORD(v13) = KeGetPcr()->Prcb.Number;
          v14 = PoolTrackTableMask;
          v15 = (__int64)*(&ExPoolTagTables + v13);
        }
        v16 = v14 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
        while ( 1 )
        {
          v17 = 56LL * v16;
          v18 = *(_DWORD *)(v17 + v15);
          v19 = (_DWORD *)(v17 + v15);
          if ( v18 == v9 )
            break;
          if ( v18 || (v11 & 0x20) != 0 || (v43 = *(_DWORD *)(v17 + PoolTrackTable)) == 0 )
          {
            v16 = v14 & (v16 + 1);
            if ( v16 == (v14 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32))) )
            {
              ExpRemovePoolTrackerExpansion(v9, v12, v11);
              goto LABEL_28;
            }
          }
          else
          {
            *v19 = v43;
          }
        }
        if ( (v11 & 1) != 0 )
        {
          v20 = 8LL;
          v21 = 12LL;
        }
        else
        {
          v20 = 2LL;
          v21 = 6LL;
        }
        _InterlockedIncrement64((volatile signed __int64 *)&v19[v21]);
        _InterlockedExchangeAdd64((volatile signed __int64 *)&v19[v20], -v12);
LABEL_28:
        if ( (v11 & 0x40) != 0 )
          VerifierFreeTrackedPool(BugCheckParameter2, v12);
        v22 = *(_QWORD *)(v6 + 40);
        if ( (unsigned __int64)(v12 - 513) <= 0xD7F && v22 )
        {
          v26 = v22
              + (((unsigned int)*((unsigned __int8 *)RtlpLfhBucketIndexMap
                                + ((unsigned __int64)(unsigned int)(v12 + 15) >> 4))
                - 33
                + 1LL) << 6);
          ++*(_DWORD *)(v26 + 28);
          if ( *(_WORD *)v26 < *(_WORD *)(v26 + 16) )
            return RtlpInterlockedPushEntrySList((PSLIST_HEADER)v26, (PSLIST_ENTRY)v8);
          ++*(_DWORD *)(v26 + 32);
        }
        return (PSLIST_ENTRY)RtlpHpFreeHeap(v6, v8, 0LL);
      }
      if ( v27 != 5 && (_BYTE)v27 == 6 )
      {
        v28 = 1;
        goto LABEL_49;
      }
    }
    v28 = 0;
    goto LABEL_49;
  }
  if ( _InterlockedExchangeAdd(&ExpSpecialAllocations, 0xFFFFFFFF) == 1 )
    _InterlockedDecrement(&dword_140C4EED8);
  return (PSLIST_ENTRY)ExpFreeHeapSpecialPool(v6, BugCheckParameter2);
}
