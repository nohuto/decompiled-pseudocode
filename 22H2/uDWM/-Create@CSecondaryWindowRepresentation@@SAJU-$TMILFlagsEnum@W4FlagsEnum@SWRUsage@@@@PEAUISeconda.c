/*
 * XREFs of ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180026E08
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x18000B930 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800118B8 (-EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentatio.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180019240 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ @ 0x180028A3C (-EnsureSecondaryWindowRepresentation@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180042108 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAILSOURCESIZE@@@Z @ 0x180045864 (-QueryWindowThumbnailSourceSize@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_QUERYWINDOWTHUMBNAI.c)
 *     ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x18008E718 (-Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedL.c)
 *     ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x1800B92E8 (-EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Initialize@CSecondaryWindowRepresentation@@IEAAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x180026EC0 (-Initialize@CSecondaryWindowRepresentation@@IEAAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUIS.c)
 *     ??0CSecondaryWindowRepresentation@@IEAA@XZ @ 0x180026FD8 (--0CSecondaryWindowRepresentation@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::Create(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void *a5,
        CSecondaryWindowRepresentation **a6)
{
  CSecondaryWindowRepresentation *v7; // rax
  CSecondaryWindowRepresentation *v8; // rdi
  int v9; // eax
  unsigned int v10; // ebx

  v7 = (CSecondaryWindowRepresentation *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                           WPF::g_pProcessHeap,
                                           424LL);
  if ( v7 )
    v8 = CSecondaryWindowRepresentation::CSecondaryWindowRepresentation(v7);
  else
    v8 = 0LL;
  if ( v8 )
  {
    v9 = CSecondaryWindowRepresentation::Initialize(v8, a4, (int)a5);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x68u);
    }
    else
    {
      *a6 = v8;
      v8 = 0LL;
    }
    if ( v8 )
      CBaseObject::Release(v8);
  }
  else
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x66u);
  }
  return v10;
}
