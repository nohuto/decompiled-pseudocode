/*
 * XREFs of IoSetShareAccess @ 0x1406F2E60
 * Callers:
 *     DifIoSetShareAccessWrapper @ 0x1405DF1A0 (DifIoSetShareAccessWrapper.c)
 * Callees:
 *     IoSetLinkShareAccess @ 0x1406F34E0 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
