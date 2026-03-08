/*
 * XREFs of ?GetAllocationSectionGlobal@VIDMM_GLOBAL@@QEAAPEAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00E3BBC
 * Callers:
 *     ?VidMmGetAllocationSectionGlobal@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C002CC20 (-VidMmGetAllocationSectionGlobal@@YAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_GLOBAL::GetAllocationSectionGlobal(VIDMM_GLOBAL *this, struct _VIDMM_MULTI_GLOBAL_ALLOC *a2)
{
  __int64 v2; // rbx

  v2 = *((_QWORD *)a2 + 48);
  if ( v2 )
    ObfReferenceObject(*((PVOID *)a2 + 48));
  return (void *)v2;
}
