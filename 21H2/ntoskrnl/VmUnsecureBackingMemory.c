/*
 * XREFs of VmUnsecureBackingMemory @ 0x1409D9B80
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
