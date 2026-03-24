/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1402FFBC0
 * Callers:
 *     MiShareExistingControlArea @ 0x14065547C (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x140700CC4 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
