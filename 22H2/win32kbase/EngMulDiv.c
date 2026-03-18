/*
 * XREFs of EngMulDiv @ 0x1C005A530
 * Callers:
 *     ScaleDPIRect @ 0x1C000967C (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C000DFE8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIPt @ 0x1C0059E98 (ScaleDPIPt.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0059F20 (LogicalToPhysicalDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C005A3D8 (GetMonitorRectForDpi.c)
 *     InitLoadResources @ 0x1C005D508 (InitLoadResources.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetDpiForMonitor @ 0x1C005DE70 (NtUserGetDpiForMonitor.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00642EC (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C00BC790 (RIMUpdatePointerDeviceScalingInfo.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C00E5A00 (GetNormalizedMouseSensitivityFactor.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C015F82C (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C018EFF4 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMTransformCoordinates @ 0x1C01901F4 (RIMTransformCoordinates.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C01DB964 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C01DE3DC (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C01E0FC4 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C01E5D94 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v3; // ebx
  INT v4; // r9d
  signed int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // r8
  unsigned __int64 v8; // rax

  v3 = b;
  v4 = -a;
  if ( a >= 0 )
    v4 = a;
  v5 = ((a >> 31) & 0xFFFFFFFE) + 1;
  if ( b < 0 )
  {
    v5 = -v5;
    v3 = -b;
  }
  if ( c )
  {
    if ( c < 0 )
    {
      v5 = -v5;
      c = -c;
    }
    v6 = c;
    v7 = c / 2 + v3 * (__int64)v4;
    if ( v6 == 96 )
      v8 = v7 / 96;
    else
      v8 = v7 / v6;
    if ( v8 > 0x7FFFFFFF )
    {
      if ( v5 > 0 )
        LODWORD(v8) = 0x7FFFFFFF;
      else
        LODWORD(v8) = 0x80000000;
    }
    else if ( v5 <= 0 )
    {
      LODWORD(v8) = -(int)v8;
    }
  }
  else
  {
    LODWORD(v8) = 0x80000000;
    if ( v5 > 0 )
      LODWORD(v8) = 0x7FFFFFFF;
  }
  return v8;
}
