/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14022E280
 * Callers:
 *     IopCloseFile @ 0x14072FFC0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x140730450 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x140946DB0 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x1409519DC (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x14022EF90 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x140554D18 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL); !result; result = IopAllocateIrpExReturn(a1, v2, 0LL) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
