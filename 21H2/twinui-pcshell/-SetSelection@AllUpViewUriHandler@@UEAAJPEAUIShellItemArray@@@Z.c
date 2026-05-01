/*
 * XREFs of ?SetSelection@AllUpViewUriHandler@@UEAAJPEAUIShellItemArray@@@Z @ 0x1803F0480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AllUpViewUriHandler::SetSelection(AllUpViewUriHandler *this, struct IShellItemArray *a2)
{
  struct IShellItemArray *v4; // rcx

  v4 = (struct IShellItemArray *)*((_QWORD *)this + 2);
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      ((void (__fastcall *)(struct IShellItemArray *))a2->lpVtbl->AddRef)(a2);
      v4 = (struct IShellItemArray *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v4 )
      ((void (__fastcall *)(struct IShellItemArray *))v4->lpVtbl->Release)(v4);
  }
  return 0LL;
}
