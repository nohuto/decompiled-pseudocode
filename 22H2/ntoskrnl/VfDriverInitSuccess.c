/*
 * XREFs of VfDriverInitSuccess @ 0x140ABE430
 * Callers:
 *     MmCallDllInitialize @ 0x1408133E0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B41100 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140ACB934 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
