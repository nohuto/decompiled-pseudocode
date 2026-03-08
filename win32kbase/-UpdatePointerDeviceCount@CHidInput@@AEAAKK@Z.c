/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C0212B18
 * Callers:
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0211DD0 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C0211FE0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, int a2)
{
  int v4; // edi

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 165) + 8LL) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 864);
  v4 = a2 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      if ( !*((_DWORD *)this + 352) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 872);
      --*((_DWORD *)this + 352);
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 876);
    }
  }
  else
  {
    ++*((_DWORD *)this + 352);
  }
  return *((unsigned int *)this + 352);
}
