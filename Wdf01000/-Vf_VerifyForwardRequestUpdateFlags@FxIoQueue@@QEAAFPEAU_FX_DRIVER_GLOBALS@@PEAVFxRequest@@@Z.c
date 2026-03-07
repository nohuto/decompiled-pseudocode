// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *FxDriverGlobals)
{
  unsigned __int16 m_VerifierFlags; // bx
  unsigned __int8 v5; // dl
  unsigned __int8 v6; // r8
  _FX_DRIVER_GLOBALS *irql; // [rsp+38h] [rbp+10h] OVERLAPPED BYREF

  irql = Request;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(FxDriverGlobals, (unsigned __int8 *)&irql, (unsigned __int8)FxDriverGlobals);
  m_VerifierFlags = FxDriverGlobals->m_VerifierFlags;
  v5 = (unsigned __int8)irql;
  FxDriverGlobals->m_VerifierFlags = m_VerifierFlags & 0xFFF2 | 4;
  FxNonPagedObject::Unlock(FxDriverGlobals, v5, v6);
  return m_VerifierFlags;
}
