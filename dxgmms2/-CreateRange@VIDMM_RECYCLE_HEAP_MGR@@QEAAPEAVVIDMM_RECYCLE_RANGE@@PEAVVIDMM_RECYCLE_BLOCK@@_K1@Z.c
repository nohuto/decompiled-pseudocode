/*
 * XREFs of ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00A956C
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C00A9448 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z @ 0x1C000206C (-AllocateWithStore@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAXPEAU_LOOKASIDE_LIST_EX@@PEAPEAXPEAI@Z.c)
 *     ?Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00A9958 (-Init@VIDMM_RECYCLE_RANGE@@QEAAXPEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 */

struct VIDMM_RECYCLE_RANGE *__fastcall VIDMM_RECYCLE_HEAP_MGR::CreateRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct VIDMM_RECYCLE_BLOCK *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  VIDMM_RECYCLE_RANGE *v7; // rax
  VIDMM_RECYCLE_RANGE *v8; // rbx

  v7 = (VIDMM_RECYCLE_RANGE *)VIDMM_RECYCLE_HEAP_MGR::AllocateWithStore(
                                this,
                                *((struct _LOOKASIDE_LIST_EX **)this + 164),
                                (void **)this + 203,
                                (unsigned int *)this + 404);
  v8 = v7;
  if ( v7 )
    VIDMM_RECYCLE_RANGE::Init(v7, a2, a3, a4);
  return v8;
}
