/*
 * XREFs of ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C0005AF4
 * Callers:
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C008EEE8 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C009EBB4 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C00A06C0 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _LOOKASIDE_LIST_EX *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  PVOID result; // rax

  if ( *a4 )
  {
    v5 = *a4 - 1;
    v6 = (unsigned int)v5;
    result = a3[v5];
    a3[v6] = 0LL;
    --*a4;
  }
  else
  {
    result = ExAllocateFromLookasideListEx(a2);
  }
  if ( result )
    ++*((_DWORD *)this + 422);
  return result;
}
