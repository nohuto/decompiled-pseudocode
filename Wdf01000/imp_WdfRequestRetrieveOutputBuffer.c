__int64 __fastcall imp_WdfRequestRetrieveOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 RequiredLength,
        void **Buffer,
        unsigned __int64 *Length)
{
  __int64 Offset; // rcx
  FxRequest *v9; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 *v11; // rbx
  unsigned __int8 MajorFunction; // al
  __int64 result; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 length; // [rsp+50h] [rbp-38h] BYREF
  void *pBuffer; // [rsp+58h] [rbp-30h] BYREF
  IFxMemory *pMemory[5]; // [rsp+60h] [rbp-28h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxRequest *pRequest; // [rsp+98h] [rbp+10h] BYREF

  pRequest = 0LL;
  pBuffer = 0LL;
  length = 0LL;
  pMemory[0] = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v9 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v9->__vftable);
    v9 = (FxRequest *)((char *)v9 - Offset);
  }
  if ( v9->m_Type == 4104 )
  {
    pRequest = v9;
  }
  else
  {
    FxObjectHandleGetPtrQI(v9, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v9 = pRequest;
  }
  m_Globals = v9->m_Globals;
  if ( !Buffer )
    FxVerifierNullBugCheck(v9->m_Globals, retaddr);
  v11 = Length;
  *Buffer = 0LL;
  if ( v11 )
    *v11 = 0LL;
  MajorFunction = v9->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  if ( MajorFunction == 4 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x1Au, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    if ( (unsigned __int8)(MajorFunction - 14) > 1u )
      LODWORD(result) = FxRequest::GetMemoryObject(v9, (FxRequestSystemBuffer **)pMemory, &pBuffer, &length);
    else
      LODWORD(result) = FxRequest::GetDeviceControlOutputMemoryObject(v9, pMemory, &pBuffer, &length);
    if ( (int)result < 0 )
      return (unsigned int)result;
    v14 = length;
    if ( length >= RequiredLength )
    {
      *Buffer = pBuffer;
      if ( v11 )
        *v11 = v14;
      return (unsigned int)result;
    }
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qqqd(
        m_Globals,
        5u,
        0x10u,
        0x1Bu,
        WPP_FxRequestApi_cpp_Traceguids,
        (const void *)Request,
        (const void *)length,
        RequiredLength,
        -1073741789);
    return 3221225507LL;
  }
}
