/*
 * XREFs of RIMIDE_InitializeDeviceInjection @ 0x1C01C6BE0
 * Callers:
 *     NtUserInitializeInputDeviceInjection @ 0x1C0172020 (NtUserInitializeInputDeviceInjection.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C01C2E38 (RIMIDECreatePseudoHIDDevice.c)
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1C01C5EBC (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 */

__int64 __fastcall RIMIDE_InitializeDeviceInjection(
        __int16 a1,
        __int16 a2,
        struct tagUSAGE_PROPERTIES *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned int v10; // ebx
  unsigned int v12; // esi
  _HIDP_DEVICE_DESC v14; // [rsp+70h] [rbp-90h] BYREF
  _HIDP_DEVICE_DESC v15; // [rsp+B0h] [rbp-50h] BYREF

  v10 = 1;
  v12 = -1073741823;
  memset(&v15, 0, sizeof(v15));
  if ( a1 == 13 )
  {
    v10 = 10;
    if ( a2 != 4 )
      v10 = 1;
    if ( a2 == 5 )
      v10 = 5;
  }
  if ( (unsigned int)BuildReportDescriptor(a1, a2, a3, a4, v10, &v15) )
  {
    v14 = v15;
    return (unsigned int)RIMIDECreatePseudoHIDDevice(a1, a2, v10, a6, a5, &v14, 1, 0, 0, 0LL, a7);
  }
  return v12;
}
