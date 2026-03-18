/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C
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
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(HDC **this)
{
  if ( *this )
    XDCOBJ::vAltUnlockFast(this);
  PopThreadGuardedObject(this + 2);
}
