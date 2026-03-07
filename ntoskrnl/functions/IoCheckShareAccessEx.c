NTSTATUS __stdcall IoCheckShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update,
        PBOOLEAN WritePermission)
{
  unsigned int v6; // eax

  if ( !WritePermission || (v6 = 0x80000000, *WritePermission) )
    v6 = 0;
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (__int64)FileObject,
           ShareAccess,
           0LL,
           v6 | (Update != 0));
}
