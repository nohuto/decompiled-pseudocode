/*
 * XREFs of MiSessionLookupImage @ 0x140328A98
 * Callers:
 *     MiSharedVaToPartition @ 0x140240DBC (MiSharedVaToPartition.c)
 *     MmIsSessionExecutionValid @ 0x1403289F0 (MmIsSessionExecutionValid.c)
 *     MiMakeDriverPagesPrivate @ 0x140358454 (MiMakeDriverPagesPrivate.c)
 *     MiSessionRemoveImage @ 0x14038A8F8 (MiSessionRemoveImage.c)
 *     MiSessionUpdateImageCharges @ 0x14039E500 (MiSessionUpdateImageCharges.c)
 *     MiSessionReferenceImage @ 0x1403A7274 (MiSessionReferenceImage.c)
 *     MiResolveImageReferences @ 0x14075C9FC (MiResolveImageReferences.c)
 *     MiUnloadApproved @ 0x140771BDC (MiUnloadApproved.c)
 *     MiSessionUnloadAllImages @ 0x1407784DC (MiSessionUnloadAllImages.c)
 *     MmIsDriverLoadedCurrentSession @ 0x14078E158 (MmIsDriverLoadedCurrentSession.c)
 *     MmEnumerateSystemImages @ 0x140792C70 (MmEnumerateSystemImages.c)
 *     MiSessionApplyNonPagedImageCharges @ 0x1408DA9AC (MiSessionApplyNonPagedImageCharges.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiSessionLookupImage(unsigned __int64 a1)
{
  _QWORD *v1; // rdx

  v1 = *(_QWORD **)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 88);
  while ( v1 )
  {
    if ( a1 > v1[6] )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( a1 >= (v1[5] & 0xFFFFFFFFFFFFFFFCuLL) )
        return v1;
      v1 = (_QWORD *)*v1;
    }
  }
  return 0LL;
}
