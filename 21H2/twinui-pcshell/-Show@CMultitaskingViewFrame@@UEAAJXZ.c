/*
 * XREFs of ?Show@CMultitaskingViewFrame@@UEAAJXZ @ 0x18040AA00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x1803F6744 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1803F6D94 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ?MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z @ 0x180409F14 (-MultitaskingViewFrameShown_@MultitaskingViewTelemetry@@QEBAXIIAEBUCRect@Geometry@@@Z.c)
 *     ?_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z @ 0x18040AB7C (-_CloakWindow@CMultitaskingViewFrame@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrame::Show(CMultitaskingViewFrame *this)
{
  __int64 v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  MultitaskingViewTelemetry *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+38h] [rbp+10h] BYREF
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = *((_QWORD *)this + 312);
  if ( v2 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &GUID_b406b6c5_d8ab_475a_b797_5e5d2d5d22c4,
           &v15);
    if ( v3 >= 0 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 313) + 392LL))(*((_QWORD *)this + 313), 0LL);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AC,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
        (const char *)(unsigned int)v3);
    }
  }
  (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)this + 308) + 24LL))(*((_QWORD *)this + 308), &GUID_NULL);
  LOBYTE(v4) = 1;
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 308) + 32LL))(*((_QWORD *)this + 308), v4);
  v5 = CMultitaskingViewFrame::_CloakWindow(this, 0);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v14 = 0;
    v7 = *((_QWORD *)this + 303);
    if ( v7 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 24LL))(v7, &v14);
    v13 = 0;
    v8 = *((_QWORD *)this + 304);
    if ( v8 )
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v8 + 24LL))(v8, &v13);
    if ( MultitaskingViewTelemetry::IsEnabled(v8) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v9,
        _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::MultitaskingViewFrameShown_(
        v10,
        v14,
        v13,
        (CMultitaskingViewFrame *)((char *)this + 2536));
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B9,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v6;
}
