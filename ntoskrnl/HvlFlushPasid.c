/*
 * XREFs of HvlFlushPasid @ 0x140541A50
 * Callers:
 *     <none>
 * Callees:
 *     HvlpFastFlushPasidAddressList @ 0x140543D18 (HvlpFastFlushPasidAddressList.c)
 *     HvlpFlushPasidAddressSpace @ 0x140543EB0 (HvlpFlushPasidAddressSpace.c)
 *     HvlpSlowFlushPasidAddressList @ 0x140543FBC (HvlpSlowFlushPasidAddressList.c)
 */

__int64 __fastcall HvlFlushPasid(__int64 a1, __int64 a2, unsigned int a3)
{
  if ( a3 - 1 > 0x1FD )
    return HvlpFlushPasidAddressSpace();
  if ( a3 > 0xC )
    return HvlpSlowFlushPasidAddressList(a1);
  return HvlpFastFlushPasidAddressList(a1);
}
