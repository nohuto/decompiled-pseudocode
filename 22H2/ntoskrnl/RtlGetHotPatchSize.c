/*
 * XREFs of RtlGetHotPatchSize @ 0x14058FC4C
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x1408CD598 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14091ACF8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14091AEE8 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091B0D4 (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x14091B234 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x1409B2884 (RtlApplyHotPatch.c)
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
