/*
 * XREFs of VidMmChangeVideoMemoryReservation @ 0x1C002D160
 * Callers:
 *     <none>
 * Callees:
 *     ?ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GROUP@@_K@Z @ 0x1C00E0EA4 (-ChangeVideoMemoryReservation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@KW4_D3DKMT_MEMORY_SEGMENT_GR.c)
 */

int __fastcall VidMmChangeVideoMemoryReservation(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        unsigned int a3,
        enum _D3DKMT_MEMORY_SEGMENT_GROUP a4,
        unsigned __int64 a5)
{
  return VIDMM_GLOBAL::ChangeVideoMemoryReservation(a1, a2, a3, a4, a5);
}
