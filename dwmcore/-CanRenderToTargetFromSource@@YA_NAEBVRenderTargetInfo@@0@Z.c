/*
 * XREFs of ?CanRenderToTargetFromSource@@YA_NAEBVRenderTargetInfo@@0@Z @ 0x1800336F0
 * Callers:
 *     ?FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x180032CD8 (-FindExistingCachedTarget@CCachedVisualImage@@IEBAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z.c)
 *     ?LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@PEAUEffectInput@@@Z @ 0x1800394F8 (-LookupCachedBlur@CBlurredBackdropCache@@QEBA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@P.c)
 *     ?UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AEBUEffectInput@@@Z @ 0x180039610 (-UpdateCachedBlur@CBlurredBackdropCache@@QEAAXPEAVCBackdropVisualImage@@AEBVRenderTargetInfo@@AE.c)
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@@Z @ 0x1800398E8 (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180033754 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 */

bool __fastcall CanRenderToTargetFromSource(const struct RenderTargetInfo *this, const struct RenderTargetInfo *a2)
{
  int v3; // eax
  int v4; // ecx
  RenderTargetInfo *v5; // r8
  char IsHDR; // al
  __int64 v7; // r8
  __int64 v8; // r9
  char v9; // dl
  bool result; // al

  result = 0;
  if ( *(_DWORD *)a2 == *(_DWORD *)this && *((_DWORD *)a2 + 1) == *((_DWORD *)this + 1) )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *((_DWORD *)a2 + 2);
    if ( v4 == DisplayId::None || v4 == v3 || v3 == DisplayId::All )
    {
      RenderTargetInfo::IsHDR(this);
      IsHDR = RenderTargetInfo::IsHDR(v5);
      if ( IsHDR == v9 && *(_BYTE *)(v7 + 20) == *(_BYTE *)(v8 + 20) )
        return 1;
    }
  }
  return result;
}
