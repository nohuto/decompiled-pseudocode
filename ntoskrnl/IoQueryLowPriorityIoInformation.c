/*
 * XREFs of IoQueryLowPriorityIoInformation @ 0x14079A0D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406AC2A0 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoQueryLowPriorityIoInformation(__int64 a1, _DWORD *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v4; // ecx

  v4 = 0;
  *a4 = 0;
  if ( a3 < 0x28 )
  {
    v4 = -1073741789;
  }
  else
  {
    *a2 = IoLowPriorityReadOperationCount;
    a2[1] = IoLowPriorityWriteOperationCount;
    a2[2] = IoKernelIssuedIoBoostedCount;
    a2[3] = IoPagingReadLowPriorityCount;
    a2[4] = IoPagingReadLowPriorityBumpedCount;
    a2[5] = IoPagingWriteLowPriorityCount;
    a2[6] = IoPagingWriteLowPriorityBumpedCount;
    a2[7] = IoBoostedThreadedIrpCount;
    a2[8] = IoBoostedPagingIrpCount;
    a2[9] = IoBlanketBoostCount;
  }
  *a4 = 40;
  return v4;
}
