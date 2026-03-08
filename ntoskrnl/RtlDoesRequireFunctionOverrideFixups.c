/*
 * XREFs of RtlDoesRequireFunctionOverrideFixups @ 0x140679788
 * Callers:
 *     MiPageHasRelocations @ 0x14069F28C (MiPageHasRelocations.c)
 *     MiPerformFixups @ 0x14069F3D0 (MiPerformFixups.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     MiInitializePrivateFixupBitmap @ 0x14072E1E0 (MiInitializePrivateFixupBitmap.c)
 * Callees:
 *     ?RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_INFORMATION@@K@Z @ 0x140679548 (-RtlpGetFunctionOverrideIndex@@YAPEBU_RTL_FUNCTION_OVERRIDE_INDEX@@PEBU_RTL_FUNCTION_OVERRIDE_IN.c)
 */

bool __fastcall RtlDoesRequireFunctionOverrideFixups(
        const struct _RTL_FUNCTION_OVERRIDE_INFORMATION *a1,
        unsigned int a2)
{
  return RtlpGetFunctionOverrideIndex(a1, a2) != 0LL;
}
