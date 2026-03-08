/*
 * XREFs of _lambda_ba9a8767fe334596bf562779960bba36_::operator() @ 0x1C02EF4CC
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02EFC88 (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     MonitorIsMonitorConnected @ 0x1C0167278 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall lambda_ba9a8767fe334596bf562779960bba36_::operator()(__int64 **a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rsi
  bool v6; // zf
  char v7; // r8
  __int64 v8; // rcx
  int IsMonitorConnected; // eax
  __int64 v10; // rbp
  __int64 v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  v18 = 0;
  if ( a3[3] || (v6 = a3[4] == 0, v7 = 1, !v6) )
    v7 = 0;
  *(_BYTE *)a1[1] |= v7;
  v8 = **a1;
  if ( *a3 == *(_DWORD *)(v8 + 404) && a3[1] == *(_DWORD *)(v8 + 408) )
  {
    IsMonitorConnected = MonitorIsMonitorConnected(v8, (unsigned int)a3[2], 0LL, &v18);
    v10 = IsMonitorConnected;
    if ( IsMonitorConnected < 0 )
    {
      WdLogSingleEntry2(2LL, v3, IsMonitorConnected);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to check the monitor connection on path 0x%I64x, (Status = 0x%I64x).",
        v3,
        v10,
        0LL,
        0LL,
        0LL);
      return (unsigned int)v10;
    }
    if ( v18 )
    {
      if ( (unsigned int)(a3[10] - 1) > 3 )
      {
        v16 = v3;
        v13 = -1073741811;
        WdLogSingleEntry3(2LL, (int)a3[10], v16, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Rotation mode (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
          (int)a3[10],
          v16,
          -1073741811LL,
          0LL,
          0LL);
      }
      else if ( (unsigned int)(a3[11] - 100) > 0x190 )
      {
        v15 = v3;
        v13 = -1073741811;
        WdLogSingleEntry3(2LL, (unsigned int)a3[11], v15, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Monitor scale factor (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
          (unsigned int)a3[11],
          v15,
          -1073741811LL,
          0LL,
          0LL);
      }
      else
      {
        if ( (unsigned int)(a3[9] - 1) <= 0x3E )
          return 0LL;
        v14 = v3;
        v13 = -1073741811;
        WdLogSingleEntry3(2LL, (unsigned int)a3[9], v14, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VSync frequency divider (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
          (unsigned int)a3[9],
          v14,
          -1073741811LL,
          0LL,
          0LL);
      }
    }
    else
    {
      v12 = v3;
      v13 = -1071774920;
      WdLogSingleEntry3(2LL, (unsigned int)a3[2], v12, -1071774920LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Target ID 0x%I64x from path 0x%I64x does not have connected monitor,returning 0x%I64x).",
        (unsigned int)a3[2],
        v12,
        -1071774920LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v17 = a2;
    v13 = -1073741811;
    WdLogSingleEntry3(2LL, a2, v8, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Adapter LUID from path 0x%I64x does not match the LUID from adapter 0x%I64x,returning 0x%I64x).",
      v17,
      **a1,
      -1073741811LL,
      0LL,
      0LL);
  }
  return v13;
}
