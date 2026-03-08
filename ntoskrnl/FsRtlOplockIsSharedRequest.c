/*
 * XREFs of FsRtlOplockIsSharedRequest @ 0x14076F9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlOplockIsSharedRequest(PIRP Irp)
{
  ULONG LowPart; // edx

  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 590400 )
  {
    if ( (*(_DWORD *)(&Irp->AssociatedIrp.MasterIrp->Size + 1) & 4) == 0 )
      return 1;
  }
  else if ( LowPart == 589828 )
  {
    return 1;
  }
  return 0;
}
