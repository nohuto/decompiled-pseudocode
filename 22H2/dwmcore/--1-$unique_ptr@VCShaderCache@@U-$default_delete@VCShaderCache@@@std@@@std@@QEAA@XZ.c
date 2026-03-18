/*
 * XREFs of ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18010E890
 * Callers:
 *     _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0 @ 0x180124410 (_dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0 @ 0x1801246A0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache___0 @ 0x1801246C0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0 @ 0x1801246E0 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0 @ 0x180124700 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__g_spCompositingShaderCache___0 @ 0x180124750 (_dynamic_atexit_destructor_for__g_spCompositingShaderCache___0.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BF48 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

void __fastcall std::unique_ptr<CShaderCache>::~unique_ptr<CShaderCache>(CShaderCache **a1)
{
  CShaderCache *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CShaderCache::`scalar deleting destructor'(v1);
}
