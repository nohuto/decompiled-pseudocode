/*
 * XREFs of ?ConvertDipsToScreenSpaceUnits@CPalmRejectZoneInfo@@AEAAJUtagPOINT@@J@Z @ 0x1C0215768
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215AB0 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     PtInRect @ 0x1C00157B4 (PtInRect.c)
 *     EngMulDiv @ 0x1C003BF30 (EngMulDiv.c)
 */

__int64 __fastcall CPalmRejectZoneInfo::ConvertDipsToScreenSpaceUnits(
        CPalmRejectZoneInfo *this,
        struct tagPOINT a2,
        INT a3)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r11d
  __int64 i; // r10
  __int64 v7; // rcx

  v4 = (unsigned __int64)a2;
  v5 = 0;
  for ( i = *((_QWORD *)gpDispInfo + 13); i; i = *(_QWORD *)(i + 56) )
  {
    v7 = *(_QWORD *)(i + 40);
    if ( (*(_DWORD *)(v7 + 24) & 1) != 0 && PtInRect((_DWORD *)(v7 + 28), v4) )
      return (unsigned int)EngMulDiv(a3, *(unsigned __int16 *)(i + 72), 96);
  }
  return v5;
}
