__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 DispatcherHandleByName; // rax
  int v3; // edi

  DispatcherHandleByName = CRIMBase::GetDispatcherHandleByName(this, 2LL, 0LL);
  v3 = DispatcherHandleByName;
  if ( !DispatcherHandleByName )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 978LL);
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (int)this + 64,
           *((_DWORD *)this + 14),
           v3,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
