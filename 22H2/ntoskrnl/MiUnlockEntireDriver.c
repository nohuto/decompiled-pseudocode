/*
 * XREFs of MiUnlockEntireDriver @ 0x1408D0DC4
 * Callers:
 *     MmRemoveImportOptimizationForDriverVerifier @ 0x14054446C (MmRemoveImportOptimizationForDriverVerifier.c)
 * Callees:
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     MiUnlockDriverPages @ 0x1408C4E10 (MiUnlockDriverPages.c)
 */

void __fastcall MiUnlockEntireDriver(__int64 *a1, __int64 a2)
{
  _QWORD *PteAddress; // rax
  unsigned int v5; // r8d

  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0 )
    {
      PteAddress = (_QWORD *)MiGetPteAddress(*(_QWORD *)(a2 + 24));
      MiReleasePtes((__int64)&qword_140C4EF40, PteAddress, v5);
      *(_WORD *)(a2 + 10) &= ~1u;
    }
    IoFreeMdl((PMDL)a2);
  }
  MiUnlockDriverPages(a1);
}
