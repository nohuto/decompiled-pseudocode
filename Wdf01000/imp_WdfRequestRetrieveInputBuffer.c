__int64 __fastcall imp_WdfRequestRetrieveInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  FxRequest *v8; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 *v10; // rbx
  int MemoryObject; // edx
  unsigned __int64 v12; // rcx
  unsigned int v14; // ebx
  void *pBuffer; // [rsp+50h] [rbp-28h] BYREF
  IFxMemory *pMemory; // [rsp+58h] [rbp-20h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxRequest *pRequest; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 length; // [rsp+98h] [rbp+20h] BYREF

  pRequest = 0LL;
  pBuffer = 0LL;
  length = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v8 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *Buffer = 0LL;
  v10 = Length;
  if ( Length )
    *Length = 0LL;
  if ( v8->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    v14 = -1073741808;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x17u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(v8, &pMemory, &pBuffer, &length);
    if ( MemoryObject < 0 )
      return (unsigned int)MemoryObject;
    v12 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer;
      if ( v10 )
        *v10 = v12;
      return (unsigned int)MemoryObject;
    }
    v14 = -1073741789;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        m_Globals,
        5u,
        0x10u,
        0x18u,
        WPP_FxRequestApi_cpp_Traceguids,
        Request,
        (const void *)length,
        RequiredLength,
        -1073741789);
  }
  return v14;
}
