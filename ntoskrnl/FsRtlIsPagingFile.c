/*
 * XREFs of FsRtlIsPagingFile @ 0x1402D4FC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __stdcall FsRtlIsPagingFile(PFILE_OBJECT FileObject)
{
  _BYTE *FsContext; // rax
  LOGICAL v2; // ecx

  FsContext = FileObject->FsContext;
  v2 = 0;
  if ( FsContext )
    return (FsContext[6] & 8) != 0;
  return v2;
}
