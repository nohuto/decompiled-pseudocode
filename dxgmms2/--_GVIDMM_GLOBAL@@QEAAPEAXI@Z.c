/*
 * XREFs of ??_GVIDMM_GLOBAL@@QEAAPEAXI@Z @ 0x1C002C774
 * Callers:
 *     VidMmTerminateAdapter @ 0x1C002D510 (VidMmTerminateAdapter.c)
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1C00BAE0C (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C00E0158 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::`scalar deleting destructor'(VIDMM_GLOBAL *P)
{
  VIDMM_GLOBAL::~VIDMM_GLOBAL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
