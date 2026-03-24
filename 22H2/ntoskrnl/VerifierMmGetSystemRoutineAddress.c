/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x1409E6970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     VfThunkAdjustExportAddressIfHooked @ 0x1409D8A04 (VfThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (*)(void))pXdvMmGetSystemRoutineAddress)();
  if ( result )
    return VfThunkAdjustExportAddressIfHooked(result, a1);
  return result;
}
