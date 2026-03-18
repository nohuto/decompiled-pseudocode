/*
 * XREFs of IoAllocateErrorLogEntry @ 0x1403C6A80
 * Callers:
 *     IopDisassociateThreadIrp @ 0x1405551D4 (IopDisassociateThreadIrp.c)
 *     FsRtlLogCcFlushError @ 0x14093D190 (FsRtlLogCcFlushError.c)
 * Callees:
 *     IopAllocateErrorLogEntry @ 0x1403C6ABC (IopAllocateErrorLogEntry.c)
 */

PVOID __stdcall IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
  PVOID v2; // rdx

  if ( IoObject )
  {
    if ( *(_WORD *)IoObject == 3 )
    {
      v2 = (PVOID)*((_QWORD *)IoObject + 1);
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
    if ( *(_WORD *)IoObject == 4 )
    {
      v2 = IoObject;
      IoObject = 0LL;
      return (PVOID)IopAllocateErrorLogEntry(IoObject, v2);
    }
  }
  return 0LL;
}
