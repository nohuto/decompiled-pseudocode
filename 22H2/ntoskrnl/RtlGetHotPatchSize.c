/*
 * XREFs of RtlGetHotPatchSize @ 0x14067AD28
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140A3A884 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140A76278 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A76474 (RtlEnumerateHotPatchPatches.c)
 *     RtlPatchContainsCallTarget @ 0x140A76704 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x140A76754 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140AAD830 (RtlApplyHotPatch.c)
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
