/*
 * XREFs of _CmAddPanelDeviceWorker @ 0x140977A70
 * Callers:
 *     _CmAddPanelDevice @ 0x14097792C (_CmAddPanelDevice.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x140630370 (_PnpCtxRegCreateKey.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140746274 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140766F18 (_RegRtlDeleteKeyTransacted.c)
 *     _RegRtlSetValue @ 0x140768CB4 (_RegRtlSetValue.c)
 *     _CmCreateDevicePanel @ 0x140977C24 (_CmCreateDevicePanel.c)
 *     _CmDeleteDevicePanel @ 0x140977E34 (_CmDeleteDevicePanel.c)
 */

__int64 __fastcall CmAddPanelDeviceWorker(__int64 a1, __int64 a2, const WCHAR *a3, _BYTE *a4)
{
  int DevicePanel; // eax
  HANDLE v9; // r14
  int Key; // ebx
  int Value; // eax
  __int64 v12; // rax
  __int64 v13; // r8
  int v15; // [rsp+40h] [rbp-20h] BYREF
  HANDLE v16; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF
  char v18; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  Handle[0] = 0LL;
  v15 = 0;
  *a4 = 0;
  v18 = 0;
  DevicePanel = CmCreateDevicePanel(a1, a2, (_DWORD)a3, (unsigned int)&v16, (__int64)&v18);
  v9 = v16;
  Key = DevicePanel;
  if ( DevicePanel >= 0 )
  {
    Key = PnpCtxRegCreateKey(a1, (__int64)v16, (__int64)L"Devices", 0, 7u, 0LL, (__int64)Handle, (__int64)&v15);
    if ( Key >= 0 )
    {
      if ( v15 == 2 )
      {
        LODWORD(v16) = 0;
        Value = RegRtlQueryValue(Handle[0], a3, 0LL, 0LL, (unsigned int *)&v16);
        Key = Value;
        if ( Value == -1073741772 || Value == -1073741444 )
        {
          Key = 0;
        }
        else if ( !Value )
        {
          *a4 = 1;
          goto LABEL_24;
        }
      }
      if ( Key >= 0 && !*a4 )
      {
        Key = RegRtlSetValue(Handle[0], a3, 0, 0LL, 0);
        if ( Key >= 0 )
          PnpObjectRaisePropertyChangeEvent(a1, (__int64)a3, 1LL, 0LL, 0LL, (__int64)&DEVPKEY_Device_PanelId);
      }
    }
  }
  if ( Key == -1073741444 )
    Key = -1073741772;
  if ( Key < 0 )
  {
    if ( v15 == 1 )
    {
      if ( a1 && (v12 = *(_QWORD *)(a1 + 224)) != 0 )
        v13 = *(_QWORD *)(v12 + 8);
      else
        v13 = 0LL;
      RegRtlDeleteKeyTransacted((char *)Handle[0], 0LL, v13);
    }
    if ( v18 == 1 )
      CmDeleteDevicePanel(a1, a2);
  }
LABEL_24:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  if ( v9 )
    ZwClose(v9);
  return (unsigned int)Key;
}
