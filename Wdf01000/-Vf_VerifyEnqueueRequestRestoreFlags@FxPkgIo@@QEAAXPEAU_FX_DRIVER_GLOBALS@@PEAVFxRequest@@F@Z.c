void __fastcall FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(
        FxPkgIo *this,
        _FX_DRIVER_GLOBALS *Request,
        FxRequest *OrigVerifierFlags,
        __int16 FxDriverGlobals)
{
  unsigned __int8 v6; // dl
  unsigned __int8 v7; // r8
  unsigned __int8 irql; // [rsp+48h] [rbp+20h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(OrigVerifierFlags, &irql, (unsigned __int8)OrigVerifierFlags);
  v6 = irql;
  OrigVerifierFlags->m_VerifierFlags = FxDriverGlobals;
  FxNonPagedObject::Unlock(OrigVerifierFlags, v6, v7);
}
