__int64 __fastcall imp_WdfRequestCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes,
        WDFIOTARGET__ *Target,
        WDFREQUEST__ **Request)
{
  FxIoTarget *v5; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v8; // edx
  void *ParentObject; // rdx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxIoTarget *pTarget; // [rsp+50h] [rbp+8h] BYREF
  void *PPObject; // [rsp+60h] [rbp+18h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp+20h] BYREF

  pRequest = 0LL;
  v5 = 0LL;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pTarget = 0LL;
  if ( Target )
  {
    FxObjectHandleGetPtr(m_Globals, Target, 0x1200u, (void **)&pTarget);
    v5 = pTarget;
    m_Globals = pTarget->m_Globals;
  }
  else if ( RequestAttributes )
  {
    ParentObject = RequestAttributes->ParentObject;
    if ( ParentObject )
    {
      PPObject = 0LL;
      FxObjectHandleGetPtr(m_Globals, ParentObject, 0x1000u, &PPObject);
      v5 = pTarget;
      m_Globals = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
    }
  }
  if ( !Request )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *Request = 0LL;
  v8 = FxRequest::_Create(
         m_Globals,
         RequestAttributes,
         0LL,
         v5,
         FxRequestOwnsIrp,
         FxRequestConstructorCallerIsDriver,
         &pRequest);
  if ( v8 >= 0 )
    *Request = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(pRequest);
  return (unsigned int)v8;
}
