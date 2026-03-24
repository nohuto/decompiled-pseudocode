/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0038DB0
 * Callers:
 *     GreSetDCOrg @ 0x1C0022940 (GreSetDCOrg.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0037720 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreGetBounds @ 0x1C0037E80 (GreGetBounds.c)
 *     _GetDCEx @ 0x1C0038070 (_GetDCEx.c)
 *     GreValidateVisrgn @ 0x1C0038E40 (GreValidateVisrgn.c)
 *     GreSelectVisRgnShared @ 0x1C003A270 (GreSelectVisRgnShared.c)
 *     GreLockVisRgnSharedOrExclusive @ 0x1C003A2F0 (GreLockVisRgnSharedOrExclusive.c)
 *     GreIsRendering @ 0x1C003AC50 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C0072240 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00BBBB0 (GreCopyVisRgn.c)
 *     GreIntersectVisRect @ 0x1C014C230 (GreIntersectVisRect.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002E6D8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(HDC **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  PopThreadGuardedObject(this + 2);
}
