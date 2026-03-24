/*
 * XREFs of DrvLogDiagDisplayChange @ 0x1C0018D80
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0018E30 (NtUserChangeDisplaySettings.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01198F8 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  _QWORD v5[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[0] = 0x4800000003LL;
  memset(&v5[1], 0, 36);
  if ( a1 )
  {
    LODWORD(v5[7]) = *(_DWORD *)a1;
    v5[8] = *(_QWORD *)(a1 + 16);
    HIDWORD(v5[7]) = *(_DWORD *)(a1 + 24);
    BYTE4(v5[6]) = 0;
  }
  else
  {
    BYTE4(v5[6]) = 1;
  }
  LODWORD(v5[6]) = a2;
  return ((__int64 (__fastcall *)(_QWORD *))qword_1C02509C0)(v5);
}
