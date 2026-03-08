/*
 * XREFs of ?IsIndependentFlipSupported@CLegacyRenderTarget@@UEBA_NXZ @ 0x180103F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CLegacyRenderTarget::IsIndependentFlipSupported(CLegacyRenderTarget *this)
{
  return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 80LL))(*((_QWORD *)this + 4)) != 0;
}
