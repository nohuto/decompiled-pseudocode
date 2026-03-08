/*
 * XREFs of rimFindHoldingFrame @ 0x1C00F07AA
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1C01CDBCC (RIMRemoveHoldingFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01CDF34 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01CE060 (rimFindAndReclaimHoldingFrame.c)
 *     rimFindOrCreateHoldingFrame @ 0x1C01CE0A0 (rimFindOrCreateHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01CE320 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01CF2D0 (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 728);
  result = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  while ( result[3] != v4 )
  {
    result = (_QWORD *)*result;
    if ( result == v2 )
      return 0LL;
  }
  return result;
}
