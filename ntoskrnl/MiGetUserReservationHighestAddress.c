/*
 * XREFs of MiGetUserReservationHighestAddress @ 0x1407D51A4
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x140725C90 (MiMapLockedPagesInUserSpace.c)
 *     MiMapExParametersInitialize @ 0x140727F8C (MiMapExParametersInitialize.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateVirtualMemoryPrepare @ 0x1407C4C00 (MiAllocateVirtualMemoryPrepare.c)
 *     MiMapParametersInitialize @ 0x1407D5090 (MiMapParametersInitialize.c)
 *     MiMapImageInSystemProcess @ 0x140A2DEF4 (MiMapImageInSystemProcess.c)
 *     MiAllocateEnclaveVad @ 0x140A3A010 (MiAllocateEnclaveVad.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetUserReservationHighestAddress(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rax

  v2 = 0x7FFFFFFEFFFFLL;
  if ( a2 )
  {
    v4 = 0xFFFFFFFFFFFFFFFFuLL >> a2;
    if ( 0xFFFFFFFFFFFFFFFFuLL >> a2 > 0x7FFFFFFEFFFFLL )
      v4 = 0x7FFFFFFEFFFFLL;
    v2 = v4;
  }
  result = *(_QWORD *)(a1 + 1496) - 1LL;
  if ( v2 <= result )
    return v2;
  return result;
}
