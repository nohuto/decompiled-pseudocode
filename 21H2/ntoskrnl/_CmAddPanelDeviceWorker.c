/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x140A27B38
 * Callers:
 *     _CmAddPanelDevice @ 0x140A279F4 (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _RegRtlSetValue @ 0x1406D5A30 (_RegRtlSetValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407720B8 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _PnpCtxRegCreateKey @ 0x140772A24 (_PnpCtxRegCreateKey.c)
 *     _RegRtlQueryValue @ 0x14077FC64 (_RegRtlQueryValue.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140862B44 (_RegRtlDeleteKeyTransacted.c)
 *     _CmCreateDevicePanel @ 0x140A27D84 (_CmCreateDevicePanel.c)
 *     _CmDeleteDevicePanel @ 0x140A27F90 (_CmDeleteDevicePanel.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int DevicePanel; // ebx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // r8
  int v13; // [rsp+40h] [rbp-20h] BYREF
  ULONG v14; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  HANDLE v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+98h] [rbp+38h] BYREF

  v16 = 0LL;
  Handle = 0LL;
  v13 = 0;
  *a4 = 0;
  v17 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, (_DWORD)a3, (unsigned int)&v16, (__int64)&v17);
  if ( DevicePanel >= 0 )
  {
    DevicePanel = PnpCtxRegCreateKey(a1, (__int64)v16, (__int64)L"Devices", 0, 7u, 0LL, (__int64)&Handle, (__int64)&v13);
    if ( DevicePanel >= 0 )
    {
      if ( v13 == 2 )
      {
        v14 = 0;
        v9 = RegRtlQueryValue(Handle, a3, 0LL, 0LL, &v14);
        DevicePanel = v9;
        if ( v9 == -1073741772 || v9 == -1073741444 )
        {
          DevicePanel = 0;
        }
        else
        {
          if ( !v9 )
          {
            *a4 = 1;
            goto LABEL_24;
          }
          if ( v9 < 0 )
          {
LABEL_9:
            if ( DevicePanel >= 0 )
              goto LABEL_24;
            goto LABEL_10;
          }
        }
      }
      if ( *a4 )
        goto LABEL_9;
      DevicePanel = RegRtlSetValue(Handle, a3, 0, 0LL, 0);
      if ( DevicePanel >= 0 )
      {
        PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
        goto LABEL_24;
      }
    }
  }
  if ( DevicePanel != -1073741444 )
    goto LABEL_9;
  DevicePanel = -1073741772;
LABEL_10:
  if ( v13 == 1 )
  {
    if ( a1 && (v10 = *(_QWORD *)(a1 + 224)) != 0 )
      v11 = *(_QWORD *)(v10 + 8);
    else
      v11 = 0LL;
    RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v11);
  }
  if ( v17 == 1 )
    CmDeleteDevicePanel(a1, a2);
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  if ( v16 )
    ZwClose(v16);
  return (unsigned int)DevicePanel;
}
