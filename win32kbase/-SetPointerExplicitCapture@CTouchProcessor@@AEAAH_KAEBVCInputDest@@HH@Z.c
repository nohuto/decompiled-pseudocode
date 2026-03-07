__int64 __fastcall CTouchProcessor::SetPointerExplicitCapture(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        const struct CInputDest *a3,
        int a4,
        int a5)
{
  if ( !*(_DWORD *)a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 11831);
  return CTouchProcessor::SetPointerCapture(this, a2, a3, 2, a4, a5);
}
