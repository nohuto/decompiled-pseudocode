/*
 * XREFs of RtlGetHotPatchSize @ 0x14058FF3C
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408CD6A8 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14091AE08 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14091AFF8 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091B1E4 (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x14091B344 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409B3674 (RtlApplyHotPatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
