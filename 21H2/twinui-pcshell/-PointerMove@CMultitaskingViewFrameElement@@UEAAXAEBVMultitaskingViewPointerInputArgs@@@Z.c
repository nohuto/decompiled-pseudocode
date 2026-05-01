/*
 * XREFs of ?PointerMove@CMultitaskingViewFrameElement@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041A9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180061F84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180413210 (-PointerMove@CMultitaskingViewElementBase@@UEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 */

void __fastcall CMultitaskingViewFrameElement::PointerMove(
        CMultitaskingViewFrameElement *this,
        const struct MultitaskingViewPointerInputArgs *a2)
{
  __int64 v2; // rdi
  __int64 *v5; // rax
  __int64 v6; // rdi
  int v7; // eax
  __int64 v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v2 = *((_QWORD *)this + 70);
  if ( v2 )
  {
    v10 = *((_QWORD *)this + 70);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    (*(void (__fastcall **)(__int64, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v2 + 40LL))(v2, a2);
  }
  else
  {
    CMultitaskingViewElementBase::PointerMove(this, a2);
    v5 = (__int64 *)((char *)this + 568);
    if ( !*((_QWORD *)this + 71) )
      return;
    v6 = 0LL;
    v10 = 0LL;
    if ( &v10 != v5 )
    {
      v6 = *v5;
      *v5 = 0LL;
      v10 = v6;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, const struct MultitaskingViewPointerInputArgs *))(*(_QWORD *)v6 + 24LL))(
           v6,
           *((unsigned int *)this + 25),
           a2);
    if ( v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 70);
      v10 = 0LL;
      v11 = v8;
      *((_QWORD *)this + 70) = v6;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15B,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
        (const char *)(unsigned int)v7);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
}
