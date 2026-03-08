/*
 * XREFs of VidMmInitializeAdapter @ 0x1C0019260
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00BAE0C (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 */

struct VIDMM_GLOBAL *__fastcall VidMmInitializeAdapter(struct ADAPTER_RENDER *a1, unsigned int a2)
{
  return VidMmiInit(a1, a2);
}
