/*
 * XREFs of SetPrpFromSrb @ 0x1C001B51C
 * Callers:
 *     IoctlToNVMe @ 0x1C0014800 (IoctlToNVMe.c)
 *     ProtocolCommandToNVMe @ 0x1C00187F4 (ProtocolCommandToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x1C00244D0 (ProcessCommandNvmePacket.c)
 * Callees:
 *     MdlToPrp @ 0x1C0001570 (MdlToPrp.c)
 *     SglToPrp @ 0x1C001B550 (SglToPrp.c)
 */

__int64 __fastcall SetPrpFromSrb(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    result = MdlToPrp(a1, a2);
  else
    result = SglToPrp(a1, a2);
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 4072);
  return result;
}
