/*
 * XREFs of IntersectRect @ 0x1C006EC48
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002A8D0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C006D5A0 (TransformRectBetweenCoordinateSpaces.c)
 *     xxxEnumDisplayMonitors @ 0x1C006E680 (xxxEnumDisplayMonitors.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00C4C54 (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C00C7F94 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E5D28 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 *     ?AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z @ 0x1C02104B8 (-AddNextContiguousRectangle@@YAPEAPEAUtagRECT@@PEAPEAU1@0I@Z.c)
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C0210C18 (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IntersectRect(_DWORD *a1, int *a2, int *a3)
{
  int v4; // r10d
  int v6; // r9d
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v4 = *a2;
  if ( *a2 <= *a3 )
    v4 = *a3;
  *a1 = v4;
  v6 = a2[2];
  if ( v6 >= a3[2] )
    v6 = a3[2];
  a1[2] = v6;
  if ( v4 < v6 )
  {
    v7 = a2[1];
    if ( v7 <= a3[1] )
      v7 = a3[1];
    a1[1] = v7;
    v8 = a2[3];
    if ( v8 >= a3[3] )
      v8 = a3[3];
    a1[3] = v8;
    if ( v7 < v8 )
      return 1LL;
  }
  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  return result;
}
