/*
 * XREFs of MiSetPfnOriginalPte @ 0x140409540
 * Callers:
 *     SymCryptModExpWindowed @ 0x140403800 (SymCryptModExpWindowed.c)
 *     MmFreeNonCachedMemory @ 0x140A2AE10 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
