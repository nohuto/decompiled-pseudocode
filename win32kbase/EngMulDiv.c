/*
 * XREFs of EngMulDiv @ 0x1C003BF30
 * Callers:
 *     ScaleDPIRect @ 0x1C00089CC (ScaleDPIRect.c)
 *     ExpandMonitorSpaceVertex @ 0x1C000C8E8 (ExpandMonitorSpaceVertex.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000FF84 (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C0012D54 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     InitLoadResources @ 0x1C0015CF0 (InitLoadResources.c)
 *     ScaleDPIPt @ 0x1C003B898 (ScaleDPIPt.c)
 *     LogicalToPhysicalDPIRect @ 0x1C003B920 (LogicalToPhysicalDPIRect.c)
 *     GetMonitorRectForDpi @ 0x1C003BDD8 (GetMonitorRectForDpi.c)
 *     NtUserGetDpiForMonitor @ 0x1C003DF40 (NtUserGetDpiForMonitor.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C003EC60 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C00F4192 (GetNormalizedMouseSensitivityFactor.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1C018C3EC (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C01BCC8C (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     RIMTransformCoordinates @ 0x1C01BDE94 (RIMTransformCoordinates.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x1C020A744 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020CEEC (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1C020FA64 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C0215768 (-ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z.c)
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
