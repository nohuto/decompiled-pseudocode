/*
 * XREFs of RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x1409B2B10
 * Callers:
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14091ACA8 (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14091B084 (RtlHotPatchSynchronizationRequired.c)
 *     RtlApplyHotPatch @ 0x1409B2744 (RtlApplyHotPatch.c)
 *     RtlpCheckFunctionPatchApplied @ 0x1409B2AF8 (RtlpCheckFunctionPatchApplied.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCheckFunctionPatchAppliedInOriginalImage(_BYTE *a1, _BYTE *a2)
{
  char v2; // al

  v2 = a1[1];
  if ( *a1 == 0xEB && v2 < 0 )
  {
    if ( v2 == -8 && *(a1 - 6) == 0xFF && *(a1 - 5) == 37 )
      return (__int64)&a1[*((int *)a1 - 1)];
    return -1LL;
  }
  if ( a2 && (*a1 != *a2 || v2 != a2[1]) )
    return -1LL;
  return 0LL;
}
