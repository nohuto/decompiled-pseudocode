/*
 * XREFs of ?VidMmiIsSaveableResource@@YA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B61F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00C5EF0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

bool __fastcall VidMmiIsSaveableResource(struct _VIDMM_GLOBAL_ALLOC *a1)
{
  return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a1);
}
