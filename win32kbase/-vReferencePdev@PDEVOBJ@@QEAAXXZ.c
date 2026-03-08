/*
 * XREFs of ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00448F0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreCreateDisplayDC @ 0x1C0055340 (GreCreateDisplayDC.c)
 *     bDynamicModeChange @ 0x1C006DF9C (bDynamicModeChange.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00D2150 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C018B0E0 (-MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C018B320 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     ?DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z @ 0x1C018EBEC (-DrvTransferGdiObjects@@YAXPEAUHDEV__@@0K@Z.c)
 *     ?vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z @ 0x1C019A380 (-vTransferWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@1@Z.c)
 * Callees:
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0198A10 (McTemplateK0pz_EtwWriteTransfer.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall PDEVOBJ::vReferencePdev(PDEVOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _ERESOURCE *v4; // rbx
  __int64 v5; // rax
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v6; // rdi
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = *(struct _ERESOURCE **)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8LL);
  if ( v4 )
  {
    PsEnterPriorityRegion(v3, v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  v5 = *(_QWORD *)this;
  ++*(_DWORD *)(v5 + 8);
  v6 = *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v5 + 3520);
  v7 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(SGDGetSessionState(v3) + 24);
  if ( v6 )
  {
    v7 = (NSInstrumentation::CReferenceTracker::CReferenceCountedType *)*((_QWORD *)v7 + 1007);
    if ( v7 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v7, v6, 1);
  }
  if ( v4 )
  {
    v8 = *(_QWORD *)(SGDGetSessionState(v7) + 24);
    if ( *(_DWORD *)(v8 + 180) )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(v8, (unsigned int)&LockRelease, v9, (_DWORD)v4, (__int64)L"hsem");
    }
    ExReleaseResourceAndLeaveCriticalRegion(v4);
    PsLeavePriorityRegion(v11, v10);
  }
}
