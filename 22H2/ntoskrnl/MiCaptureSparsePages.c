/*
 * XREFs of MiCaptureSparsePages @ 0x1408D85B4
 * Callers:
 *     MiDeleteSparseRange @ 0x1408D87A0 (MiDeleteSparseRange.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140263D30 (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x1402860B0 (MiReadPteShadow.c)
 *     MiSetPfnLink @ 0x14029880C (MiSetPfnLink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiCaptureSparsePages(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned __int64 i; // r14
  unsigned __int64 PteShadow; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0LL;
  v6 = a1;
  for ( i = MiMakeValidPte(a1, qword_140C4ED80, 1LL, a4); a2; --a2 )
  {
    v13 = MI_READ_PTE_LOCK_FREE(v6);
    PteShadow = v13;
    if ( v13 != i )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v13) )
        PteShadow = MiReadPteShadow((unsigned __int64)&v13, PteShadow);
      MiSetPfnLink((_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL), v5);
      v5 = v9;
      MiLockAndDecrementShareCount(48 * v10 - 0x58000000000LL, 0LL, v11);
    }
    v6 += 8LL;
  }
  return v5;
}
