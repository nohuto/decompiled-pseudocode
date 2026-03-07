__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **InputBuffer,
        unsigned __int64 *Length)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 *v9; // rdi
  __int64 result; // rax
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  unsigned int v13; // esi
  FxRequest *v14; // r8
  _IRP *m_Irp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int16 v18; // r9
  unsigned __int64 Options; // rax
  unsigned __int16 v20; // r9
  unsigned __int64 v21; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !InputBuffer )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  *InputBuffer = 0LL;
  v9 = Length;
  if ( Length )
    *Length = 0LL;
  result = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( (int)result >= 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      irql = 0;
      FxNonPagedObject::Lock(pRequest, &irql, v11);
      v13 = m_Globals->FxVerifierOn ? FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, m_Globals) : 0;
      FxNonPagedObject::Unlock(pRequest, irql, v12);
      if ( (v13 & 0x80000000) != 0 )
        return v13;
    }
    v14 = pRequest;
    v13 = -1073741808;
    m_Irp = pRequest->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v18 = 29;
LABEL_17:
        WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, v18, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
        return v13;
      }
      return v13;
    }
    if ( MajorFunction == 15 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v18 = 30;
        goto LABEL_17;
      }
      return v13;
    }
    if ( MajorFunction == 14 )
    {
      if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
        if ( Options < RequiredLength )
        {
          if ( m_Globals->FxVerboseOn )
          {
            v20 = 31;
LABEL_30:
            WPP_IFR_SF_qdid(
              m_Globals,
              (unsigned __int8)CurrentStackLocation,
              (unsigned int)pRequest,
              v20,
              traceGuid,
              Request,
              Options,
              RequiredLength);
            return 3221225507LL;
          }
          return 3221225507LL;
        }
        *InputBuffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
        if ( v9 )
        {
          v21 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
LABEL_34:
          *v9 = v21;
          return 0LL;
        }
        return 0LL;
      }
    }
    else if ( MajorFunction == 4
           && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
    {
      Options = CurrentStackLocation->Parameters.Read.Length;
      if ( Options < RequiredLength )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v20 = 32;
          goto LABEL_30;
        }
        return 3221225507LL;
      }
      *InputBuffer = m_Irp->UserBuffer;
      if ( v9 )
      {
        v21 = v14->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
        goto LABEL_34;
      }
      return 0LL;
    }
    WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x21u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v13;
  }
  return result;
}
