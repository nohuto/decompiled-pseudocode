/*
 * XREFs of ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0041CB0
 * Callers:
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B774 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000B7FC (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 *     GreMarkDCUnreadable @ 0x1C00C2748 (GreMarkDCUnreadable.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1C00D2B90 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 * Callees:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 */

void __fastcall XDCOBJ::vAltUnlockFast(HDC **this)
{
  HDC *v1; // rcx
  HDC v2; // rbx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *this;
  v3 = 0;
  v2 = *v1;
  HmgDecrementShareReferenceCountEx(v1, &v3);
  if ( v3 )
    GrepDeleteDC(v2, 0x2000000u);
}
