/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140630A34
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiValidFault @ 0x1402C90E0 (MiValidFault.c)
 *     MiActOnPte @ 0x1402CF06C (MiActOnPte.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiProtectPrivateMemory @ 0x140344540 (MiProtectPrivateMemory.c)
 *     NtUnlockVirtualMemory @ 0x1403479C0 (NtUnlockVirtualMemory.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x1406157F0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

bool __fastcall MiRotatedToFrameBuffer(unsigned __int64 a1)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = MI_READ_PTE_LOCK_FREE(a1);
  if ( (v7 & 1) != 0 )
  {
    v2 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
    v3 = 6 * v2;
    if ( v2 > qword_140C65820 || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
      return 1;
    v4 = *(_QWORD *)(48 * v2 - 0x220000000000LL + 8);
    if ( (v4 | 0x8000000000000000uLL) != a1
      || ((*(_QWORD *)(48 * v2 - 0x220000000000LL + 40) ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE(
                                                                               ((a1 >> 9) & 0x7FFFFFFFF8LL)
                                                                             - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFFLL) != 0 )
    {
      v5 = *(_QWORD *)(8 * v3 - 0x220000000000LL + 40);
      if ( v5 < 0 && (v5 & 0x10000000000LL) == 0 && v4 >= 0 )
        return v4 == 0;
      return 1;
    }
  }
  return 0;
}
