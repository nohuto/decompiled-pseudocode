/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140AADD28
 * Callers:
 *     RtlCheckCurrentPatchesApplied @ 0x140A76218 (RtlCheckCurrentPatchesApplied.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x14067AF7C (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
