/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x1C017B9F8
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C0178FB0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00AD424 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017FDC4 (RIMCmAddContactSuppressionReasons.c)
 */

__int64 __fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD v5[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v6; // [rsp+50h] [rbp-28h]
  int v7; // [rsp+58h] [rbp-20h]

  result = 0LL;
  v6 = 0LL;
  memset(v5, 0, sizeof(v5));
  v7 = 0;
  if ( gbEnableLidClosedInputSuppression )
  {
    result = *(_QWORD *)(a1 + 16);
    if ( !*(_DWORD *)(result + 2128) )
    {
      result = ApiSetGetPowerTransitionsState((__int64)v5);
      if ( !HIDWORD(v6) && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
      {
        result = RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
        *(_DWORD *)(a2 + 2420) |= 0x8000u;
      }
    }
  }
  return result;
}
