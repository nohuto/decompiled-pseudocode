/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C0171EF0
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C017825C (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C0179364 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01795E8 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C017B814 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     rimFindHoldingFrame @ 0x1C0008348 (rimFindHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimStoreRawDataBlock @ 0x1C0172E48 (rimStoreRawDataBlock.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v10 = result;
  if ( result )
  {
    if ( !*((_DWORD *)result + 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 843);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v10, a5);
  }
  return result;
}
