/*
 * XREFs of ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x180150BAC
 * Callers:
 *     ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x1801509D4 (-_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     BindCtx_AddObjectParam @ 0x18014FEA0 (BindCtx_AddObjectParam.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTaskbandPin::_GetShellItem(CTaskbandPin *this, const unsigned __int16 *a2, struct IShellItem **a3)
{
  IBindCtx *v5; // rdi
  __int64 v6; // rdx
  int v7; // ebx
  CDummyUnknown *v8; // r8
  LPBC ppbc; // [rsp+20h] [rbp-28h] BYREF

  *a3 = 0LL;
  v5 = 0LL;
  v7 = CreateBindCtx(0, &ppbc);
  if ( v7 >= 0 )
  {
    v7 = BindCtx_AddObjectParam((__int64)ppbc, v6, v8);
    if ( v7 >= 0 )
    {
      v5 = ppbc;
      ((void (__fastcall *)(LPBC))ppbc->lpVtbl->AddRef)(ppbc);
    }
    ((void (__fastcall *)(LPBC))ppbc->lpVtbl->Release)(ppbc);
  }
  if ( v7 >= 0 )
  {
    v7 = SHCreateItemFromParsingName(a2, v5, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, (void **)a3);
    ((void (__fastcall *)(IBindCtx *))v5->lpVtbl->Release)(v5);
  }
  return (unsigned int)v7;
}
