/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C001B510
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006F7C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E0F0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C001A230 (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00219D4 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039738 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039B30 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0039F68 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BB18 (WPP_RECORDER_SF_qdL.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0080D10 (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0080E10 (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0080F08 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0080FD0 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00810C0 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0081188 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C008131C (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C011F064 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // esi
  unsigned int MinorFunction; // r14d
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // rcx
  unsigned __int8 *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  int v10; // edx
  int started; // eax
  char v13[8]; // [rsp+30h] [rbp-10h]
  unsigned __int8 v14; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int8 v15; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  v14 = 1;
  LOBYTE(MinorFunction) = 0;
  v15 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x30u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type == 17 )
  {
    MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v13 = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x32u,
        (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
        (char)DeviceExtension,
        *(_QWORD *)v13);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        (_DWORD)v7,
        (unsigned int)&DispatchPnPIrp,
        (_DWORD)DeviceExtension + 4008,
        (_DWORD)DeviceExtension + 4008,
        DeviceExtension->IfIndex,
        DeviceExtension->NetLuid.Value,
        MinorFunction);
    if ( MinorFunction <= 6 )
    {
      if ( MinorFunction == 6 )
      {
        started = ndisPnPIrpCancelStop(v7, DeviceExtension, a2, &v15, &v14);
      }
      else if ( MinorFunction )
      {
        switch ( MinorFunction )
        {
          case 1u:
            started = ndisPnPIrpQueryRemove(v7, DeviceExtension, a2, v8, &v14);
            break;
          case 2u:
            started = ndisPnPIrpRemoveDevice(a1, DeviceExtension, a2, &v15, &v14);
            break;
          case 3u:
            started = ndisPnPIrpCancelRemove(v7, DeviceExtension, a2, &v15, &v14);
            break;
          case 4u:
            started = ndisPnPIrpStopDevice(v7, DeviceExtension, a2, v8, &v14);
            break;
          default:
            started = ndisPnPIrpQueryStop(v7, DeviceExtension, a2, v8, &v14);
            break;
        }
      }
      else
      {
        started = ndisPnPIrpStartDevice(v7, DeviceExtension, a2, &v15, &v14);
      }
    }
    else
    {
      switch ( MinorFunction )
      {
        case 8u:
          started = ndisPnPIrpQueryInterface(v7, DeviceExtension, a2, v8, &v14);
          break;
        case 9u:
          started = ndisPnPIrpQueryCapabilities(v7, DeviceExtension, a2, v8, &v14);
          break;
        case 0xDu:
          started = ndisPnPIrpFilterResourceRequirements(v7, DeviceExtension, a2, v8, &v14);
          break;
        case 0x14u:
          started = ndisPnPIrpQueryPnPDeviceState(v7, DeviceExtension, a2, v8, &v14);
          break;
        case 0x16u:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, a2, v8, &v14);
          break;
        case 0x17u:
          started = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, a2, &v15, &v14);
          break;
        default:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v6,
              13,
              51,
              (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
              (char)DeviceExtension,
              MinorFunction);
          }
LABEL_17:
          if ( DeviceExtension->NextDeviceObject )
          {
            ++a2->CurrentLocation;
            ++a2->Tail.Overlay.CurrentStackLocation;
            v2 = IofCallDriver(DeviceExtension->NextDeviceObject, a2);
            goto LABEL_19;
          }
LABEL_24:
          if ( !v15 )
            goto LABEL_19;
          goto LABEL_25;
      }
    }
    v2 = started;
    if ( !v14 )
      goto LABEL_24;
    goto LABEL_17;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x31u,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a1,
      a2);
  v2 = -1073741808;
LABEL_25:
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
LABEL_19:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      13,
      52,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
