/*
 * XREFs of EngMulDiv @ 0x1C006E450
 * Callers:
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C002E448 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetDpiForMonitor @ 0x1C002FE40 (NtUserGetDpiForMonitor.c)
 *     ExpandMonitorSpaceVertex @ 0x1C006C4C8 (ExpandMonitorSpaceVertex.c)
 *     InitLoadResources @ 0x1C006C520 (InitLoadResources.c)
 *     ScaleDPIPt @ 0x1C006DFB0 (ScaleDPIPt.c)
 *     ScaleDPIRect @ 0x1C006E034 (ScaleDPIRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1C006E120 (PhysicalToLogicalDPIRect.c)
 *     CalculateLogicalMonitorRect @ 0x1C006E324 (CalculateLogicalMonitorRect.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00A0A60 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C00A23DC (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C016F338 (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01979CC (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMTransformCoordinates @ 0x1C0198AA4 (RIMTransformCoordinates.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DD650 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01E01CC (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C01E5A08 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01E7BA4 (GetNormalizedMouseSensitivityFactor.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  signed int v3; // r11d
  unsigned int v4; // ecx
  int v5; // r10d
  signed int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int64 v9; // rax

  v3 = abs32(a);
  v4 = ((a >> 31) & 0xFFFFFFFE) + 1;
  v5 = -v4;
  v6 = abs32(b);
  if ( b >= 0 )
    v5 = v4;
  if ( !c )
  {
    if ( v5 <= 0 )
      goto LABEL_14;
    goto LABEL_16;
  }
  if ( c < 0 )
  {
    v5 = -v5;
    c = -c;
  }
  v7 = c;
  v8 = c / 2 + v3 * (__int64)v6;
  if ( v7 == 96 )
    v9 = v8 / 96;
  else
    v9 = v8 / v7;
  if ( v9 > 0x7FFFFFFF )
  {
    if ( v5 <= 0 )
    {
LABEL_14:
      LODWORD(v9) = 0x80000000;
      return v9;
    }
LABEL_16:
    LODWORD(v9) = 0x7FFFFFFF;
    return v9;
  }
  if ( v5 <= 0 )
    LODWORD(v9) = -(int)v9;
  return v9;
}
