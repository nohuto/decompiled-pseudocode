/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1402A72A0
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 *     MiShareExistingControlArea @ 0x140707DEC (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
