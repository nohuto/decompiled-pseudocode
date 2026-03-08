/*
 * XREFs of MiUnlockEntireDriver @ 0x140A31880
 * Callers:
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x14063E4F8 (MiReapplyImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x14087313C (MiUnlockDriverPages.c)
 */

void __fastcall MiUnlockEntireDriver(__int64 *a1, __int64 a2)
{
  __int64 *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (__int64 *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140C695C0, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
