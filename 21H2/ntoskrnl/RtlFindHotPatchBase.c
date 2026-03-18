/*
 * XREFs of RtlFindHotPatchBase @ 0x1409C0550
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140971068 (MiApplyDriverHotPatch.c)
 *     MiCaptureHotPatchInfo @ 0x140972818 (MiCaptureHotPatchInfo.c)
 *     MiMapAndApplyPatchInSession @ 0x140975FF0 (MiMapAndApplyPatchInSession.c)
 *     MiOpenHotPatchFile @ 0x14097638C (MiOpenHotPatchFile.c)
 *     MiPrepareToHotPatchImage @ 0x140976880 (MiPrepareToHotPatchImage.c)
 *     RtlFindHotPatchInformation @ 0x1409C0580 (RtlFindHotPatchInformation.c)
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
