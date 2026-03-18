/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718
 * Callers:
 *     GreGetBounds @ 0x1C004A0F0 (GreGetBounds.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C004A2E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C004B7A8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x1C004EBC0 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C005B8F0 (GreIsRendering.c)
 *     GreSetDCOrg @ 0x1C005B960 (GreSetDCOrg.c)
 *     GreCopyVisRgn @ 0x1C005BA60 (GreCopyVisRgn.c)
 *     GreGetDCOrgEx @ 0x1C005D2D0 (GreGetDCOrgEx.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C016A640 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIntersectVisRect @ 0x1C016AF70 (GreIntersectVisRect.c)
 *     GreSelectVisRgnShared @ 0x1C016B150 (GreSelectVisRgnShared.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0041D30 (HmgShareLockEx.c)
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  unsigned int v3; // ebx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  v3 = (unsigned int)a2;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)this + 2,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  *(_QWORD *)this = HmgShareLockEx(v3, 1, 0);
  return this;
}
