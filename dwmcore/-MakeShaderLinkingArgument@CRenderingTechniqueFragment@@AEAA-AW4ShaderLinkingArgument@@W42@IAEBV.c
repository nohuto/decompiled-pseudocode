/*
 * XREFs of ?MakeShaderLinkingArgument@CRenderingTechniqueFragment@@AEAA?AW4ShaderLinkingArgument@@W42@IAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@4@PEBVCBrushRenderingGraph@@@Z @ 0x18002A6E0
 * Callers:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180025BC4 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18002A51C (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 * Callees:
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18002D968 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18002DBE4 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 */

__int16 __fastcall CRenderingTechniqueFragment::MakeShaderLinkingArgument(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        unsigned int a3,
        _QWORD **a4,
        _QWORD *a5)
{
  __int16 v5; // bx
  __int64 v6; // r11
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 j; // rcx
  _QWORD *i; // rax
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = (__int16)a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL * a3 + 8);
  if ( v6 )
  {
    for ( i = *a4; i != a4[1] && *i != v6; ++i )
      ;
    return (i - *a4) | 0x500;
  }
  else
  {
    CRenderingTechniqueFragment::GetSurfaceDescription(
      a1,
      a2,
      a3,
      (struct CRenderingTechniqueFragment::SurfaceDescription *)v12);
    v7 = a5;
    v8 = *a5;
    for ( j = *a5;
          j != v7[1] && !(unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(j, v12);
          j += 12LL )
    {
      ;
    }
    return v5 | (-21845 * ((j - v8) >> 2));
  }
}
