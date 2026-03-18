/*
 * XREFs of _lambda_89d8f36525411427859098b7e7b99cc4_::operator() @ 0x1C0209408
 * Callers:
 *     ?VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@1HH@Z @ 0x1C020B688 (-VerticalSizeRectFromHitTarget@@YAHPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTIO.c)
 * Callees:
 *     GetMonitorWorkRectForWindow @ 0x1C0062244 (GetMonitorWorkRectForWindow.c)
 *     ?ExtendRect@WindowMargins@@YA?AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z @ 0x1C00B29D0 (-ExtendRect@WindowMargins@@YA-AUtagRECT@@PEBUtagWND@@AEBU2@W4LegacyMarginsSource@@I@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

_OWORD *__fastcall lambda_89d8f36525411427859098b7e7b99cc4_::operator()(__int64 **a1, _OWORD *a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int128 *MonitorWorkRectForWindow; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  _OWORD *result; // rax
  _DWORD v9[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF

  v3 = *a1;
  MonitorWorkRectForWindow = (__int128 *)GetMonitorWorkRectForWindow(
                                           (__int64)&v10,
                                           a3,
                                           *(const struct tagWND **)(**a1 + 16));
  v6 = *v3;
  v10 = *MonitorWorkRectForWindow;
  v7 = *(_OWORD *)WindowMargins::ExtendRect(v9, *(struct tagWND **)(v6 + 16), &v10);
  result = a2;
  *a2 = v7;
  return result;
}
