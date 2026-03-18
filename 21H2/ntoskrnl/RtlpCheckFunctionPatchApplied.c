/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x140A6C3EC
 * Callers:
 *     RtlCheckCurrentPatchesApplied @ 0x1409C025C (RtlCheckCurrentPatchesApplied.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1405EFAB0 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(char *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3, a4, a4);
}
