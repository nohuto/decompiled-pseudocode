bool __fastcall RtlDoesRequireFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2)
{
  return RtlpGetFunctionOverrideIndex(a1, a2) != 0LL;
}
