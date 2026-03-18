/*
 * XREFs of KeSetSystemAffinityThread @ 0x14056F0C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemAffinityThreadEx @ 0x14056F0E0 (KeSetSystemAffinityThreadEx.c)
 */

void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
