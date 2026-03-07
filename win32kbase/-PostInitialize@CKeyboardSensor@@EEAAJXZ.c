__int64 __fastcall CKeyboardSensor::PostInitialize(CKeyboardSensor *this)
{
  struct CKeyboardProcessor **v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int Instance; // edi
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = (struct CKeyboardProcessor **)((char *)this + 1408);
  if ( *((_QWORD *)this + 176) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 73LL);
  Instance = CKeyboardProcessor::CreateInstance(v1);
  if ( Instance >= 0 && isInputVirtualizationEnabled(v4, v3, v6, v7) )
    CIVChannel::Initialize((CKeyboardSensor *)((char *)this + 1352));
  return (unsigned int)Instance;
}
