/*
 * XREFs of PfSnFailProcessTrace @ 0x14097C804
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x14076C3D0 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x140773D30 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1407A3FD0 (PfSnLogHelper.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x140796460 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
