/*
 * XREFs of UsbhFdoDeviceControl @ 0x1C002A630
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0007220 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoChainIrp @ 0x1C002A33C (UsbhFdoChainIrp.c)
 *     UsbhIoctlCyclePort @ 0x1C003E3F8 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003EBD8 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003EF0C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003F180 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003F448 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003F72C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F9BC (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C003FD3C (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C003FDD4 (UsbhIoctlGetNodeConnectionInfoEx.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C0040194 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C00404A8 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C0040798 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C0040A78 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C0040D6C (UsbhIoctlResetStuckHub.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoDeviceControl(__int64 a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  int v5; // ebx
  _DWORD *v7; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  int v20; // [rsp+30h] [rbp-28h]

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Log(a1, 8, 1178888559, (LowPart >> 2) & 0xFFF, (__int64)a2);
  if ( KeGetCurrentIrql() )
  {
    v20 = (LowPart >> 2) & 0xFFF;
    v5 = -1073741811;
    UsbhException(a1, 0, 93, 0, 0, -1073741811, v20, usbfile_hub_c, 1431, 0);
LABEL_3:
    a2->IoStatus.Status = v5;
    IofCompleteRequest(a2, 0);
    return v5;
  }
  v7 = FdoExt(a1);
  Usbh_SSH_Event(a1, 6u, (__int64)(v7 + 434));
  if ( LowPart <= 0x220444 )
  {
    if ( LowPart == 2229316 )
      return UsbhIoctlCyclePort(a1, a2);
    v8 = LowPart - 2229256;
    if ( !v8 )
      return UsbhIoctlGetNodeInformation(a1, a2);
    v9 = v8 - 4;
    if ( !v9 )
      return UsbhIoctlGetNodeConnectionInfo(a1, (_DWORD)a2);
    v10 = v9 - 4;
    if ( !v10 )
      return UsbhIoctlGetDescriptorFromNodeConnection(a1, (int)a2);
    v11 = v10 - 4;
    if ( !v11 )
      return UsbhIoctlGetNodeConnectionName(a1, a2);
    v12 = v11 - 12;
    if ( !v12 )
      return UsbhIoctlGetNodeConnectionDriverKeyName(a1, a2);
    v13 = v12 - 28;
    if ( !v13 )
      return UsbhIoctlGetHubCaps(a1, a2);
    if ( v13 == 4 )
      return UsbhIoctlGetNodeConnectionAttributes(a1, a2);
    return UsbhFdoChainIrp(a1, a2);
  }
  v14 = LowPart - 2229320;
  if ( !v14 )
    return UsbhIoctlGetNodeConnectionInfoEx(a1, (_DWORD)a2);
  v15 = v14 - 4;
  if ( !v15 )
    return UsbhIoctlResetStuckHub(a1, a2);
  v16 = v15 - 4;
  if ( !v16 )
    return UsbhIoctlGetHubCapsEx(a1, a2);
  v17 = v16 - 4;
  if ( !v17 )
    return UsbhIoctlGetHubInformationEx(a1, a2);
  v18 = v17 - 4;
  if ( !v18 )
    return UsbhIoctlGetPortConnectorProperties(a1, a2);
  v19 = v18 - 4;
  if ( v19 )
  {
    if ( v19 == 850855 )
    {
      v5 = -1073741808;
      goto LABEL_3;
    }
    return UsbhFdoChainIrp(a1, a2);
  }
  return UsbhIoctlGetNodeConnectionInfoExV2(a1, a2);
}
