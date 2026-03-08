/*
 * XREFs of PsIsCurrentThreadPrefetching @ 0x1402DCE70
 * Callers:
 *     MiShareExistingControlArea @ 0x1407D1CAC (MiShareExistingControlArea.c)
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

BOOLEAN PsIsCurrentThreadPrefetching(void)
{
  return ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0;
}
