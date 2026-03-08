/*
 * XREFs of ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C
 * Callers:
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0042910 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     EngUnlockSurface @ 0x1C00449E0 (EngUnlockSurface.c)
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0045E40 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0048350 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0048B20 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreGetBounds @ 0x1C004D5B0 (GreGetBounds.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004E8F0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0055BB0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     hdevEnumerateDisplayOnly @ 0x1C006DAC0 (hdevEnumerateDisplayOnly.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C006DC00 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00A7AF0 (HmgShareUnlockRemoveObject.c)
 * Callees:
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackObjectReferenceDecrement(
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
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v5, a2, 0);
  }
}
