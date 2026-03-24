/*
 * XREFs of _DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x1C0027CD8
 * Callers:
 *     ?PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_D3DDDI_HDR_METADATA_TYPE@@@Z @ 0x1C00DC850 (-PopulateHDRMetadataFromDisplay@@YAJIPEAVADAPTER_DISPLAY@@PEAU_D3DDDI_HDR_METADATA_HDR10@@PEAW4_.c)
 * Callees:
 *     MonitorReleaseMonitorHandle @ 0x1C0139140 (MonitorReleaseMonitorHandle.c)
 */

__int64 __fastcall DXGKCALLONEXIT__lambda_897d21a97c0cf1b919de605caa0104f9____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
    return MonitorReleaseMonitorHandle(
             *(_QWORD *)(**(_QWORD **)a1 + 16LL),
             **(_QWORD **)(a1 + 8),
             PopulateHDRMetadataFromDisplay);
  return result;
}
