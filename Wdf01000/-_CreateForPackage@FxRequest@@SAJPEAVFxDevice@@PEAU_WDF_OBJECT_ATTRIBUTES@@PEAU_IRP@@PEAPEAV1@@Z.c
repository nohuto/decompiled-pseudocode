__int64 __fastcall FxRequest::_CreateForPackage(
        FxDevice *Device,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxRequest **Request)
{
  FxRequestFromLookaside *RequestMemory; // rax
  FxRequest *v9; // rax
  FxRequest *v10; // rbx
  _FX_DRIVER_GLOBALS *v11; // r9
  signed int _a1; // esi

  *Request = 0LL;
  RequestMemory = (FxRequestFromLookaside *)FxDevice::AllocateRequestMemory(Device, RequestAttributes);
  if ( RequestMemory && (FxRequestFromLookaside::FxRequestFromLookaside(RequestMemory, Device, Irp), (v10 = v9) != 0LL) )
  {
    if ( Irp )
      FxRequest::AssignMemoryBuffers(v9, Device->m_ReadWriteIoType);
    v11 = 0LL;
    if ( !Device->m_Globals->FxRequestParentOptimizationOn )
      v11 = (_FX_DRIVER_GLOBALS *)Device;
    _a1 = FxObject::Commit(v10, RequestAttributes, 0LL, v11, 0);
    if ( _a1 < 0 )
    {
      WPP_IFR_SF_D(Device->m_Globals, 2u, 0x10u, 0xBu, WPP_FxRequest_cpp_Traceguids, _a1);
      FxObject::ClearEvtCallbacks(v10);
      v10->DeleteObject(v10);
    }
    else
    {
      *Request = v10;
    }
    return (unsigned int)_a1;
  }
  else
  {
    WPP_IFR_SF_D(Device->m_Globals, 2u, 0x10u, 0xAu, WPP_FxRequest_cpp_Traceguids, 0xC000009A);
    return 3221225626LL;
  }
}
