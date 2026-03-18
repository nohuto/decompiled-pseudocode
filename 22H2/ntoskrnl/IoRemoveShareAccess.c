/*
 * XREFs of IoRemoveShareAccess @ 0x1407921F0
 * Callers:
 *     DifIoRemoveShareAccessWrapper @ 0x1405E1040 (DifIoRemoveShareAccessWrapper.c)
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x140792210 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
