/*
 * XREFs of ??0W32KIMPORTS@@QEAA@PEAX@Z @ 0x1C0021498
 * Callers:
 *     ?CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z @ 0x1C00213EC (-CreateWin32kImportTable@@YAJPEAXPEAPEAVDXGKW32KIMPORTS@@@Z.c)
 * Callees:
 *     ??0?$Win32kFunction@$$A6AJPEAU_W32THREAD@@@Z@@QEAA@PEAXPEBDP6AJPEAU_W32THREAD@@@Z@Z @ 0x1C0021450 (--0-$Win32kFunction@$$A6AJPEAU_W32THREAD@@@Z@@QEAA@PEAXPEBDP6AJPEAU_W32THREAD@@@Z@Z.c)
 */

W32KIMPORTS *__fastcall W32KIMPORTS::W32KIMPORTS(W32KIMPORTS *this, __int64 a2)
{
  __int64 ExportedRoutineByName; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this,
    a2,
    (__int64)"UserIsCurrentProcessImmersive",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 1,
    a2,
    (__int64)"ReferenceW32Thread",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 2,
    a2,
    (__int64)"DereferenceW32Thread",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  ExportedRoutineByName = RtlFindExportedRoutineByName(a2, "CheckAndProcessSurfaceComplete");
  *((_QWORD *)this + 3) = ExportedRoutineByName;
  if ( !ExportedRoutineByName )
    *((_QWORD *)this + 3) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v5 = RtlFindExportedRoutineByName(a2, "CreateRegion");
  *((_QWORD *)this + 4) = v5;
  if ( !v5 )
    *((_QWORD *)this + 4) = W32kStub_GreSfmOpenTokenEvent;
  v6 = RtlFindExportedRoutineByName(a2, "CreateRegionFromRect");
  *((_QWORD *)this + 5) = v6;
  if ( !v6 )
    *((_QWORD *)this + 5) = W32kStub_GreSfmOpenTokenEvent;
  v7 = RtlFindExportedRoutineByName(a2, "DCompositionNotifyCompositionTokenPresent");
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
    *((_QWORD *)this + 6) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v8 = RtlFindExportedRoutineByName(a2, "DCompositionNotifyPresent");
  *((_QWORD *)this + 7) = v8;
  if ( !v8 )
    *((_QWORD *)this + 7) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v9 = RtlFindExportedRoutineByName(a2, "DCompositionShouldDeferToken");
  *((_QWORD *)this + 8) = v9;
  if ( !v9 )
    *((_QWORD *)this + 8) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 9,
    a2,
    (__int64)"EngDeleteRgn",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 10,
    a2,
    (__int64)"EtwTraceCompositionSurfaceObjectUpdateEvent",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v10 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStartCompleteToken");
  *((_QWORD *)this + 11) = v10;
  if ( !v10 )
    *((_QWORD *)this + 11) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v11 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerStopCompleteToken");
  *((_QWORD *)this + 12) = v11;
  if ( !v11 )
    *((_QWORD *)this + 12) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 13,
    a2,
    (__int64)"EtwTraceFlipManagerStartTokenReleaseToFrame",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 14,
    a2,
    (__int64)"EtwTraceFlipManagerStopTokenReleaseToFrame",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 15,
    a2,
    (__int64)"EtwTraceFlipManagerPresentProcessed",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 16,
    a2,
    (__int64)"EtwTraceFlipManagerPresentDeferred",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 17,
    a2,
    (__int64)"EtwTraceFlipManagerPresentCanceled",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 18,
    a2,
    (__int64)"EtwTraceFlipManagerPresentSkipped",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v12 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentPosted");
  *((_QWORD *)this + 19) = v12;
  if ( !v12 )
    *((_QWORD *)this + 19) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 20,
    a2,
    (__int64)"EtwTraceFlipManagerPresentQueueDepth",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v13 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentRebind");
  *((_QWORD *)this + 21) = v13;
  if ( !v13 )
    *((_QWORD *)this + 21) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 22,
    a2,
    (__int64)"EtwTraceFlipManagerPresentIFlipSubmitted",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v14 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerPresentIFlipCompleted");
  *((_QWORD *)this + 23) = v14;
  if ( !v14 )
    *((_QWORD *)this + 23) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 24,
    a2,
    (__int64)"EtwTraceFlipManagerPresentIFlipPurgePreviousPresents",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 25,
    a2,
    (__int64)"EtwTraceFlipManagerPresentConfirmed",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 26,
    a2,
    (__int64)"EtwTraceFlipManagerPresentSignaled",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v15 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerProducerSetContent");
  *((_QWORD *)this + 27) = v15;
  if ( !v15 )
    *((_QWORD *)this + 27) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 28,
    a2,
    (__int64)"EtwTraceFlipManagerProducerSetContent_Enabled",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  v16 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerBufferAvailable");
  *((_QWORD *)this + 29) = v16;
  if ( !v16 )
    *((_QWORD *)this + 29) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v17 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerAddBuffer");
  *((_QWORD *)this + 30) = v17;
  if ( !v17 )
    *((_QWORD *)this + 30) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v18 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerRemoveBuffer");
  *((_QWORD *)this + 31) = v18;
  if ( !v18 )
    *((_QWORD *)this + 31) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 32,
    a2,
    (__int64)"EtwTraceFlipManagerBindingStart",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 33,
    a2,
    (__int64)"EtwTraceFlipManagerBindingInfo",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 34,
    a2,
    (__int64)"EtwTraceFlipManagerBindingStop",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v19 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerAddRemoveContent");
  *((_QWORD *)this + 35) = v19;
  if ( !v19 )
    *((_QWORD *)this + 35) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v20 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentFlip");
  *((_QWORD *)this + 36) = v20;
  if ( !v20 )
    *((_QWORD *)this + 36) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 37,
    a2,
    (__int64)"EtwTraceFlipManagerNoOpPresent",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 38,
    a2,
    (__int64)"EtwTraceFlipManagerCancelPosted",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v21 = RtlFindExportedRoutineByName(a2, "EtwTraceFlipManagerContentUnbind");
  *((_QWORD *)this + 39) = v21;
  if ( !v21 )
    *((_QWORD *)this + 39) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 40,
    a2,
    (__int64)"EtwTraceFlipManagerCreate",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 41,
    a2,
    (__int64)"EtwTraceFlipManagerDestroy",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v22 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenManagerDisableScanoutToken");
  *((_QWORD *)this + 42) = v22;
  if ( !v22 )
    *((_QWORD *)this + 42) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 43,
    a2,
    (__int64)"EtwTraceFlipManagerLost",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 44,
    a2,
    (__int64)"EtwTraceFlipManagerCanceledPresentShown",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 45,
    a2,
    (__int64)"EtwTraceFlipManagerUpdateExpectedConsumerPresentId",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v23 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenCompositionSurfaceObjectEvent");
  *((_QWORD *)this + 46) = v23;
  if ( !v23 )
    *((_QWORD *)this + 46) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v24 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenIndependentFlipSkipCompleteEvent");
  *((_QWORD *)this + 47) = v24;
  if ( !v24 )
    *((_QWORD *)this + 47) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  v25 = RtlFindExportedRoutineByName(a2, "EtwTraceTokenStateChangedEvent");
  *((_QWORD *)this + 48) = v25;
  if ( !v25 )
    *((_QWORD *)this + 48) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 49,
    a2,
    (__int64)"GreDwmDesktopOverlaysEnabled",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 50,
    a2,
    (__int64)"GreIsDwmStateLocked",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 51,
    a2,
    (__int64)"GreLockDwmState",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 52,
    a2,
    (__int64)"GreSfmCleanupPresentHistory",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v26 = RtlFindExportedRoutineByName(a2, "GreSfmGetNotificationTokens");
  *((_QWORD *)this + 53) = v26;
  if ( !v26 )
    *((_QWORD *)this + 53) = W32kStub_GreSfmOpenTokenEvent;
  v27 = RtlFindExportedRoutineByName(a2, "GreSfmGetPresentQueueEvent");
  *((_QWORD *)this + 54) = v27;
  if ( !v27 )
    *((_QWORD *)this + 54) = W32kStub_GreSfmOpenTokenEvent;
  v28 = RtlFindExportedRoutineByName(a2, "GreSfmOpenTokenEvent");
  *((_QWORD *)this + 55) = v28;
  if ( !v28 )
    *((_QWORD *)this + 55) = W32kStub_GreSfmOpenTokenEvent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 56,
    a2,
    (__int64)"GreUnlockDwmState",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v29 = RtlFindExportedRoutineByName(a2, "UserAllocDefaultCompositionSecurityDescriptor");
  *((_QWORD *)this + 57) = v29;
  if ( !v29 )
    *((_QWORD *)this + 57) = W32kStub_GreSfmOpenTokenEvent;
  v30 = RtlFindExportedRoutineByName(a2, "UserDereferenceDwmProcess");
  *((_QWORD *)this + 58) = v30;
  if ( !v30 )
    *((_QWORD *)this + 58) = W32kStub_DCompositionNotifyCompositionTokenPresent;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 59,
    a2,
    (__int64)"UserEnterUserCritSecShared",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 60,
    a2,
    (__int64)"UserIsCurrentProcessImmersive",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 61,
    a2,
    (__int64)"UserIsCurrentThreadDesktopComposed",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 62,
    a2,
    (__int64)"UserIsUserCritSecIn",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 63,
    a2,
    (__int64)"UserIsDisconnectConnection",
    (__int64)W32kStub_UserIsDisconnectConnection);
  v31 = RtlFindExportedRoutineByName(a2, "UserIsWindowDesktopComposed");
  *((_QWORD *)this + 64) = v31;
  if ( !v31 )
    *((_QWORD *)this + 64) = W32kStub_UserIsWindowDesktopComposed;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 65,
    a2,
    (__int64)"UserLeaveUserCritSec",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  v32 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmApiPort");
  *((_QWORD *)this + 66) = v32;
  if ( !v32 )
    *((_QWORD *)this + 66) = W32kStub_UserRemoveWindowedSwapChain;
  v33 = RtlFindExportedRoutineByName(a2, "UserReferenceDwmProcess");
  *((_QWORD *)this + 67) = v33;
  if ( !v33 )
    *((_QWORD *)this + 67) = W32kStub_UserRemoveWindowedSwapChain;
  v34 = RtlFindExportedRoutineByName(a2, "UserRemoveWindowedSwapChain");
  *((_QWORD *)this + 68) = v34;
  if ( !v34 )
    *((_QWORD *)this + 68) = W32kStub_UserRemoveWindowedSwapChain;
  v35 = RtlFindExportedRoutineByName(a2, "UserSetWindowedSwapChainApiExt");
  *((_QWORD *)this + 69) = v35;
  if ( !v35 )
    *((_QWORD *)this + 69) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 70,
    a2,
    (__int64)"UserUnsafeIsCurrentProcessDwm",
    (__int64)W32kStub_UserRemoveWindowedSwapChain);
  v36 = RtlFindExportedRoutineByName(a2, "UserUnsafeIsProcessDwm");
  *((_QWORD *)this + 71) = v36;
  if ( !v36 )
    *((_QWORD *)this + 71) = W32kStub_UserRemoveWindowedSwapChain;
  Win32kFunction<long (_W32THREAD *)>::Win32kFunction<long (_W32THREAD *)>(
    (__int64 *)this + 72,
    a2,
    (__int64)"Win32FreePool",
    (__int64)W32kStub_DCompositionNotifyCompositionTokenPresent);
  return this;
}
