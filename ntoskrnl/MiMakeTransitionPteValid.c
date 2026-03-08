/*
 * XREFs of MiMakeTransitionPteValid @ 0x1402CD590
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14026F5F0 (MiCompleteProtoPteFault.c)
 *     MiMakeFaultPfnActive @ 0x1402CD4A0 (MiMakeFaultPfnActive.c)
 *     MiIssueHardFault @ 0x140342F00 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 * Callees:
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v3 = v2;
  if ( qword_140C657C0 )
  {
    if ( (v2 & 0x10) != 0 )
      v3 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v3 = v2 & ~qword_140C657C0;
  }
  return MiMakeValidPte(a1, (v3 >> 12) & 0xFFFFFFFFFFLL, (v2 >> 5) & 0x1F);
}
