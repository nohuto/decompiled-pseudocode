/*
 * XREFs of ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02E1A30
 * Callers:
 *     ?PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C003F52C (-PowerRuntimeDeviceDirectedPowerCallback@DXGADAPTER@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02FFA84 (-EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z.c)
 */

void __fastcall DXGGLOBAL::SetDFxEngaged(DXGGLOBAL *this, int a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  DripsBlockerTrackingHelper::EngageDFx((DXGGLOBAL *)((char *)this + 2296), a2 != 0);
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
