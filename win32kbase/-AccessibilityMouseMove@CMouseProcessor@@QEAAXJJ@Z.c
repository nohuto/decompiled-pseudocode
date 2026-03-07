void __fastcall CMouseProcessor::AccessibilityMouseMove(CMouseProcessor *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int128 v7; // [rsp+28h] [rbp-90h] BYREF
  __int64 v8; // [rsp+38h] [rbp-80h]
  _BYTE v9[96]; // [rsp+40h] [rbp-78h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment((__int64)this, a2, a3, a4) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1796);
  v7 = 0LL;
  HIDWORD(v7) = v5;
  v8 = v4;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v9, (__int64)&v7, 1, 0x100u);
  CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v9, 0LL);
}
