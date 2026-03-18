/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C009F3EC
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C009F378 (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01E3834 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01E395C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     RIMOnDisplayStateChange @ 0x1C0043F38 (RIMOnDisplayStateChange.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C009F464 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A07A8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C00A0A60 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v5 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  RIMOnDisplayStateChange(v3, v2, v4);
  CCursorClip::OnDisplayStateChange(v6, *((_BYTE *)this + 1505) != 0);
  do
    CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0288098 + 3 * (int)v5++));
  while ( v5 < 2 );
  InputConfig::Broadcast();
}
