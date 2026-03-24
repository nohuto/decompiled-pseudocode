/*
 * XREFs of MiAllocateHyperSpace @ 0x14023CA7C
 * Callers:
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiFillPageWithImageExtentContents @ 0x140540A94 (MiFillPageWithImageExtentContents.c)
 *     MiGetPteMappingPair @ 0x14056353C (MiGetPteMappingPair.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140234070 (MiGetUltraMapping.c)
 *     MiFlushHyperSpace @ 0x14032BF00 (MiFlushHyperSpace.c)
 */

unsigned __int64 __fastcall MiAllocateHyperSpace(unsigned __int64 a1)
{
  unsigned __int64 *MmInternal; // rbx
  unsigned __int64 result; // rax
  unsigned __int64 HyperPte; // r9
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8

  MmInternal = (unsigned __int64 *)KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal )
  {
    result = MiGetUltraMapping(MmInternal + 1556, 3u, a1, 0);
    MmInternal[1543] = ((result >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    HyperPte = (unsigned __int64)KeGetCurrentPrcb()->HyperPte;
    v5 = HyperPte & 0xFFFFFFFFFFFFF000uLL;
    if ( 64 - (HyperPte & 0xFFF) > a1 )
    {
      v6 = v5 + ((HyperPte & 0xFFF) << 12);
    }
    else
    {
      MiFlushHyperSpace(HyperPte & 0xFFF, 4095LL, (unsigned int)HyperPte);
      HyperPte = v5;
      v6 = v5;
    }
    result = v6;
    KeGetCurrentPrcb()->HyperPte = (void *)(HyperPte + a1);
  }
  return result;
}
