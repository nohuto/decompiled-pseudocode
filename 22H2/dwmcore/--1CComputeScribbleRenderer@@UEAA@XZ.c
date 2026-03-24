/*
 * XREFs of ??1CComputeScribbleRenderer@@UEAA@XZ @ 0x18019F480
 * Callers:
 *     ??_ECComputeScribbleRenderer@@UEAAPEAXI@Z @ 0x18019F570 (--_ECComputeScribbleRenderer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800426C0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801643CC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1801A3D50 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18023C7B0 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer *this)
{
  __int64 v1; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  int DirectInkFactory; // eax
  CComputeScribbleScheduler *v6; // rdi
  void *v7; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDCompositionDirectInkFactoryPartner *v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CComputeScribbleRenderer::`vftable';
  v3 = *(int *)(*(_QWORD *)(v1 + 24) + 8LL) + v1 + 24;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v9 = 0LL;
  DirectInkFactory = CD2DContext::GetDirectInkFactory((CD2DContext *)(v4 + 16), &v9);
  if ( DirectInkFactory < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)DirectInkFactory);
    __debugbreak();
  }
  (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v9 + 64LL))(v9);
  v6 = (CComputeScribbleScheduler *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v6 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(v6);
    operator delete(v6);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  v7 = (void *)*((_QWORD *)this + 5);
  if ( v7 )
  {
    CComputeScribbleScheduler::~CComputeScribbleScheduler(*((CComputeScribbleScheduler **)this + 5));
    operator delete(v7);
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
