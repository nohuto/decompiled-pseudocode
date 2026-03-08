/*
 * XREFs of VidMmValidateHistoryBuffers @ 0x1C002D630
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C00E9B04 (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 */

__int64 __fastcall VidMmValidateHistoryBuffers(VIDMM_GLOBAL *a1, struct _VIDMM_MULTI_ALLOC **a2, unsigned __int64 a3)
{
  return VIDMM_GLOBAL::ValidateHistoryBuffers(a1, a2, a3);
}
