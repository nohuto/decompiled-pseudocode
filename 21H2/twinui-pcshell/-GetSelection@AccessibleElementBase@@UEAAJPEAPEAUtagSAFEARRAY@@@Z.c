/*
 * XREFs of ?GetSelection@AccessibleElementBase@@UEAAJPEAPEAUtagSAFEARRAY@@@Z @ 0x180423C90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804245C8 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall AccessibleElementBase::GetSelection(AccessibleElementBase *this, struct tagSAFEARRAY **a2)
{
  int Element; // ebx
  __int64 v5; // rbx
  HRESULT v6; // eax
  __int64 v7; // rdx
  SAFEARRAY *v8; // rax
  __int64 v9; // r9
  SAFEARRAY *Vector; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  LONG rgIndices; // [rsp+40h] [rbp+20h] BYREF
  void *pv; // [rsp+48h] [rbp+28h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  void *v16; // [rsp+58h] [rbp+38h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  Element = AccessibleElementBase::_GetElement(
              (AccessibleElementBase *)((char *)this - 32),
              &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d,
              &v16);
  if ( Element >= 0 )
  {
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)v16 + 336LL))(v16, &v15);
    if ( !v15
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 152LL))(v15)
      || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v15 + 168LL))(v15) )
    {
      Vector = SafeArrayCreateVector(0xDu, 0, 0);
      *a2 = Vector;
      if ( Vector )
      {
        Element = 0;
      }
      else
      {
        Element = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x170,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)0x8007000ELL);
      }
      goto LABEL_18;
    }
    pv = 0LL;
    v5 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
    v6 = (*(__int64 (__fastcall **)(__int64, GUID *, void **))(*(_QWORD *)v5 + 376LL))(
           v5,
           &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c,
           &pv);
    Element = v6;
    if ( v6 >= 0 )
    {
      v8 = SafeArrayCreateVector(0xDu, 0, 1u);
      *a2 = v8;
      if ( !v8 )
      {
        Element = -2147024882;
        v7 = 376LL;
        v9 = 2147942414LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
          (const char *)v9);
LABEL_14:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
LABEL_18:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        goto LABEL_19;
      }
      rgIndices = 0;
      v6 = SafeArrayPutElement(v8, &rgIndices, pv);
      Element = v6;
      if ( v6 >= 0 )
      {
        pv = 0LL;
        Element = 0;
        goto LABEL_14;
      }
      v7 = 379LL;
    }
    else
    {
      v7 = 373LL;
    }
    v9 = (unsigned int)v6;
    goto LABEL_12;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)Element;
}
