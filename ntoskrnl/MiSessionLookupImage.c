/*
 * XREFs of MiSessionLookupImage @ 0x14036C7B8
 * Callers:
 *     MiSessionRemoveImage @ 0x1402009A8 (MiSessionRemoveImage.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiSharedVaToPartition @ 0x1402E21A4 (MiSharedVaToPartition.c)
 *     MiSessionReferenceImage @ 0x14036C5C4 (MiSessionReferenceImage.c)
 *     MiSessionUpdateImageCharges @ 0x14036C724 (MiSessionUpdateImageCharges.c)
 *     MiSessionUnloadAllImages @ 0x14067E8F8 (MiSessionUnloadAllImages.c)
 *     MmLoadSystemImageEx @ 0x14072E4EC (MmLoadSystemImageEx.c)
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiApplyRequiredSessionDriverHotPatches @ 0x1407F6F6C (MiApplyRequiredSessionDriverHotPatches.c)
 *     MmIsDriverLoadedCurrentSession @ 0x1407F7298 (MmIsDriverLoadedCurrentSession.c)
 *     MiUnloadApproved @ 0x1407F77E8 (MiUnloadApproved.c)
 *     MmEnumerateSystemImages @ 0x14080E4B0 (MmEnumerateSystemImages.c)
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 64);
  while ( result )
  {
    if ( a1 > result[6] )
    {
      result = (_QWORD *)result[1];
    }
    else
    {
      if ( a1 >= (result[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return result;
      result = (_QWORD *)*result;
    }
  }
  return result;
}
