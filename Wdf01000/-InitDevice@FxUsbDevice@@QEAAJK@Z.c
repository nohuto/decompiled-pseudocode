__int64 __fastcall FxUsbDevice::InitDevice(FxUsbDevice *this, unsigned int USBDClientContractVersionForWdfClient)
{
  signed int _a1; // eax
  int v5; // edi
  unsigned __int16 v6; // r9
  USBD_HANDLE__ *m_USBDHandle; // rcx
  FxRequestBase *m_TrueRequest; // rcx
  unsigned __int8 v9; // dl
  unsigned int wTotalLength; // esi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v13; // rax
  FX_POOL **v14; // rax
  unsigned __int8 v15; // dl
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rax
  int _a3; // ecx
  _IRP *m_Irp; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IRP *v20; // rcx
  _IO_STACK_LOCATION *v21; // rax
  void *BusContext; // rcx
  void (__fastcall *GetUSBDIVersion)(void *, _USBD_VERSION_INFORMATION *, unsigned int *); // rax
  unsigned __int16 deviceStatus; // [rsp+40h] [rbp-C0h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v27; // [rsp+60h] [rbp-A0h] BYREF
  _URB urb; // [rsp+70h] [rbp-90h] BYREF
  _USB_BUS_INTERFACE_USBDI_V1 busIf; // [rsp+110h] [rbp+10h] BYREF
  FxSyncRequest request; // [rsp+160h] [rbp+60h] BYREF
  _USB_CONFIGURATION_DESCRIPTOR config; // [rsp+290h] [rbp+190h] BYREF
  void *retaddr; // [rsp+2E8h] [rbp+1E8h]

  FxSyncRequest::FxSyncRequest(&request, this->m_Globals, 0LL, 0LL);
  memset(&urb, 0, sizeof(urb));
  if ( USBDClientContractVersionForWdfClient != -1 )
  {
    _a1 = USBD_CreateHandle(
            this->m_InStackDevice,
            this->m_TargetDevice,
            USBDClientContractVersionForWdfClient,
            this->m_Globals->Tag,
            &this->m_USBDHandle);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      v6 = 10;
LABEL_4:
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v6, WPP_FxusbDeviceKm_cpp_Traceguids, _a1);
      goto $Done_55;
    }
    m_USBDHandle = this->m_USBDHandle;
    this->m_UrbType = FxUrbTypeUsbdAllocated;
    this->m_SspIsochPipeFlags = USBD_QueryUsbCapability(
                                  m_USBDHandle,
                                  &GUID_USB_CAPABILITY_SSP_ISOCH_PIPE_FLAGS,
                                  0,
                                  0LL,
                                  0LL) >= 0;
  }
  v5 = FxRequestBase::ValidateTarget(request.m_TrueRequest, this);
  if ( v5 < 0 )
    goto $Done_55;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)&this->m_DeviceDescriptor;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = 18;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 256;
  urb.UrbControlTransfer.UrbLink = 0LL;
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  options.Size = 16;
  options.Flags = 1;
  options.Timeout = -50000000LL;
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 11;
    goto LABEL_4;
  }
  m_TrueRequest = request.m_TrueRequest;
  this->m_ControlPipe = urb.UrbSelectInterface.ConfigurationHandle;
  *(_QWORD *)&config.bLength = 0LL;
  config.MaxPower = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbControlTransfer.TransferBufferLength = 9;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &config;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  IoReuseIrp(m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 12;
    goto LABEL_4;
  }
  if ( !urb.UrbControlTransfer.TransferBufferLength )
  {
    _a1 = -1073741823;
    v5 = -1073741823;
    v6 = 13;
    goto LABEL_4;
  }
  wTotalLength = config.wTotalLength;
  m_Globals = this->m_Globals;
  if ( config.wTotalLength < 9u )
  {
    v5 = -1073741823;
    WPP_IFR_SF_DDd(m_Globals, v9, 0xEu, 0xEu, WPP_FxusbDeviceKm_cpp_Traceguids, config.wTotalLength, 9, -1073741823);
    goto $Done_55;
  }
  Tag = m_Globals->Tag;
  v13 = retaddr;
  v27.m128i_i64[0] = 0LL;
  v27.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v13 = 0LL;
  v14 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v27, (unsigned int)config.wTotalLength + 18, Tag, v13);
  this->m_ConfigDescriptor = (_USB_CONFIGURATION_DESCRIPTOR *)v14;
  if ( !v14 )
  {
    v5 = -1073741670;
    WPP_IFR_SF_dd(this->m_Globals, 2u, 0xEu, 0xFu, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength + 18, -1073741670);
    goto $Done_55;
  }
  *(_DWORD *)&urb.UrbHeader.Length = 721032;
  urb.UrbControlTransfer.TransferBufferLength = wTotalLength;
  *(_OWORD *)(&urb.UrbGetIsochPipeTransferPathDelays + 1) = (unsigned __int64)v14;
  *(_DWORD *)((char *)&urb.UrbGetIsochPipeTransferPathDelays + 130) = 512;
  urb.UrbControlTransfer.UrbLink = 0LL;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL);
  v5 = _a1;
  if ( _a1 < 0 )
  {
    v6 = 16;
    goto LABEL_4;
  }
  m_ConfigDescriptor = this->m_ConfigDescriptor;
  _a3 = m_ConfigDescriptor->wTotalLength;
  if ( _a3 != wTotalLength )
  {
    v5 = -1073741668;
    WPP_IFR_SF_DDd(this->m_Globals, v15, 0xEu, 0x11u, WPP_FxusbDeviceKm_cpp_Traceguids, wTotalLength, _a3, -1073741668);
    goto $Done_55;
  }
  if ( (m_ConfigDescriptor->bmAttributes & 0x20) != 0 )
    this->m_Traits |= 2u;
  deviceStatus = 0;
  *(_DWORD *)&urb.UrbHeader.Length = 1245320;
  urb.UrbControlTransfer.TransferBufferLength = 2;
  *((_OWORD *)&urb.UrbGetIsochPipeTransferPathDelays + 3) = 0uLL;
  urb.UrbSelectInterface.Interface.InterfaceHandle = &deviceStatus;
  urb.UrbControlDescriptorRequest.LanguageId = 0;
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, 0);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
  if ( (int)FxIoTarget::SubmitSync(this, request.m_TrueRequest, &options, 0LL) >= 0 && (deviceStatus & 1) != 0 )
    this->m_Traits |= 1u;
  memset(&busIf, 0, sizeof(busIf));
  IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
  FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
  m_Irp = request.m_TrueRequest->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  m_Irp->IoStatus.Status = -1073741637;
  --CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation->MajorFunction = 2075;
  CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
  CurrentStackLocation->Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation->Parameters.Create.Options = 65608;
  CurrentStackLocation->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
  FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
  v5 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
  if ( v5 < 0 )
  {
    memset(&busIf, 0, sizeof(busIf));
    IoReuseIrp(request.m_TrueRequest->m_Irp.m_Irp, -1073741637);
    FxRequestBase::ClearFieldsForReuse(request.m_TrueRequest);
    v20 = request.m_TrueRequest->m_Irp.m_Irp;
    v21 = v20->Tail.Overlay.CurrentStackLocation;
    v20->IoStatus.Status = -1073741637;
    --v21;
    *(_WORD *)&v21->MajorFunction = 2075;
    v21->Parameters.Read.ByteOffset.QuadPart = (__int64)&busIf;
    v21->Parameters.CreatePipe.Parameters = 0LL;
    v21->Parameters.Create.Options = 64;
    v21->Parameters.WMI.ProviderId = (unsigned __int64)&USB_BUS_INTERFACE_USBDI_GUID;
    FxRequestBase::VerifierSetFormatted(request.m_TrueRequest);
    _a1 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, 0LL, 0LL);
    v5 = _a1;
    if ( _a1 < 0 )
    {
      if ( _a1 == -1073741637 )
      {
        this->m_OnUSBD = 1;
        v5 = 0;
        goto $Done_55;
      }
      v6 = 18;
      goto LABEL_4;
    }
  }
  if ( busIf.IsDeviceHighSpeed && busIf.IsDeviceHighSpeed(busIf.BusContext) )
    this->m_Traits |= 4u;
  BusContext = busIf.BusContext;
  this->m_QueryBusTime = busIf.QueryBusTime;
  this->m_BusInterfaceDereference = busIf.InterfaceDereference;
  GetUSBDIVersion = busIf.GetUSBDIVersion;
  this->m_BusInterfaceContext = BusContext;
  GetUSBDIVersion(BusContext, &this->m_UsbdVersionInformation, &this->m_HcdPortCapabilities);
$Done_55:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v5;
}
