/*
 * XREFs of MiPageSizeToPteLevel @ 0x14064BCD4
 * Callers:
 *     MiVadPageTableChargeLevel @ 0x140321F50 (MiVadPageTableChargeLevel.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x140A3E848 (MiComputeAweCharges.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageSizeToPteLevel(unsigned __int64 a1)
{
  __int64 result; // rax
  __int64 i; // rdx

  result = 0LL;
  for ( i = 2LL; i >= -1; --i )
  {
    if ( a1 <= MiLargePageSizes[i] )
      break;
    result = (unsigned int)(result + 1);
  }
  return result;
}
