/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01E31E8
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C01E2AB0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C01E2CC0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, int a2)
{
  int v4; // edi

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 157) + 8LL) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 719);
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( !*((_DWORD *)this + 336) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 727);
      --*((_DWORD *)this + 336);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 731);
    }
  }
  else
  {
    ++*((_DWORD *)this + 336);
  }
  return *((unsigned int *)this + 336);
}
