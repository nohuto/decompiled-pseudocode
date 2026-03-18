/*
 * XREFs of SetPrpFromSrb @ 0x1C0002DA8
 * Callers:
 *     IoctlToNVMe @ 0x1C0002DE0 (IoctlToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x1C000DB08 (ProcessCommandNvmePacket.c)
 *     ProtocolCommandToNVMe @ 0x1C001FAF4 (ProtocolCommandToNVMe.c)
 * Callees:
 *     MdlToPrp @ 0x1C0004D00 (MdlToPrp.c)
 *     SglToPrp @ 0x1C00213A4 (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    result = MdlToPrp();
  else
    result = SglToPrp();
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 3872);
  return result;
}
