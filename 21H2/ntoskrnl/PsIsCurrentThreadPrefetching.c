/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x140232600
 * Callers:
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x140707E70 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
