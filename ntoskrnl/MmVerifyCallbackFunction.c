/*
 * XREFs of MmVerifyCallbackFunction @ 0x140A2DAA8
 * Callers:
 *     KeRegisterBoundCallback @ 0x14056A5F0 (KeRegisterBoundCallback.c)
 * Callees:
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140388FBC (MmVerifyCallbackFunctionCheckFlags.c)
 */

__int64 __fastcall MmVerifyCallbackFunction(unsigned __int64 a1)
{
  return MmVerifyCallbackFunctionCheckFlags(a1, 32);
}
