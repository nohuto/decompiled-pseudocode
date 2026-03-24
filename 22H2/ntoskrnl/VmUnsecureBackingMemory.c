/*
 * XREFs of VmUnsecureBackingMemory @ 0x14092F300
 * Callers:
 *     <none>
 * Callees:
 *     MmUnsecureVirtualMemory @ 0x14061FB80 (MmUnsecureVirtualMemory.c)
 */

void __fastcall VmUnsecureBackingMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
