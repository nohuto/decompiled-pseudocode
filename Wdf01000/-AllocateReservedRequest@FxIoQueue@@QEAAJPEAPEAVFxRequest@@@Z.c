__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  signed int _a1; // eax
  unsigned int v8; // esi
  FxRequest *v9; // rbx
  unsigned __int64 ObjectHandleUnchecked; // rax
  signed int v11; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  *Request = 0LL;
  m_CxDeviceInfo = this->m_CxDeviceInfo;
  pRequest = 0LL;
  m_Globals = this->m_Globals;
  if ( m_CxDeviceInfo )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  _a1 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, 0LL, &pRequest);
  v8 = _a1;
  if ( _a1 >= 0 )
  {
    v9 = pRequest;
    pRequest->m_Reserved = 1;
    v9->m_IoQueue = this;
    v9->m_ForwardProgressQueue = this;
    v9->m_Completed = 0;
    if ( this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method
      && (v9->m_Presented = 1,
          FxObject::GetObjectHandleUnchecked(v9),
          ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this),
          v11 = ((__int64 (__fastcall *)(unsigned __int64))this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method)(ObjectHandleUnchecked),
          v8 = v11,
          v11 < 0) )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x6Bu, WPP_FxIoQueue_cpp_Traceguids, v11);
      FxRequest::FreeRequest(v9);
    }
    else
    {
      *Request = v9;
    }
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x6Au, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  return v8;
}
