/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x1406A692C
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C4ECBC = a1;
}
