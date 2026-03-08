/*
 * XREFs of ?InitializeSensorGlobals@@YAJXZ @ 0x1C0097460
 * Callers:
 *     ?InitializeInputGlobals@@YAJXZ @ 0x1C0096E3C (-InitializeInputGlobals@@YAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall InitializeSensorGlobals(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD Src[18]; // [rsp+20h] [rbp-49h] BYREF

  v4 = SGDGetUserSessionState(a1, a2, a3, a4);
  Src[16] = 2LL;
  Src[3] = 0LL;
  Src[0] = CMouseSensor_CreateInstance;
  *(_DWORD *)(v4 + 3264) = 1;
  Src[1] = CMouseSensor_Destroy;
  Src[2] = 0LL;
  Src[4] = 0LL;
  Src[5] = "Mouse Sensor";
  Src[6] = CKeyboardSensor_CreateInstance;
  Src[7] = CKeyboardSensor_Destroy;
  Src[8] = 0LL;
  Src[11] = "Keyboard Sensor";
  Src[12] = CHidInput_CreateInstance;
  Src[13] = CHidInput_Destroy;
  Src[14] = 0LL;
  Src[17] = "Hid Sensor";
  Src[9] = 0LL;
  Src[10] = 1LL;
  Src[15] = 0LL;
  memmove((void *)(v4 + 3280), Src, 0x90uLL);
  return 0LL;
}
