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
