/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x1404635C8
 * Callers:
 *     MiCheckControlArea @ 0x140334D00 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x1406225DC (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x1406236E4 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_140C651D8 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_140C651D8 >> 12 > 3 * (qword_140C6F658 / 0x64uLL);
  return v0;
}
