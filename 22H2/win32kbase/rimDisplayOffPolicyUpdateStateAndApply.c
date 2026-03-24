/*
 * XREFs of rimDisplayOffPolicyUpdateStateAndApply @ 0x1C0179558
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0178FB0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00AD424 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017FDC4 (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimDisplayOffPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v5[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]

  v6 = 0LL;
  v7 = 0;
  memset(v5, 0, sizeof(v5));
  result = ApiSetGetPowerTransitionsState((__int64)v5);
  if ( !LODWORD(v5[0]) )
  {
    result = *(unsigned int *)(a2 + 8);
    if ( (result & 0x80u) == 0LL )
    {
      result = RIMCmAddContactSuppressionReasons(a1, a2, 128LL);
      *(_DWORD *)(a2 + 2420) |= 0x8000u;
    }
  }
  return result;
}
