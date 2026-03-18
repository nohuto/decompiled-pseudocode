/*
 * XREFs of IoUpdateShareAccess @ 0x140875880
 * Callers:
 *     DifIoUpdateShareAccessWrapper @ 0x1405E19A0 (DifIoUpdateShareAccessWrapper.c)
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1407664F0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
