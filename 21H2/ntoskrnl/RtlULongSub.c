/*
 * XREFs of RtlULongSub @ 0x14020DD44
 * Callers:
 *     DbgkpTriageDumpSnapData @ 0x1404EECB0 (DbgkpTriageDumpSnapData.c)
 *     IopTrackLink @ 0x1405DBA34 (IopTrackLink.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1407424CC (PnpCallDriverQueryServiceHelper.c)
 *     PiForEachDriverQueryRoutine @ 0x14074C468 (PiForEachDriverQueryRoutine.c)
 *     _RegRtlQueryKeyPathName @ 0x1407D21D8 (_RegRtlQueryKeyPathName.c)
 *     BiGetFilePathFromEfiPath @ 0x1409723B8 (BiGetFilePathFromEfiPath.c)
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
