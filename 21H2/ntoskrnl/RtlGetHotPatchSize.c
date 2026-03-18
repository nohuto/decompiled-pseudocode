/*
 * XREFs of RtlGetHotPatchSize @ 0x1405EF8CC
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140976790 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1409C02BC (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1409C04B8 (RtlEnumerateHotPatchPatches.c)
 *     RtlPatchContainsCallTarget @ 0x1409C0744 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x1409C0794 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140A6BF28 (RtlApplyHotPatch.c)
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
