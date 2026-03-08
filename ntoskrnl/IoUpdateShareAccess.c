/*
 * XREFs of IoUpdateShareAccess @ 0x1408729C0
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x1405DF4F0 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1406B2A00 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
