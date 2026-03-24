/*
 * XREFs of ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01AAB48
 * Callers:
 *     ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00B48F0 (-OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 *     ?OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C00B4940 (-OnRIMDeviceClosed@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CHidInput::UpdatePointerDeviceCount(CHidInput *this, int a2)
{
  int v4; // edi
  int v5; // eax
  __int64 result; // rax

  if ( (struct _KTHREAD *)qword_1C02554D8 != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 661);
  v4 = a2 - 1;
  if ( !v4 )
    return (unsigned int)++*((_DWORD *)this + 320);
  if ( v4 != 1 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 673);
    return *((unsigned int *)this + 320);
  }
  v5 = *((_DWORD *)this + 320);
  if ( !v5 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 669);
    v5 = *((_DWORD *)this + 320);
  }
  result = (unsigned int)(v5 - 1);
  *((_DWORD *)this + 320) = result;
  return result;
}
