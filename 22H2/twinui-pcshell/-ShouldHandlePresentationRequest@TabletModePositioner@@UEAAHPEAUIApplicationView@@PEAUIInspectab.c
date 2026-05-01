/*
 * XREFs of ?ShouldHandlePresentationRequest@TabletModePositioner@@UEAAHPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x18046ACB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?IsTabletMode@TabletModePositioner@@AEAA_NXZ @ 0x180468944 (-IsTabletMode@TabletModePositioner@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall TabletModePositioner::ShouldHandlePresentationRequest(
        TabletModePositioner *this,
        struct IApplicationView *a2,
        struct IInspectable *a3)
{
  BOOL v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-10h] BYREF
  int v9; // [rsp+50h] [rbp+20h] BYREF
  __int64 v10; // [rsp+58h] [rbp+28h] BYREF

  v8 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_c7eb508d_5e36_46e2_8af4_b6f813539dbf,
         &v8) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v8 + 24LL))(v8, &v9) < 0 )
    {
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v10) >= 0 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) == 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    else if ( !v9 && TabletModePositioner::IsTabletMode((TabletModePositioner *)((char *)this - 128)) )
    {
      v5 = 1;
      goto LABEL_10;
    }
  }
  v5 = 0;
LABEL_10:
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v5;
}
