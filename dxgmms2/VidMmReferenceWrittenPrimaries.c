/*
 * XREFs of VidMmReferenceWrittenPrimaries @ 0x1C0002310
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REFERENCES@@PEAUVIDSCH_HW_QUEUE@@PEAPEAVDXGCONTEXT@@@Z @ 0x1C009F0F0 (-VidMmReferenceWrittenPrimaries@VIDMM_GLOBAL@@QEAAJPEAVDXGDEVICE@@IQEBIIPEAU_VIDMM_PRIMARIES_REF.c)
 */

__int64 __fastcall VidMmReferenceWrittenPrimaries(
        VIDMM_GLOBAL *a1,
        struct DXGDEVICE *a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        struct _VIDMM_PRIMARIES_REFERENCES *a6)
{
  struct VIDSCH_HW_QUEUE *v7; // [rsp+30h] [rbp-18h]
  struct DXGCONTEXT **v8; // [rsp+38h] [rbp-10h]

  return VIDMM_GLOBAL::VidMmReferenceWrittenPrimaries(a1, a2, a3, a4, a5, a6, v7, v8);
}
