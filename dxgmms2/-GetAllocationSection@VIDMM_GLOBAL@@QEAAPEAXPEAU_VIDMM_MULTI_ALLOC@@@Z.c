/*
 * XREFs of ?GetAllocationSection@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00E3B84
 * Callers:
 *     ?VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002CC00 (-VidMmGetAllocationSection@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_GLOBAL::GetAllocationSection(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 v2; // rbx
  void *v3; // rcx

  v2 = **a2;
  v3 = *(void **)(v2 + 384);
  if ( v3 )
    ObfReferenceObject(v3);
  return *(void **)(v2 + 384);
}
