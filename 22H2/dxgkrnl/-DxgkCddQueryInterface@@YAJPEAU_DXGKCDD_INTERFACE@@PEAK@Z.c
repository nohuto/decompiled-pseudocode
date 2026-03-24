/*
 * XREFs of ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C0162BB0
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1C01627D0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 */

__int64 __fastcall DxgkCddQueryInterface(struct _DXGKCDD_INTERFACE *a1, unsigned int *a2)
{
  struct DXGADAPTER *v4; // rdi
  __int64 v5; // rdx
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  DXGADAPTER *v10; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  DXGADAPTER *v15; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  if ( *(_DWORD *)a1 != 524824 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v12[3] = -1073741811LL;
    v12[4] = *(unsigned __int16 *)a1;
    v12[5] = 536LL;
    v12[6] = *((unsigned __int16 *)a1 + 1);
    v12[7] = 8LL;
    goto LABEL_14;
  }
  v4 = (struct DXGADAPTER *)*((_QWORD *)a1 + 1);
  if ( !v4 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v12[3] = a1;
LABEL_14:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v5 = *((unsigned int *)a1 + 4);
  v15 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v4, v5, 0LL, 0LL, &v15, &v16, 0);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v13[3] = v4;
    v10 = 0LL;
    v8 = *((unsigned int *)a1 + 4);
    v13[4] = v8;
    v13[5] = v9;
  }
  else
  {
    v10 = v15;
  }
  if ( v10 && !*((_QWORD *)v10 + 337) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v14 + 24) = 4377LL;
    WdLogEvent5_WdAssertion(v14);
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
  *((_QWORD *)a1 + 47) = DxgkCddPresentOnScreen;
  *((_QWORD *)a1 + 18) = DxgkCddSetGammaRamp;
  *((_QWORD *)a1 + 15) = DxgkCddSetPalette;
  *((_QWORD *)a1 + 17) = DxgkCddSetPointerPosition;
  *((_QWORD *)a1 + 16) = DxgkCddSetPointerShape;
  *((_QWORD *)a1 + 19) = DxgkCddSetOrigin;
  *((_QWORD *)a1 + 20) = DxgkCddWaitForVerticalBlankEvent;
  *((_QWORD *)a1 + 21) = DxgkCddTerminateThread;
  *((_QWORD *)a1 + 22) = DxgkCddCreateAllocation;
  *((_QWORD *)a1 + 23) = DxgkCddDestroyAllocation;
  *((_QWORD *)a1 + 24) = DxgkCddSyncGPUAccess;
  *((_QWORD *)a1 + 25) = DxgkCddQueryResourceInfo;
  *((_QWORD *)a1 + 26) = DxgkCddQueryResourceInfoFromNtHandle;
  *((_QWORD *)a1 + 27) = DxgkCddOpenResource;
  *((_QWORD *)a1 + 28) = DxgkCddOpenResourceFromNtHandle;
  *((_QWORD *)a1 + 29) = DxgkCddLogEvent;
  *((_QWORD *)a1 + 31) = DxgkCddGdiCommand;
  *((_QWORD *)a1 + 30) = DxgkCddGetCurrentDxgProcess;
  *((_QWORD *)a1 + 32) = DxgkCddSubmitPresentHistory;
  *((_QWORD *)a1 + 33) = DxgkCddPushWorkerThreadOfOwner;
  *((_QWORD *)a1 + 34) = DxgkCddPopWorkerThreadOfOwner;
  *((_QWORD *)a1 + 35) = DxgkCddGetDriverCaps;
  *((_QWORD *)a1 + 36) = DxgkCddVerifyCddDevMode;
  *((_QWORD *)a1 + 37) = DxgkWriteDiagEntry;
  *((_QWORD *)a1 + 38) = DxgkCddAdapterReference;
  *((_QWORD *)a1 + 39) = DxgkCddAdapterDereference;
  *((_QWORD *)a1 + 5) = DxgkCddEtwLoggerEnabled;
  *((_QWORD *)a1 + 40) = DxgkCddCreateSynchronizationObject;
  *((_QWORD *)a1 + 41) = DxgkCddDestroySynchronizationObject;
  *((_QWORD *)a1 + 42) = DxgkCddSignalSynchronizationObject;
  *((_QWORD *)a1 + 43) = DxgkCddWaitForSynchronizationObject;
  *((_QWORD *)a1 + 44) = DxgkCddOpenSynchronizationObject;
  *((_QWORD *)a1 + 45) = DxgkCddNotifyGdiRendering;
  *((_QWORD *)a1 + 46) = DxgkCddIssueSyncObjectOpForDevice;
  *((_QWORD *)a1 + 48) = DxgkCddSubscribeWnfStateChange;
  *((_QWORD *)a1 + 49) = DxgkCddUnsubscribeWnfStateChange;
  *((_QWORD *)a1 + 50) = DxgkCddPrepareDripsBlockerProcessName;
  *((_QWORD *)a1 + 51) = DxgkCddMakeResident;
  *((_QWORD *)a1 + 52) = DxgkCddEvict;
  *((_QWORD *)a1 + 53) = DxgkCddWaitForSynchronizationObjectFromCpu;
  *((_QWORD *)a1 + 54) = DxgkCddSignalSynchronizationObjectFromGpu;
  *((_QWORD *)a1 + 55) = DxgkCddSubmitSignalSyncObjectsToHwQueue;
  *((_QWORD *)a1 + 56) = DxgkCddCreatePagingQueue;
  *((_QWORD *)a1 + 57) = DxgkCddDestroyPagingQueue;
  *((_QWORD *)a1 + 58) = DxgkPresentVirtualFrameBuffer;
  *((_QWORD *)a1 + 59) = &DxgkGetBootAnimationRelayState;
  *((_QWORD *)a1 + 60) = &DxgkSetBootAnimationRelayState;
  *((_QWORD *)a1 + 61) = DxgkShutdownBootGraphics;
  *((_QWORD *)a1 + 62) = DxgkGetVirtualFrameBufferAccessCount;
  *((_QWORD *)a1 + 63) = DxgkIsBootPrimarySource;
  *((_QWORD *)a1 + 64) = DxgkRequestAsyncDisplaySwitchCallout;
  *((_QWORD *)a1 + 65) = DxgCreateLiveDumpWithWdLogs;
  *((_QWORD *)a1 + 66) = DxgkCddIsSourceOwnedByDWM;
  *a2 = 536;
  if ( v10 )
    DXGADAPTER::ReleaseReference(v10);
  return 0LL;
}
