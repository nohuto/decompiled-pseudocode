__int64 __fastcall DxgkIsMonitorConnected(struct _LUID a1, unsigned int a2, char a3, char a4, bool *a5)
{
  __int64 v6; // r14
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rdi
  __int64 LowPart; // rdi
  __int64 HighPart; // rbx
  const wchar_t *v14; // r9
  __int64 v15; // rsi
  __int64 UsageClass; // r15
  int v17; // eax
  __int64 v18; // r8
  int IsMonitorConnected; // eax
  __int64 v20; // r8
  const wchar_t *v21; // r9
  int MonitorHandle; // eax
  __int64 v23; // r9
  __int64 v24; // [rsp+28h] [rbp-D8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  _BYTE v27[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v29[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v30[144]; // [rsp+70h] [rbp-90h] BYREF

  v27[0] = a4;
  v6 = a2;
  v28 = a1;
  if ( !a5 )
  {
    WdLogSingleEntry1(2LL, 9767LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specifies a NULL pHasMonitorConnected in DxgkIsMonitorConnected function.",
      9767LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  *a5 = 0;
  Global = DXGGLOBAL::GetGlobal();
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, v29);
  v11 = (__int64)v10;
  if ( !v10 )
  {
    WdLogSingleEntry2(2LL, v28.HighPart, a1.LowPart);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x) in DxgkIsMonitorConnected function.",
      v28.HighPart,
      a1.LowPart,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    WdLogSingleEntry1(1LL, 9788LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!pAdapter->IsCoreResourceSharedOwner()",
      9788LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, (struct DXGADAPTER *const)v11, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v11);
  if ( !*(_QWORD *)(v11 + 2920) )
  {
    LowPart = a1.LowPart;
    HighPart = v28.HighPart;
    WdLogSingleEntry2(2LL, v28.HighPart, (unsigned int)LowPart);
    v14 = L"Caller specified adapter (0x%I64x%08I64x) in DxgkIsMonitorConnected function is NOT a display adapter.";
    v15 = 0LL;
    LODWORD(UsageClass) = -1073741811;
LABEL_12:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, HighPart, LowPart, v15, 0LL, 0LL);
    goto LABEL_26;
  }
  v17 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v30, 0LL);
  LODWORD(UsageClass) = v17;
  if ( v17 < 0 )
  {
    LowPart = a1.LowPart;
    HighPart = v28.HighPart;
    v15 = v17;
    WdLogSingleEntry3(2LL, v28.HighPart, (unsigned int)LowPart, v17);
    v14 = L"Failed to acquire shared access on adapter luid (0x%I64x::0x%I64x) with status (0x%I64x)";
    goto LABEL_12;
  }
  if ( !*(_BYTE *)(v11 + 2833) )
  {
    LOBYTE(v18) = a3;
    IsMonitorConnected = MonitorIsMonitorConnected(v11, (unsigned int)v6, v18, a5);
    UsageClass = IsMonitorConnected;
    if ( IsMonitorConnected >= 0 )
    {
      if ( !*a5 || v27[0] )
        goto LABEL_26;
      v29[0] = 0LL;
      LOBYTE(v20) = a3;
      MonitorHandle = MonitorGetMonitorHandle(v11, (unsigned int)v6, v20, DxgkIsMonitorConnected, v29);
      UsageClass = MonitorHandle;
      if ( MonitorHandle >= 0 )
      {
        v6 = v29[0];
        v28.LowPart = 0;
        v27[0] = 0;
        UsageClass = (int)MonitorGetUsageClass(v29[0], &v28, v27);
        MonitorReleaseMonitorHandle(v11, v6, DxgkIsMonitorConnected, v23);
        if ( (int)UsageClass >= 0 )
        {
          *a5 = v28.LowPart == 0;
          goto LABEL_26;
        }
        WdLogSingleEntry2(2LL, v6, UsageClass);
        v21 = L"Failed to check monitor HMD state on monitor 0x%I64x with status (0x%I64x)";
        v26 = 0LL;
        v25 = 0LL;
        v24 = UsageClass;
      }
      else
      {
        WdLogSingleEntry4(2LL, v6, v28.HighPart, a1.LowPart, MonitorHandle);
        v21 = L"Failed to get monitor handle on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)";
        v26 = UsageClass;
        v25 = a1.LowPart;
        v24 = v28.HighPart;
      }
    }
    else
    {
      WdLogSingleEntry4(2LL, v6, v28.HighPart, a1.LowPart, IsMonitorConnected);
      v21 = L"Failed to check monitor connectivity on target 0x%I64x from adapter 0x%I64x0x%I64x with status (0x%I64x)";
      v26 = UsageClass;
      v25 = a1.LowPart;
      v24 = v28.HighPart;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, v6, v24, v25, v26, 0LL);
    goto LABEL_26;
  }
  WdLogSingleEntry2(4LL, v28.HighPart, a1.LowPart);
  LODWORD(UsageClass) = -1073741130;
LABEL_26:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  return (unsigned int)UsageClass;
}
