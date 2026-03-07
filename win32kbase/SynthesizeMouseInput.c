void __fastcall SynthesizeMouseInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int128 v10; // [rsp+40h] [rbp-81h] BYREF
  __int64 v11; // [rsp+50h] [rbp-71h]
  __int128 v12; // [rsp+60h] [rbp-61h] BYREF
  __int64 v13; // [rsp+70h] [rbp-51h]
  _BYTE v14[96]; // [rsp+80h] [rbp-41h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1318);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1319);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
  {
    *((_QWORD *)&v10 + 1) = a1;
    *(_QWORD *)&v10 = a1 != 0 ? 3uLL : 0;
    v12 = v10;
    v13 = 0LL;
    *(_QWORD *)&v10 = a3;
    *((_QWORD *)&v10 + 1) = a4;
    v11 = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v14, a2, &v10, a5, (__int64)&v12, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct CMouseProcessor::MouseInputDataEx *)v14, 0LL);
  }
}
