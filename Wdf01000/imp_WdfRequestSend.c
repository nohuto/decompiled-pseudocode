bool __fastcall imp_WdfRequestSend(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *Target,
        _WDF_REQUEST_SEND_OPTIONS *Options)
{
  FxRequestBase *v5; // r8
  unsigned int Flags; // ebx
  unsigned int v8; // ecx
  __int64 v9; // rax
  const void *_a1; // rax
  __int64 v11; // r10
  const void *ObjectHandleUnchecked; // rax
  __int64 v13; // r10
  unsigned __int16 v14; // r9
  _WDF_DRIVER_GLOBALS *Action; // [rsp+60h] [rbp+20h] BYREF
  void *PPObject; // [rsp+68h] [rbp+28h] BYREF
  void *Handle; // [rsp+70h] [rbp+30h] BYREF

  Handle = Target;
  PPObject = Request;
  Action = DriverGlobals;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, &PPObject);
  Flags = 0;
  if ( FxValidateRequestOptions(*((_FX_DRIVER_GLOBALS **)PPObject + 2), Options, v5) < 0 )
  {
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741811;
    FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)PPObject + 2));
    return 0;
  }
  FxObjectHandleGetPtr(*((_FX_DRIVER_GLOBALS **)PPObject + 2), Handle, 0x1200u, &Handle);
  if ( !Options || (v8 = Options->Flags, (v8 & 0xA) == 0) )
  {
    if ( *((_QWORD *)PPObject + 24) || *((_BYTE *)PPObject + 213) )
    {
      if ( Options )
        Flags = Options->Flags;
      LOBYTE(Flags) = FxIoTarget::Submit((FxIoTarget *)Handle, (FxRequestBase *)PPObject, Options, Flags);
      if ( (Flags & 1) != 0 )
      {
        LOBYTE(Flags) = Flags | 4;
        (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Handle + 104LL))(Handle, *((_QWORD *)PPObject + 19));
      }
      else if ( (Flags & 2) != 0 )
      {
        LOBYTE(Flags) = Flags | 4;
      }
      return (Flags & 4) != 0;
    }
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)PPObject);
    v14 = 46;
    goto LABEL_23;
  }
  if ( (v8 & 2) != 0 )
  {
    LODWORD(Action) = 32;
    FxIoTarget::SubmitSync((FxIoTarget *)Handle, (FxRequestBase *)PPObject, Options, (unsigned int *)&Action);
    goto LABEL_15;
  }
  if ( (v8 & 8) == 0 )
  {
LABEL_15:
    LOBYTE(Flags) = (_BYTE)Action;
    return (Flags & 4) != 0;
  }
  if ( *((_BYTE *)PPObject + 213) )
  {
    _a1 = FxObject::GetObjectHandleUnchecked((FxObject *)PPObject);
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v11 + 16), 2u, 0xEu, 0x2Cu, WPP_FxRequestApi_cpp_Traceguids, _a1);
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741436;
    return (Flags & 4) != 0;
  }
  v9 = *((_QWORD *)PPObject + 21);
  if ( v9 && *(_BYTE *)(v9 + 88) )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked((FxObject *)PPObject);
    v14 = 45;
LABEL_23:
    WPP_IFR_SF_qd(
      *(_FX_DRIVER_GLOBALS **)(v13 + 16),
      2u,
      0xEu,
      v14,
      WPP_FxRequestApi_cpp_Traceguids,
      ObjectHandleUnchecked,
      -1073741808);
    *(_DWORD *)(*((_QWORD *)PPObject + 19) + 48LL) = -1073741808;
    FxVerifierDbgBreakPoint(*((_FX_DRIVER_GLOBALS **)PPObject + 2));
    return (Flags & 4) != 0;
  }
  FxRequest::PreProcessSendAndForget((FxRequest *)PPObject);
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)Handle + 104LL))(Handle, *((_QWORD *)PPObject + 19));
  FxRequest::PostProcessSendAndForget((FxRequest *)PPObject);
  return 1;
}
