/*
 * XREFs of ?NeedLidStateRecovery@DISPLAYSTATECHECKER@@QEAA_NXZ @ 0x1C02F48CC
 * Callers:
 *     ?LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ @ 0x1C02F42BC (-LogDisplayBlackScreenDiagPacket@DISPLAYSTATECHECKER@@AEAAXXZ.c)
 *     DxgkCheckDisplayState @ 0x1C02F49D0 (DxgkCheckDisplayState.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1C0024B30 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1C0024DA8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049800 (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     ?GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z @ 0x1C0049998 (-GetVidPnTargetInfo@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAPEAVVIDPNTARGETINFO@@I@Z.c)
 */

char __fastcall DISPLAYSTATECHECKER::NeedLidStateRecovery(DISPLAYSTATECHECKER *this)
{
  unsigned int v1; // edi
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rbx
  unsigned int v4; // r9d
  unsigned int v5; // r8d
  int v6; // r8d
  __int64 v8; // [rsp+30h] [rbp+8h]

  v1 = 0;
  if ( !*((_DWORD *)this + 3522) )
    return 0;
  while ( 1 )
  {
    DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData(this, v1);
    v8 = (unsigned int)Feature_UnreliableLidRecovery__private_featureState;
    if ( (Feature_UnreliableLidRecovery__private_featureState & 0x10) == 0 )
    {
      LODWORD(v8) = Feature_UnreliableLidRecovery__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_UnreliableLidRecovery__private_descriptor,
        v8,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v8,
        3,
        (__int64)&Feature_UnreliableLidRecovery__private_descriptor);
    }
    if ( !*((_BYTE *)DisplayAdapterDiagData + 3504) || *((_BYTE *)DisplayAdapterDiagData + 3506) )
      goto LABEL_12;
    v4 = *((_DWORD *)DisplayAdapterDiagData + 489);
    v5 = 0;
    if ( v4 )
      break;
LABEL_9:
    if ( v4 == 1 && *((_BYTE *)DisplayAdapterDiagData + 970) && *((_BYTE *)DisplayAdapterDiagData + 971) )
      return 1;
LABEL_12:
    if ( ++v1 >= *((_DWORD *)this + 3522) )
      return 0;
  }
  while ( *((_DWORD *)DISPLAYDIAGNOSTICADAPTERDATA::GetVidPnTargetInfo(DisplayAdapterDiagData, v5) + 2) <= 1u )
  {
    v5 = v6 + 1;
    if ( v5 >= v4 )
      goto LABEL_9;
  }
  return 1;
}
