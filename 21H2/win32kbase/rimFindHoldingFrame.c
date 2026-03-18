/*
 * XREFs of rimFindHoldingFrame @ 0x1C01A6DDC
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1C01A6A7C (RIMRemoveHoldingFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A6D30 (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01A6D9C (rimFindAndReclaimHoldingFrame.c)
 *     rimFindOrCreateHoldingFrame @ 0x1C01A6E08 (rimFindOrCreateHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A6FEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A7B8C (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 760);
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
