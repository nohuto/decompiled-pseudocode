/*
 * XREFs of Isoch_CommonBufferCallback @ 0x1C0040DA0
 * Callers:
 *     <none>
 * Callees:
 *     Isoch_MapTransfers @ 0x1C0001D00 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall Isoch_CommonBufferCallback(__int64 a1)
{
  *(_DWORD *)(a1 + 336) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4,
      14,
      12,
      (__int64)&WPP_fe7147ca1260387a70ac7753034ead38_Traceguids,
      *(_DWORD *)(a1 + 108));
  return Isoch_MapTransfers(a1);
}
