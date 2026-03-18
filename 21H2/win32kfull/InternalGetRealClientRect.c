/*
 * XREFs of InternalGetRealClientRect @ 0x1C00B0758
 * Callers:
 *     SetTiledRect @ 0x1C006458C (SetTiledRect.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1C014E0E4 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     GetMonitorWorkRectForDpi @ 0x1C00B088C (GetMonitorWorkRectForDpi.c)
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  char v7; // bp
  __int64 v9; // rcx
  unsigned __int16 v10; // di
  __int128 *MonitorRectForDpi; // rax
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v17; // eax
  _BYTE v18[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[16]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v20; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    v10 = 0;
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2, a3, 0LL) + 96);
    if ( !a5 )
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, a2) >> 8) & 0x1FF;
    if ( (v7 & 4) != 0 )
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(v18, v6, v10);
    else
      MonitorRectForDpi = (__int128 *)GetMonitorWorkRectForDpi(v19, v6, v10);
    v12 = *MonitorRectForDpi;
    result = (__int64)&v20;
    v20 = v12;
    *(_OWORD *)a2 = v12;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v15 + 16) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v15, v14);
        result = GetDpiDependentMetric(1LL, DpiForSystem);
        *(_DWORD *)(a2 + 12) += result;
        v15 = *(_QWORD *)(a1 + 40);
      }
      if ( (*(_BYTE *)(v15 + 16) & 2) != 0 )
      {
        v17 = GetDpiForSystem(v15, v14);
        result = GetDpiDependentMetric(0LL, v17);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (v7 & 2) != 0 )
  {
    result = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( (int)result <= 1 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 12) -= result;
        return result;
      }
      if ( (int)result <= 3 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      }
      switch ( (_DWORD)result )
      {
        case 4:
          goto LABEL_26;
        case 5:
LABEL_25:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)(a2 + 8) -= result;
          return result;
        case 6:
LABEL_26:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)a2 += result;
          return result;
        case 7:
          goto LABEL_25;
      }
    }
  }
  return result;
}
