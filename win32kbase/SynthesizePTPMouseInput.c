void __fastcall SynthesizePTPMouseInput(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        struct PTPMouseInputData *a6)
{
  CMouseProcessor *MouseProcessor; // rbx
  __int64 v11; // rax
  __int128 v12; // [rsp+48h] [rbp-89h] BYREF
  __int64 v13; // [rsp+58h] [rbp-79h]
  __int128 v14; // [rsp+68h] [rbp-69h] BYREF
  __int64 v15; // [rsp+78h] [rbp-59h]
  _BYTE v16[96]; // [rsp+88h] [rbp-49h] BYREF

  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1345);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1346);
  MouseProcessor = (CMouseProcessor *)anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( MouseProcessor )
  {
    *((_QWORD *)&v12 + 1) = a1;
    v13 = 0LL;
    v11 = *((_QWORD *)a6 + 3);
    *(_QWORD *)&v12 = a1 != 0 ? 3uLL : 0;
    v13 = v11;
    v14 = v12;
    v15 = 0LL;
    *(_QWORD *)&v12 = a3;
    *((_QWORD *)&v12 + 1) = a4;
    CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v16, a2, &v12, a5, (__int64)&v14, 0LL);
    CMouseProcessor::SynthesizeMouse(MouseProcessor, (struct CMouseProcessor::MouseInputDataEx *)v16, a6);
  }
}
