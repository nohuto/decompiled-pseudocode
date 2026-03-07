// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxUsbDevice::Deconfig(FxUsbDevice *this)
{
  unsigned __int8 v2; // dl
  int v3; // ebx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+20h] [rbp-E8h] BYREF
  FxSyncRequest request; // [rsp+30h] [rbp-D8h] BYREF
  _URB_SELECT_CONFIGURATION urb_8; // [rsp+168h] [rbp+60h] OVERLAPPED BYREF

  memset(&urb_8, 0, sizeof(urb_8));
  FxSyncRequest::FxSyncRequest((FxSyncRequest *)&request.m_Type, this->m_Globals, 0LL, 0LL);
  v3 = FxRequestBase::ValidateTarget(*(FxRequestBase **)&request.m_ClearContextOnDestroy, this);
  if ( v3 >= 0 )
  {
    FxUsbDevice::PipesGotoRemoveState(this, v2);
    urb_8.ConfigurationDescriptor = 0LL;
    strcpy((char *)&urb_8, "X");
    FxFormatUsbRequest(
      *(FxRequestBase **)&request.m_ClearContextOnDestroy,
      (_FILE_OBJECT *)&urb_8,
      FxUrbTypeLegacy,
      0LL);
    request.__vftable = 0LL;
    options.Timeout = 0x400000010LL;
    v3 = FxIoTarget::SubmitSync(
           this,
           *(FxRequestBase **)&request.m_ClearContextOnDestroy,
           (_WDF_REQUEST_SEND_OPTIONS *)&options.Timeout,
           0LL);
  }
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  return (unsigned int)v3;
}
