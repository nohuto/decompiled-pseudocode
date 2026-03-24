/*
 * XREFs of MiMakeTransitionPteValid @ 0x1403096E0
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiFinishHardFault @ 0x140239200 (MiFinishHardFault.c)
 *     MiIssueHardFault @ 0x14028F030 (MiIssueHardFault.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 */

unsigned __int64 __fastcall MiMakeTransitionPteValid(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r9
  unsigned __int64 v4; // rdx

  v2 = MI_READ_PTE_LOCK_FREE(a1);
  v4 = v2;
  if ( qword_140C4DF40 )
  {
    if ( (v2 & 0x10) != 0 )
      v4 = v2 & 0xFFFFFFFFFFFFFFEFuLL;
    else
      v4 = v2 & ~qword_140C4DF40;
  }
  return MiMakeValidPte(a1, (v4 >> 12) & 0xFFFFFFFFFLL, (v2 >> 5) & 0x1F, v3);
}
