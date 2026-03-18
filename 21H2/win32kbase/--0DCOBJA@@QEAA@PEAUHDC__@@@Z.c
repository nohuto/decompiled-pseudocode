/*
 * XREFs of ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002BF28
 * Callers:
 *     GreIsRendering @ 0x1C0018890 (GreIsRendering.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x1C002AEA0 (GreGetBounds.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C002BFA8 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C002FA90 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C00302D0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreSetDCOrg @ 0x1C0092E00 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00AB3F0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C0177FE0 (GreIntersectVisRect.c)
 * Callees:
 *     HmgShareLockEx @ 0x1C0020870 (HmgShareLockEx.c)
 *     PushThreadGuardedObject @ 0x1C00232C0 (PushThreadGuardedObject.c)
 *     ?Feature_3101493560__private_IsEnabled@@YAHXZ @ 0x1C00D8CC0 (-Feature_3101493560__private_IsEnabled@@YAHXZ.c)
 */

DCOBJA *__fastcall DCOBJA::DCOBJA(DCOBJA *this, HDC a2)
{
  _QWORD *v2; // rdi
  unsigned int v3; // esi

  *(_QWORD *)this = 0LL;
  v2 = (_QWORD *)((char *)this + 16);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v3 = (unsigned int)a2;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  if ( (unsigned int)Feature_3101493560__private_IsEnabled() )
    PushThreadGuardedObject(
      v2,
      (unsigned __int64)this & ((unsigned __int128)-(__int128)(unsigned __int64)v2 >> 64),
      (__int64)UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic);
  *(_QWORD *)this = HmgShareLockEx(v3, 1, 0);
  return this;
}
