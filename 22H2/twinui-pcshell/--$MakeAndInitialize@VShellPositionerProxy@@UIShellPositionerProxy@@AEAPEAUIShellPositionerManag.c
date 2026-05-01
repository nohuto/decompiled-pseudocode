/*
 * XREFs of ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x180081380
 * Callers:
 *     ?GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerProxy@@@Z @ 0x18008A250 (-GetPositionerProxy@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPr.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180043060 (InlineIsEqualGUID.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18007A3F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?RuntimeClassInitialize@ShellPositionerProxy@@QEAAJPEAUIShellPositionerManager@@PEAUIApplicationView@@@Z @ 0x180081450 (-RuntimeClassInitialize@ShellPositionerProxy@@QEAAJPEAUIShellPositionerManager@@PEAUIApplication.c)
 *     ??0ShellPositionerProxy@@QEAA@XZ @ 0x1800814C8 (--0ShellPositionerProxy@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ShellPositionerProxy,IShellPositionerProxy,IShellPositionerManager * &,IApplicationView * &>(
        ShellPositionerProxy **a1,
        struct IShellPositionerManager **a2,
        struct IApplicationView **a3)
{
  ShellPositionerProxy *v6; // rax
  ShellPositionerProxy *v7; // rbx
  volatile int *v8; // rdx
  int v9; // edi
  _DWORD *v10; // rcx

  *a1 = 0LL;
  v6 = (ShellPositionerProxy *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = ShellPositionerProxy::ShellPositionerProxy(v6);
    v9 = ShellPositionerProxy::RuntimeClassInitialize(v7, *a2, *a3);
    if ( v9 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_95e1216b_c9d8_4d0c_aa1b_19a86de9aa5b, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v7;
        (*(void (__fastcall **)(ShellPositionerProxy *))(*(_QWORD *)v7 + 8LL))(v7);
        v9 = 0;
      }
      else if ( InlineIsEqualGUID(v10, v10) )
      {
        *a1 = v7;
        v9 = 0;
        (*(void (__fastcall **)(ShellPositionerProxy *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      else
      {
        v9 = -2147467262;
      }
    }
    if ( v7 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
        (__int64)v7,
        v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
