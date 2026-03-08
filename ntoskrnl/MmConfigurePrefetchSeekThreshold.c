/*
 * XREFs of MmConfigurePrefetchSeekThreshold @ 0x14079C808
 * Callers:
 *     MiInitSystem @ 0x140B39508 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

void __fastcall MmConfigurePrefetchSeekThreshold(int a1)
{
  dword_140C692D4 = a1;
}
