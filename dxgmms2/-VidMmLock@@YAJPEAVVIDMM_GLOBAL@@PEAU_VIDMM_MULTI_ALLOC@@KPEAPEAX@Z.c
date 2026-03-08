/*
 * XREFs of ?VidMmLock@@YAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C00016B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C008C470 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 */

__int64 __fastcall VidMmLock(struct VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC *a2, unsigned int a3, void **a4)
{
  return VIDMM_GLOBAL::Lock(a1, a2, a3, a4);
}
