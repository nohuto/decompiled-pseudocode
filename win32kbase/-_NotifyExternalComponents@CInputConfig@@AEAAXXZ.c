/*
 * XREFs of ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0012FE8
 * Callers:
 *     ?OnDisplayStateChange@CInputConfig@@QEAAXXZ @ 0x1C001305C (-OnDisplayStateChange@CInputConfig@@QEAAXXZ.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0213444 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C021356C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1C0012D54 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ResetAccelerationCurves @ 0x1C00143D0 (ResetAccelerationCurves.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C0016034 (-Broadcast@InputConfig@@SAXXZ.c)
 *     RIMOnDisplayStateChange @ 0x1C0036980 (RIMOnDisplayStateChange.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_NotifyExternalComponents(CInputConfig *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 751LL);
  RIMOnDisplayStateChange();
  CCursorClip::OnDisplayStateChange(v3, *((_BYTE *)this + 1505) != 0);
  do
    ResetAccelerationCurves(v2++);
  while ( v2 < 2 );
  InputConfig::Broadcast();
}
