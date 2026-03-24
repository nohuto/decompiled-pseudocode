/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C016B534
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C01305F0 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0167FA4 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C016ACEC (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 *a7)
{
  unsigned int v7; // ebx
  unsigned int v12; // edi
  __int64 v13; // rax
  _HIDP_DEVICE_DESC v15; // [rsp+60h] [rbp-91h] BYREF
  _HIDP_DEVICE_DESC v16; // [rsp+A0h] [rbp-51h] BYREF

  v7 = 0;
  v12 = 1;
  memset(&v16, 0, sizeof(v16));
  if ( !a7 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 222);
  *a7 = 0LL;
  if ( a1 == 13 )
  {
    v12 = 10;
    if ( a2 != 4 )
      v12 = 1;
    if ( a2 == 5 )
      v12 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v12, &v16) )
  {
    v15 = v16;
    v13 = RIMIDECreatePseudoHIDDevice(a1, a2, v12, a6, a5, (__int128 *)&v15, 1, 0, 0, 0LL);
    if ( v13 )
    {
      *a7 = v13;
      return 1;
    }
  }
  return v7;
}
