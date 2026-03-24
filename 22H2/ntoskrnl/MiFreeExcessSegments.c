/*
 * XREFs of MiFreeExcessSegments @ 0x1402953D0
 * Callers:
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiCountSystemPool @ 0x14028BFA0 (MiCountSystemPool.c)
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MmResourcesAvailable @ 0x1402BECF0 (MmResourcesAvailable.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x140303EF8 (PsGetNextPartition.c)
 *     MiShouldTrimUnusedSegments @ 0x14052AA64 (MiShouldTrimUnusedSegments.c)
 */

unsigned __int64 MiFreeExcessSegments()
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // rbx

  result = 9 * (qword_140C52B28 / 0xAuLL);
  if ( qword_140C52AA8 >= result )
  {
    result = MiShouldTrimUnusedSegments();
    if ( (_DWORD)result )
    {
      result = PsGetNextPartition(0LL);
      for ( i = result; result; i = result )
      {
        if ( *(_QWORD *)(*(_QWORD *)i + 1696LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1400LL), 0, 0);
        result = PsGetNextPartition(i);
      }
    }
  }
  return result;
}
