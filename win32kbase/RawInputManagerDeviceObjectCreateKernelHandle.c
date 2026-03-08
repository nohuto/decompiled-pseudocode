/*
 * XREFs of RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00372A0
 * Callers:
 *     rimCreateDev @ 0x1C00371D0 (rimCreateDev.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RawInputManagerDeviceObjectCreateKernelHandle(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5)
{
  NTSTATUS v5; // ebx

  *a5 = (void *)-1LL;
  if ( a1[1] == 2 )
  {
    v5 = ObOpenObjectByPointer(a1, 0x200u, 0LL, 3u, ExRawInputManagerObjectType, 0, a5);
    if ( v5 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 653LL);
  }
  else
  {
    return (unsigned int)-1073741788;
  }
  return (unsigned int)v5;
}
