/*
 * XREFs of MmGetVirtualForPhysical @ 0x1403B0EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall MmGetVirtualForPhysical(PHYSICAL_ADDRESS PhysicalAddress)
{
  return (PVOID)((PhysicalAddress.LowPart & 0xFFF)
               + ((__int64)(*(_QWORD *)(48 * ((unsigned __int64)PhysicalAddress.QuadPart >> 12) - 0x21FFFFFFFFF8LL) << 25) >> 16));
}
