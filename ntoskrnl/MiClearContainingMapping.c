/*
 * XREFs of MiClearContainingMapping @ 0x1402A5720
 * Callers:
 *     MiDeleteTopLevelPage @ 0x1402A568C (MiDeleteTopLevelPage.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiClearContainingMapping(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  unsigned int v4; // ebx
  unsigned __int64 v5; // r14
  unsigned __int64 *v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  v2 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
  result = ((*(_QWORD *)(a1 + 8) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_QWORD *)(48 * v2 - 0x21FFFFFFFFF8LL) | 0x8000000000000000uLL) == result )
  {
    v4 = (*(_DWORD *)(a1 + 8) >> 3) & 0x1FF;
    v5 = MiMapPageInHyperSpaceWorker(v2, 0LL, 0x80000000);
    v6 = (unsigned __int64 *)(v5 + 8LL * v4);
    v7 = MI_READ_PTE_LOCK_FREE(v6);
    if ( (v7 & 1) != 0 )
    {
      v8 = v7 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v9 = 0;
      if ( (unsigned int)MiPteInShadowRange(v6) )
        v9 = MiPteHasShadow(v11, v10, v12) != 0;
      *v6 = v8;
      if ( v9 )
        MiWritePteShadow(v6, v8);
    }
    return MiUnmapPageInHyperSpaceWorker(v5, 0x11u);
  }
  return result;
}
