/*
 * XREFs of ?SetShadowOpacity@CProjectedShadow@@QEAAXM@Z @ 0x18012F5AA
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::SetShadowOpacity(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 25) - a2) & _xmm) > 0.0000011920929 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 25) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, __int64, CProjectedShadow *))(v2 + 72))(this, 5LL, this);
  }
}
