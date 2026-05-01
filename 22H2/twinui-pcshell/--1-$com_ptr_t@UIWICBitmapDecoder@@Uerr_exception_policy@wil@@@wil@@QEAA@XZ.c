/*
 * XREFs of ??1?$com_ptr_t@UIWICBitmapDecoder@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180135AB8
 * Callers:
 *     __anonymous_namespace_::GetLogoFromShellItem_::_1_::dtor$1 @ 0x1801397E3 (__anonymous_namespace_--GetLogoFromShellItem_--_1_--dtor$1.c)
 *     __anonymous_namespace_::CreateTemporaryLogoFile_::_1_::dtor$3 @ 0x1801492A7 (__anonymous_namespace_--CreateTemporaryLogoFile_--_1_--dtor$3.c)
 *     __anonymous_namespace_::CreateTemporaryLogoFile_::_1_::dtor$4 @ 0x1801492B3 (__anonymous_namespace_--CreateTemporaryLogoFile_--_1_--dtor$4.c)
 *     __anonymous_namespace_::CreateTemporaryLogoFile_::_1_::dtor$5 @ 0x1801492BF (__anonymous_namespace_--CreateTemporaryLogoFile_--_1_--dtor$5.c)
 *     __anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor$6 @ 0x180149F47 (__anonymous_namespace_--GetWicBitmapFromStreamReference_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetWicBitmapFromStreamReference_::_1_::dtor$7 @ 0x180149F53 (__anonymous_namespace_--GetWicBitmapFromStreamReference_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>::~com_ptr_t<IWICBitmapDecoder,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
