/*
 * XREFs of ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0022E20 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvGetHDEV @ 0x1C003C250 (DrvGetHDEV.c)
 *     ?IncrementClientReferenceCount@PDEV@@QEAAXXZ @ 0x1C00449B0 (-IncrementClientReferenceCount@PDEV@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0047B30 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     INC_SHARE_REF_CNT @ 0x1C0047B70 (INC_SHARE_REF_CNT.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874 (--$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D990 (--$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C006DAC0 (hdevEnumerateDisplayOnly.c)
 *     HmgShareLockCheckIgnoreStockBit @ 0x1C009B410 (HmgShareLockCheckIgnoreStockBit.c)
 *     HmgShareLock @ 0x1C00A3060 (HmgShareLock.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceIncrement(
        __int64 a1,
        struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v5; // rcx

  v3 = (unsigned int)a1;
  v4 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( a2 )
  {
    v5 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(v4 + 16 * v3 + 8040);
    if ( v5 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v5, a2, 1);
  }
}
