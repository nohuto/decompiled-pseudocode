/*
 * XREFs of UsbhFdoDeviceControl @ 0x1C0029C60
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C0004D80 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhFdoChainIrp @ 0x1C002996C (UsbhFdoChainIrp.c)
 *     UsbhIoctlCyclePort @ 0x1C003DB64 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003E348 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C003E67C (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C003E8F4 (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C003EBB8 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C003EE8C (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C003F11C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C003F49C (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C003F534 (UsbhIoctlGetNodeConnectionInfoEx.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C003F8F4 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C003FC08 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C003FEF8 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C00401D8 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C00404C8 (UsbhIoctlResetStuckHub.c)
 *     UsbhException @ 0x1C004A0A8 (UsbhException.c)
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
