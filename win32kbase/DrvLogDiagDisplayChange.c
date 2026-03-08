/*
 * XREFs of DrvLogDiagDisplayChange @ 0x1C01943C0
 * Callers:
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015B374 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     NtUserChangeDisplaySettings @ 0x1C016D440 (NtUserChangeDisplaySettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 DxgkWin32kInterface; // rax
  _QWORD v7[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v7, 0, 0x48uLL);
  v7[0] = 0x4800000003LL;
  memset(&v7[1], 0, 36);
  if ( a1 )
  {
    LODWORD(v7[7]) = *(_DWORD *)a1;
    v7[8] = *(_QWORD *)(a1 + 16);
    HIDWORD(v7[7]) = *(_DWORD *)(a1 + 24);
    BYTE4(v7[6]) = 0;
  }
  else
  {
    BYTE4(v7[6]) = 1;
  }
  LODWORD(v7[6]) = a2;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(0LL, v4);
  return (*(__int64 (__fastcall **)(_QWORD *))(DxgkWin32kInterface + 304))(v7);
}
