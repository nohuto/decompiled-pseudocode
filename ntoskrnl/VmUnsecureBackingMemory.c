/*
 * XREFs of VmUnsecureBackingMemory @ 0x1409D9F30
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
