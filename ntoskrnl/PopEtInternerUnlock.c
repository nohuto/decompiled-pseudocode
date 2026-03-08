/*
 * XREFs of PopEtInternerUnlock @ 0x140794E60
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 */

void PopEtInternerUnlock()
{
  PopReleaseRwLock(PopEtGlobals + 40);
}
