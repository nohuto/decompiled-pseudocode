/*
 * XREFs of IoRemoveShareAccess @ 0x1406F3430
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x1405DEB90 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1406F3450 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
