/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1407F8DE0
 * Callers:
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 *     IoBuildSynchronousFsdRequest @ 0x1407F8DA0 (IoBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x140932B30 (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x1409B58F4 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14036D3F0 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result);
    return v8;
  }
  return result;
}
