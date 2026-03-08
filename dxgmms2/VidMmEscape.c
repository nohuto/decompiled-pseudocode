/*
 * XREFs of VidMmEscape @ 0x1C002D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00E2184 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 */

__int64 __fastcall VidMmEscape(VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2, struct _D3DKMT_VIDMM_ESCAPE *a3, int a4)
{
  return VIDMM_GLOBAL::Escape(a1, a2, a3, a4);
}
