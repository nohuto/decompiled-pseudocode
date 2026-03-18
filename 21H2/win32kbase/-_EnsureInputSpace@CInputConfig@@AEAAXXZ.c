/*
 * XREFs of ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C00A0990
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C009FE3C (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C01E3834 (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C009F724 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_EnsureInputSpace(CInputConfig *this, __int64 a2, __int64 a3)
{
  if ( *(CInputConfig **)this == this )
  {
    if ( *((_BYTE *)this + 1504) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    *((_BYTE *)this + 1504) = 1;
    CInputConfig::_CreateLegacyInputSpace(this);
  }
}
