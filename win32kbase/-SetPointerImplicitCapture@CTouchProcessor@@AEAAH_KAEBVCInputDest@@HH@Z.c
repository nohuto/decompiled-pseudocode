__int64 __fastcall CTouchProcessor::SetPointerImplicitCapture(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        const struct CInputDest *a3,
        int a4,
        int a5)
{
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11812);
  return CTouchProcessor::SetPointerCapture(this, a2, a3, 1, a4, a5);
}
