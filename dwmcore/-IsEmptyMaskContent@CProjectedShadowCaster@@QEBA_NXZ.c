/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180005A70
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180005500 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ @ 0x180005AF4 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEBAPEAVCBrush@@XZ.c)
 *     ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180005B14 (-GetColor@CProjectedShadowCaster@@QEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  CProjectedShadowCaster *v1; // r8
  struct CBrush *EffectiveMaskBrush; // rax
  bool result; // al
  _D3DCOLORVALUE v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+40h] [rbp+8h] BYREF

  result = !*((_QWORD *)this + 8)
        || COERCE_FLOAT(LODWORD(CProjectedShadowCaster::GetColor(this, &v4)->a) & _xmm) < 0.0000011920929
        || (EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(v1),
            v5 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CBrush *, _QWORD, char *))(*(_QWORD *)EffectiveMaskBrush + 288LL))(
               EffectiveMaskBrush,
               0LL,
               &v5))
        || v5 != 0;
  return result;
}
