/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C002C154
 * Callers:
 *     LibraryDecommission @ 0x1C0017680 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister_EtwUnregister @ 0x1C002CB2C (McGenEventUnregister_EtwUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C008729C (UninitializeTelemetryAssertsKM.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  REGHANDLE RegHandle; // rcx
  unsigned __int64 *v1; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( unk_1C009FEF0 )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    unk_1C009FEF0 = 0;
  }
  UninitializeTelemetryAssertsKM();
  RegHandle = Tlgg_TelemetryProviderProv.RegHandle;
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  EtwUnregister(RegHandle);
  McGenEventUnregister_EtwUnregister(v1);
  if ( stru_1C009FEF8.m_PoolToFree )
  {
    ExFreePoolWithTag(stru_1C009FEF8.m_PoolToFree, 0);
    stru_1C009FEF8.m_PoolToFree = 0LL;
  }
  stru_1C009FEF8.m_DriverUsage = 0LL;
  stru_1C009FEF8.m_Number = 0;
  if ( CallbackRecord.CallbackRoutine )
  {
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
    CallbackRecord.CallbackRoutine = 0LL;
    if ( Src )
    {
      unk_1C009FEB0 = 0LL;
      ExFreePoolWithTag(Src, 0);
      Src = 0LL;
    }
  }
  unk_1C009FE90 = 0;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
