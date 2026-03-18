/*
 * XREFs of RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A034C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C01A6DA4 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01A7EF8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01A8348 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C01AA87C (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindHoldingFrame @ 0x1C00E1BCA (rimFindHoldingFrame.c)
 *     rimStoreRawDataBlock @ 0x1C01A16B0 (rimStoreRawDataBlock.c)
 */

_QWORD *__fastcall RIMStoreRawDataInPointerDeviceFrame(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5)
{
  _QWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // r8d
  _QWORD *v11; // rbx

  *a5 = 0;
  result = rimFindHoldingFrame(a1, a2);
  v11 = result;
  if ( result )
  {
    if ( *((_DWORD *)result + 4) == v10 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 836);
    return (_QWORD *)rimStoreRawDataBlock(v9, v8, a3, a4, v11, a5);
  }
  return result;
}
