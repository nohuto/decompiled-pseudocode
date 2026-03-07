__int64 __fastcall FxRequest::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        _IRP *Irp,
        FxIoTarget *Target,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller,
        FxRequest **Request)
{
  const void **v7; // r14
  __int64 result; // rax
  FxRequest *v13; // rax
  FxRequestBase *v14; // rax
  FxRequestBase *v15; // rdi
  int _a4; // ebx
  unsigned __int8 v17; // r8
  unsigned __int16 _a1; // [rsp+28h] [rbp-60h]
  FxPoolTypeOrPoolFlags v19; // [rsp+50h] [rbp-38h] BYREF

  v7 = (const void **)Request;
  *Request = 0LL;
  result = FxValidateObjectAttributes(FxDriverGlobals, RequestAttributes, 0);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v13 = (FxRequest *)FxObjectHandleAllocCommon(
                         FxDriverGlobals,
                         &v19,
                         0x168uLL,
                         0,
                         RequestAttributes,
                         0,
                         FxObjectTypeExternal);
    if ( v13 && (FxRequest::FxRequest(v13, FxDriverGlobals, Irp, Ownership, Caller, _a1), (v15 = v14) != 0LL) )
    {
      if ( Target && (_a4 = FxRequestBase::ValidateTarget(v14, Target), _a4 < 0)
        || (_a4 = FxObject::Commit(v15, RequestAttributes, (void **)&Request, 0LL, 1u), _a4 < 0) )
      {
        WPP_IFR_SF_D(FxDriverGlobals, 2u, 0x10u, 0xCu, WPP_FxRequest_cpp_Traceguids, _a4);
        if ( Irp )
          FxRequestBase::SetSubmitIrp(v15, 0LL, v17);
        FxObject::ClearEvtCallbacks(v15);
        v15->DeleteObject(v15);
      }
      else
      {
        *v7 = v15;
      }
    }
    else
    {
      _a4 = -1073741670;
    }
    if ( FxDriverGlobals->FxVerboseOn )
      WPP_IFR_SF_qLqd(FxDriverGlobals, 5u, 0x10u, 0xDu, WPP_FxRequest_cpp_Traceguids, Irp, Ownership, *v7, _a4);
    return (unsigned int)_a4;
  }
  return result;
}
