/*
 * XREFs of IoCheckShareAccess @ 0x140792B20
 * Callers:
 *     DifIoCheckShareAccessWrapper @ 0x1405DB6A0 (DifIoCheckShareAccessWrapper.c)
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1406B2FA0 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, ShareAccess, 0LL, Update != 0);
}
