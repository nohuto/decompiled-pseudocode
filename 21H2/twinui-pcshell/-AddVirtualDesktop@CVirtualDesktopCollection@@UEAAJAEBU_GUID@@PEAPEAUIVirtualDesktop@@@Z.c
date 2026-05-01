/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJAEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x1804A64D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A70C8 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        const struct _GUID *a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  struct IVirtualDesktop *v11; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktop *v14; // [rsp+50h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v8 = v7(v6, a2, &GUID_ff72ffdd_be7e_43fc_9c03_ad81681e88e4, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 66LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_11;
  }
  v8 = CVirtualDesktopCollection::_AddDesktop(this, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 67LL;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v11 = v14;
    v14 = 0LL;
    *a3 = v11;
  }
  v9 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v9;
}
