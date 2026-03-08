/*
 * XREFs of MiDereferenceSingleImport @ 0x1407F77B4
 * Callers:
 *     MiResolveImageReferences @ 0x1407EC794 (MiResolveImageReferences.c)
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 *     MiUnloadApproved @ 0x1407F77E8 (MiUnloadApproved.c)
 */

__int64 __fastcall MiDereferenceSingleImport(ULONG_PTR BugCheckParameter2)
{
  if ( (unsigned int)MiUnloadApproved(BugCheckParameter2) == 1 )
    MiUnloadSystemImage(BugCheckParameter2, -1);
  return 1LL;
}
