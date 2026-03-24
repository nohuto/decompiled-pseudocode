/*
 * XREFs of MiGetAweViewPageSize @ 0x14054C418
 * Callers:
 *     MiDeleteVadAwePtes @ 0x14054BA74 (MiDeleteVadAwePtes.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiComputeAweCharges @ 0x1408D5950 (MiComputeAweCharges.c)
 *     MiGetAweVadPageSize @ 0x1408D60F8 (MiGetAweVadPageSize.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6154 (MiReferenceIncomingPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408D6D30 (NtMapUserPhysicalPages.c)
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
  result = 0LL;
  if ( v1 == 2 )
    return 512LL;
  return result;
}
