/*
 * XREFs of ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x1C01C1D84
 * Callers:
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C01C1CF0 (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x1C01716D8 (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     MonitorGetCCDMonitorID @ 0x1C01718C0 (MonitorGetCCDMonitorID.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x1C0171AB4 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall DpiPersistence::GetMonitorIdFromTargetId(
        DpiPersistence *this,
        unsigned int *a2,
        struct _LUID *a3,
        struct VIDPN_MGR *a4,
        unsigned __int16 *a5)
{
  __int64 v7; // rbx
  unsigned int v8; // r14d
  int ConnectedMonitorHandle; // eax
  __int64 v10; // rsi
  unsigned int v11; // edx
  struct HDXGMONITOR__ *v12; // r14
  int v13; // eax
  __int64 v14; // r15
  struct HDXGMONITOR__ *v16; // [rsp+50h] [rbp-28h] BYREF

  v16 = 0LL;
  v7 = (unsigned int)this;
  v8 = (unsigned __int16)a4;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle((VIDPN_MGR *)a3, (unsigned int)this, &v16);
  v10 = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle < 0 )
  {
    WdLogSingleEntry4(2LL, ConnectedMonitorHandle, v7, (int)a2[1], *a2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to retrieve monitor handle. (Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, i_AdapterLuid = 0x%I64x%08I64x)",
      v10,
      v7,
      (int)a2[1],
      *a2,
      0LL);
    return (unsigned int)v10;
  }
  v11 = v8;
  v12 = v16;
  LODWORD(v10) = MonitorGetCCDMonitorID((DXGMONITOR **)v16, v11, a5);
  if ( (_DWORD)v10 == -2147483643 )
    LODWORD(v10) = -1073741789;
  v13 = VIDPN_MGR::ReleaseMonitorHandle((VIDPN_MGR *)a3, v12);
  v14 = v13;
  if ( v13 >= 0 )
  {
    if ( (int)v10 < 0 )
    {
      WdLogSingleEntry5(2LL, (int)v10, v7, v12, (int)a2[1], *a2);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to get monitor Id. (Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, MonitorHandle = 0x%I64x, i_Adap"
                  "terLuid = 0x%I64x%08I64x)",
        (int)v10,
        v7,
        (__int64)v12,
        (int)a2[1],
        *a2);
    }
    return (unsigned int)v10;
  }
  WdLogSingleEntry5(1LL, v13, v7, v12, (int)a2[1], *a2);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"Failed to release monitor handle. (_Status = 0x%I64x, i_VidPnTargetId = 0x%I64x, MonitorHandle = 0x%I64x, i"
              "_AdapterLuid = 0x%I64x%08I64x)",
    v14,
    v7,
    (__int64)v12,
    (int)a2[1],
    *a2);
  return (unsigned int)v14;
}
