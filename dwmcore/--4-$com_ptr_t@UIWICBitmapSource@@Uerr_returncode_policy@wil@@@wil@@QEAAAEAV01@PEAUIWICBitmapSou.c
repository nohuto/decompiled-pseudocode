/*
 * XREFs of ??4?$com_ptr_t@UIWICBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIWICBitmapSource@@@Z @ 0x1800A6128
 * Callers:
 *     ?HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z @ 0x1800A5FFC (-HrInit@CWICBitmapWrapper@@IEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802768A4 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<IWICBitmapSource,wil::err_returncode_policy>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi

  v2 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return a1;
}
