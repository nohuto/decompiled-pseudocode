/*
 * XREFs of ?EnvironmentChanged@CPTPProcessor@@SAXXZ @ 0x1C00972E0
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C0097280 (UpdateTPCurrentActiveState.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1C01A0910 (RIMSetExtendedPointerDeviceProperty.c)
 * Callees:
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0097320 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 */

void CPTPProcessor::EnvironmentChanged(void)
{
  if ( gpHidInput )
  {
    if ( CBaseInput::_sessionInitialized )
      CBaseInput::EnumDevices(gpHidInput, 0LL, lambda_f4b40b6f621e68311ee3b703040a939f_::_lambda_invoker_cdecl_);
  }
}
