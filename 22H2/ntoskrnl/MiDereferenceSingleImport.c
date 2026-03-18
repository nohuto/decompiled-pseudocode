/*
 * XREFs of MiDereferenceSingleImport @ 0x1407E9C28
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiResolveImageReferences @ 0x1406AE044 (MiResolveImageReferences.c)
 * Callees:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiUnloadApproved @ 0x1407E9C5C (MiUnloadApproved.c)
 */

__int64 __fastcall MiDereferenceSingleImport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)MiUnloadApproved(BugCheckParameter2) == 1 )
    MiUnloadSystemImage(BugCheckParameter2, -1);
  return 1LL;
}
