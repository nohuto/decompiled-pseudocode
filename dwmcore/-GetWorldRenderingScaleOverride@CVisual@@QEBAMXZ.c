/*
 * XREFs of ?GetWorldRenderingScaleOverride@CVisual@@QEBAMXZ @ 0x1800394A0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B3A0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1800FAF5C (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     <none>
 */

float __fastcall CVisual::GetWorldRenderingScaleOverride(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( (*(_DWORD *)(v1 + 4) & 0x40000) == 0 )
    return 0.0;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0xE000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(float *)(i + 4);
}
