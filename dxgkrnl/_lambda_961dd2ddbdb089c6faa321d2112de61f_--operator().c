/*
 * XREFs of _lambda_961dd2ddbdb089c6faa321d2112de61f_::operator() @ 0x1C02EF208
 * Callers:
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F0840 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     MonitorIsMonitorConnected @ 0x1C0167278 (MonitorIsMonitorConnected.c)
 */

__int64 __fastcall lambda_961dd2ddbdb089c6faa321d2112de61f_::operator()(__int64 **a1, unsigned int a2, int *a3)
{
  __int64 v3; // rsi
  int v5; // eax
  char v7; // r8
  __int64 v8; // rcx
  int IsMonitorConnected; // eax
  __int64 v10; // rbp
  __int64 v12; // rbx
  unsigned int v13; // esi
  unsigned int v14; // ecx
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rbx
  unsigned int v18; // ecx
  __int64 v19; // rbx
  char v20; // [rsp+80h] [rbp+18h] BYREF

  v3 = a2;
  v20 = 0;
  v5 = *a3;
  v7 = 1;
  if ( (v5 & 1) != 0 )
  {
    ++*(_DWORD *)a1[1];
    if ( a3[4] || a3[5] )
      v7 = 0;
    *(_BYTE *)a1[2] |= v7;
    v8 = **a1;
    if ( a3[1] != *(_DWORD *)(v8 + 404) || a3[2] != *(_DWORD *)(v8 + 408) )
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
      return v13;
    }
    IsMonitorConnected = MonitorIsMonitorConnected(v8, (unsigned int)a3[3], 0LL, &v20);
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
    if ( !v20 )
    {
      v12 = v3;
      v13 = -1071774920;
      WdLogSingleEntry3(2LL, (unsigned int)a3[3], v12, -1071774920LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Target ID 0x%I64x from path 0x%I64x does not have connected monitor,returning 0x%I64x).",
        (unsigned int)a3[3],
        v12,
        -1071774920LL,
        0LL,
        0LL);
      return v13;
    }
    if ( (unsigned int)(a3[8] - 1) > 3 )
    {
      v16 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, a3[8], v16, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Rotation mode (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        a3[8],
        v16,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
    v14 = a3[11];
    if ( v14 - 1 > 0x3E )
    {
      v15 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, v14, v15, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VSync frequency divider (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        (unsigned int)a3[11],
        v15,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
  }
  if ( (*a3 & 2) != 0 )
  {
    v18 = a3[13];
    if ( v18 - 100 > 0x190 )
    {
      v19 = v3;
      v13 = -1073741811;
      WdLogSingleEntry3(2LL, v18, v19, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Monitor scale factor (0x%I64x) from path 0x%I64x is not valid, returning 0x%I64x).",
        (unsigned int)a3[13],
        v19,
        -1073741811LL,
        0LL,
        0LL);
      return v13;
    }
  }
  return 0LL;
}
