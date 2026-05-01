/*
 * XREFs of ?RuntimeClassInitialize@ShellPositionerProxy@@QEAAJPEAUIShellPositionerManager@@PEAUIApplicationView@@@Z @ 0x180081450
 * Callers:
 *     ??$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellPositionerProxy@@AEAPEAUIShellPositionerManager@@AEAPEAUIApplicationView@@@Z @ 0x180081380 (--$MakeAndInitialize@VShellPositionerProxy@@UIShellPositionerProxy@@AEAPEAUIShellPositionerManag.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ShellPositionerProxy::RuntimeClassInitialize(
        ShellPositionerProxy *this,
        struct IShellPositionerManager *a2,
        struct IApplicationView *a3)
{
  struct IShellPositionerManager *v6; // rax
  struct IShellPositionerManager *v8; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct IShellPositionerManager *)*((_QWORD *)this + 2);
  if ( v6 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IShellPositionerManager *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = (struct IShellPositionerManager *)*((_QWORD *)this + 2);
    }
    v8 = v6;
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 3, (__int64)a3);
  return 0LL;
}
