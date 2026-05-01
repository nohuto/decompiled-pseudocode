/*
 * XREFs of _lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_ @ 0x180383D14
 * Callers:
 *     XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___::_scalar_deleting_destructor_ @ 0x1803842D0 (XamlExplorerHostWindowCreatedCallback__lambda_237a64fcb5f24c6cb49474a7b0122401___--_scalar_delet.c)
 *     ?Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180384A50 (-Show@XamlSnapAssistViewHost@@UEAAJPEAUtagRECT@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z.c)
 *     _XamlSnapAssistViewHost::Show_::_1_::dtor$12 @ 0x1803851F2 (_XamlSnapAssistViewHost--Show_--_1_--dtor$12.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_237a64fcb5f24c6cb49474a7b0122401_::__lambda_237a64fcb5f24c6cb49474a7b0122401_(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = a1[5];
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v4 = a1[4];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[3];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = a1[2];
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return result;
}
