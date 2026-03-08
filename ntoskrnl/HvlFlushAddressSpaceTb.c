/*
 * XREFs of HvlFlushAddressSpaceTb @ 0x1403C6A88
 * Callers:
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KiFlushAddressSpaceTb @ 0x1403C6B40 (KiFlushAddressSpaceTb.c)
 * Callees:
 *     HvlpFastFlushAddressSpaceTb @ 0x1403C6AC8 (HvlpFastFlushAddressSpaceTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x1403C6E70 (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFastFlushAddressSpaceTbEx @ 0x1405474C4 (HvlpFastFlushAddressSpaceTbEx.c)
 *     HvlpSlowFlushAddressSpaceTb @ 0x1405477B4 (HvlpSlowFlushAddressSpaceTb.c)
 *     HvlpSlowFlushAddressSpaceTbEx @ 0x14054785C (HvlpSlowFlushAddressSpaceTbEx.c)
 */

__int64 __fastcall HvlFlushAddressSpaceTb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9

  v3 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a1) )
  {
    if ( ((HvlpFlags >> 8) & 0xF) + 5 > 0xE || (HvlEnlightenments & 0x80u) == 0 )
      return HvlpSlowFlushAddressSpaceTbEx(v3);
    else
      return HvlpFastFlushAddressSpaceTbEx(v3);
  }
  else if ( (HvlEnlightenments & 0x80u) == 0 )
  {
    return HvlpSlowFlushAddressSpaceTb(v3);
  }
  else
  {
    return HvlpFastFlushAddressSpaceTb(v3);
  }
}
