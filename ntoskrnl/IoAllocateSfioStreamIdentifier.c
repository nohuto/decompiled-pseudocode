/*
 * XREFs of IoAllocateSfioStreamIdentifier @ 0x140554370
 * Callers:
 *     <none>
 * Callees:
 *     IopGetSetStreamIdentifier @ 0x1405552DC (IopGetSetStreamIdentifier.c)
 */

NTSTATUS __stdcall IoAllocateSfioStreamIdentifier(
        PFILE_OBJECT FileObject,
        ULONG Length,
        PVOID Signature,
        PVOID *StreamIdentifier)
{
  if ( !FileObject )
    return -1073741585;
  if ( Length - 1 > 0xFFFFFFDE )
    return -1073741584;
  if ( Signature )
    return IopGetSetStreamIdentifier((_DWORD)FileObject, Length, (_DWORD)Signature, (_DWORD)StreamIdentifier, 1);
  return -1073741583;
}
