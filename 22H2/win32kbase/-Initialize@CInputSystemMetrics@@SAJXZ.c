/*
 * XREFs of ?Initialize@CInputSystemMetrics@@SAJXZ @ 0x1C008C24C
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x1C008C2F4 (-WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z.c)
 *     ?WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z @ 0x1C008C444 (-WritePointerDevicePresenceKey@CInputSystemMetrics@@AEBAXK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 CInputSystemMetrics::Initialize(void)
{
  unsigned int *v0; // rax
  __int64 v1; // rcx
  unsigned int *v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  CInputSystemMetrics *v6; // rcx

  if ( gpInputSystemMetrics )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 18LL);
  v0 = (unsigned int *)Win32AllocPoolZInit(0xCuLL, 1699576147LL);
  v2 = v0;
  if ( v0 )
  {
    *(_QWORD *)v0 = 0LL;
    v0[2] = 0;
  }
  else
  {
    v2 = 0LL;
  }
  gpInputSystemMetrics = (struct CInputSystemMetrics *)v2;
  if ( !v2 )
    return 3221225495LL;
  v4 = *v2;
  CInputSystemMetrics::WriteSystemMetricsKey(v1, *v2, 0LL);
  CInputSystemMetrics::WriteSystemMetricsKey(v5, v4, 1LL);
  CInputSystemMetrics::WritePointerDevicePresenceKey(v6, v2[1]);
  return 0LL;
}
