/*
 * XREFs of ?SetBlurRadius@CProjectedShadow@@QEAAXM@Z @ 0x18012F55C
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180004F04 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CProjectedShadow::SetBlurRadius(CProjectedShadow *this, float a2)
{
  __int64 v2; // rax

  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - *((float *)this + 24)) & _xmm) > 0.5 )
  {
    v2 = *(_QWORD *)this;
    *((float *)this + 24) = a2;
    (*(void (__fastcall **)(CProjectedShadow *, _QWORD, CProjectedShadow *))(v2 + 72))(this, 0LL, this);
  }
}
