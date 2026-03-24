/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C003796C
 * Callers:
 *     GreSetDCOrg @ 0x1C00214D0 (GreSetDCOrg.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C00362B0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x1C0036A10 (GreGetBounds.c)
 *     _GetDCEx @ 0x1C0036C00 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C00379D0 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C0038E00 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C0038E80 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C00397E0 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C0071790 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00BB990 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C014BF40 (GreIntersectVisRect.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C002CCA0 (PushThreadGuardedObject.c)
 *     HmgShareLockEx @ 0x1C002D5E0 (HmgShareLockEx.c)
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
