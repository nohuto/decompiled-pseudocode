/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01AD8CC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01AE834 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01AEB68 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01B1008 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C01A6DDC (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01A7F84 (rimStoreRawDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v11 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 16) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    return rimStoreRawDataBlock(v9, v8, a3, a4, v11, a5);
  }
  return result;
}
