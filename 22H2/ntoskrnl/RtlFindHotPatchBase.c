/*
 * XREFs of RtlFindHotPatchBase @ 0x14091AF70
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8E04 (MiApplyDriverHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CCB58 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CCF14 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x1408CD688 (MiPrepareToHotPatchImage.c)
 *     RtlFindHotPatchInformation @ 0x14091AFA0 (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlFindHotPatchBase(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( a1[4] && (v1 = a1[3], (v2 = *(unsigned int *)((char *)a1 + v1)) != 0) && v2 + 32 <= (unsigned __int64)a1[1] )
    return (char *)a1 + v2;
  else
    return 0LL;
}
