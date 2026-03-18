/*
 * XREFs of DpiReportDevicePowerStateWorkItemCallback @ 0x1C01F3A90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008468 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000860C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008694 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C0303620 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
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
