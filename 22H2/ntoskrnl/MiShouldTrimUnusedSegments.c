/*
 * XREFs of MiShouldTrimUnusedSegments @ 0x14046B4C8
 * Callers:
 *     MiCheckControlArea @ 0x14029FAA0 (MiCheckControlArea.c)
 *     MiFreeExcessSegments @ 0x140624A8C (MiFreeExcessSegments.c)
 *     MiRemoveUnusedSegments @ 0x140625B94 (MiRemoveUnusedSegments.c)
 * Callees:
 *     <none>
 */

__int64 MiShouldTrimUnusedSegments()
{
  unsigned int v0; // r9d

  v0 = 0;
  if ( !qword_140C65658 )
    return 0LL;
  LOBYTE(v0) = (unsigned __int64)qword_140C65658 >> 12 > 3 * (qword_140C6FA98 / 0x64uLL);
  return v0;
}
