ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al
  unsigned __int64 Process; // rax

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    Process = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  }
  else
  {
    if ( !Thread )
      return 0;
    ApcEnvironment = Irp->ApcEnvironment;
    if ( ApcEnvironment )
    {
      if ( ApcEnvironment != 1 )
        return 0;
      Process = (unsigned __int64)Thread->ApcState.Process;
    }
    else
    {
      Process = (unsigned __int64)Thread->Process;
    }
  }
  if ( Process )
    return *(_DWORD *)(Process + 1088);
  return 0;
}
