/*
 * XREFs of RtlULongSub @ 0x1402E6B44
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404EE9B0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x14065E674 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14073E7AC (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x140748748 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D1F88 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x140972228 (BiGetFilePathFromEfiPath.c)
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
