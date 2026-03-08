/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x14030F2F0
 * Callers:
 *     IopCloseFile @ 0x1407BACE0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1407BAF80 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x140943D90 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14094E9BC (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x140552878 (IopAllocateReserveIrp.c)
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
