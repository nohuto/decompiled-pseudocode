void __fastcall CMouseProcessor::AccessibilityMouseButtonAction(
        CMouseProcessor *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int16 v11; // dx
  __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  _BYTE v19[4]; // [rsp+24h] [rbp-A4h] BYREF
  __int128 v20; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-90h]
  _BYTE v22[96]; // [rsp+40h] [rbp-88h] BYREF

  v4 = a3;
  v5 = a2;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1825);
  if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v8, v7, v9, v10) != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1826);
  if ( v4 > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1827);
  if ( (unsigned int)(v5 - 1) > 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1828);
  v21 = 0LL;
  v20 = 0LL;
  v11 = 1;
  if ( v5 != 1 )
    v11 = 4;
  v12 = 2 * v11;
  if ( v4 != 1 )
    v12 = v11;
  WORD2(v20) = v12;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v22, (__int64)&v20, 2, 0x100u);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v19, v13, v14, v15);
  CMouseProcessor::SynthesizeMouse(a1, (struct CMouseProcessor::MouseInputDataEx *)v22, 0LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v19, v16, v17, v18);
}
