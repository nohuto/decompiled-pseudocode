/*
 * XREFs of rimOutOfBoundsPolicyUpdateStateAndApply @ 0x1C01D8E70
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00F1204 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     RIMCmAddContactSuppressionReasons @ 0x1C01DE1B0 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C01DECA4 (RIMCmRemoveContactSuppressionReasons.c)
 */

__int64 __fastcall rimOutOfBoundsPolicyUpdateStateAndApply(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax

  if ( a3 )
  {
    result = RIMCmAddContactSuppressionReasons(a1, a2);
    *(_QWORD *)(a2 + 36) = a4;
  }
  else
  {
    result = *(unsigned int *)(a2 + 8);
    if ( (result & 8) != 0 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, a2, 8LL);
      *(_QWORD *)(a2 + 36) = 0LL;
      result = (__int64)a5;
      *a5 = 1;
    }
  }
  return result;
}
