/*
 * XREFs of ?attach@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAVIBitmapRealization@@@Z @ 0x18003390C
 * Callers:
 *     ??4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z @ 0x180033894 (--4CDrawListBitmap@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18021A444 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ??$?4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x18025FCBC (--$-4VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapRealization@@Uerr_r.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::attach(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 4LL);
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
