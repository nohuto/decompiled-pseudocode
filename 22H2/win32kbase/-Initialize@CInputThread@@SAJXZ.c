/*
 * XREFs of ?Initialize@CInputThread@@SAJXZ @ 0x1C008B4B8
 * Callers:
 *     InitializeInputComponents @ 0x1C008C56C (InitializeInputComponents.c)
 * Callees:
 *     Win32AllocPool @ 0x1C002C2D0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 CInputThread::Initialize(void)
{
  __int64 v0; // rax

  if ( gpInputThread )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 208LL);
  v0 = Win32AllocPool(48LL, 0x7054494Du);
  if ( v0 )
  {
    *(_DWORD *)(v0 + 16) = 0;
    *(_QWORD *)(v0 + 24) = 0LL;
    *(_QWORD *)(v0 + 32) = 0LL;
    *(_DWORD *)(v0 + 40) = 0;
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
  }
  else
  {
    v0 = 0LL;
  }
  gpInputThread = (CInputThread *)v0;
  return v0 == 0 ? 0xC0000017 : 0;
}
