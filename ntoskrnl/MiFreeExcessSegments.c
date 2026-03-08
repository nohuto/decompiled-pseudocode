/*
 * XREFs of MiFreeExcessSegments @ 0x1406225DC
 * Callers:
 *     MiCountSystemPool @ 0x14020DF44 (MiCountSystemPool.c)
 *     MmResourcesAvailable @ 0x140311DB0 (MmResourcesAvailable.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiCommitPoolMemory @ 0x14032FC90 (MiCommitPoolMemory.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x1402FF5F0 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x1404635C8 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  void *i; // rcx
  void *v2; // rbx

  result = 9 * (qword_140C6F658 / 0xAuLL);
  if ( qword_140C6F568 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      for ( i = 0LL; ; i = v2 )
      {
        result = (unsigned __int64)PsGetNextPartition(i);
        v2 = (void *)result;
        if ( !result )
          break;
        if ( *(_QWORD *)(*(_QWORD *)result + 1760LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)result + 1464LL), 0, 0);
      }
    }
  }
  return result;
}
