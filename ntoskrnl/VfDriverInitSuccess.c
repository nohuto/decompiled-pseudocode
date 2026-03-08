/*
 * XREFs of VfDriverInitSuccess @ 0x140ABA5FC
 * Callers:
 *     MmCallDllInitialize @ 0x14081BAB0 (MmCallDllInitialize.c)
 *     PnpInitializeBootStartDriver @ 0x140B58AC4 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ViDriverReApplyVerifierForAll @ 0x140AC7934 (ViDriverReApplyVerifierForAll.c)
 */

__int64 __fastcall VfDriverInitSuccess(int a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( ViActiveVerifierThunks != a1 )
    return ViDriverReApplyVerifierForAll(a2);
  return result;
}
