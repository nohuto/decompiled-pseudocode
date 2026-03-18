/*
 * XREFs of IopGetSessionIdFromPDO @ 0x140791464
 * Callers:
 *     IopCheckSessionDeviceAccess @ 0x1405576C8 (IopCheckSessionDeviceAccess.c)
 *     PnpNotifyTargetDeviceChange @ 0x14078386C (PnpNotifyTargetDeviceChange.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140790C38 (IopGetSessionIdFromSymbolicName.c)
 *     PnpStartDeviceNode @ 0x1407939E0 (PnpStartDeviceNode.c)
 *     PnpInitializeSessionId @ 0x1407E0E00 (PnpInitializeSessionId.c)
 *     IoRegisterContainerNotification @ 0x140948280 (IoRegisterContainerNotification.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1409569A0 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x1407914F0 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall IopGetSessionIdFromPDO(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rdx
  NTSTATUS DevicePropertyData; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  ULONG v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v1 = -1;
  v7 = 0;
  v6 = -1;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        DevicePropertyData = IoGetDevicePropertyData(a1, &DEVPKEY_Device_SessionId, 0, 0, 4u, &v6, &v8, &v7);
        v4 = v6;
        if ( DevicePropertyData < 0 )
          return (unsigned int)-1;
        return v4;
      }
    }
  }
  return v1;
}
