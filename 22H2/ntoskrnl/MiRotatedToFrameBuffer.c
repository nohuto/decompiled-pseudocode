/*
 * XREFs of MiRotatedToFrameBuffer @ 0x140632EC4
 * Callers:
 *     MiGetPageProtection @ 0x140272900 (MiGetPageProtection.c)
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     NtUnlockVirtualMemory @ 0x140283040 (NtUnlockVirtualMemory.c)
 *     MiActOnPte @ 0x140293FB4 (MiActOnPte.c)
 *     MiProtectPrivateMemory @ 0x1402A2760 (MiProtectPrivateMemory.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiValidFault @ 0x140333340 (MiValidFault.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiLockStealUserVm @ 0x1403BD8B8 (MiLockStealUserVm.c)
 *     MiCheckCommitReleaseFromVad @ 0x140617CA0 (MiCheckCommitReleaseFromVad.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
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
    if ( v2 > qword_140C65CA0 || ((*(_QWORD *)(48 * v2 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0 )
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
