/*
 * XREFs of ?Initialize@CDeviceIdentity@@SAJXZ @ 0x1C008B884
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     ?RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4StateOfInterest@@PEAXP6AX23@Z@Z @ 0x1C008B98C (-RegisterCoreMsgProvider@InputExtensibilityCallout@@QEAAXW4_MIT_ENDPOINT@@W4SendMessageWhen@@W4S.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 CDeviceIdentity::Initialize(void)
{
  unsigned int v0; // ebx
  struct CDeviceIdentity *v1; // rax

  v0 = 0;
  if ( gpDeviceIdentity )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 54LL);
  v1 = (struct CDeviceIdentity *)Win32AllocPool(24LL, 0x70446549u);
  if ( v1 )
  {
    *((_QWORD *)v1 + 2) = 1LL;
    *(_QWORD *)v1 = 0LL;
    *((_QWORD *)v1 + 1) = 0LL;
  }
  else
  {
    v1 = 0LL;
  }
  gpDeviceIdentity = v1;
  if ( !v1 )
    return (unsigned int)-1073741801;
  InputExtensibilityCallout::RegisterCoreMsgProvider(
    lambda_c7c2ef06b26fee4f968bb3b5cce8fe6f_::_lambda_invoker_cdecl_,
    0LL,
    1LL);
  if ( !gpDeviceIdentity )
    return (unsigned int)-1073741801;
  return v0;
}
