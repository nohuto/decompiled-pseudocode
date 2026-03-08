/*
 * XREFs of MiGetAweViewPageSize @ 0x14064840C
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1406473BC (MiDeleteVadAwePtes.c)
 *     MiGetAwePageSizeFromVa @ 0x140648378 (MiGetAwePageSizeFromVa.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x140A3E848 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x140A3F0EC (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140A3F148 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140A3FC10 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweViewPageSize(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 40) & 3;
  if ( v1 == 1 )
    return 16LL;
  if ( v1 == 2 )
    return 512LL;
  result = 0LL;
  if ( v1 == 3 )
    return 0x40000LL;
  return result;
}
