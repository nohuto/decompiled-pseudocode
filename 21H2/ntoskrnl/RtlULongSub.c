/*
 * XREFs of RtlULongSub @ 0x14028FDDC
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404EEA70 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1406809F0 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x14074230C (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x14074C2A8 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D2068 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1409721D8 (BiGetFilePathFromEfiPath.c)
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
