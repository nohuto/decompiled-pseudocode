/*
 * XREFs of PfSnFailProcessTrace @ 0x14097F8B4
 * Callers:
 *     PfSnLogHelper @ 0x140773DD8 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x1407BEC48 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1407C3814 (PfSnLogStreamDelete.c)
 * Callees:
 *     PfSnEndProcessTrace @ 0x1407E58A0 (PfSnEndProcessTrace.c)
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
