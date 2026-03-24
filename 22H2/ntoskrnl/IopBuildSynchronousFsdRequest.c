/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1406FF1D0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1406FF190 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x1407653A4 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x140866ACC (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x14090F928 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140358DF0 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
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
