__int64 __fastcall DxgkCddQueryInterface(struct _DXGKCDD_INTERFACE *a1, unsigned int *a2)
{
  __int64 v3; // rcx
  struct DXGADAPTER *v5; // rdi
  unsigned int v6; // edx
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  DXGADAPTER *v13; // rdi
  _QWORD *v15; // rax
  DXGADAPTER *v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v3 = *(unsigned __int16 *)a1;
  if ( __PAIR32__(*((_WORD *)a1 + 1), v3) == 590352 )
  {
    v5 = (struct DXGADAPTER *)*((_QWORD *)a1 + 1);
    if ( v5 )
    {
      v6 = *((_DWORD *)a1 + 4);
      v16 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v5, v6, 0LL, 0LL, &v16, &v17, 0);
      v12 = PairingAdapters;
      if ( PairingAdapters < 0 )
      {
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
        v15[3] = v5;
        v13 = 0LL;
        v15[4] = *((unsigned int *)a1 + 4);
        v15[5] = v12;
      }
      else
      {
        v13 = v16;
      }
      if ( v13 && !*((_QWORD *)v13 + 365) )
      {
        WdLogSingleEntry1(1LL, 4445LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
          4445LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_QWORD *)a1 + 3) = W32kStub_DCompositionNotifyCompositionTokenPresent;
      *((_QWORD *)a1 + 4) = W32kStub_DCompositionNotifyCompositionTokenPresent;
      *((_QWORD *)a1 + 6) = DxgkCddCreate;
      *((_QWORD *)a1 + 7) = DxgkCddDestroy;
      *((_QWORD *)a1 + 8) = DxgkCddEnable;
      *((_QWORD *)a1 + 9) = &DxgkCddEnableLite;
      *((_QWORD *)a1 + 10) = DxgkCddDisable;
      *((_QWORD *)a1 + 13) = DxgkCddGetDisplayModeList;
      *((_QWORD *)a1 + 11) = DxgkCddLock;
      *((_QWORD *)a1 + 12) = DxgkCddUnlock;
      *((_QWORD *)a1 + 14) = DxgkCddPresent;
      *((_QWORD *)a1 + 46) = DxgkCddPresentOnScreen;
      *((_QWORD *)a1 + 15) = DxgkCddSetPalette;
      *((_QWORD *)a1 + 17) = DxgkCddSetPointerPosition;
      *((_QWORD *)a1 + 16) = DxgkCddSetPointerShape;
      *((_QWORD *)a1 + 18) = DxgkCddSetOrigin;
      *((_QWORD *)a1 + 19) = DxgkCddWaitForVerticalBlankEvent;
      *((_QWORD *)a1 + 20) = DxgkCddTerminateThread;
      *((_QWORD *)a1 + 21) = DxgkCddCreateAllocation;
      *((_QWORD *)a1 + 22) = DxgkCddDestroyAllocation;
      *((_QWORD *)a1 + 23) = DxgkCddSyncGPUAccess;
      *((_QWORD *)a1 + 24) = DxgkCddQueryResourceInfo;
      *((_QWORD *)a1 + 25) = DxgkCddQueryResourceInfoFromNtHandle;
      *((_QWORD *)a1 + 26) = DxgkCddOpenResource;
      *((_QWORD *)a1 + 27) = DxgkCddOpenResourceFromNtHandle;
      *((_QWORD *)a1 + 28) = DxgkCddLogEvent;
      *((_QWORD *)a1 + 30) = DxgkCddGdiCommand;
      *((_QWORD *)a1 + 29) = DxgkCddGetCurrentDxgProcess;
      *((_QWORD *)a1 + 31) = DxgkCddSubmitPresentHistory;
      *((_QWORD *)a1 + 32) = DxgkCddPushWorkerThreadOfOwner;
      *((_QWORD *)a1 + 33) = DxgkCddPopWorkerThreadOfOwner;
      *((_QWORD *)a1 + 34) = DxgkCddGetDriverCaps;
      *((_QWORD *)a1 + 35) = DxgkCddVerifyCddDevMode;
      *((_QWORD *)a1 + 36) = DxgkWriteDiagEntry;
      *((_QWORD *)a1 + 37) = DxgkCddAdapterReference;
      *((_QWORD *)a1 + 38) = DxgkCddAdapterDereference;
      *((_QWORD *)a1 + 5) = DxgkCddEtwLoggerEnabled;
      *((_QWORD *)a1 + 39) = DxgkCddCreateSynchronizationObject;
      *((_QWORD *)a1 + 40) = DxgkCddDestroySynchronizationObject;
      *((_QWORD *)a1 + 41) = DxgkCddSignalSynchronizationObject;
      *((_QWORD *)a1 + 42) = DxgkCddWaitForSynchronizationObject;
      *((_QWORD *)a1 + 43) = DxgkCddOpenSynchronizationObject;
      *((_QWORD *)a1 + 44) = DxgkCddNotifyGdiRendering;
      *((_QWORD *)a1 + 45) = DxgkCddIssueSyncObjectOpForDevice;
      *((_QWORD *)a1 + 47) = DxgkCddSubscribeWnfStateChange;
      *((_QWORD *)a1 + 48) = DxgkCddUnsubscribeWnfStateChange;
      *((_QWORD *)a1 + 49) = DxgkCddPrepareDripsBlockerProcessName;
      *((_QWORD *)a1 + 50) = DxgkCddMakeResident;
      *((_QWORD *)a1 + 51) = DxgkCddEvict;
      *((_QWORD *)a1 + 52) = DxgkCddWaitForSynchronizationObjectFromCpu;
      *((_QWORD *)a1 + 53) = DxgkCddSignalSynchronizationObjectFromGpu;
      *((_QWORD *)a1 + 54) = DxgkCddSubmitSignalSyncObjectsToHwQueue;
      *((_QWORD *)a1 + 55) = DxgkCddCreatePagingQueue;
      *((_QWORD *)a1 + 56) = DxgkCddDestroyPagingQueue;
      *((_QWORD *)a1 + 57) = DxgkPresentVirtualFrameBuffer;
      *((_QWORD *)a1 + 58) = &DxgkGetBootAnimationRelayState;
      *((_QWORD *)a1 + 59) = &DxgkSetBootAnimationRelayState;
      *((_QWORD *)a1 + 60) = DxgkShutdownBootGraphics;
      *((_QWORD *)a1 + 61) = DxgkGetVirtualFrameBufferAccessCount;
      *((_QWORD *)a1 + 62) = DxgkIsBootPrimarySource;
      *((_QWORD *)a1 + 63) = DxgkRequestAsyncDisplaySwitchCallout;
      *((_QWORD *)a1 + 64) = DxgCreateLiveDumpWithWdLogs;
      *((_QWORD *)a1 + 65) = DxgkCddIsSourceOwnedByDWM;
      *a2 = 528;
      if ( v13 )
        DXGADAPTER::ReleaseReference(v13);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, a1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CDD does NOT pass a valid adapter handle in DXGCDD_INTERFACE 0x%I64x.",
        (__int64)a1,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    WdLogSingleEntry5(2LL, -1073741811LL, v3, 528LL, *((unsigned __int16 *)a1 + 1), 9LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"0x%I64x Invalid DXGCDD_INTERFACE Mismatch 0x%I64x 0x%I64x version 0x%I64x 0x%I64x",
      -1073741811LL,
      *(unsigned __int16 *)a1,
      528LL,
      *((unsigned __int16 *)a1 + 1),
      9LL);
    return 3221225485LL;
  }
}
