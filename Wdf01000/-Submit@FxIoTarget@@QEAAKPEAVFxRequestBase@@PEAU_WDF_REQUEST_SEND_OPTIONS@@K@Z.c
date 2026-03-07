__int64 __fastcall FxIoTarget::Submit(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  unsigned int v8; // ebx
  unsigned __int8 v9; // r8
  unsigned __int8 irql[24]; // [rsp+20h] [rbp-18h] BYREF

  irql[0] = 0;
  FxNonPagedObject::Lock(this, irql, (unsigned __int8)Options);
  v8 = FxIoTarget::SubmitLocked(this, Request, Options, Flags);
  FxNonPagedObject::Unlock(this, irql[0], v9);
  return v8;
}
