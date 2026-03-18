/*
 * XREFs of MiSetPfnOriginalPte @ 0x14040EA60
 * Callers:
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 *     MmFreeNonCachedMemory @ 0x140A2DB70 (MmFreeNonCachedMemory.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnOriginalPte(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 16) = a2;
}
