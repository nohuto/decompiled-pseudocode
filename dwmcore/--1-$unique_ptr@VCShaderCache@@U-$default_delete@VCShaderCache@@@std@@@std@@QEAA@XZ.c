/*
 * XREFs of ??1?$unique_ptr@VCShaderCache@@U?$default_delete@VCShaderCache@@@std@@@std@@QEAA@XZ @ 0x18010DD50
 * Callers:
 *     _dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0 @ 0x180120260 (_dynamic_atexit_destructor_for__g_spProjectedShadowShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredShaderCache___0 @ 0x1801204F0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredShaderCache___0 @ 0x180120510 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spShaderCache___0 @ 0x180120530 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__CPassthroughEffect::s_spShaderCache___0 @ 0x180120550 (_dynamic_atexit_destructor_for__CPassthroughEffect--s_spShaderCache___0.c)
 *     _dynamic_atexit_destructor_for__g_spCompositingShaderCache___0 @ 0x1801205A0 (_dynamic_atexit_destructor_for__g_spCompositingShaderCache___0.c)
 * Callees:
 *     ??_GCShaderCache@@QEAAPEAXI@Z @ 0x18001BE58 (--_GCShaderCache@@QEAAPEAXI@Z.c)
 */

void __fastcall std::unique_ptr<CShaderCache>::~unique_ptr<CShaderCache>(CShaderCache **a1)
{
  CShaderCache *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CShaderCache::`scalar deleting destructor'(v1);
}
