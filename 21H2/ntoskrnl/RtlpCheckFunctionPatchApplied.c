/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x1409B3A28
 * Callers:
 *     RtlCheckCurrentPatchesApplied @ 0x14091ADA0 (RtlCheckCurrentPatchesApplied.c)
 * Callees:
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409B3A40 (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpCheckFunctionPatchAppliedInOriginalImage(a1, 0LL, a3);
}
