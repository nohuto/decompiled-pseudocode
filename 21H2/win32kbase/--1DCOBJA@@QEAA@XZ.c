/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C002BEFC
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
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00205B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C00D8C28 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(HDC **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(this + 2);
}
