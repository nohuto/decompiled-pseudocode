/*
 * XREFs of IovpCallDriverNoIrpTracking @ 0x140ABE96C
 * Callers:
 *     IovCallDriver @ 0x140ABE1D0 (IovCallDriver.c)
 * Callees:
 *     IopfCallDriver @ 0x1402B903C (IopfCallDriver.c)
 *     IopPerfCallDriver @ 0x14045728A (IopPerfCallDriver.c)
 *     VfBeforeCallDriver @ 0x140ACA5AC (VfBeforeCallDriver.c)
 */

__int64 __fastcall IovpCallDriverNoIrpTracking(PVOID Object, ULONG_PTR a2)
{
  VfBeforeCallDriver(Object, a2, 0LL);
  if ( (IopFunctionPointerMask & 2) != 0 )
    return IopPerfCallDriver(Object, a2);
  else
    return IopfCallDriver((__int64)Object, a2);
}
