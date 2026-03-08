/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x140A62D10
 * Callers:
 *     _CmAddPanelDevice @ 0x140A62BCC (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140687404 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x140687FD0 (_PnpCtxRegCreateKey.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     _RegRtlDeleteKeyTransacted @ 0x14085F0A8 (_RegRtlDeleteKeyTransacted.c)
 *     _CmCreateDevicePanel @ 0x140A62EC8 (_CmCreateDevicePanel.c)
 *     _CmDeleteDevicePanel @ 0x140A630D4 (_CmDeleteDevicePanel.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int DevicePanel; // ebx
  HANDLE Handle; // [rsp+48h] [rbp-18h]
  HANDLE v11; // [rsp+50h] [rbp-10h] BYREF
  char v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = 0LL;
  Handle = 0LL;
  *a4 = 0;
  v12 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, (_DWORD)a3, (unsigned int)&v11, (__int64)&v12);
  if ( DevicePanel >= 0 )
  {
    DevicePanel = PnpCtxRegCreateKey(a1, (__int64)v11);
    if ( DevicePanel >= 0 )
    {
      if ( *a4 )
        goto LABEL_4;
      DevicePanel = RegRtlSetValue(Handle, a3, 0, 0LL, 0);
      if ( DevicePanel >= 0 )
      {
        PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
        goto LABEL_13;
      }
    }
  }
  if ( DevicePanel != -1073741444 )
  {
LABEL_4:
    if ( DevicePanel >= 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  DevicePanel = -1073741772;
LABEL_11:
  if ( v12 == 1 )
    CmDeleteDevicePanel(a1, a2);
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  if ( v11 )
    ZwClose(v11);
  return (unsigned int)DevicePanel;
}
