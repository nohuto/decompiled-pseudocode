/*
 * XREFs of RtlULongSub @ 0x1402FD448
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x14053A170 (DbgkpTriageDumpSnapData.c)
 *     KiDeduplicateTriageDumpDataArrays @ 0x140567B38 (KiDeduplicateTriageDumpDataArrays.c)
 *     PiForEachDriverQueryRoutine @ 0x14068149C (PiForEachDriverQueryRoutine.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406C40E0 (PnpCallDriverQueryServiceHelper.c)
 *     IopTrackLink @ 0x140795688 (IopTrackLink.c)
 *     BiGetFilePathFromEfiPath @ 0x14082F3C8 (BiGetFilePathFromEfiPath.c)
 *     _RegRtlQueryKeyPathName @ 0x14085E3CC (_RegRtlQueryKeyPathName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongSub(ULONG ulMinuend, ULONG ulSubtrahend, ULONG *pulResult)
{
  ULONG v3; // r9d

  if ( ulMinuend < ulSubtrahend )
    v3 = -1;
  else
    v3 = ulMinuend - ulSubtrahend;
  *pulResult = v3;
  return ulMinuend < ulSubtrahend ? 0xC0000095 : 0;
}
