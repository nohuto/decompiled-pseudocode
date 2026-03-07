NTSTATUS __fastcall FWUPDATE_EvtDeviceWdmIrpQueryInterfacePreprocess(__int64 a1, IRP *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  struct _DEVICE_OBJECT *v9; // rax

  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1768))(WdfDriverGlobals, a1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v4,
         off_1C006A198);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v7 = v5;
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_USBD_INTERFACE, 0x10uLL) == 16 )
  {
    CurrentStackLocation->Parameters.CreatePipe.Parameters = *(_NAMED_PIPE_CREATE_PARAMETERS **)(v7 + 248);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
           WdfDriverGlobals,
           *(_QWORD *)(v7 + 16));
    v9 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1424))(
                                    WdfDriverGlobals,
                                    v8);
    return IofCallDriver(v9, a2);
  }
  else
  {
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
             WdfDriverGlobals,
             a1,
             a2);
  }
}
