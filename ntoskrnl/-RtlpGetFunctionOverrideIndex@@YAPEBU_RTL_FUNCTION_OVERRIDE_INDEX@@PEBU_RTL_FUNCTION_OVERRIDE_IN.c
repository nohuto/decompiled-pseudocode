/*
 * XREFs of ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140679548
 * Callers:
 *     RtlApplyFunctionOverrideFixups @ 0x140679570 (RtlApplyFunctionOverrideFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x140679788 (RtlDoesRequireFunctionOverrideFixups.c)
 * Callees:
 *     <none>
 */

const struct _RTL_FUNCTION_OVERRIDE_INDEX *__fastcall RtlpGetFunctionOverrideIndex(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2)
{
  unsigned int v2; // eax

  v2 = *((_DWORD *)a1 + 6);
  if ( a2 < v2 || a2 > *((_DWORD *)a1 + 7) )
    return 0LL;
  else
    return *(const struct _RTL_FUNCTION_OVERRIDE_INDEX **)((char *)a1 + 8 * (a2 - v2) + *((_QWORD *)a1 + 1));
}
