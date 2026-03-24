/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0037940
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
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002D268 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(HDC **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  PopThreadGuardedObject(this + 2);
}
