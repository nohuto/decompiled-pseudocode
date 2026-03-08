/*
 * XREFs of DpiReportDevicePowerStateWorkItemCallback @ 0x1C01E5170
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02FE7F0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DpiReportDevicePowerStateWorkItemCallback(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  int v4; // esi
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (int)Context;
  Global = DXGGLOBAL::GetGlobal();
  v6 = Global;
  if ( *((_DWORD *)Global + 530) && *((_BYTE *)Global + 304376) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGGLOBAL *)((char *)Global + 2128), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
    if ( v4 == 4 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((struct DXGGLOBAL *)((char *)v6 + 2296));
      *((_BYTE *)v6 + 304425) = 1;
    }
    if ( v7[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  }
  IoFreeWorkItem(IoWorkItem);
}
