/*
 * XREFs of MiClearContainingMapping @ 0x1402EA2CC
 * Callers:
 *     MiDeleteTopLevelPage @ 0x1402EA238 (MiDeleteTopLevelPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  BOOL v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000, 0xFFFFF68000000000uLL);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v6);
    if ( (v7 & 1) != 0 )
    {
      v9 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v10 = 0;
      if ( MiPteInShadowRange((unsigned __int64)v6) )
        v10 = MiPteHasShadow(v11, v8, v12, v13) != 0;
      *v6 = v9;
      if ( v10 )
        MiWritePteShadow(v6, v9);
    }
    LOBYTE(v8) = 17;
    return MiUnmapPageInHyperSpaceWorker(v5, v8, 0x80000000LL);
  }
  return result;
}
