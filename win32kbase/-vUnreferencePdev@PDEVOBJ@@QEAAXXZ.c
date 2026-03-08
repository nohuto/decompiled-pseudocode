/*
 * XREFs of ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     hdcOpenDCW @ 0x1C003C8E0 (hdcOpenDCW.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C006DAC0 (hdevEnumerateDisplayOnly.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?MultiUserGreCleanupDrivers@@YAXXZ @ 0x1C00A0BB4 (-MultiUserGreCleanupDrivers@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C00B6450 (DrvDestroyMDEV.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00D2150 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C018B0E0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C018B170 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C018D6F8 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     EngDeleteDriverObj @ 0x1C0197F40 (EngDeleteDriverObj.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C019A380 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00D2230 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C0198958 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vUnreferencePdev(struct PDEV **this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rdi
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  struct PDEV *v9; // rdi
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v10; // rbp
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v11; // rcx
  bool v12; // zf
  int v13; // edi
  __int64 v14; // rbp
  __int64 v15; // rcx
  int v16; // r8d
  struct _ERESOURCE *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct PDEV *v20; // rax
  struct PDEV *v21; // [rsp+30h] [rbp-18h] BYREF
  int v22; // [rsp+38h] [rbp-10h]
  int v23; // [rsp+3Ch] [rbp-Ch]

  v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v4 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)(v3 + 8);
  v7 = *(_QWORD *)(SGDGetSessionState(v2) + 24);
  if ( *(_DWORD *)(v7 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(v7, v6, v8, v5, 16, (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v9 = *this;
  v10 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)*this + 440);
  v11 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v7) + 24);
  if ( v10 )
  {
    v11 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v11 + 1007);
    if ( v11 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v11, v10, 0);
  }
  v12 = (*((_DWORD *)v9 + 2))-- == 1;
  v13 = *((_DWORD *)v9 + 2);
  if ( v12 )
    RemovePDEVFromList((struct PDEV **)(v3 + 6080), *this);
  v14 = *(_QWORD *)(v3 + 8);
  v15 = *(_QWORD *)(SGDGetSessionState(v11) + 24);
  if ( *(_DWORD *)(v15 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v15,
      (unsigned int)&LockRelease,
      v16,
      v14,
      (__int64)L"GreBaseGlobals.hsemDriverMgmt");
  v17 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v17 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v17);
    PsLeavePriorityRegion(v19, v18);
  }
  if ( !v13 )
  {
    v20 = *this;
    v23 = 0;
    v21 = v20;
    v22 = 1;
    vUnreferencePdevWorker((struct tagUNREFDATA *)&v21);
  }
}
