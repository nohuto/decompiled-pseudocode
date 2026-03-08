/*
 * XREFs of IoGetPagingIoPriority @ 0x1402D3F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

IO_PAGING_PRIORITY __stdcall IoGetPagingIoPriority(PIRP Irp)
{
  ULONG Flags; // edx
  int v2; // edx

  Flags = Irp->Flags;
  if ( (Flags & 2) == 0 )
    return 0;
  v2 = (Flags >> 17) & 7;
  if ( v2 )
    return (v2 == 5) + 1;
  else
    return 1;
}
