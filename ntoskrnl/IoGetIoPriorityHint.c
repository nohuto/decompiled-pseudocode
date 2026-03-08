/*
 * XREFs of IoGetIoPriorityHint @ 0x14027F300
 * Callers:
 *     IopCallDriverReference @ 0x14027F1E0 (IopCallDriverReference.c)
 *     IoRetrievePriorityInfo @ 0x1402AB5C0 (IoRetrievePriorityInfo.c)
 *     NtQueryInformationFile @ 0x1406EAEB0 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

IO_PRIORITY_HINT __stdcall IoGetIoPriorityHint(PIRP Irp)
{
  IO_PRIORITY_HINT result; // eax
  PETHREAD Thread; // r8

  if ( ((Irp->Flags >> 17) & 7) == 0 )
    return 2;
  result = ((Irp->Flags >> 17) & 7) - 1;
  if ( result < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
        return 2;
    }
  }
  return result;
}
