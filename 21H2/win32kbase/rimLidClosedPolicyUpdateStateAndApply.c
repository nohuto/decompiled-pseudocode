/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x1C01B11E4
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00E70E4 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00A2238 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01B61C4 (RIMCmAddContactSuppressionReasons.c)
 */

_DWORD *__fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  _DWORD *result; // rax
  _DWORD v5[16]; // [rsp+20h] [rbp-58h] BYREF

  result = memset(v5, 0, sizeof(v5));
  if ( gbEnableLidClosedInputSuppression )
  {
    result = *(_DWORD **)(a1 + 16);
    if ( !result[534] )
    {
      result = ApiSetGetPowerTransitionsState(v5);
      if ( !v5[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        result = (_DWORD *)RIMCmAddContactSuppressionReasons(a1, a2);
        *(_DWORD *)(a2 + 2420) |= 0x8000u;
      }
    }
  }
  return result;
}
