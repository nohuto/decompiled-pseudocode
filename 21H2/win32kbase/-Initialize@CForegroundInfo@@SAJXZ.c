/*
 * XREFs of ?Initialize@CForegroundInfo@@SAJXZ @ 0x1C008A5AC
 * Callers:
 *     InitializeInputComponents @ 0x1C008B6CC (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 CForegroundInfo::Initialize(void)
{
  CInputDest *v0; // rax
  CInputDest *v1; // rbx

  if ( gpForegroundInfo )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 40LL);
  v0 = (CInputDest *)Win32AllocPoolZInit(0x78uLL, 1919964227LL);
  v1 = v0;
  if ( v0 )
  {
    memset(v0, 0, 0x70uLL);
    *((_BYTE *)v1 + 112) = 0;
  }
  else
  {
    v1 = 0LL;
  }
  gpForegroundInfo = v1;
  return v1 == 0LL ? 0xC0000017 : 0;
}
