/*
 * XREFs of PfSnFailProcessTrace @ 0x140735010
 * Callers:
 *     PfSnLogHelper @ 0x14062F03C (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x14067985C (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x14067D04C (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x14062E760 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
