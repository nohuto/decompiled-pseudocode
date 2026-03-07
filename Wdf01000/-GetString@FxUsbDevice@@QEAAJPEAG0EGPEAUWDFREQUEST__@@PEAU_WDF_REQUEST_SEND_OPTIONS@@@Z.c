__int64 __fastcall FxUsbDevice::GetString(
        FxUsbDevice *this,
        unsigned __int16 *String,
        unsigned __int16 *NumCharacters,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  _WDF_REQUEST_SEND_OPTIONS *p_options; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FX_POOL_TRACKER *v12; // rdi
  int v13; // ebx
  int v14; // eax
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rax
  FX_POOL **v18; // rax
  _USB_COMMON_DESCRIPTOR *p_common; // rsi
  __int64 bLength; // rax
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r8
  _USB_COMMON_DESCRIPTOR common; // [rsp+34h] [rbp-CCh] BYREF
  __m128i v27; // [rsp+40h] [rbp-C0h] BYREF
  _URB_CONTROL_DESCRIPTOR_REQUEST urb; // [rsp+50h] [rbp-B0h] BYREF
  FxSyncRequest request; // [rsp+E0h] [rbp-20h] BYREF
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+210h] [rbp+110h] BYREF
  void *retaddr; // [rsp+268h] [rbp+168h]

  p_options = Options;
  memset(&urb, 0, sizeof(urb));
  m_Globals = this->m_Globals;
  common = 0;
  options = 0LL;
  FxSyncRequest::FxSyncRequest(&request, m_Globals, 0LL, Request);
  v12 = 0LL;
  v13 = FxRequestBase::ValidateTarget(request.m_TrueRequest, this);
  if ( v13 >= 0 )
  {
    if ( String )
    {
      v14 = *NumCharacters;
      v15 = this->m_Globals;
      v27.m128i_i64[0] = 0LL;
      v27.m128i_i64[1] = 64LL;
      v16 = 2 * v14 + 2;
      v17 = retaddr;
      if ( !v15->FxPoolTrackingOn )
        v17 = 0LL;
      v18 = FxPoolAllocator(v15, &v15->FxPoolFrameworks, &v27, v16, v15->Tag, v17);
      v12 = (FX_POOL_TRACKER *)v18;
      if ( !v18 )
      {
        v13 = -1073741670;
        goto $Done_54;
      }
      p_common = (_USB_COMMON_DESCRIPTOR *)v18;
    }
    else
    {
      v16 = 2;
      p_common = &common;
    }
    urb.TransferBufferMDL = 0LL;
    urb.UrbLink = 0LL;
    urb.Index = StringIndex;
    urb.LanguageId = LangID;
    *(_DWORD *)&urb.Hdr.Length = 721032;
    urb.TransferBufferLength = v16;
    urb.TransferBuffer = p_common;
    urb.DescriptorType = 3;
    if ( !Options )
    {
      options.Size = 16;
      p_options = &options;
      options.Flags = 1;
      options.Timeout = -20000000LL;
    }
    FxFormatUsbRequest(request.m_TrueRequest, (_FILE_OBJECT *)&urb, FxUrbTypeLegacy, 0LL);
    v13 = FxIoTarget::SubmitSync(this, request.m_TrueRequest, p_options, 0LL);
    if ( v13 >= 0 )
    {
      bLength = p_common->bLength;
      if ( (bLength & 1) != 0 || (unsigned __int8)bLength < 2u )
      {
        v13 = -1073741668;
      }
      else
      {
        v21 = (unsigned __int64)(bLength - 2) >> 1;
        if ( String )
        {
          v22 = *NumCharacters;
          v23 = (unsigned __int16)v21;
          *NumCharacters = v21;
          if ( (unsigned __int16)v22 < (unsigned __int16)v21 )
          {
            v13 = -2147483643;
            v23 = v22;
          }
          memmove(String, &p_common[1], 2 * v23);
        }
        else
        {
          *NumCharacters = v21;
        }
      }
    }
    if ( v12 )
      FxPoolFree(v12);
  }
$Done_54:
  FxSyncRequest::~FxSyncRequest(&request);
  return (unsigned int)v13;
}
