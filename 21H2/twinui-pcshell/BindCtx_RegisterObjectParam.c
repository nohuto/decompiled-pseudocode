/*
 * XREFs of BindCtx_RegisterObjectParam @ 0x180160290
 * Callers:
 *     BindCtx_RegisterFolderEnumMode @ 0x1801601B0 (BindCtx_RegisterFolderEnumMode.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008B7A0 (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     CreateBindCtx_0 @ 0x180094F52 (CreateBindCtx_0.c)
 *     BindCtx_AddObjectParam_0 @ 0x1801600B8 (BindCtx_AddObjectParam_0.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BindCtx_RegisterObjectParam(IBindCtx *a1, __int64 a2, char *a3, LPBC *a4)
{
  __int64 v6; // rdx
  int BindCtx_0; // ebx

  *a4 = a1;
  if ( a1 )
  {
    ((void (__fastcall *)(IBindCtx *))a1->lpVtbl->AddRef)(a1);
  }
  else
  {
    BindCtx_0 = CreateBindCtx_0(0, a4);
    if ( BindCtx_0 < 0 )
      return (unsigned int)BindCtx_0;
  }
  BindCtx_0 = BindCtx_AddObjectParam_0((__int64)*a4, v6, a3);
  if ( BindCtx_0 < 0 )
    wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)a4);
  return (unsigned int)BindCtx_0;
}
