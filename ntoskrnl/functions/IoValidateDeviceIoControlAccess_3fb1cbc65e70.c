NTSTATUS __stdcall IoValidateDeviceIoControlAccess(PIRP Irp, ULONG RequiredAccess)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8

  if ( (RequiredAccess & 3) == 0 )
    return -1073741811;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 13) > 1u )
    return -1073741811;
  if ( Irp->RequestorMode )
    return RequiredAccess != (RequiredAccess & (CurrentStackLocation->Flags & 1 | (CurrentStackLocation->Flags >> 1) & 2))
         ? 0xC0000022
         : 0;
  return 0;
}
