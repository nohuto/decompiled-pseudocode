/*
 * XREFs of ?SetPDCIdleResiliencyEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02216B4
 * Callers:
 *     ?PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C0221620 (-PDCIdleResiliencyEngagedCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C0221E86 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FE7F0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C0302A5C (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C0302ABC (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DXGGLOBAL::SetPDCIdleResiliencyEngaged(DXGGLOBAL *this, int a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v4, (DXGGLOBAL *)((char *)this + 2128), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
  if ( a2 )
  {
    DripsBlockerTrackingHelper::TimeInterval::Start((DXGGLOBAL *)((char *)this + 304376));
  }
  else
  {
    DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DXGGLOBAL *)((char *)this + 2296));
    DripsBlockerTrackingHelper::TimeInterval::Stop((DXGGLOBAL *)((char *)this + 304376));
  }
  DripsBlockerTrackingHelper::ResetDAM((DXGGLOBAL *)((char *)this + 2296));
  if ( v4[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v4);
}
