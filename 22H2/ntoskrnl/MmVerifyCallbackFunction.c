/*
 * XREFs of MmVerifyCallbackFunction @ 0x140A307D8
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056CA90 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x14039FC2C (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
