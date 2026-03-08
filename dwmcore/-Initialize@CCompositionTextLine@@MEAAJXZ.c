/*
 * XREFs of ?Initialize@CCompositionTextLine@@MEAAJXZ @ 0x180223BF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A70C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18021DA8C (-Create@CClipBrush@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CCompositionTextLine::Initialize(struct CComposition **this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CClipBrush *v5; // rsi
  struct CComposition *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CClipBrush *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
  v2 = CClipBrush::Create(this[2], &v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 13LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_9;
  }
  v5 = v9;
  v2 = CResource::RegisterNotifier((CResource *)this, v9);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 15LL;
    goto LABEL_5;
  }
  v6 = this[13];
  v9 = 0LL;
  this[13] = v5;
  if ( v6 )
    (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v6 + 16LL))(v6);
  v3 = 0;
LABEL_9:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  return v3;
}
