/*
 * XREFs of DpiReportDevicePowerStateWorkItemCallback @ 0x1C02C7610
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BFEC4 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DpiReportDevicePowerStateWorkItemCallback(__int64 IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  int v4; // esi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rbx
  __int64 v7; // rdx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = Context;
  Global = DXGGLOBAL::GetGlobal(IoObject, Context);
  v6 = Global;
  if ( *((_DWORD *)Global + 494) && *((_BYTE *)Global + 304216) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGGLOBAL *)((char *)Global + 1984), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    if ( v4 == 4 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((struct DXGGLOBAL *)((char *)v6 + 2136));
      *((_BYTE *)v6 + 304265) = 1;
    }
    if ( v8[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v7);
  }
  IoFreeWorkItem(IoWorkItem);
}
