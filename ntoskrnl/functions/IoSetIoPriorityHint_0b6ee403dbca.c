NTSTATUS __stdcall IoSetIoPriorityHint(PIRP Irp, IO_PRIORITY_HINT PriorityHint)
{
  if ( (unsigned int)PriorityHint >= MaxIoPriorityTypes )
    return -1073741811;
  Irp->Flags = Irp->Flags & 0xFFF1FFFF | ((PriorityHint << 17) + 0x20000);
  return 0;
}
