/*
 * XREFs of ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00158E8
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0013CC0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0213444 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C00130D0 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1504) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 779LL);
    *((_BYTE *)this + 1504) = 1;
    CInputConfig::_CreateLegacyInputSpace(this);
  }
}
