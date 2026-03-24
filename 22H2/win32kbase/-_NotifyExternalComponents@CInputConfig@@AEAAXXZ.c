/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C006E09C
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C006E02C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01B3000 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01B3110 (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     RIMOnDisplayStateChange @ 0x1C0056ECC (RIMOnDisplayStateChange.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C006E10C (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C006E3A4 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C006F718 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  unsigned int v1; // ebx
  CCursorClip *v2; // rcx

  v1 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 731LL);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v2);
  do
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0245098 + 3 * (int)v1++));
  while ( v1 < 2 );
  InputConfig::Broadcast();
}
