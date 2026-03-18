/*
 * XREFs of RtlULongSub @ 0x14024F418
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x140540BD0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406D3128 (IopTrackLink.c)
 *     PiForEachDriverQueryRoutine @ 0x14076BA8C (PiForEachDriverQueryRoutine.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14077386C (PnpCallDriverQueryServiceHelper.c)
 *     _RegRtlQueryKeyPathName @ 0x1408621F8 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x140A20144 (BiGetFilePathFromEfiPath.c)
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
