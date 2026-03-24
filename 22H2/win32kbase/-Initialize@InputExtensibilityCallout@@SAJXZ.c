/*
 * XREFs of ?Initialize@InputExtensibilityCallout@@SAJXZ @ 0x1C008B324
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00760E0 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 InputExtensibilityCallout::Initialize(void)
{
  InputExtensibilityCallout *v0; // rcx
  _QWORD *v1; // rbx

  if ( gpInputExtensibilityCallout )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 479LL);
  v1 = Win32AllocPoolZInit(0x318uLL, 1883524675LL);
  if ( v1 )
  {
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
    v1[3] = 0LL;
    memset(v1 + 4, 0, 0x2F8uLL);
  }
  else
  {
    v1 = 0LL;
  }
  gpInputExtensibilityCallout = (InputExtensibilityCallout *)v1;
  if ( !v1 )
    InputExtensibilityCallout::UnInitialize(v0);
  return v1 == 0LL ? 0xC0000017 : 0;
}
