/*
 * XREFs of DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C014304C
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014790C (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1C00BE3F0 (DrvSampleDisplayState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___()
{
  __int64 result; // rax
  _DWORD v1[16]; // [rsp+40h] [rbp-58h] BYREF

  memset(v1, 0, sizeof(v1));
  v1[10] = 3;
  v1[11] = 1;
  result = DrvSampleDisplayState(&v1[12]);
  if ( (int)result >= 0 )
  {
    LOWORD(v1[1]) = 0x8000;
    v1[0] = 4194328;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))qword_1C0296958)(
             0x10000LL,
             v1,
             0LL,
             0LL,
             0LL,
             0LL,
             0LL);
  }
  return result;
}
