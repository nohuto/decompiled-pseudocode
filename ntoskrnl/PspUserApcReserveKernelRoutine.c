/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x14079A7D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall PspUserApcReserveKernelRoutine(__int64 a1)
{
  _DWORD *v1; // rcx

  v1 = (_DWORD *)(a1 - 8);
  *v1 = 0;
  return ObfDereferenceObject(v1);
}
