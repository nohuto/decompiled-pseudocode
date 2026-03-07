__int64 __fastcall HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(__int64 a1, IRP *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int Status; // edi
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  _LARGE_INTEGER ByteOffset; // rax

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C006A0F8);
  v5 = v4;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 24) + 1636LL) & 2) != 0 )
  {
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->Parameters.CreatePipe.Parameters != (_NAMED_PIPE_CREATE_PARAMETERS *)v4 )
    {
      if ( RtlCompareMemory(
             CurrentStackLocation->Parameters.Create.SecurityContext,
             &USB_BUS_INTERFACE_USBDI_GUID,
             0x10uLL) == 16 )
      {
        CurrentStackLocation->Parameters.CreatePipe.Parameters = *(_NAMED_PIPE_CREATE_PARAMETERS **)(*(_QWORD *)(v5 + 24) + 24LL);
        goto LABEL_7;
      }
      if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_USBD_INTERFACE, 0x10uLL) == 16 )
      {
        CurrentStackLocation->Parameters.CreatePipe.Parameters = *(_NAMED_PIPE_CREATE_PARAMETERS **)(*(_QWORD *)(v5 + 24) + 24LL);
        if ( CurrentStackLocation->Parameters.QueryInterface.Size >= 0x98u
          || CurrentStackLocation->Parameters.QueryInterface.Version >= 0x602u )
        {
          *(_DWORD *)(v5 + 388) = *(_DWORD *)(CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart + 32);
        }
        goto LABEL_7;
      }
      if ( RtlCompareMemory(
             CurrentStackLocation->Parameters.Create.SecurityContext,
             &GUID_HUB_CONTROLLERSTACK_INTERFACE,
             0x10uLL) == 16 )
      {
LABEL_7:
        ++a2->CurrentLocation;
        ++a2->Tail.Overlay.CurrentStackLocation;
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 8), a2);
      }
      if ( RtlCompareMemory(
             CurrentStackLocation->Parameters.Create.SecurityContext,
             &GUID_D3COLD_SUPPORT_INTERFACE,
             0x10uLL) != 16 )
      {
        ++a2->Tail.Overlay.CurrentStackLocation;
        ++a2->CurrentLocation;
        return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                               WdfDriverGlobals,
                               a1,
                               a2);
      }
      if ( CurrentStackLocation->Parameters.QueryInterface.Size == 72
        && CurrentStackLocation->Parameters.QueryInterface.Version == 1 )
      {
        ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        Status = 0;
        if ( a2->IoStatus.Status )
        {
          *(_DWORD *)ByteOffset.QuadPart = 65608;
        }
        else
        {
          if ( *(_WORD *)ByteOffset.QuadPart != 72 || *(_WORD *)(ByteOffset.QuadPart + 2) != 1 )
          {
            Status = -1073741637;
LABEL_21:
            a2->IoStatus.Status = Status;
            goto LABEL_3;
          }
          *(_OWORD *)(v5 + 312) = *(_OWORD *)ByteOffset.QuadPart;
          *(_OWORD *)(v5 + 328) = *(_OWORD *)(ByteOffset.QuadPart + 16);
          *(_OWORD *)(v5 + 344) = *(_OWORD *)(ByteOffset.QuadPart + 32);
          *(_OWORD *)(v5 + 360) = *(_OWORD *)(ByteOffset.QuadPart + 48);
          *(_QWORD *)(v5 + 376) = *(_QWORD *)(ByteOffset.QuadPart + 64);
        }
        *(_QWORD *)(ByteOffset.QuadPart + 8) = v5;
        *(_QWORD *)(ByteOffset.QuadPart + 32) = HUBPDO_D3ColdSupportInterfaceSetD3ColdSupport;
        *(_QWORD *)(ByteOffset.QuadPart + 40) = HUBPDO_D3ColdSupportInterfaceGetIdleWakeInfo;
        *(_QWORD *)(ByteOffset.QuadPart + 24) = HUBPDO_D3ColdSupportInterfaceDereference;
        *(_QWORD *)(ByteOffset.QuadPart + 16) = HUBPDO_D3ColdSupportInterfaceReference;
        *(_QWORD *)(ByteOffset.QuadPart + 48) = HUBPDO_D3ColdSupportInterfaceGetD3ColdCapability;
        *(_QWORD *)(ByteOffset.QuadPart + 56) = HUBPDO_D3ColdSupportInterfaceGetD3ColdBusDriverSupport;
        *(_QWORD *)(ByteOffset.QuadPart + 64) = HUBPDO_D3ColdSupportInterfaceGetLastTransitionStatus;
        goto LABEL_21;
      }
    }
  }
  Status = a2->IoStatus.Status;
LABEL_3:
  IofCompleteRequest(a2, 0);
  return Status;
}
