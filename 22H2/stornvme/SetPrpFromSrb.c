/*
 * XREFs of SetPrpFromSrb @ 0x1C0002628
 * Callers:
 *     IoctlToNVMe @ 0x1C0002660 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C0016084 (ProtocolCommandToNVMe.c)
 * Callees:
 *     MdlToPrp @ 0x1C0005410 (MdlToPrp.c)
 *     SglToPrp @ 0x1C001755C (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 56) & 8) != 0 )
    result = MdlToPrp();
  else
    result = SglToPrp();
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 3856);
  return result;
}
