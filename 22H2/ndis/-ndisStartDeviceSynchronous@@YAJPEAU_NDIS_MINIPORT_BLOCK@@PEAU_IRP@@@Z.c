/*
 * XREFs of ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0021BD8
 * Callers:
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00219D4 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x1C0021B50 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00616E0 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0023EF8 (-ndisPnPStartDevice@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z @ 0x1C0066B40 (-ndisIMCheckDeviceInstance@@YAEPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_UNICODE_STRING@@PEAPEAX@Z.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x1C0066DE0 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7480 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FC7A4 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v4; // edi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rcx
  unsigned __int16 Flags; // ax
  __int64 MediaType; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  void *v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Du,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      a1);
  DriverHandle = a1->DriverHandle;
  Flags = DriverHandle->Flags;
  if ( (Flags & 1) == 0 || (Flags & 0x20) != 0 )
  {
    v4 = ndisPnPStartDevice(a1, a2);
    if ( v4 )
    {
      v4 = -1073741823;
    }
    else
    {
      if ( (a1->Flags & 0x20000) != 0 )
      {
        MediaType = a1->MediaType;
        if ( !ndisMediaTypeCl[MediaType] && (_DWORD)MediaType != 3 )
        {
          DestinationString = 0LL;
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(a1, 1, Reason_RemovingMiniport|Reason_DriverNotReady, RunSynchronous);
      if ( (a1->Flags & 0x80u) == 0 && a1->SelectiveSuspend )
        ndisSelectiveSuspendClearStop(a1, 9LL);
    }
  }
  else
  {
    v10 = 0LL;
    a1->Flags |= 0x8000u;
    if ( ndisIMCheckDeviceInstance(DriverHandle, &a1->MiniportName, &v10) )
    {
      ndisWaitForKernelObject(&a1->DriverHandle->IMStartRemoveMutex);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
      v4 = ndisIMInitializeDeviceInstanceInternal(a1, v10);
      a1->DriverHandle->IMStartRemoveMutexOwnerThread = 0LL;
      KeReleaseMutex(&a1->DriverHandle->IMStartRemoveMutex, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x3Eu,
      (struct _GUID *)&WPP_30239a6b3a81372789f4559effab0913_Traceguids,
      (char)a1,
      v4);
  return v4;
}
