int __fastcall imp_WdfUsbTargetPipeConfigContinuousReader(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFUSBPIPE__ *Pipe,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config)
{
  unsigned int _a3; // ebx
  unsigned __int8 v6; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned int v8; // ebx
  unsigned __int16 v9; // r9
  unsigned __int64 TransferLength; // rcx
  unsigned __int64 HeaderLength; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  int result; // eax
  __int64 v15; // r9
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned int MaxPacketSize; // eax
  FxUsbPipe *v19; // rcx
  unsigned __int64 v20; // r10
  unsigned int v21; // eax
  unsigned __int8 v22; // dl
  const void *v23; // r10
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]
  FxUsbPipe *pUsbPipe; // [rsp+70h] [rbp+8h] BYREF

  _a3 = 0;
  pUsbPipe = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Pipe, 0x1203u, (void **)&pUsbPipe);
  m_Globals = pUsbPipe->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(pUsbPipe->m_Globals, retaddr);
  if ( Config->Size != 72 )
  {
    v8 = -1073741820;
    WPP_IFR_SF_qddd(m_Globals, v6, 0xEu, 0xFu, WPP_FxUsbPipeAPI_cpp_Traceguids, Config, Config->Size, 72, -1073741820);
    return v8;
  }
  if ( !Config->EvtUsbTargetPipeReadComplete )
  {
    v8 = -1073741811;
    v9 = 16;
LABEL_26:
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v9, WPP_FxUsbPipeAPI_cpp_Traceguids, v8);
    return v8;
  }
  TransferLength = Config->TransferLength;
  if ( !TransferLength )
  {
    v8 = -1073741811;
    v9 = 17;
    goto LABEL_26;
  }
  HeaderLength = Config->HeaderLength;
  v12 = HeaderLength + TransferLength;
  if ( v12 < HeaderLength )
  {
    v8 = -1073741675;
    v9 = 18;
    goto LABEL_26;
  }
  v13 = v12 + Config->TrailerLength;
  if ( v13 < v12 )
  {
    v8 = -1073741675;
    v9 = 19;
    goto LABEL_26;
  }
  result = FxValidateObjectAttributes(pUsbPipe->m_Globals, Config->BufferAttributes, 1);
  if ( result < 0 )
    return result;
  if ( !FxUsbPipe::IsType(pUsbPipe, WdfUsbPipeTypeBulk) && !FxUsbPipe::IsType((FxUsbPipe *)v15, WdfUsbPipeTypeInterrupt) )
  {
    v17 = *(int *)(v15 + 388);
    if ( v17 < v16 )
      _a3 = `FxUsbPipe::_UsbdPipeTypeToWdf'::`2'::types[v17];
    WPP_IFR_SF_qDd(m_Globals, v16, 0xEu, 0x14u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, _a3, 0xC0000010);
    return -1073741808;
  }
  if ( *(char *)(v15 + 386) >= 0 )
  {
    WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x15u, WPP_FxUsbPipeAPI_cpp_Traceguids, Pipe, -1073741808);
    return -1073741808;
  }
  if ( !*(_BYTE *)(v15 + 409) )
    return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v15, Config, v13);
  MaxPacketSize = FxUsbPipe::GetMaxPacketSize((FxUsbPipe *)v15);
  if ( !(v20 % MaxPacketSize) )
    return FxUsbPipe::InitContinuousReader((FxUsbPipe *)v15, Config, v13);
  v21 = FxUsbPipe::GetMaxPacketSize(v19);
  v8 = -1073741306;
  WPP_IFR_SF_qDd(m_Globals, v22, 0xEu, 0x16u, WPP_FxUsbPipeAPI_cpp_Traceguids, v23, v21, 0xC0000206);
  return v8;
}
