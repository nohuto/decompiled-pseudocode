/*
 * XREFs of RtlGetHotPatchSize @ 0x1406786D8
 * Callers:
 *     MiPrepareDriverForHotPatch @ 0x140A37BA4 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140A73578 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140A73774 (RtlEnumerateHotPatchPatches.c)
 *     RtlPatchContainsCallTarget @ 0x140A73A04 (RtlPatchContainsCallTarget.c)
 *     RtlValidateHotPatchBase @ 0x140A73A54 (RtlValidateHotPatchBase.c)
 *     RtlApplyHotPatch @ 0x140AAA600 (RtlApplyHotPatch.c)
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
