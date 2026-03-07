__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(struct _KTHREAD **this, unsigned __int64 a2)
{
  char v4; // di
  __int64 v5; // r9
  __int64 v6; // rcx
  char v7; // bl
  _OWORD v9[7]; // [rsp+40h] [rbp-198h] BYREF
  _DWORD v10[32]; // [rsp+B0h] [rbp-128h] BYREF
  _BYTE v11[128]; // [rsp+130h] [rbp-A8h] BYREF

  v4 = 0;
  memset(v10, 0, sizeof(v10));
  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11176);
  CTouchProcessor::DelegateCapture(this, v9, a2, v5, (__int64)v10);
  if ( !LOWORD(v10[0])
    || !v10[1]
    || (v4 = 1, v7 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v11, (const struct tagINPUTDEST *)&v10[2])) )
  {
    v7 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v11);
  if ( v7 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v6, v10);
}
