/*
 * XREFs of MmVerifyCallbackFunction @ 0x1408C8324
 * Callers:
 *     KeRegisterBoundCallback @ 0x1405147E0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1403AF0C0 (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
